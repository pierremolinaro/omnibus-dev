#ifndef all_2D_declarations_2D__36__ENTITIES_DEFINED
#define all_2D_declarations_2D__36__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_whileInstructionIR (void) ;

//---
  public : inline const class cPtr_whileInstructionIR * ptr (void) const { return (const cPtr_whileInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_whileInstructionIR constructor_new (const class GALGAS_uint & inOperand0,
                                                                   const class GALGAS_instructionListIR & inOperand1,
                                                                   const class GALGAS_objectIR & inOperand2,
                                                                   const class GALGAS_instructionListIR & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mTestInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @whileInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_uint mProperty_mLabelIndex ;
  public : GALGAS_instructionListIR mProperty_mTestInstructionGenerationList ;
  public : GALGAS_objectIR mProperty_mTestExpression ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                    const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                    const GALGAS_objectIR & in_mTestExpression,
                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mTestInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnArrayIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionOnArrayIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forInstructionOnArrayIR (void) ;

//---
  public : inline const class cPtr_forInstructionOnArrayIR * ptr (void) const { return (const cPtr_forInstructionOnArrayIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionOnArrayIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionOnArrayIR constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        const class GALGAS_instructionListIR & inOperand3,
                                                                        const class GALGAS_objectIR & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand6,
                                                                        const class GALGAS_uint & inOperand7,
                                                                        const class GALGAS_stringset & inOperand8
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnArrayIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mEnumeratedValueName ;
  public : GALGAS_lstring mProperty_mIteratedObjectName ;
  public : GALGAS_objectIR mProperty_mIteratedObject ;
  public : GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public : GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mDoInstructionList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mElementType ;
  public : GALGAS_uint mProperty_mArraySize ;
  public : GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public : cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                         const GALGAS_lstring & in_mIteratedObjectName,
                                         const GALGAS_objectIR & in_mIteratedObject,
                                         const GALGAS_instructionListIR & in_mWhileInstructionList,
                                         const GALGAS_objectIR & in_mWhileExpressionResult,
                                         const GALGAS_instructionListIR & in_mDoInstructionList,
                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mElementType,
                                         const GALGAS_uint & in_mArraySize,
                                         const GALGAS_stringset & in_mInvokedFunctionSet
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnStringIR class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionOnStringIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forInstructionOnStringIR (void) ;

//---
  public : inline const class cPtr_forInstructionOnStringIR * ptr (void) const { return (const cPtr_forInstructionOnStringIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionOnStringIR (const cPtr_forInstructionOnStringIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionOnStringIR extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionOnStringIR constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_objectIR & inOperand2,
                                                                         const class GALGAS_instructionListIR & inOperand3,
                                                                         const class GALGAS_objectIR & inOperand4,
                                                                         const class GALGAS_instructionListIR & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionOnStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnStringIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnStringIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @forInstructionOnStringIR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionOnStringIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mVarName ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_objectIR mProperty_mIteratedObject ;
  public : GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public : GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mDoInstructionList ;

//--- Constructor
  public : cPtr_forInstructionOnStringIR (const GALGAS_string & in_mVarName,
                                          const GALGAS_location & in_mLocation,
                                          const GALGAS_objectIR & in_mIteratedObject,
                                          const GALGAS_instructionListIR & in_mWhileInstructionList,
                                          const GALGAS_objectIR & in_mWhileExpressionResult,
                                          const GALGAS_instructionListIR & in_mDoInstructionList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionIR (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionIR * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                const class GALGAS_objectIR & inOperand4,
                                                                                const class GALGAS_objectIR & inOperand5,
                                                                                const class GALGAS_instructionListIR & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mLowerExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUnsigned (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mUpperExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mVarName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mType ;
  public : GALGAS_bool mProperty_mUnsigned ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_objectIR mProperty_mLowerExpressionResult ;
  public : GALGAS_objectIR mProperty_mUpperExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                 const GALGAS_bool & in_mUnsigned,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_objectIR & in_mLowerExpressionResult,
                                                 const GALGAS_objectIR & in_mUpperExpressionResult,
                                                 const GALGAS_instructionListIR & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUnsigned (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mLowerExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mUpperExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension method '@assignmentTargetAST analyzeTargetForRoutineCall'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_analyzeTargetForRoutineCall) (const class cPtr_assignmentTargetAST * inObject,
                                                                                          const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                          const class GALGAS_targetAccessKind constinArgument1,
                                                                                          const class GALGAS_bool constinArgument2,
                                                                                          const class GALGAS_bool constinArgument3,
                                                                                          const class GALGAS_lstring constinArgument4,
                                                                                          const class GALGAS_semanticContext constinArgument5,
                                                                                          const class GALGAS_mode constinArgument6,
                                                                                          class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                          class GALGAS_staticStringMap & ioArgument8,
                                                                                          class GALGAS_unifiedSymbolMap & ioArgument9,
                                                                                          class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument10,
                                                                                          class GALGAS_allocaList & ioArgument11,
                                                                                          class GALGAS_instructionListIR & ioArgument12,
                                                                                          class GALGAS_objectIR & outArgument13,
                                                                                          class GALGAS_string & outArgument14,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeTargetForRoutineCall (const int32_t inClassIndex,
                                                       extensionMethodSignature_assignmentTargetAST_analyzeTargetForRoutineCall inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeTargetForRoutineCall (const class cPtr_assignmentTargetAST * inObject,
                                                      const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                      const GALGAS_targetAccessKind constin_inSelfAccessKind,
                                                      const GALGAS_bool constin_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constin_inContext,
                                                      const GALGAS_mode constin_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                      GALGAS_unifiedSymbolMap & io_ioVariableMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                                      GALGAS_allocaList & io_ioAllocaList,
                                                      GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                      GALGAS_objectIR & out_outCurrentObject,
                                                      GALGAS_string & out_outGlobalVariableReceiverName,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @switchInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_switchInstructionIR (void) ;

//---
  public : inline const class cPtr_switchInstructionIR * ptr (void) const { return (const cPtr_switchInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchInstructionIR constructor_new (const class GALGAS_uint & inOperand0,
                                                                    const class GALGAS_instructionListIR & inOperand1,
                                                                    const class GALGAS_objectIR & inOperand2,
                                                                    const class GALGAS_switchCaseListIR & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_mCaseGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mSwitchExpressionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @switchInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_switchInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_uint mProperty_mLabelIndex ;
  public : GALGAS_instructionListIR mProperty_mSwitchExpressionGenerationList ;
  public : GALGAS_objectIR mProperty_mSwitchExpression ;
  public : GALGAS_switchCaseListIR mProperty_mCaseGenerationList ;

//--- Constructor
  public : cPtr_switchInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                     const GALGAS_instructionListIR & in_mSwitchExpressionGenerationList,
                                     const GALGAS_objectIR & in_mSwitchExpression,
                                     const GALGAS_switchCaseListIR & in_mCaseGenerationList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mSwitchExpressionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseListIR getter_mCaseGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@assignmentTargetAST noteInstructionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_assignmentTargetAST * inObject,
                                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_assignmentTargetAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@assignmentTargetAST analyzeAssignmentTarget'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_analyzeAssignmentTarget) (const class cPtr_assignmentTargetAST * inObject,
                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                                      const class GALGAS_targetAccessKind constinArgument1,
                                                                                      const class GALGAS_bool constinArgument2,
                                                                                      const class GALGAS_bool constinArgument3,
                                                                                      const class GALGAS_lstring constinArgument4,
                                                                                      const class GALGAS_semanticContext constinArgument5,
                                                                                      const class GALGAS_mode constinArgument6,
                                                                                      class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                      class GALGAS_staticStringMap & ioArgument8,
                                                                                      class GALGAS_unifiedSymbolMap & ioArgument9,
                                                                                      class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument10,
                                                                                      class GALGAS_allocaList & ioArgument11,
                                                                                      class GALGAS_instructionListIR & ioArgument12,
                                                                                      class GALGAS_objectIR & outArgument13,
                                                                                      class GALGAS_string & outArgument14,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeAssignmentTarget (const int32_t inClassIndex,
                                                   extensionMethodSignature_assignmentTargetAST_analyzeAssignmentTarget inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeAssignmentTarget (const class cPtr_assignmentTargetAST * inObject,
                                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                  const GALGAS_targetAccessKind constin_inSelfAccessKind,
                                                  const GALGAS_bool constin_inRoutineCanMutateProperties,
                                                  const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                  const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                  const GALGAS_semanticContext constin_inContext,
                                                  const GALGAS_mode constin_inCurrentMode,
                                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                  GALGAS_unifiedSymbolMap & io_ioVariableMap,
                                                  GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                                  GALGAS_allocaList & io_ioAllocaList,
                                                  GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                  GALGAS_objectIR & out_outCurrentObject,
                                                  GALGAS_string & out_outGlobalVariableReceiverName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_lstring constinArgument1,
                                                                                                 const class GALGAS_lstring constinArgument2,
                                                                                                 const class GALGAS_routineDescriptor constinArgument3,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRoutine (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRoutine (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        const GALGAS_lstring constin_inLLVMInvocationRoutineName,
                                        const GALGAS_routineDescriptor constin_inDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @possibleValuedObject enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_property : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_objectIR mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_property (const GALGAS_bool & inAssociatedValue0,
                                                                const GALGAS_objectIR & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_property (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_module : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_module (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_module (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_register : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_register (const GALGAS_bool & inAssociatedValue0,
                                                                const GALGAS_bool & inAssociatedValue1,
                                                                const GALGAS_objectIR & inAssociatedValue2
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_register (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_globalConstant : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_globalConstant (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_localConstant : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_localConstant (const GALGAS_objectIR & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_localConstant (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_globalVariableReference : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_objectIR mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_globalVariableReference (const GALGAS_bool & inAssociatedValue0,
                                                                               const GALGAS_objectIR & inAssociatedValue1
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_globalVariableReference (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_possibleValuedObject_localVariableReference : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_possibleValuedObject_localVariableReference (const GALGAS_objectIR & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_possibleValuedObject_localVariableReference (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertProperty'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                  const class GALGAS_bool constinArgument1,
                                                                                                  const class GALGAS_objectIR constinArgument2,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertProperty (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertProperty (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inPropertyName,
                                         const GALGAS_bool constin_inIsPublic,
                                         const GALGAS_objectIR constin_inObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@universalPropertyAndRoutineMapForContext insertModule'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                const class GALGAS_lstring constinArgument0,
                                                                                                const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_unifiedTypeMap_2D_proxy constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                  const class GALGAS_bool constinArgument1,
                                                                                                  const class GALGAS_bool constinArgument2,
                                                                                                  const class GALGAS_objectIR constinArgument3,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inRegisterName,
                                         const GALGAS_bool constin_inReadable,
                                         const GALGAS_bool constin_inWritable,
                                         const GALGAS_objectIR constin_inRegisterObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalConstant'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                        const class GALGAS_objectIR constinArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalConstant'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                       const class GALGAS_lstring constinArgument0,
                                                                                                       const class GALGAS_objectIR constinArgument1,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_objectIR constin_inConstantObjectIR,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalVariable'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                        const class GALGAS_objectIR constinArgument1,
                                                                                                        const class GALGAS_bool constinArgument2,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_objectIR constin_inObjectIR,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalVariable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                       const class GALGAS_lstring constinArgument0,
                                                                                                       const class GALGAS_objectIR constinArgument1,
                                                                                                       const class GALGAS_valuedObjectState constinArgument2,
                                                                                                       const class GALGAS_bool constinArgument3,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalVariable (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalVariable (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalVariableName,
                                              const GALGAS_objectIR constin_inObjectIR,
                                              const GALGAS_valuedObjectState constin_inVariableInitialState,
                                              const GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadAccess'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                   const class GALGAS_lstring constinArgument0,
                                                                                                                   class GALGAS_objectIR & outArgument1,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadAccess (const int32_t inClassIndex,
                                                           extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                          const GALGAS_lstring constin_inValuedObjectName,
                                                          GALGAS_objectIR & out_outObjectIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForWriteAccess'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                    const class GALGAS_lstring constinArgument0,
                                                                                                                    class GALGAS_objectIR & outArgument1,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForWriteAccess (const int32_t inClassIndex,
                                                            extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForWriteAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                           const GALGAS_lstring constin_inValuedObjectName,
                                                           GALGAS_objectIR & out_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadWriteAccess'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                                        class GALGAS_objectIR & outArgument1,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadWriteAccess (const int32_t inClassIndex,
                                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadWriteAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                               const GALGAS_lstring constin_inValuedObjectName,
                                                               GALGAS_objectIR & out_outObjectIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@universalPropertyAndRoutineMapForContext searchRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine) (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_lstring constinArgument1,
                                                                                                 class GALGAS_lstring & outArgument2,
                                                                                                 class GALGAS_routineDescriptor & outArgument3,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchRoutine (const int32_t inClassIndex,
                                         extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchRoutine (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        GALGAS_lstring & out_outLLVMInvocationRoutineName,
                                        GALGAS_routineDescriptor & out_outDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForSelectBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForSelectBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForSelectBlock (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForRepeatBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForRepeatBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForRepeatBlock (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext closeOverride'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_location constinArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeOverride (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeOverride (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_location constin_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@unifiedTypeMap-proxy equatable' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_equatable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension getter '@typeKind equatable' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_equatable (const class GALGAS_typeKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'equatableFlag'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_equatableFlag (class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@unifiedTypeMap-proxy instanciable' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_instanciable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@typeKind instanciable' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_instanciable (const class GALGAS_typeKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'instanciableFlag'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_instanciableFlag (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@typeKind copyable' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_copyable (const class GALGAS_typeKind & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'copyableFlag'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint function_copyableFlag (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension getter '@unifiedTypeMap-proxy classConstantMap' (as function)                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classConstantMap extensionGetter_classConstantMap (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@typeKind descriptionForHTMLFile' (as function)                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_descriptionForHTMLFile (const class GALGAS_typeKind & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @functionCallIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_functionCallIR (void) ;

//---
  public : inline const class cPtr_functionCallIR * ptr (void) const { return (const cPtr_functionCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallIR (const cPtr_functionCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallIR extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallIR constructor_new (const class GALGAS_string & inOperand0,
                                                               const class GALGAS_objectIR & inOperand1,
                                                               const class GALGAS_lstring & inOperand2,
                                                               const class GALGAS_lstring & inOperand3,
                                                               const class GALGAS_calleeKindIR & inOperand4,
                                                               const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_calleeKindIR getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @functionCallIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_lstring mProperty_mFunctionMangledName ;
  public : GALGAS_lstring mProperty_mFunctionNameForGeneration ;
  public : GALGAS_calleeKindIR mProperty_mKind ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_functionCallIR (const GALGAS_string & in_mGlobalVariableName,
                                const GALGAS_objectIR & in_mResult,
                                const GALGAS_lstring & in_mFunctionMangledName,
                                const GALGAS_lstring & in_mFunctionNameForGeneration,
                                const GALGAS_calleeKindIR & in_mKind,
                                const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_calleeKindIR getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension getter '@objectIR isGlobalVariable' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_isGlobalVariable (const class GALGAS_objectIR & inObject,
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
//                               Extension getter '@objectIR llvmTypeName' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_objectIR & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@objectIR sliceMap' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sliceMap extensionGetter_sliceMap (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_location & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@objectIR type' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy extensionGetter_type (const class GALGAS_objectIR & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@objectIR key' (as function)                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_key (const class GALGAS_objectIR & inObject,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@objectIR withType' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_objectIR extensionGetter_withType (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@objectIR name' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_name (const class GALGAS_objectIR & inObject,
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
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          const class GALGAS_bigint constinArgument1,
                                                                                          class GALGAS_string & ioArgument2,
                                                                                          const class GALGAS_generationContext constinArgument3,
                                                                                          class GALGAS_generationAdds & ioArgument4,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) (const class cPtr_binaryOperationIR * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                     const class GALGAS_generationContext constinArgument3,
                                                                                                     class GALGAS_generationAdds & ioArgument4,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const class cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

#endif
