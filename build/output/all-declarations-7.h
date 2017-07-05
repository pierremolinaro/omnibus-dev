#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionSE class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_forInstructionSE (void) ;

//---
  public : inline const class cPtr_forInstructionSE * ptr (void) const { return (const cPtr_forInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionSE (const cPtr_forInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionSE extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_expressionSE & inOperand3,
                                                                 const class GALGAS_location & inOperand4,
                                                                 const class GALGAS_bool & inOperand5,
                                                                 const class GALGAS_instructionListSE & inOperand6,
                                                                 const class GALGAS_location & inOperand7
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_for_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionSE getter_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @forInstructionSE class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mIteratedObject ;
  public : GALGAS_expressionSE mProperty_mWhileExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_whileExpression ;
  public : GALGAS_bool mProperty_mStaticWhileExpression ;
  public : GALGAS_instructionListSE mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_for_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_lstring & in_mVarName,
                                  const GALGAS_lstring & in_mIteratedObject,
                                  const GALGAS_expressionSE & in_mWhileExpression,
                                  const GALGAS_location & in_mEndOf_5F_whileExpression,
                                  const GALGAS_bool & in_mStaticWhileExpression,
                                  const GALGAS_instructionListSE & in_mDoInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionSE getter_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_for_5F_instruction (LOCATION_ARGS) const ;
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
                                                                        const class GALGAS_PLMType & inOperand6,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;

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
  public : GALGAS_PLMType mProperty_mElementType ;
  public : GALGAS_uint mProperty_mArraySize ;
  public : GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public : cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                         const GALGAS_lstring & in_mIteratedObjectName,
                                         const GALGAS_objectIR & in_mIteratedObject,
                                         const GALGAS_instructionListIR & in_mWhileInstructionList,
                                         const GALGAS_objectIR & in_mWhileExpressionResult,
                                         const GALGAS_instructionListIR & in_mDoInstructionList,
                                         const GALGAS_PLMType & in_mElementType,
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
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;
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
//                                       @forLowerUpperBoundInstructionSE class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionSE (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionSE * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionSE (const cPtr_forLowerUpperBoundInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionSE extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_expressionSE & inOperand3,
                                                                                const class GALGAS_location & inOperand4,
                                                                                const class GALGAS_expressionSE & inOperand5,
                                                                                const class GALGAS_location & inOperand6,
                                                                                const class GALGAS_instructionListSE & inOperand7,
                                                                                const class GALGAS_location & inOperand8
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionSE getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionSE getter_mUpperBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionSE class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_expressionSE mProperty_mLowerBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  public : GALGAS_expressionSE mProperty_mUpperBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  public : GALGAS_instructionListSE mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mVarName,
                                                 const GALGAS_lstring & in_mTypeName,
                                                 const GALGAS_expressionSE & in_mLowerBoundExpression,
                                                 const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                 const GALGAS_expressionSE & in_mUpperBoundExpression,
                                                 const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                 const GALGAS_instructionListSE & in_mDoInstructionList,
                                                 const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionSE getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionSE getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @simpleCallInstructionSE class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_simpleCallInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_simpleCallInstructionSE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_simpleCallInstructionSE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_simpleCallInstructionSE * ptr (void) const { return (const cPtr_simpleCallInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_simpleCallInstructionSE (const cPtr_simpleCallInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_simpleCallInstructionSE extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_simpleCallInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_effectiveArgumentListAST & inOperand2,
                                                                        const class GALGAS_location & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_simpleCallInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSandAloneRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleCallInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCallInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @simpleCallInstructionSE class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_simpleCallInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mSandAloneRoutineName ;
  public : GALGAS_effectiveArgumentListAST mProperty_mArguments ;
  public : GALGAS_location mProperty_mEndOfArguments ;

//--- Constructor
  public : cPtr_simpleCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_lstring & in_mSandAloneRoutineName,
                                         const GALGAS_effectiveArgumentListAST & in_mArguments,
                                         const GALGAS_location & in_mEndOfArguments
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSandAloneRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @complexSelfPropertyCallInstructionSE class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_complexSelfPropertyCallInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_complexSelfPropertyCallInstructionSE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_complexSelfPropertyCallInstructionSE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_complexSelfPropertyCallInstructionSE * ptr (void) const { return (const cPtr_complexSelfPropertyCallInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_complexSelfPropertyCallInstructionSE (const cPtr_complexSelfPropertyCallInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_complexSelfPropertyCallInstructionSE extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_complexSelfPropertyCallInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_accessInAssignmentListSE & inOperand2,
                                                                                     const class GALGAS_effectiveArgumentListAST & inOperand3,
                                                                                     const class GALGAS_location & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_complexSelfPropertyCallInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListSE getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_complexSelfPropertyCallInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complexSelfPropertyCallInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @complexSelfPropertyCallInstructionSE class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_complexSelfPropertyCallInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mPropertyName ;
  public : GALGAS_accessInAssignmentListSE mProperty_mAccessList ;
  public : GALGAS_effectiveArgumentListAST mProperty_mArguments ;
  public : GALGAS_location mProperty_mEndOfArguments ;

//--- Constructor
  public : cPtr_complexSelfPropertyCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mPropertyName,
                                                      const GALGAS_accessInAssignmentListSE & in_mAccessList,
                                                      const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                      const GALGAS_location & in_mEndOfArguments
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_accessInAssignmentListSE getter_mAccessList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @complexCallInstructionSE class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_complexCallInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_complexCallInstructionSE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_complexCallInstructionSE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_complexCallInstructionSE * ptr (void) const { return (const cPtr_complexCallInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_complexCallInstructionSE (const cPtr_complexCallInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_complexCallInstructionSE extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_complexCallInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_accessInAssignmentListSE & inOperand2,
                                                                         const class GALGAS_effectiveArgumentListAST & inOperand3,
                                                                         const class GALGAS_location & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_complexCallInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListSE getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_complexCallInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complexCallInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @complexCallInstructionSE class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_complexCallInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mIdentifier ;
  public : GALGAS_accessInAssignmentListSE mProperty_mAccessList ;
  public : GALGAS_effectiveArgumentListAST mProperty_mArguments ;
  public : GALGAS_location mProperty_mEndOfArguments ;

//--- Constructor
  public : cPtr_complexCallInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                          const GALGAS_lstring & in_mIdentifier,
                                          const GALGAS_accessInAssignmentListSE & in_mAccessList,
                                          const GALGAS_effectiveArgumentListAST & in_mArguments,
                                          const GALGAS_location & in_mEndOfArguments
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_accessInAssignmentListSE getter_mAccessList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveArgumentListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@LValueSelfAST solveEntitiesForComplexCallInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForComplexCallInstruction (const class GALGAS_LValueSelfAST inObject,
                                                             const class GALGAS_semanticContext constin_inSemanticContext,
                                                             const class GALGAS_location constin_inInstructionLocation,
                                                             const class GALGAS_effectiveArgumentListAST constin_inArguments,
                                                             const class GALGAS_location constin_inEndOfArguments,
                                                             class GALGAS_instructionListSE & io_ioInstructionListSE,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@LValueNoSelfAST solveEntitiesForComplexCallInstructionEX'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForComplexCallInstructionEX (const class GALGAS_LValueNoSelfAST inObject,
                                                               const class GALGAS_semanticContext constin_inSemanticContext,
                                                               const class GALGAS_location constin_inInstructionLocation,
                                                               const class GALGAS_effectiveArgumentListAST constin_inArguments,
                                                               const class GALGAS_location constin_inEndOfArguments,
                                                               class GALGAS_instructionListSE & io_ioInstructionListSE,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@LValueNoSelfAST analyzeTargetForRoutineCall'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeTargetForRoutineCall (const class GALGAS_LValueNoSelfAST inObject,
                                                  const class GALGAS_PLMType constin_inSelfType,
                                                  const class GALGAS_targetAccessKind constin_inSelfAccessKind,
                                                  const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                                  const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                  const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                  const class GALGAS_semanticContext constin_inContext,
                                                  const class GALGAS_mode constin_inCurrentMode,
                                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                  class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                  class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                                  class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                                  class GALGAS_allocaList & io_ioAllocaList,
                                                  class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                  class GALGAS_objectIR & out_outCurrentObject,
                                                  class GALGAS_string & out_outGlobalVariableReceiverName,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInAssignment (class GALGAS_objectIR & ioArgument0,
                                               const class GALGAS_lstring constinArgument1,
                                               class GALGAS_semanticTemporariesStruct & ioArgument2,
                                               class GALGAS_instructionListIR & ioArgument3,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'handleSubscriptInAssignmentAndExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptInAssignmentAndExpression (const class GALGAS_PLMType constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       const class GALGAS_bool constinArgument2,
                                                       const class GALGAS_lstring constinArgument3,
                                                       const class GALGAS_semanticContext constinArgument4,
                                                       const class GALGAS_mode constinArgument5,
                                                       class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                       class GALGAS_staticStringMap & ioArgument7,
                                                       class GALGAS_unifiedSymbolMapEx & ioArgument8,
                                                       class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                       class GALGAS_allocaList & ioArgument10,
                                                       const class GALGAS_expressionAST constinArgument11,
                                                       const class GALGAS_location constinArgument12,
                                                       class GALGAS_instructionListIR & ioArgument13,
                                                       class GALGAS_objectIR & ioArgument14,
                                                       class C_Compiler * inCompiler
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
//                            Extension method '@LValueSelfAST analyzeTargetForRoutineCall'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeTargetForRoutineCall (const class GALGAS_LValueSelfAST inObject,
                                                  const class GALGAS_PLMType constin_inSelfType,
                                                  const class GALGAS_targetAccessKind constin_inSelfAccessKind,
                                                  const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                                  const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                  const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                  const class GALGAS_semanticContext constin_inContext,
                                                  const class GALGAS_mode constin_inCurrentMode,
                                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                  class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                  class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                                  class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                                  class GALGAS_allocaList & io_ioAllocaList,
                                                  class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                  class GALGAS_objectIR & out_outCurrentObject,
                                                  class GALGAS_string & out_outGlobalVariableReceiverName,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const class GALGAS_PLMType constinArgument0,
                                           const class GALGAS_objectIR constinArgument1,
                                           class GALGAS_semanticTemporariesStruct & ioArgument2,
                                           class GALGAS_instructionListIR & ioArgument3,
                                           class GALGAS_objectIR & outArgument4,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@LValueNoSelfAST noteInstructionTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueNoSelfAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@LValueNoSelfAST solveEntitiesForLValueNoSelf'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveEntitiesForLValueNoSelf (const class GALGAS_LValueNoSelfAST inObject,
                                                   const class GALGAS_semanticContext constin_inSemanticContext,
                                                   class GALGAS_LValueWithoutSelfSE & out_outLValueSE,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@LValueNoSelfAST analyzeAssignmentTarget'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const class GALGAS_LValueNoSelfAST inObject,
                                              const class GALGAS_PLMType constin_inSelfType,
                                              const class GALGAS_targetAccessKind constin_inSelfAccessKind,
                                              const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                              const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                              const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                              const class GALGAS_semanticContext constin_inContext,
                                              const class GALGAS_mode constin_inCurrentMode,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                              class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                              class GALGAS_allocaList & io_ioAllocaList,
                                              class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                              class GALGAS_objectIR & out_outCurrentObject,
                                              class GALGAS_string & out_outGlobalVariableReceiverName,
                                              class C_Compiler * inCompiler
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
//                       Extension method '@LValueSelfAST noteInstructionTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueSelfAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@LValueSelfAST analyzeAssignmentTarget'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const class GALGAS_LValueSelfAST inObject,
                                              const class GALGAS_PLMType constin_inSelfType,
                                              const class GALGAS_targetAccessKind constin_inSelfAccessKind,
                                              const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                              const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                              const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                              const class GALGAS_semanticContext constin_inContext,
                                              const class GALGAS_mode constin_inCurrentMode,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                              class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                              class GALGAS_allocaList & io_ioAllocaList,
                                              class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                              class GALGAS_objectIR & out_outCurrentObject,
                                              class GALGAS_string & out_outGlobalVariableReceiverName,
                                              class C_Compiler * inCompiler
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
                                                                                                const class GALGAS_PLMType constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
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
//                         Extension getter '@unifiedTypeMap-proxy instanciable' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_instanciable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @staticRoutineCallIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticRoutineCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_staticRoutineCallIR (void) ;

//---
  public : inline const class cPtr_staticRoutineCallIR * ptr (void) const { return (const cPtr_staticRoutineCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_staticRoutineCallIR (const cPtr_staticRoutineCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticRoutineCallIR constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_calleeKindIR & inOperand4,
                                                                    const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticRoutineCallIR & inOperand) const ;

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
 
} ; // End of GALGAS_staticRoutineCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticRoutineCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @staticRoutineCallIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_staticRoutineCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_lstring mProperty_mFunctionMangledName ;
  public : GALGAS_lstring mProperty_mFunctionNameForGeneration ;
  public : GALGAS_calleeKindIR mProperty_mKind ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_staticRoutineCallIR (const GALGAS_string & in_mGlobalVariableName,
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
//                          Extension method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_routineMapIR_2D_element inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

#endif
