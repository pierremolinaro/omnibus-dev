#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @guardKindGenerationIR enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard : public cEnumAssociatedValues {
  public : const GALGAS_allocaList mAssociatedValue0 ;
  public : const GALGAS_instructionListIR mAssociatedValue1 ;
  public : const GALGAS_string mAssociatedValue2 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                         const GALGAS_string & inAssociatedValue2,
                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @objectInMemoryIR enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_objectInMemoryIR_register : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_bigint mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_objectInMemoryIR_register (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                            const GALGAS_lstring & inAssociatedValue1,
                                                            const GALGAS_bigint & inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectInMemoryIR_register (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_objectInMemoryIR_globalVariable : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_objectInMemoryIR_globalVariable (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                  const GALGAS_string & inAssociatedValue1,
                                                                  const GALGAS_bool & inAssociatedValue2
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectInMemoryIR_globalVariable (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_objectInMemoryIR_localValue : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectInMemoryIR_localValue (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                              const GALGAS_string & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectInMemoryIR_localValue (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_objectInMemoryIR_globalConstant : public cEnumAssociatedValues {
  public : const GALGAS_operandIR mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectInMemoryIR_globalConstant (const GALGAS_operandIR & inAssociatedValue0,
                                                                  const GALGAS_string & inAssociatedValue1
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectInMemoryIR_globalConstant (void) {}
} ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedTargets ;

extern C_BoolCommandLineOption gOption_plm_5F_options_noPanicGeneration ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_31_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_32_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationS ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ_33_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination ;

extern C_BoolCommandLineOption gOption_plm_5F_options_performFlashing ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeControlRegisterHTMLDumpFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeGlobalConstantDependencyGraphFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeGlobalConstantHTMLDumpFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeTypeDependencyGraphFile ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedSampleFile ;

extern C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedTargets ;

extern C_StringCommandLineOption gOption_plm_5F_options_useDirAsTargetDir ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringListCommandLineOption gOption_plm_5F_options_pathList ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (class GALGAS_lstring inArgument0,
                                    class GALGAS_semanticContext & ioArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @infixOperatorDescription class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixOperatorDescription : public acPtr_class {
//--- Attributes
  public : GALGAS_llvmBinaryOperation mAttribute_mOperator ;

//--- Constructor
  public : cPtr_infixOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_llvmBinaryOperation getter_mOperator (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixObjectObjectOperatorDescription : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_infixObjectObjectOperatorDescription (void) ;

//---
  public : inline const class cPtr_infixObjectObjectOperatorDescription * ptr (void) const { return (const cPtr_infixObjectObjectOperatorDescription *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixObjectObjectOperatorDescription extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_infixObjectObjectOperatorDescription constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixObjectObjectOperatorDescription class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixObjectObjectOperatorDescription : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_combineTypeNamesForInfixOperator (const class GALGAS_string & constinArgument0,
                                                                const class GALGAS_string & constinArgument1,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mPointerSize ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mBooleanType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mLiteralIntegerType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mPanicCodeType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mPanicLineType ;
  public : GALGAS_unifiedTypeMap mAttribute_mTypeMap ;
  public : GALGAS_routineMapForContext mAttribute_mRoutineMapForContext ;
  public : GALGAS_guardMapForContext mAttribute_mGuardMapForContext ;
  public : GALGAS_initRoutineMap mAttribute_mInitRoutineMap ;
  public : GALGAS_panicRoutinePriorityMap mAttribute_mPanicSetupRoutinePriorityMap ;
  public : GALGAS_panicRoutinePriorityMap mAttribute_mPanicLoopRoutinePriorityMap ;
  public : GALGAS_controlRegisterMap mAttribute_mControlRegisterMap ;
  public : GALGAS_globalConstantMap mAttribute_mGlobalConstantMap ;
  public : GALGAS_globalVariableMap mAttribute_mGlobalVariableMap ;
  public : GALGAS_constructorMap mAttribute_mConstructorMap ;
  public : GALGAS_modeMap mAttribute_mModeMap ;
  public : GALGAS_infixOperatorMap mAttribute_mEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mNonEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mStrictInfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mInfEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mStrictSupOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mSupEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAndOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mOrOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mXorOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mBooleanXorOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAddOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAddNoOvfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mSubOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mSubNoOvfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mMulOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mMulNoOvfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mDivOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mDivNoOvfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mModOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mModNoOvfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mLeftShiftOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mRightShiftOperatorMap ;
  public : GALGAS_prefixOperatorMap mAttribute_mUnaryMinusOperatorMap ;
  public : GALGAS_prefixOperatorMap mAttribute_mNotOperatorMap ;
  public : GALGAS_prefixOperatorMap mAttribute_mUnsignedComplementOperatorMap ;
  public : GALGAS_taskMap mAttribute_mTaskMap ;
  public : GALGAS_globalTaskVariableList mAttribute_mGlobalTaskVariableList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_uint & in_mPointerSize,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mBooleanType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mLiteralIntegerType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mPanicCodeType,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mPanicLineType,
                                   const GALGAS_unifiedTypeMap & in_mTypeMap,
                                   const GALGAS_routineMapForContext & in_mRoutineMapForContext,
                                   const GALGAS_guardMapForContext & in_mGuardMapForContext,
                                   const GALGAS_initRoutineMap & in_mInitRoutineMap,
                                   const GALGAS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                   const GALGAS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                   const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                   const GALGAS_globalConstantMap & in_mGlobalConstantMap,
                                   const GALGAS_globalVariableMap & in_mGlobalVariableMap,
                                   const GALGAS_constructorMap & in_mConstructorMap,
                                   const GALGAS_modeMap & in_mModeMap,
                                   const GALGAS_infixOperatorMap & in_mEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mNonEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mStrictInfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mInfEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mStrictSupOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mSupEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAndOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mOrOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mXorOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mBooleanXorOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAddOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAddNoOvfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mSubOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mSubNoOvfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mMulOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mMulNoOvfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mDivOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mDivNoOvfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mModOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mModNoOvfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mLeftShiftOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mRightShiftOperatorMap,
                                   const GALGAS_prefixOperatorMap & in_mUnaryMinusOperatorMap,
                                   const GALGAS_prefixOperatorMap & in_mNotOperatorMap,
                                   const GALGAS_prefixOperatorMap & in_mUnsignedComplementOperatorMap,
                                   const GALGAS_taskMap & in_mTaskMap,
                                   const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticContext constructor_new (const class GALGAS_uint & inOperand0,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                          const class GALGAS_unifiedTypeMap & inOperand5,
                                                          const class GALGAS_routineMapForContext & inOperand6,
                                                          const class GALGAS_guardMapForContext & inOperand7,
                                                          const class GALGAS_initRoutineMap & inOperand8,
                                                          const class GALGAS_panicRoutinePriorityMap & inOperand9,
                                                          const class GALGAS_panicRoutinePriorityMap & inOperand10,
                                                          const class GALGAS_controlRegisterMap & inOperand11,
                                                          const class GALGAS_globalConstantMap & inOperand12,
                                                          const class GALGAS_globalVariableMap & inOperand13,
                                                          const class GALGAS_constructorMap & inOperand14,
                                                          const class GALGAS_modeMap & inOperand15,
                                                          const class GALGAS_infixOperatorMap & inOperand16,
                                                          const class GALGAS_infixOperatorMap & inOperand17,
                                                          const class GALGAS_infixOperatorMap & inOperand18,
                                                          const class GALGAS_infixOperatorMap & inOperand19,
                                                          const class GALGAS_infixOperatorMap & inOperand20,
                                                          const class GALGAS_infixOperatorMap & inOperand21,
                                                          const class GALGAS_infixOperatorMap & inOperand22,
                                                          const class GALGAS_infixOperatorMap & inOperand23,
                                                          const class GALGAS_infixOperatorMap & inOperand24,
                                                          const class GALGAS_infixOperatorMap & inOperand25,
                                                          const class GALGAS_infixOperatorMap & inOperand26,
                                                          const class GALGAS_infixOperatorMap & inOperand27,
                                                          const class GALGAS_infixOperatorMap & inOperand28,
                                                          const class GALGAS_infixOperatorMap & inOperand29,
                                                          const class GALGAS_infixOperatorMap & inOperand30,
                                                          const class GALGAS_infixOperatorMap & inOperand31,
                                                          const class GALGAS_infixOperatorMap & inOperand32,
                                                          const class GALGAS_infixOperatorMap & inOperand33,
                                                          const class GALGAS_infixOperatorMap & inOperand34,
                                                          const class GALGAS_infixOperatorMap & inOperand35,
                                                          const class GALGAS_infixOperatorMap & inOperand36,
                                                          const class GALGAS_infixOperatorMap & inOperand37,
                                                          const class GALGAS_prefixOperatorMap & inOperand38,
                                                          const class GALGAS_prefixOperatorMap & inOperand39,
                                                          const class GALGAS_prefixOperatorMap & inOperand40,
                                                          const class GALGAS_taskMap & inOperand41,
                                                          const class GALGAS_globalTaskVariableList & inOperand42
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mAddNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mAddOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mAndOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mBooleanType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mBooleanXorOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_mConstructorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_mControlRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mDivNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mDivOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVariableMap getter_mGlobalVariableMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapForContext getter_mGuardMapForContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mInfEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutineMap getter_mInitRoutineMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mLeftShiftOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mLiteralIntegerType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mModNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mModOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_modeMap getter_mModeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mMulNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mMulOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mNonEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_mNotOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mOrOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mPanicCodeType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mPanicLineType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicLoopRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicSetupRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPointerSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mRightShiftOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMapForContext getter_mRoutineMapForContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mStrictInfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mStrictSupOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSubNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSubOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSupEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMap getter_mTaskMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_mTypeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_mUnaryMinusOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_mUnsignedComplementOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mXorOperatorMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (class GALGAS_lstring inArgument0,
                                        class GALGAS_semanticContext & ioArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (class GALGAS_prefixOperatorMap & ioArgument0,
                                       const class GALGAS_lstring constinArgument1,
                                       const class GALGAS_lstring constinArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (class GALGAS_infixOperatorMap & ioArgument0,
                                      const class GALGAS_lstring constinArgument1,
                                      const class GALGAS_lstring constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_lstring constinArgument6,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument8,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @integerObject_5F_literal_5F_infixOperator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerObject_5F_literal_5F_infixOperator : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_integerObject_5F_literal_5F_infixOperator (void) ;

//---
  public : inline const class cPtr_integerObject_5F_literal_5F_infixOperator * ptr (void) const { return (const cPtr_integerObject_5F_literal_5F_infixOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerObject_5F_literal_5F_infixOperator (const cPtr_integerObject_5F_literal_5F_infixOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerObject_5F_literal_5F_infixOperator extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerObject_5F_literal_5F_infixOperator constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerObject_5F_literal_5F_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerObject_5F_literal_5F_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @integerObject_literal_infixOperator class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerObject_5F_literal_5F_infixOperator : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_integerObject_5F_literal_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'staticIntegerTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @literal_5F_integerObject_5F_infixOperator class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literal_5F_integerObject_5F_infixOperator : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_literal_5F_integerObject_5F_infixOperator (void) ;

//---
  public : inline const class cPtr_literal_5F_integerObject_5F_infixOperator * ptr (void) const { return (const cPtr_literal_5F_integerObject_5F_infixOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literal_5F_integerObject_5F_infixOperator (const cPtr_literal_5F_integerObject_5F_infixOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literal_5F_integerObject_5F_infixOperator extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literal_5F_integerObject_5F_infixOperator constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literal_5F_integerObject_5F_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literal_5F_integerObject_5F_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_integerObject_5F_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literal_integerObject_infixOperator class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literal_5F_integerObject_5F_infixOperator : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_literal_5F_integerObject_5F_infixOperator (const GALGAS_llvmBinaryOperation & in_mOperator
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const class GALGAS_lstring constinArgument0,
                                           class GALGAS_semanticContext & ioArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @literal_5F_literal_5F_integerInfixOperation class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literal_5F_literal_5F_integerInfixOperation : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_literal_5F_literal_5F_integerInfixOperation (void) ;

//---
  public : inline const class cPtr_literal_5F_literal_5F_integerInfixOperation * ptr (void) const { return (const cPtr_literal_5F_literal_5F_integerInfixOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literal_5F_literal_5F_integerInfixOperation (const cPtr_literal_5F_literal_5F_integerInfixOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literal_5F_literal_5F_integerInfixOperation extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literal_5F_literal_5F_integerInfixOperation constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literal_5F_literal_5F_integerInfixOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literal_5F_literal_5F_integerInfixOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_literal_5F_integerInfixOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @literal_literal_integerInfixOperation class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literal_5F_literal_5F_integerInfixOperation : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_literal_5F_literal_5F_integerInfixOperation (const GALGAS_llvmBinaryOperation & in_mOperator
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const class GALGAS_controlRegisterDeclarationListAST constinArgument0,
                                             class GALGAS_semanticContext & ioArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'boolTypeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'userModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_userModeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'controlRegistersSemanticAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_controlRegistersSemanticAnalysis (const class GALGAS_controlRegisterDeclarationListAST constinArgument0,
                                               const class GALGAS_semanticContext constinArgument1,
                                               class GALGAS_intermediateCodeStruct & ioArgument2,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @intermediateCodeStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_staticStringMap mAttribute_mStaticStringMap ;
  public : GALGAS_controlRegisterMapIR mAttribute_mControlRegisterMap ;
  public : GALGAS_globalVariableMapIR mAttribute_mGlobalVariableMap ;
  public : GALGAS_globalConstantMapIR mAttribute_mGlobalConstantMap ;
  public : GALGAS_routineMapIR mAttribute_mRoutineMapIR ;
  public : GALGAS_guardMapIR mAttribute_mGuardMapIR ;
  public : GALGAS_externProcedureMapIR mAttribute_mExternProcedureMapIR ;
  public : GALGAS_stringset mAttribute_mRequiredProcedureSet ;
  public : GALGAS_bootListIR mAttribute_mBootList ;
  public : GALGAS_initListIR mAttribute_mInitList ;
  public : GALGAS_instructionListIR mAttribute_mPanicSetupInstructionListIR ;
  public : GALGAS_instructionListIR mAttribute_mPanicLoopInstructionListIR ;
  public : GALGAS_taskMapIR mAttribute_mTaskMapIR ;
  public : GALGAS_globalTaskVariableList mAttribute_mGlobalTaskVariableList ;
  public : GALGAS_uint mAttribute_mMaxBranchOfOnInstructions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_intermediateCodeStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_intermediateCodeStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_intermediateCodeStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_intermediateCodeStruct (const GALGAS_staticStringMap & in_mStaticStringMap,
                                          const GALGAS_controlRegisterMapIR & in_mControlRegisterMap,
                                          const GALGAS_globalVariableMapIR & in_mGlobalVariableMap,
                                          const GALGAS_globalConstantMapIR & in_mGlobalConstantMap,
                                          const GALGAS_routineMapIR & in_mRoutineMapIR,
                                          const GALGAS_guardMapIR & in_mGuardMapIR,
                                          const GALGAS_externProcedureMapIR & in_mExternProcedureMapIR,
                                          const GALGAS_stringset & in_mRequiredProcedureSet,
                                          const GALGAS_bootListIR & in_mBootList,
                                          const GALGAS_initListIR & in_mInitList,
                                          const GALGAS_instructionListIR & in_mPanicSetupInstructionListIR,
                                          const GALGAS_instructionListIR & in_mPanicLoopInstructionListIR,
                                          const GALGAS_taskMapIR & in_mTaskMapIR,
                                          const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                          const GALGAS_uint & in_mMaxBranchOfOnInstructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_intermediateCodeStruct extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_intermediateCodeStruct constructor_new (const class GALGAS_staticStringMap & inOperand0,
                                                                 const class GALGAS_controlRegisterMapIR & inOperand1,
                                                                 const class GALGAS_globalVariableMapIR & inOperand2,
                                                                 const class GALGAS_globalConstantMapIR & inOperand3,
                                                                 const class GALGAS_routineMapIR & inOperand4,
                                                                 const class GALGAS_guardMapIR & inOperand5,
                                                                 const class GALGAS_externProcedureMapIR & inOperand6,
                                                                 const class GALGAS_stringset & inOperand7,
                                                                 const class GALGAS_bootListIR & inOperand8,
                                                                 const class GALGAS_initListIR & inOperand9,
                                                                 const class GALGAS_instructionListIR & inOperand10,
                                                                 const class GALGAS_instructionListIR & inOperand11,
                                                                 const class GALGAS_taskMapIR & inOperand12,
                                                                 const class GALGAS_globalTaskVariableList & inOperand13,
                                                                 const class GALGAS_uint & inOperand14
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootListIR getter_mBootList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMapIR getter_mControlRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_mExternProcedureMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMapIR getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVariableMapIR getter_mGlobalVariableMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapIR getter_mGuardMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListIR getter_mInitList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxBranchOfOnInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mPanicLoopInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mPanicSetupInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRequiredProcedureSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMapIR getter_mRoutineMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_mTaskMapIR (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_intermediateCodeStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const class GALGAS_controlRegisterMap constinArgument0,
                                              const class GALGAS_lstring constinArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const class GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForControlRegister (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_fieldIndexColumns (const class GALGAS_uint & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildGlobalConstantMapHTMLFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildGlobalConstantMapHTMLFile (class GALGAS_globalConstantMap inArgument0,
                                             const class GALGAS_lstring constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'constantDumpGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Filewrapper template 'constantDumpGenerationTemplate dump'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                       const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const class GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
                                                                       const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForGlobalConstant'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForGlobalConstant (const class GALGAS_string & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category getter '@valueIR llvmName' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmName (const class GALGAS_valueIR & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'panicModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_panicModeName (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const class GALGAS_semanticContext constinArgument0,
                                   class GALGAS_semanticTemporariesStruct & ioArgument1,
                                   class GALGAS_intermediateCodeStruct & ioArgument2,
                                   const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                   const class GALGAS_lbigint constinArgument4,
                                   const class GALGAS_stringset constinArgument5,
                                   const class GALGAS_lstringlist constinArgument6,
                                   const class GALGAS_instructionListAST constinArgument7,
                                   const class GALGAS_location constinArgument8,
                                   class GALGAS_allocaList & outArgument9,
                                   class GALGAS_instructionListIR & outArgument10,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_initNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          class GALGAS_lbigint inArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'initialVariableMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap function_initialVariableMap (const class GALGAS_string & constinArgument0,
                                                      const class GALGAS_semanticContext & constinArgument1,
                                                      const class GALGAS_bool & constinArgument2,
                                                      const class GALGAS_accessKind & constinArgument3,
                                                      class GALGAS_bool inArgument4,
                                                      const class GALGAS_lstring & constinArgument5,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'procNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_procNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          class GALGAS_lstring inArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                   const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_stringset constin_inModeSet,
                                                   const class GALGAS_bool constin_inAllowPanic,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                   class GALGAS_variableMap & io_ioVariableMap,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTemporariesStruct struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mTemporaryIndex ;
  public : GALGAS_panicRoutinePriorityMap mAttribute_mPanicSetupRoutinePriorityMap ;
  public : GALGAS_panicRoutinePriorityMap mAttribute_mPanicLoopRoutinePriorityMap ;
  public : GALGAS_initRoutinePriorityMap mAttribute_mInitRoutinePriorityMap ;
  public : GALGAS_bootRoutinePriorityMap mAttribute_mBootRoutinePriorityMap ;
  public : GALGAS_subprogramInvocationGraph mAttribute_mSubprogramInvocationGraph ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticTemporariesStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticTemporariesStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticTemporariesStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticTemporariesStruct (const GALGAS_uint & in_mTemporaryIndex,
                                             const GALGAS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                             const GALGAS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                             const GALGAS_initRoutinePriorityMap & in_mInitRoutinePriorityMap,
                                             const GALGAS_bootRoutinePriorityMap & in_mBootRoutinePriorityMap,
                                             const GALGAS_subprogramInvocationGraph & in_mSubprogramInvocationGraph) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTemporariesStruct extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticTemporariesStruct constructor_new (const class GALGAS_uint & inOperand0,
                                                                    const class GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                    const class GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                    const class GALGAS_initRoutinePriorityMap & inOperand3,
                                                                    const class GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                    const class GALGAS_subprogramInvocationGraph & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootRoutinePriorityMap getter_mBootRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutinePriorityMap getter_mInitRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicLoopRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicSetupRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subprogramInvocationGraph getter_mSubprogramInvocationGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTemporaryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTemporariesStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'checkRequiredProcedures'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkRequiredProcedures (const class GALGAS_ast constinArgument0,
                                      const class GALGAS_semanticContext constinArgument1,
                                      const class GALGAS_location constinArgument2,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateSectionDispatcher'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionDispatcher (const class GALGAS_string constinArgument0,
                                        const class GALGAS_string constinArgument1,
                                        class GALGAS_string & ioArgument2,
                                        const class GALGAS__32_stringlist constinArgument3,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_getTargetTextFile (const class GALGAS_string & constinArgument0,
                                                const class GALGAS_string & constinArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateServiceDispatcher'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateServiceDispatcher (const class GALGAS_string constinArgument0,
                                        const class GALGAS_string constinArgument1,
                                        class GALGAS_string & ioArgument2,
                                        const class GALGAS__32_stringlist constinArgument3,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                    const class GALGAS_lstring constinArgument1,
                                    const class GALGAS_procFormalArgumentList constinArgument2,
                                    const class GALGAS_guardKind constinArgument3,
                                    const class GALGAS_instructionListAST constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    const class GALGAS_bool constinArgument6,
                                    const class GALGAS_semanticContext constinArgument7,
                                    class GALGAS_semanticTemporariesStruct & ioArgument8,
                                    class GALGAS_intermediateCodeStruct & ioArgument9,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'acceptVariableName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_acceptVariableName (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'guardNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_guardNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           class GALGAS_lstring inArgument1,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'isrModeName'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_isrModeName (class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractCallInstructionAST baseGuardAnalyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractCallInstructionAST_baseGuardAnalyze) (const class cPtr_abstractCallInstructionAST * inObject,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                     const class GALGAS_lstring constinArgument1,
                                                                                     const class GALGAS_semanticContext constinArgument2,
                                                                                     class GALGAS_semanticTemporariesStruct & ioArgument3,
                                                                                     class GALGAS_staticStringMap & ioArgument4,
                                                                                     class GALGAS_variableMap & ioArgument5,
                                                                                     class GALGAS_guardKindGenerationIR & outArgument6,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractCallInstructionAST_baseGuardAnalyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_baseGuardAnalyze (const class cPtr_abstractCallInstructionAST * inObject,
                                          const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                          const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constin_inContext,
                                          GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                          GALGAS_variableMap & io_ioVariableMap,
                                          GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const class GALGAS_semanticContext constinArgument0,
                                   const class GALGAS_procFormalArgumentList constinArgument1,
                                   class GALGAS_variableMap & ioArgument2,
                                   class GALGAS_procFormalArgumentListForGeneration & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorMap function_getInfixOperatorMap (const class GALGAS_infixOperator & constinArgument0,
                                                            const class GALGAS_semanticContext & constinArgument1,
                                                            const class GALGAS_stringset & constinArgument2,
                                                            const class GALGAS_location & constinArgument3,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeGuardCall (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                               const class GALGAS_lstring constinArgument1,
                               const class GALGAS_lstring constinArgument2,
                               const class GALGAS_effectiveParameterListAST constinArgument3,
                               const class GALGAS_lstring constinArgument4,
                               const class GALGAS_semanticContext constinArgument5,
                               const class GALGAS_stringset constinArgument6,
                               const class GALGAS_bool constinArgument7,
                               class GALGAS_semanticTemporariesStruct & ioArgument8,
                               class GALGAS_staticStringMap & ioArgument9,
                               class GALGAS_variableMap & ioArgument10,
                               class GALGAS_allocaList & ioArgument11,
                               class GALGAS_instructionListIR & ioArgument12,
                               class GALGAS_procCallEffectiveParameterListIR & outArgument13,
                               class GALGAS_lstring & outArgument14,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category getter '@objectInMemoryIR address' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operandIR extensionGetter_address (const class GALGAS_objectInMemoryIR & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                         const class GALGAS_procedureSignature constinArgument1,
                                         const class GALGAS_effectiveParameterListAST constinArgument2,
                                         const class GALGAS_location constinArgument3,
                                         const class GALGAS_lstring constinArgument4,
                                         const class GALGAS_semanticContext constinArgument5,
                                         const class GALGAS_stringset constinArgument6,
                                         const class GALGAS_bool constinArgument7,
                                         class GALGAS_semanticTemporariesStruct & ioArgument8,
                                         class GALGAS_staticStringMap & ioArgument9,
                                         class GALGAS_variableMap & ioArgument10,
                                         class GALGAS_allocaList & ioArgument11,
                                         class GALGAS_instructionListIR & ioArgument12,
                                         class GALGAS_procCallEffectiveParameterListIR & ioArgument13,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineCall'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineCall (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                 const class GALGAS_lstring constinArgument1,
                                 const class GALGAS_lstring constinArgument2,
                                 const class GALGAS_effectiveParameterListAST constinArgument3,
                                 const class GALGAS_lstring constinArgument4,
                                 const class GALGAS_semanticContext constinArgument5,
                                 const class GALGAS_stringset constinArgument6,
                                 const class GALGAS_bool constinArgument7,
                                 class GALGAS_semanticTemporariesStruct & ioArgument8,
                                 class GALGAS_staticStringMap & ioArgument9,
                                 class GALGAS_variableMap & ioArgument10,
                                 class GALGAS_allocaList & ioArgument11,
                                 class GALGAS_instructionListIR & ioArgument12,
                                 class GALGAS_procCallEffectiveParameterListIR & outArgument13,
                                 class GALGAS_routineKindIR & outArgument14,
                                 class GALGAS_lstring & outArgument15,
                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument16,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineKindIR function_checkMode (const class GALGAS_stringset & constinArgument0,
                                               const class GALGAS_stringset & constinArgument1,
                                               class GALGAS_routineKind inArgument2,
                                               const class GALGAS_location & constinArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'primitiveNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_primitiveNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                               class GALGAS_lstring inArgument1,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'sectionNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_sectionNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             class GALGAS_lstring inArgument1,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'serviceNameForInvocationGraph'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_serviceNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             class GALGAS_lstring inArgument1,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operandIR function_checkAssignmentCompatibility (const class GALGAS_operandIR & constinArgument0,
                                                              const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                              const class GALGAS_location & constinArgument2,
                                                              const class GALGAS_bool & constinArgument3,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForLocalVariable (class GALGAS_string inArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Category getter '@effectiveParameterPassingModeAST passingModeForActualSelector' (as function)            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveParameterPassingModeAST & inObject,
                                                                  class GALGAS_lstring inArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category getter '@objectInMemoryIR llvmName' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectInMemoryIR & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category getter '@objectInMemoryIR name' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_name (const class GALGAS_objectInMemoryIR & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                          class GALGAS_string inArgument0,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                         const class GALGAS_lstring constinArgument1,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                                         const class GALGAS_semanticContext constinArgument3,
                                                                         const class GALGAS_stringset constinArgument4,
                                                                         const class GALGAS_bool constinArgument5,
                                                                         class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                         class GALGAS_staticStringMap & ioArgument7,
                                                                         class GALGAS_variableMap & ioArgument8,
                                                                         class GALGAS_allocaList & ioArgument9,
                                                                         class GALGAS_instructionListIR & ioArgument10,
                                                                         class GALGAS_operandIR & outArgument11,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpression (const int32_t inClassIndex,
                                            categoryMethodSignature_expressionAST_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_stringset constin_inModes,
                                           const GALGAS_bool constin_inAllowPanic,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_variableMap & io_ioVariableMap,
                                           GALGAS_allocaList & io_ioAllocaList,
                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                           GALGAS_operandIR & out_outResult,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'getLocalNameOfNewTempObjectInMemory'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getLocalNameOfNewTempObjectInMemory (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                  class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                  class GALGAS_objectInMemoryIR & outArgument2,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category setter '@instructionListIR appendGetElementPtrFromSelf'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_appendGetElementPtrFromSelf (class GALGAS_instructionListIR & ioObject,
                                                   const class GALGAS_objectInMemoryIR constin_inTarget,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                   const class GALGAS_uint constin_inFieldIndex,
                                                   const class GALGAS_string constin_inFieldName,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'functionResultVariableName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'variableMapWithConstants'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap function_variableMapWithConstants (const class GALGAS_semanticContext & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                 class GALGAS_semanticTemporariesStruct & ioArgument1,
                                 class GALGAS_operandIR & outArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const class GALGAS_ast constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          const class GALGAS_location constinArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @integerDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_integerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerDeclaration * ptr (void) const { return (const cPtr_integerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerDeclaration (const cPtr_integerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerDeclaration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerDeclaration constructor_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_uint & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @integerDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsSigned ;
  public : GALGAS_uint mAttribute_mSize ;

//--- Constructor
  public : cPtr_integerDeclaration (const GALGAS_bool & in_mIsSigned,
                                    const GALGAS_uint & in_mSize
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category getter '@abstractDeclaration keyRepresentationForErrorSignaling'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling) (const class cPtr_abstractDeclaration * inObject,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                             categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryGetter_keyRepresentationForErrorSignaling (const class cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category getter '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*categoryGetterSignature_abstractDeclaration_location) (const class cPtr_abstractDeclaration * inObject,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_location (const int32_t inClassIndex,
                                   categoryGetterSignature_abstractDeclaration_location inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callCategoryGetter_location (const class cPtr_abstractDeclaration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractDeclaration enterInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph) (const class cPtr_abstractDeclaration * inObject,
                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclaration * inObject,
                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@bootList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_bootList inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@controlRegisterDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_controlRegisterDeclarationListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_externProcedureDeclarationListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@globalVarDeclarationList noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_globalVarDeclarationList inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@guardDeclarationListAST noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_guardDeclarationListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@initList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_initList inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@panicClauseListAST noteTypesInPrecedenceGraph'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_panicClauseListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@primitiveDeclarationListAST notePrimitiveTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_notePrimitiveTypesInPrecedenceGraph (const class GALGAS_primitiveDeclarationListAST inObject,
                                                         class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@procedureDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_procedureDeclarationListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@sectionDeclarationListAST noteTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_sectionDeclarationListAST inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@serviceDeclarationListAST noteServiceTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteServiceTypesInPrecedenceGraph (const class GALGAS_serviceDeclarationListAST inObject,
                                                       class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@taskList noteTypesInPrecedenceGraph'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_noteTypesInPrecedenceGraph (const class GALGAS_taskList inObject,
                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'kernelModeName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_kernelModeName (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const class GALGAS_declarationListAST constinArgument0,
                                   const class GALGAS_lstring constinArgument1,
                                   const class GALGAS_ast constinArgument2,
                                   class GALGAS_staticStringMap & ioArgument3,
                                   class GALGAS_semanticContext & outArgument4,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'bootModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_bootModeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'initModeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_initModeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'sectionModeName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_sectionModeName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@abstractDeclaration enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInContext) (const class cPtr_abstractDeclaration * inObject,
                                                                            const class GALGAS_procedureDeclarationListAST constinArgument0,
                                                                            class GALGAS_semanticContext & ioArgument1,
                                                                            class GALGAS_staticStringMap & ioArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInContext (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractDeclaration_enterInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInContext (const class cPtr_abstractDeclaration * inObject,
                                        const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
                                        GALGAS_semanticContext & io_ioContext,
                                        GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractDeclaration enterRoutinesInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterRoutinesInContext) (const class cPtr_abstractDeclaration * inObject,
                                                                                    const class GALGAS_procedureDeclarationListAST constinArgument0,
                                                                                    class GALGAS_semanticContext & ioArgument1,
                                                                                    class GALGAS_staticStringMap & ioArgument2,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterRoutinesInContext (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractDeclaration_enterRoutinesInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterRoutinesInContext (const class cPtr_abstractDeclaration * inObject,
                                                const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
                                                GALGAS_semanticContext & io_ioContext,
                                                GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterExternProcInContext (const class GALGAS_externProcedureDeclarationListAST inObject,
                                              class GALGAS_semanticContext & io_ioContext,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@globalVarDeclarationList-element enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@guardDeclarationListAST enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_guardDeclarationListAST inObject,
                                    const class GALGAS_string constin_inReceiverTypeName,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initList-element enterInContext'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_initList_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@panicClauseListAST-element enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_panicClauseListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@primitiveDeclarationListAST enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_primitiveDeclarationListAST inObject,
                                    const class GALGAS_string constin_inReceiverTypeName,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@procedureDeclarationListAST enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_procedureDeclarationListAST inObject,
                                    const class GALGAS_string constin_inSelfTypeName,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@sectionDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_sectionDeclarationListAST inObject,
                                    const class GALGAS_string constin_inReceiverTypeName,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@serviceDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_serviceDeclarationListAST inObject,
                                    const class GALGAS_string constin_inReceiverTypeName,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category method '@taskList enterInContext'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_taskList inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'solveInferredType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy function_solveInferredType (const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                 const class GALGAS_location & constinArgument2,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_ast constinArgument1,
                               const class GALGAS_semanticContext constinArgument2,
                               const class GALGAS_location constinArgument3,
                               const class GALGAS_staticStringMap constinArgument4,
                               class GALGAS_intermediateCodeStruct & outArgument5,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@abstractDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_semanticAnalysis) (const class cPtr_abstractDeclaration * inObject,
                                                                              const class GALGAS_semanticContext constinArgument0,
                                                                              class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                              class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractDeclaration_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_abstractDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inContext,
                                          GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@bootList-element bootSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_bootSemanticAnalysis (const class GALGAS_bootList_2D_element inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_externProcedureSemanticAnalysis (const class GALGAS_externProcedureDeclarationListAST inObject,
                                                     const class GALGAS_semanticContext constin_inContext,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@globalVarDeclarationList-element semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                      const class GALGAS_semanticContext constin_inContext,
                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@guardDeclarationListAST guardSemanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_guardSemanticAnalysis (const class GALGAS_guardDeclarationListAST inObject,
                                           class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                           const class GALGAS_semanticContext constin_inSemanticContext,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@initList-element initSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_initSemanticAnalysis (const class GALGAS_initList_2D_element inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@panicClauseListAST-element panicSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_panicSemanticAnalysis (const class GALGAS_panicClauseListAST_2D_element inObject,
                                           const class GALGAS_semanticContext constin_inContext,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@primitiveDeclarationListAST primitiveSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_primitiveSemanticAnalysis (const class GALGAS_primitiveDeclarationListAST inObject,
                                               class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                               const class GALGAS_semanticContext constin_inSemanticContext,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@procedureDeclarationListAST procedureSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_procedureSemanticAnalysis (const class GALGAS_procedureDeclarationListAST inObject,
                                               class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                               const class GALGAS_semanticContext constin_inSemanticContext,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@sectionDeclarationListAST sectionSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_sectionSemanticAnalysis (const class GALGAS_sectionDeclarationListAST inObject,
                                             const class GALGAS_semanticContext constin_inSemanticContext,
                                             class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                             class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@serviceDeclarationListAST serviceSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_serviceSemanticAnalysis (const class GALGAS_serviceDeclarationListAST inObject,
                                             class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                             const class GALGAS_semanticContext constin_inSemanticContext,
                                             class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                             class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@taskList semanticAnalysis'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_taskList inObject,
                                      const class GALGAS_semanticContext constin_inContext,
                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                      const class GALGAS_routineKind constinArgument1,
                                      const class GALGAS_lstringlist constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_procFormalArgumentList constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_instructionListAST constinArgument6,
                                      const class GALGAS_location constinArgument7,
                                      const class GALGAS_bool constinArgument8,
                                      const class GALGAS_bool constinArgument9,
                                      const class GALGAS_bool constinArgument10,
                                      const class GALGAS_bool constinArgument11,
                                      const class GALGAS_accessKind constinArgument12,
                                      const class GALGAS_semanticContext constinArgument13,
                                      class GALGAS_semanticTemporariesStruct & ioArgument14,
                                      class GALGAS_intermediateCodeStruct & ioArgument15,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmAttributeFunction'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_panicNameForInvocationGraph (class GALGAS_string inArgument0,
                                                           class GALGAS_lbigint inArgument1,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_literalStringName (const class GALGAS_uint & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_literalCharacterArrayName (const class GALGAS_uint & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'staticStringTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForFunction (class GALGAS_string inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForPrimitiveCall (class GALGAS_string inArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForPrimitiveImplementation (class GALGAS_string inArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForServiceCall (class GALGAS_string inArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForServiceImplementation (class GALGAS_string inArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionCall (class GALGAS_string inArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionImplementation (class GALGAS_string inArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGuardCall (class GALGAS_string inArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForGuardImplementation'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGuardImplementation (class GALGAS_string inArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'waitForGuardChangeFunctionName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGlobalVariable (class GALGAS_string inArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForRegister'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForRegister (class GALGAS_string inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'noWarningIfUnusedAttribute'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_noWarningIfUnusedAttribute (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'globalAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_globalAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'weakAttribute'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_weakAttribute (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'nullWhenPanicDisabledAttribute'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_nullWhenPanicDisabledAttribute (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'taskProcNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_taskProcNameForInvocationGraph (class GALGAS_string inArgument0,
                                                              class GALGAS_lstring inArgument1,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_stackNameForTask (const class GALGAS_string & constinArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'initNameForTaskType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_initNameForTaskType (const class GALGAS_string & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'stackAddressForTask'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_stackAddressForTask (const class GALGAS_string & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mainRoutineNameForTask'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mainRoutineNameForTask (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForTaskVariable'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForTaskVariable (class GALGAS_string inArgument0,
                                                      class GALGAS_string inArgument1,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (class GALGAS_intermediateCodeStruct & ioArgument0,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (class GALGAS_intermediateCodeStruct & ioArgument0,
                                              class GALGAS_accessibleEntities & outArgument1,
                                              class GALGAS_bool & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @accessibleEntities struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessibleEntities : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_stringset mAttribute_mAccessibleRegisterSet ;
  public : GALGAS_stringset mAttribute_mRoutineSet ;
  public : GALGAS_stringset mAttribute_mGuardSet ;
  public : GALGAS_stringset mAttribute_mSectionSet ;
  public : GALGAS_stringset mAttribute_mGlobalVariableSet ;
  public : GALGAS_stringset mAttribute_mTaskVariableSet ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_accessibleEntities constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_accessibleEntities (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_accessibleEntities (void) ;

//--------------------------------- Native constructor
  public : GALGAS_accessibleEntities (const GALGAS_stringset & in_mAccessibleRegisterSet,
                                      const GALGAS_stringset & in_mRoutineSet,
                                      const GALGAS_stringset & in_mGuardSet,
                                      const GALGAS_stringset & in_mSectionSet,
                                      const GALGAS_stringset & in_mGlobalVariableSet,
                                      const GALGAS_stringset & in_mTaskVariableSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessibleEntities extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_accessibleEntities constructor_new (const class GALGAS_stringset & inOperand0,
                                                             const class GALGAS_stringset & inOperand1,
                                                             const class GALGAS_stringset & inOperand2,
                                                             const class GALGAS_stringset & inOperand3,
                                                             const class GALGAS_stringset & inOperand4,
                                                             const class GALGAS_stringset & inOperand5
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessibleEntities & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mAccessibleRegisterSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mGlobalVariableSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mGuardSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRoutineSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSectionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mTaskVariableSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessibleEntities class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_routineMapIR_2D_element inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreGuards'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreGuards (class GALGAS_guardMapIR & ioArgument0,
                            class GALGAS_accessibleEntities & ioArgument1,
                            class GALGAS_guardMapIR & ioArgument2,
                            class GALGAS_bool & ioArgument3,
                            class GALGAS_uint & ioArgument4,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreProcs'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreProcs (class GALGAS_routineMapIR & ioArgument0,
                           class GALGAS_accessibleEntities & ioArgument1,
                           class GALGAS_routineMapIR & ioArgument2,
                           class GALGAS_bool & ioArgument3,
                           class GALGAS_uint & ioArgument4,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@guardMapIR-element enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_guardMapIR_2D_element inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'llvmSeparatorLine'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmTitleComment'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmTitleComment (class GALGAS_string inArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'asSeparatorLine'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asTitleComment (class GALGAS_string inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_location constinArgument2,
                             const class GALGAS_intermediateCodeStruct constinArgument3,
                             const class GALGAS_unifiedTypeMap constinArgument4,
                             const class GALGAS_lstring constinArgument5,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                             const class GALGAS_stringset constinArgument8,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateLLVMfile'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLLVMfile (const class GALGAS_string constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_location constinArgument2,
                               const class GALGAS_intermediateCodeStruct constinArgument3,
                               const class GALGAS_unifiedTypeMap constinArgument4,
                               const class GALGAS_lstring constinArgument5,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                               const class GALGAS_stringset constinArgument8,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@externProcedureMapIR llvmPrototypeGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const class GALGAS_globalVariableMapIR_2D_element inObject,
                                  class GALGAS_string & io_ioLLVMcode,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@guardMapIR guardCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_guardCodeGeneration (const class GALGAS_guardMapIR inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS__32_stringlist & io_ioServiceList,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initListIR generateLLVMinitCode'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVMinitCode (const class GALGAS_initListIR inObject,
                                          class GALGAS_string & io_ioLLVMcode,
                                          const class GALGAS_routineMapIR constin_inProcedureMapIR,
                                          const class GALGAS_generationContext constin_inGenerationContext,
                                          class GALGAS_generationAdds & io_ioGenerationAdds,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR instructionListLLVMCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_instructionListLLVMCode (const class GALGAS_instructionListIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             const class GALGAS_generationContext constin_inGenerationContext,
                                             class GALGAS_generationAdds & io_ioGenerationAdds,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@routineMapIR llvmCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmCodeGeneration (const class GALGAS_routineMapIR inObject,
                                        class GALGAS_string & io_ioLLVMcode,
                                        class GALGAS_string & io_ioAssemblerCode,
                                        const class GALGAS_generationContext constin_inGenerationContext,
                                        class GALGAS_generationAdds & io_ioGenerationAdds,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@routineMapIR primitiveCodeGeneration'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_primitiveCodeGeneration (const class GALGAS_routineMapIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             class GALGAS__32_stringlist & io_ioServiceList,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@routineMapIR sectionCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_sectionCodeGeneration (const class GALGAS_routineMapIR inObject,
                                           class GALGAS_string & io_ioLLVMcode,
                                           class GALGAS__32_stringlist & io_ioSectionList,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@routineMapIR serviceCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_serviceCodeGeneration (const class GALGAS_routineMapIR inObject,
                                           class GALGAS_string & io_ioLLVMcode,
                                           class GALGAS__32_stringlist & io_ioServiceList,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateCode (const class GALGAS_taskMapIR inObject,
                                  class GALGAS_string & io_ioLLVMcode,
                                  const class GALGAS_generationContext constin_inGenerationContext,
                                  class GALGAS_generationAdds & io_ioGenerationAdds,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_declareLLVMTypes (const class GALGAS_unifiedTypeMap constinArgument0,
                               class GALGAS_string & ioArgument1,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@staticStringMap findOrAddStaticString'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_findOrAddStaticString (class GALGAS_staticStringMap & ioObject,
                                             class GALGAS_string in_inString,
                                             class GALGAS_uint & out_outIndex,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @generationAdds struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mUniqueIndex ;
  public : GALGAS_stringset mAttribute_mExternFunctionDeclarationSet ;
  public : GALGAS_staticStringMap mAttribute_mStaticStringMap ;
  public : GALGAS_bool mAttribute_mUsesGuards ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_generationAdds constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_generationAdds (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_generationAdds (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generationAdds (const GALGAS_uint & in_mUniqueIndex,
                                  const GALGAS_stringset & in_mExternFunctionDeclarationSet,
                                  const GALGAS_staticStringMap & in_mStaticStringMap,
                                  const GALGAS_bool & in_mUsesGuards) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationAdds extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generationAdds constructor_new (const class GALGAS_uint & inOperand0,
                                                         const class GALGAS_stringset & inOperand1,
                                                         const class GALGAS_staticStringMap & inOperand2,
                                                         const class GALGAS_bool & inOperand3
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generationAdds & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mExternFunctionDeclarationSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mUniqueIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesGuards (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationAdds class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationAdds ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @generationContext struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mPanicCodeLLVMType ;
  public : GALGAS_string mAttribute_mPanicLineLLVMType ;
  public : GALGAS_globalTaskVariableList mAttribute_mGlobalTaskVariableList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_generationContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_generationContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_generationContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generationContext (const GALGAS_string & in_mPanicCodeLLVMType,
                                     const GALGAS_string & in_mPanicLineLLVMType,
                                     const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationContext extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generationContext constructor_new (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_string & inOperand1,
                                                            const class GALGAS_globalTaskVariableList & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generationContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPanicCodeLLVMType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPanicLineLLVMType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_targetTemplates ;
extern const char * gWrapperFileContent_1_targetTemplates ;
extern const char * gWrapperFileContent_2_targetTemplates ;
extern const char * gWrapperFileContent_3_targetTemplates ;
extern const char * gWrapperFileContent_4_targetTemplates ;
extern const char * gWrapperFileContent_5_targetTemplates ;
extern const char * gWrapperFileContent_6_targetTemplates ;
extern const char * gWrapperFileContent_7_targetTemplates ;
extern const char * gWrapperFileContent_8_targetTemplates ;
extern const char * gWrapperFileContent_9_targetTemplates ;
extern const char * gWrapperFileContent_10_targetTemplates ;
extern const char * gWrapperFileContent_11_targetTemplates ;
extern const char * gWrapperFileContent_12_targetTemplates ;
extern const char * gWrapperFileContent_13_targetTemplates ;
extern const char * gWrapperFileContent_14_targetTemplates ;
extern const char * gWrapperFileContent_15_targetTemplates ;
extern const char * gWrapperFileContent_16_targetTemplates ;
extern const char * gWrapperFileContent_17_targetTemplates ;
extern const char * gWrapperFileContent_18_targetTemplates ;
extern const char * gWrapperFileContent_19_targetTemplates ;
extern const char * gWrapperFileContent_20_targetTemplates ;
extern const char * gWrapperFileContent_21_targetTemplates ;
extern const char * gWrapperFileContent_22_targetTemplates ;
extern const char * gWrapperFileContent_23_targetTemplates ;
extern const char * gWrapperFileContent_24_targetTemplates ;
extern const char * gWrapperFileContent_25_targetTemplates ;
extern const char * gWrapperFileContent_26_targetTemplates ;
extern const char * gWrapperFileContent_27_targetTemplates ;
extern const char * gWrapperFileContent_28_targetTemplates ;
extern const char * gWrapperFileContent_29_targetTemplates ;
extern const char * gWrapperFileContent_30_targetTemplates ;
extern const char * gWrapperFileContent_31_targetTemplates ;
extern const char * gWrapperFileContent_32_targetTemplates ;
extern const char * gWrapperFileContent_33_targetTemplates ;
extern const char * gWrapperFileContent_34_targetTemplates ;
extern const char * gWrapperFileContent_35_targetTemplates ;
extern const char * gWrapperFileContent_36_targetTemplates ;
extern const char * gWrapperFileContent_37_targetTemplates ;
extern const char * gWrapperFileContent_38_targetTemplates ;
extern const char * gWrapperFileContent_39_targetTemplates ;
extern const char * gWrapperFileContent_40_targetTemplates ;
extern const char * gWrapperFileContent_41_targetTemplates ;
extern const char * gWrapperFileContent_42_targetTemplates ;
extern const char * gWrapperFileContent_43_targetTemplates ;
extern const char * gWrapperFileContent_44_targetTemplates ;
extern const char * gWrapperFileContent_45_targetTemplates ;
extern const char * gWrapperFileContent_46_targetTemplates ;
extern const char * gWrapperFileContent_47_targetTemplates ;
extern const char * gWrapperFileContent_48_targetTemplates ;
extern const char * gWrapperFileContent_49_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_8_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_9_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_10_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_11_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_12_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_13_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_14_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_15_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_16_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_17_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_18_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_19_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_20_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_21_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_22_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_23_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_24_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_25_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_26_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_27_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_28_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_29_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_30_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_31_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_32_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_33_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_34_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_35_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_36_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_37_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_38_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_39_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_40_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_41_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_42_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_43_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_44_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_45_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_46_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_47_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_48_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_49_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetTemplates ;

#endif
