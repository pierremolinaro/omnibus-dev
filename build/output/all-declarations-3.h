#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @throwInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_throwInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_throwInstructionIR (void) ;

//---
  public : inline const class cPtr_throwInstructionIR * ptr (void) const { return (const cPtr_throwInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_throwInstructionIR (const cPtr_throwInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_throwInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_throwInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_variableKindIR & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_throwInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mThrowInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_throwInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_throwInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @throwInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_throwInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mThrowInstructionLocation ;
  public : GALGAS_variableKindIR mAttribute_mCode ;

//--- Constructor
  public : cPtr_throwInstructionIR (const GALGAS_location & in_mThrowInstructionLocation,
                                    const GALGAS_variableKindIR & in_mCode
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mThrowInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varDeclarationIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varDeclarationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_varDeclarationIR (void) ;

//---
  public : inline const class cPtr_varDeclarationIR * ptr (void) const { return (const cPtr_varDeclarationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varDeclarationIR (const cPtr_varDeclarationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varDeclarationIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varDeclarationIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                           const class GALGAS_variableKindIR & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varDeclarationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varDeclarationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @varDeclarationIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varDeclarationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mTargetVar ;

//--- Constructor
  public : cPtr_varDeclarationIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                  const GALGAS_variableKindIR & in_mTargetVar
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @varDeclarationInstructionWithSimpleAssignmentIR class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varDeclarationInstructionWithSimpleAssignmentIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_varDeclarationInstructionWithSimpleAssignmentIR (void) ;

//---
  public : inline const class cPtr_varDeclarationInstructionWithSimpleAssignmentIR * ptr (void) const { return (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varDeclarationInstructionWithSimpleAssignmentIR (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varDeclarationInstructionWithSimpleAssignmentIR extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varDeclarationInstructionWithSimpleAssignmentIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const class GALGAS_variableKindIR & inOperand1,
                                                                                          const class GALGAS_variableKindIR & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varDeclarationInstructionWithSimpleAssignmentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSourceVar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varDeclarationInstructionWithSimpleAssignmentIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @varDeclarationInstructionWithSimpleAssignmentIR class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varDeclarationInstructionWithSimpleAssignmentIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mTargetVar ;
  public : GALGAS_variableKindIR mAttribute_mSourceVar ;

//--- Constructor
  public : cPtr_varDeclarationInstructionWithSimpleAssignmentIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                 const GALGAS_variableKindIR & in_mTargetVar,
                                                                 const GALGAS_variableKindIR & in_mSourceVar
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSourceVar (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
  public : static GALGAS_whileInstructionIR constructor_new (const class GALGAS_uint & inOperand0,
                                                             const class GALGAS_instructionListIR & inOperand1,
                                                             const class GALGAS_variableKindIR & inOperand2,
                                                             const class GALGAS_instructionListIR & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLabelIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mTestInstructionGenerationList (LOCATION_ARGS) const ;


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
  public : GALGAS_uint mAttribute_mLabelIndex ;
  public : GALGAS_instructionListIR mAttribute_mTestInstructionGenerationList ;
  public : GALGAS_variableKindIR mAttribute_mTestExpression ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                    const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                    const GALGAS_variableKindIR & in_mTestExpression,
                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLabelIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mTestInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @booleanIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_booleanIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanIR * ptr (void) const { return (const cPtr_booleanIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanIR (const cPtr_booleanIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_booleanIR constructor_new (const class GALGAS_string & inOperand0,
                                                    const class GALGAS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @booleanIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mBooleanTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_booleanIR (const GALGAS_string & in_mBooleanTypeName,
                           const GALGAS_string & in_mActualTypeName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBooleanTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumerationIR class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_enumerationIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationIR * ptr (void) const { return (const cPtr_enumerationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationIR (const cPtr_enumerationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationIR constructor_new (const class GALGAS_string & inOperand0,
                                                        const class GALGAS_string & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @enumerationIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mEnumerationName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_enumerationIR (const GALGAS_string & in_mEnumerationName,
                               const GALGAS_string & in_mActualTypeName
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @integerIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_integerIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerIR * ptr (void) const { return (const cPtr_integerIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerIR (const cPtr_integerIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerIR constructor_new (const class GALGAS_string & inOperand0,
                                                    const class GALGAS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mIntegerTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @integerIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mIntegerTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_integerIR (const GALGAS_string & in_mIntegerTypeName,
                           const GALGAS_string & in_mActualTypeName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mIntegerTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @literalStringTypeIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringTypeIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_literalStringTypeIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringTypeIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringTypeIR * ptr (void) const { return (const cPtr_literalStringTypeIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringTypeIR (const cPtr_literalStringTypeIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringTypeIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringTypeIR constructor_new (const class GALGAS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringTypeIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringTypeIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringTypeIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @literalStringTypeIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringTypeIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringTypeIR (const GALGAS_string & in_mLiteralStringTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@expressionAST addDependenceEdgeForStaticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                            const class GALGAS_lstring constinArgument0,
                                                                                            class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                               categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addDependenceEdgeForStaticExpression (const class cPtr_expressionAST * inObject,
                                                              const GALGAS_lstring constin_inConstantName,
                                                              GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                                   const class GALGAS_receiverType constin_inReceiverType,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_stringset constin_inModeSet,
                                                   const class GALGAS_bool constin_inAllowExceptions,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                                   class GALGAS_variableMap & io_ioVariableMap,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category Getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                         class GALGAS_lstring inArgument0,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                         const class GALGAS_lstring constinArgument0,
                                                                         const class GALGAS_receiverType constinArgument1,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                                         const class GALGAS_semanticContext constinArgument3,
                                                                         const class GALGAS_stringset constinArgument4,
                                                                         const class GALGAS_bool constinArgument5,
                                                                         class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                         class GALGAS_globalLiteralStringMap & ioArgument7,
                                                                         class GALGAS_variableMap & ioArgument8,
                                                                         class GALGAS_instructionListIR & ioArgument9,
                                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument10,
                                                                         class GALGAS_variableKindIR & outArgument11,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpression (const int32_t inClassIndex,
                                            categoryMethodSignature_expressionAST_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                           const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                           const GALGAS_receiverType constin_inReceiverType,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_stringset constin_inModes,
                                           const GALGAS_bool constin_inAllowExceptions,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_variableMap & io_ioVariableMap,
                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                           GALGAS_unifiedTypeMap_2D_proxy & out_outExpressionType,
                                           GALGAS_variableKindIR & out_outResultValueName,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract category method '@instructionAST analyze'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_instructionAST_analyze) (const class cPtr_instructionAST * inObject,
                                                                const class GALGAS_lstring constinArgument0,
                                                                const class GALGAS_receiverType constinArgument1,
                                                                const class GALGAS_semanticContext constinArgument2,
                                                                const class GALGAS_stringset constinArgument3,
                                                                const class GALGAS_bool constinArgument4,
                                                                class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                class GALGAS_globalLiteralStringMap & ioArgument6,
                                                                class GALGAS_variableMap & ioArgument7,
                                                                class GALGAS_instructionListIR & ioArgument8,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_instructionAST_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_instructionAST * inObject,
                                 const GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                 const GALGAS_receiverType constin_inReceiverType,
                                 const GALGAS_semanticContext constin_inContext,
                                 const GALGAS_stringset constin_inModeSet,
                                 const GALGAS_bool constin_inAllowExceptions,
                                 GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                 GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                 GALGAS_variableMap & io_ioVariableMap,
                                 GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeBranchInstructionList'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                  const class GALGAS_lstring constin_inRoutineNameForInvocationGraph,
                                                  class GALGAS_location in_inEndOfInstructionList,
                                                  const class GALGAS_receiverType constin_inReceiverType,
                                                  const class GALGAS_semanticContext constin_inContext,
                                                  const class GALGAS_stringset constin_inModeSet,
                                                  const class GALGAS_bool constin_inAllowExceptions,
                                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                  class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                                  class GALGAS_variableMap & io_ioVariableMap,
                                                  class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category reader '@abstractInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractInstructionIR_instructionCode) (const class cPtr_abstractInstructionIR * inObject,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionCode (const int32_t inClassIndex,
                                          categoryReaderSignature_abstractInstructionIR_instructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_instructionCode (const class cPtr_abstractInstructionIR * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                       class GALGAS_accessibleEntities & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                 GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category Getter '@functionDeclarationListAST-element mangledName' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_functionDeclarationListAST_2D_element & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category Getter '@procedureDeclarationListAST-element mangledName' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_procedureDeclarationListAST_2D_element & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Category method '@infixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const class GALGAS_infixOperatorMap inObject,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inLeftType,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inRightType,
                               const class GALGAS_location constin_inOperatorLocation,
                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@prefixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const class GALGAS_prefixOperatorMap inObject,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inType,
                               const class GALGAS_location constin_inOperatorLocation,
                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Category Getter '@procEffectiveParameterPassingModeAST passingModeForActualSelector' (as function)          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_passingModeForActualSelector (const class GALGAS_procEffectiveParameterPassingModeAST & inObject,
                                                                 class GALGAS_lstring inArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Getter '@variableKindIR isStatic' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool categoryReader_isStatic (const class GALGAS_variableKindIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@variableKindIR enterAccessibleEntities'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_variableKindIR inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Getter '@variableKindIR mangledName' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_mangledName (const class GALGAS_variableKindIR & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@functionDeclarationListAST-element enterInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

#endif
