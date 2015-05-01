#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_ast constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_location constinArgument3,
                             const class GALGAS_string constinArgument4,
                             const class GALGAS_stringset constinArgument5,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'addPredefinedTypes'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPredefinedTypes (class GALGAS_declarationListAST & ioArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'addTargetSpecificFiles'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTargetSpecificFiles (const class GALGAS_lstring constinArgument0,
                                     class GALGAS_ast & ioArgument1,
                                     const class GALGAS_string constinArgument2,
                                     class GALGAS_stringset & ioArgument3,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalStringDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_literalStringDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringDeclaration * ptr (void) const { return (const cPtr_literalStringDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringDeclaration (const cPtr_literalStringDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringDeclaration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalStringDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringDeclaration (const GALGAS_lstring & in_mLiteralStringTypeName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'recursiveImportFiles'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFiles (class GALGAS_ast & ioArgument0,
                                   class GALGAS_string inArgument1,
                                   class GALGAS_lstringlist inArgument2,
                                   class GALGAS_stringset & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @inLineExpressionGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inLineExpressionGeneration : public GALGAS_abstractExpressionGeneration {
//--- Constructor
  public : GALGAS_inLineExpressionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inLineExpressionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inLineExpressionGeneration * ptr (void) const { return (const cPtr_inLineExpressionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inLineExpressionGeneration (const cPtr_inLineExpressionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inLineExpressionGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inLineExpressionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inLineExpressionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inLineExpressionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inLineExpressionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @inLineExpressionGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_inLineExpressionGeneration : public cPtr_abstractExpressionGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mCode ;

//--- Constructor
  public : cPtr_inLineExpressionGeneration (const GALGAS_string & in_mCode
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @operatorInfixExpressionGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorInfixExpressionGeneration : public GALGAS_abstractExpressionGeneration {
//--- Constructor
  public : GALGAS_operatorInfixExpressionGeneration (void) ;

//---
  public : inline const class cPtr_operatorInfixExpressionGeneration * ptr (void) const { return (const cPtr_operatorInfixExpressionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_operatorInfixExpressionGeneration (const cPtr_operatorInfixExpressionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operatorInfixExpressionGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_operatorInfixExpressionGeneration constructor_new (const class GALGAS_abstractExpressionGeneration & inOperand0,
                                                                            const class GALGAS_abstractInfixOperatorGeneration & inOperand1,
                                                                            const class GALGAS_abstractExpressionGeneration & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorInfixExpressionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractInfixOperatorGeneration reader_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operatorInfixExpressionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorInfixExpressionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @operatorInfixExpressionGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_operatorInfixExpressionGeneration : public cPtr_abstractExpressionGeneration {
//--- Attributes
  public : GALGAS_abstractExpressionGeneration mAttribute_mLeftExpression ;
  public : GALGAS_abstractInfixOperatorGeneration mAttribute_mOperator ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_operatorInfixExpressionGeneration (const GALGAS_abstractExpressionGeneration & in_mLeftExpression,
                                                   const GALGAS_abstractInfixOperatorGeneration & in_mOperator,
                                                   const GALGAS_abstractExpressionGeneration & in_mRightExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractInfixOperatorGeneration reader_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @booleanGeneration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_booleanGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanGeneration * ptr (void) const { return (const cPtr_booleanGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanGeneration (const cPtr_booleanGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanGeneration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_booleanGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @booleanGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mBooleanTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_booleanGeneration (const GALGAS_string & in_mBooleanTypeName,
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
//                                              @boolsetGeneration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_boolsetGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_boolsetGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolsetGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolsetGeneration * ptr (void) const { return (const cPtr_boolsetGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolsetGeneration (const cPtr_boolsetGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolsetGeneration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_boolsetGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolsetGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBoolsetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @boolsetGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_boolsetGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mBoolsetName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_boolsetGeneration (const GALGAS_string & in_mBoolsetName,
                                   const GALGAS_string & in_mActualTypeName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBoolsetName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_enumerationGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationGeneration * ptr (void) const { return (const cPtr_enumerationGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationGeneration (const cPtr_enumerationGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @enumerationGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mEnumerationName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_enumerationGeneration (const GALGAS_string & in_mEnumerationName,
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
//                                              @functionGeneration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_functionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionGeneration * ptr (void) const { return (const cPtr_functionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionGeneration (const cPtr_functionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_funcFormalArgumentListForGeneration & inOperand1,
                                                             const class GALGAS_instructionGenerationList & inOperand2,
                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                             const class GALGAS_string & inOperand4
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentListForGeneration reader_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFunctionMangledName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @functionGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFunctionMangledName ;
  public : GALGAS_funcFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_instructionGenerationList mAttribute_mInstructionGenerationList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_string mAttribute_mResultVarName ;

//--- Constructor
  public : cPtr_functionGeneration (const GALGAS_string & in_mFunctionMangledName,
                                    const GALGAS_funcFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                    const GALGAS_instructionGenerationList & in_mInstructionGenerationList,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                    const GALGAS_string & in_mResultVarName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionMangledName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_funcFormalArgumentListForGeneration reader_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_globalConstantGeneration (void) ;

//---
  public : inline const class cPtr_globalConstantGeneration * ptr (void) const { return (const cPtr_globalConstantGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_globalConstantGeneration (const cPtr_globalConstantGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_globalConstantGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_abstractExpressionGeneration & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalConstantGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGlobalConstanteName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mValueExpressionGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalConstantGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @globalConstantGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_globalConstantGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mGlobalConstanteName ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mValueExpressionGeneration ;

//--- Constructor
  public : cPtr_globalConstantGeneration (const GALGAS_string & in_mGlobalConstanteName,
                                          const GALGAS_abstractExpressionGeneration & in_mValueExpressionGeneration
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGlobalConstanteName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mValueExpressionGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVariableGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalVariableGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_globalVariableGeneration (void) ;

//---
  public : inline const class cPtr_globalVariableGeneration * ptr (void) const { return (const cPtr_globalVariableGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_globalVariableGeneration (const cPtr_globalVariableGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVariableGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_globalVariableGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_abstractExpressionGeneration & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalVariableGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mGenerateVolatile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGlobalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mInitialValueExpressionGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalVariableGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalVariableGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @globalVariableGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_globalVariableGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mGlobalVariableName ;
  public : GALGAS_string mAttribute_mActualTypeName ;
  public : GALGAS_bool mAttribute_mGenerateVolatile ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mInitialValueExpressionGeneration ;

//--- Constructor
  public : cPtr_globalVariableGeneration (const GALGAS_string & in_mGlobalVariableName,
                                          const GALGAS_string & in_mActualTypeName,
                                          const GALGAS_bool & in_mGenerateVolatile,
                                          const GALGAS_abstractExpressionGeneration & in_mInitialValueExpressionGeneration
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGlobalVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mGenerateVolatile (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mInitialValueExpressionGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @integerGeneration class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_integerGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerGeneration * ptr (void) const { return (const cPtr_integerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerGeneration (const cPtr_integerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerGeneration extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mIntegerTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @integerGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mIntegerTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_integerGeneration (const GALGAS_string & in_mIntegerTypeName,
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
//                                           @literalStringGeneration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_literalStringGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringGeneration * ptr (void) const { return (const cPtr_literalStringGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringGeneration (const cPtr_literalStringGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalStringGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringGeneration (const GALGAS_string & in_mLiteralStringTypeName
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
//                                             @procedureGeneration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procedureGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_procedureGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procedureGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procedureGeneration * ptr (void) const { return (const cPtr_procedureGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procedureGeneration (const cPtr_procedureGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procedureGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procedureGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                              const class GALGAS_instructionGenerationList & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procedureGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration reader_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProcedureMangledName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procedureGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @procedureGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procedureGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mProcedureMangledName ;
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_instructionGenerationList mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_procedureGeneration (const GALGAS_string & in_mProcedureMangledName,
                                     const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                     const GALGAS_instructionGenerationList & in_mInstructionGenerationList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mProcedureMangledName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procFormalArgumentListForGeneration reader_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @registerGeneration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_registerGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_registerGeneration * ptr (void) const { return (const cPtr_registerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerGeneration (const cPtr_registerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_string & inOperand1,
                                                             const class GALGAS_uint_36__34_ & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint_36__34_ reader_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRegisterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mRegisterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @registerGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mRegisterTypeName ;
  public : GALGAS_string mAttribute_mRegisterName ;
  public : GALGAS_uint_36__34_ mAttribute_mRegisterAddress ;

//--- Constructor
  public : cPtr_registerGeneration (const GALGAS_string & in_mRegisterTypeName,
                                    const GALGAS_string & in_mRegisterName,
                                    const GALGAS_uint_36__34_ & in_mRegisterAddress
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mRegisterTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint_36__34_ reader_mRegisterAddress (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structureGeneration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureGeneration : public GALGAS_abstractGeneration {
//--- Constructor
  public : GALGAS_structureGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structureGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structureGeneration * ptr (void) const { return (const cPtr_structureGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structureGeneration (const cPtr_structureGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_structureFieldListForGeneration & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @structureGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structureGeneration : public cPtr_abstractGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mStructureName ;
  public : GALGAS_structureFieldListForGeneration mAttribute_mStructureFieldListForGeneration ;

//--- Constructor
  public : cPtr_structureGeneration (const GALGAS_string & in_mStructureName,
                                     const GALGAS_structureFieldListForGeneration & in_mStructureFieldListForGeneration
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @assignmentInstructionGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_assignmentInstructionGeneration (void) ;

//---
  public : inline const class cPtr_assignmentInstructionGeneration * ptr (void) const { return (const cPtr_assignmentInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionGeneration (const cPtr_assignmentInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assignmentInstructionGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const class GALGAS_abstractExpressionGeneration & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @assignmentInstructionGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLocalVariable ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetVarType ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mExpressionGeneration ;

//--- Constructor
  public : cPtr_assignmentInstructionGeneration (const GALGAS_string & in_mLocalVariable,
                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                                 const GALGAS_abstractExpressionGeneration & in_mExpressionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @decrementInstructionGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decrementInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_decrementInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decrementInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decrementInstructionGeneration * ptr (void) const { return (const cPtr_decrementInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decrementInstructionGeneration (const cPtr_decrementInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decrementInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_decrementInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decrementInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mMangledName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decrementInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decrementInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @decrementInstructionGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decrementInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mMangledName ;

//--- Constructor
  public : cPtr_decrementInstructionGeneration (const GALGAS_string & in_mMangledName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mMangledName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @foreverInstructionGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_foreverInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_foreverInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_foreverInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_foreverInstructionGeneration * ptr (void) const { return (const cPtr_foreverInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_foreverInstructionGeneration (const cPtr_foreverInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_foreverInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_foreverInstructionGeneration constructor_new (const class GALGAS_instructionGenerationList & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_foreverInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_foreverInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_foreverInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @foreverInstructionGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_foreverInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_instructionGenerationList mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_foreverInstructionGeneration (const GALGAS_instructionGenerationList & in_mInstructionGenerationList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @ifInstructionGeneration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_ifInstructionGeneration (void) ;

//---
  public : inline const class cPtr_ifInstructionGeneration * ptr (void) const { return (const cPtr_ifInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionGeneration (const cPtr_ifInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifInstructionGeneration constructor_new (const class GALGAS_abstractExpressionGeneration & inOperand0,
                                                                  const class GALGAS_instructionGenerationList & inOperand1,
                                                                  const class GALGAS_instructionGenerationList & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mElseInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mTestExpressionGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mThenInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @ifInstructionGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_abstractExpressionGeneration mAttribute_mTestExpressionGeneration ;
  public : GALGAS_instructionGenerationList mAttribute_mThenInstructionGenerationList ;
  public : GALGAS_instructionGenerationList mAttribute_mElseInstructionGenerationList ;

//--- Constructor
  public : cPtr_ifInstructionGeneration (const GALGAS_abstractExpressionGeneration & in_mTestExpressionGeneration,
                                         const GALGAS_instructionGenerationList & in_mThenInstructionGenerationList,
                                         const GALGAS_instructionGenerationList & in_mElseInstructionGenerationList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mTestExpressionGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mThenInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mElseInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @incrementInstructionGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_incrementInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_incrementInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_incrementInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_incrementInstructionGeneration * ptr (void) const { return (const cPtr_incrementInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incrementInstructionGeneration (const cPtr_incrementInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incrementInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_incrementInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incrementInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mMangledName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incrementInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incrementInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @incrementInstructionGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_incrementInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mMangledName ;

//--- Constructor
  public : cPtr_incrementInstructionGeneration (const GALGAS_string & in_mMangledName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mMangledName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @letInstructionWithAssignmentGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_letInstructionWithAssignmentGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_letInstructionWithAssignmentGeneration (void) ;

//---
  public : inline const class cPtr_letInstructionWithAssignmentGeneration * ptr (void) const { return (const cPtr_letInstructionWithAssignmentGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_letInstructionWithAssignmentGeneration (const cPtr_letInstructionWithAssignmentGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_letInstructionWithAssignmentGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_letInstructionWithAssignmentGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_abstractExpressionGeneration & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionWithAssignmentGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @letInstructionWithAssignmentGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_letInstructionWithAssignmentGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mLocalVariable ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mExpressionGeneration ;

//--- Constructor
  public : cPtr_letInstructionWithAssignmentGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                        const GALGAS_string & in_mLocalVariable,
                                                        const GALGAS_abstractExpressionGeneration & in_mExpressionGeneration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @procCallInstructionGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_procCallInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionGeneration * ptr (void) const { return (const cPtr_procCallInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionGeneration (const cPtr_procCallInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procCallInstructionGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_procEffectiveParameterList & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList reader_mParameters (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProcName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @procCallInstructionGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procCallInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mProcName ;
  public : GALGAS_procEffectiveParameterList mAttribute_mParameters ;

//--- Constructor
  public : cPtr_procCallInstructionGeneration (const GALGAS_string & in_mProcName,
                                               const GALGAS_procEffectiveParameterList & in_mParameters
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mProcName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterList reader_mParameters (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @varInstructionGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_varInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInstructionGeneration * ptr (void) const { return (const cPtr_varInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionGeneration (const cPtr_varInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInstructionGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                   const class GALGAS_string & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @varInstructionGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mLocalVariable ;

//--- Constructor
  public : cPtr_varInstructionGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                          const GALGAS_string & in_mLocalVariable
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @varInstructionWithAssignmentGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionWithAssignmentGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_varInstructionWithAssignmentGeneration (void) ;

//---
  public : inline const class cPtr_varInstructionWithAssignmentGeneration * ptr (void) const { return (const cPtr_varInstructionWithAssignmentGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionWithAssignmentGeneration (const cPtr_varInstructionWithAssignmentGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionWithAssignmentGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInstructionWithAssignmentGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_abstractExpressionGeneration & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionWithAssignmentGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionWithAssignmentGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @varInstructionWithAssignmentGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionWithAssignmentGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mLocalVariable ;
  public : GALGAS_abstractExpressionGeneration mAttribute_mExpressionGeneration ;

//--- Constructor
  public : cPtr_varInstructionWithAssignmentGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                        const GALGAS_string & in_mLocalVariable,
                                                        const GALGAS_abstractExpressionGeneration & in_mExpressionGeneration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLocalVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mExpressionGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @whileInstructionGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionGeneration : public GALGAS_abstractInstructionGeneration {
//--- Constructor
  public : GALGAS_whileInstructionGeneration (void) ;

//---
  public : inline const class cPtr_whileInstructionGeneration * ptr (void) const { return (const cPtr_whileInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionGeneration (const cPtr_whileInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_whileInstructionGeneration constructor_new (const class GALGAS_abstractExpressionGeneration & inOperand0,
                                                                     const class GALGAS_instructionGenerationList & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractExpressionGeneration reader_mTestExpressionGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @whileInstructionGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionGeneration : public cPtr_abstractInstructionGeneration {
//--- Attributes
  public : GALGAS_abstractExpressionGeneration mAttribute_mTestExpressionGeneration ;
  public : GALGAS_instructionGenerationList mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_whileInstructionGeneration (const GALGAS_abstractExpressionGeneration & in_mTestExpressionGeneration,
                                            const GALGAS_instructionGenerationList & in_mInstructionGenerationList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractExpressionGeneration reader_mTestExpressionGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionGenerationList reader_mInstructionGenerationList (LOCATION_ARGS) const ;
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
//                                                  @boolsetIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_boolsetIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_boolsetIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolsetIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolsetIR * ptr (void) const { return (const cPtr_boolsetIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolsetIR (const cPtr_boolsetIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolsetIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_boolsetIR constructor_new (const class GALGAS_string & inOperand0,
                                                    const class GALGAS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolsetIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBoolsetName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @boolsetIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_boolsetIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mBoolsetName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_boolsetIR (const GALGAS_string & in_mBoolsetName,
                           const GALGAS_string & in_mActualTypeName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBoolsetName (LOCATION_ARGS) const ;
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
//                                                 @structureIR class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_structureIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structureIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structureIR * ptr (void) const { return (const cPtr_structureIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structureIR (const cPtr_structureIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureIR extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureIR constructor_new (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_structureFieldListForGeneration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @structureIR class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structureIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mStructureName ;
  public : GALGAS_structureFieldListForGeneration mAttribute_mStructureFieldListForGeneration ;

//--- Constructor
  public : cPtr_structureIR (const GALGAS_string & in_mStructureName,
                             const GALGAS_structureFieldListForGeneration & in_mStructureFieldListForGeneration
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;
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
//                          Abstract category method '@expressionAST analyzeStaticExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_analyzeStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                               const class GALGAS_semanticContext constinArgument1,
                                                                               class GALGAS_globalLiteralStringMap & ioArgument2,
                                                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                                               class GALGAS_abstractExpressionGeneration & outArgument4,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeStaticExpression (const int32_t inClassIndex,
                                                  categoryMethodSignature_expressionAST_analyzeStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeStaticExpression (const class cPtr_expressionAST * inObject,
                                                 const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                                 const GALGAS_semanticContext constin_inContext,
                                                 GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                                 GALGAS_unifiedTypeMap_2D_proxy & out_outExpressionType,
                                                 GALGAS_abstractExpressionGeneration & out_outGeneratedCode,
                                                 C_Compiler * inCompiler
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
//                                 Abstract category method '@instructionAST analyze'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_instructionAST_analyze) (const class cPtr_instructionAST * inObject,
                                                                const class GALGAS_receiverType constinArgument0,
                                                                const class GALGAS_semanticContext constinArgument1,
                                                                const class GALGAS_string constinArgument2,
                                                                class GALGAS_globalLiteralStringMap & ioArgument3,
                                                                class GALGAS_variableMap & ioArgument4,
                                                                class GALGAS_instructionGenerationList & ioArgument5,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyze (const int32_t inClassIndex,
                                  categoryMethodSignature_instructionAST_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyze (const class cPtr_instructionAST * inObject,
                                 const GALGAS_receiverType constin_inReceiverType,
                                 const GALGAS_semanticContext constin_inContext,
                                 const GALGAS_string constin_inMode,
                                 GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                 GALGAS_variableMap & io_ioVariableMap,
                                 GALGAS_instructionGenerationList & io_ioInstructionGenerationList,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeBranchInstructionList'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                  class GALGAS_location in_inEndOfInstructionList,
                                                  const class GALGAS_receiverType constin_inReceiverType,
                                                  const class GALGAS_semanticContext constin_inContext,
                                                  const class GALGAS_string constin_inMode,
                                                  class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                                  class GALGAS_variableMap & io_ioVariableMap,
                                                  class GALGAS_instructionGenerationList & io_ioInstructionGenerationList,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_receiverType constin_inReceiverType,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_string constin_inMode,
                                                   class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                                   class GALGAS_variableMap & io_ioVariableMap,
                                                   class GALGAS_instructionGenerationList & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category reader '@abstractInstructionGeneration instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractInstructionGeneration_instructionCode) (const class cPtr_abstractInstructionGeneration * inObject,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionCode (const int32_t inClassIndex,
                                          categoryReaderSignature_abstractInstructionGeneration_instructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_instructionCode (const class cPtr_abstractInstructionGeneration * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Category Getter '@procEffectiveParameterPassingMode passingModeForActualSelector' (as function)           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_passingModeForActualSelector (const class GALGAS_procEffectiveParameterPassingMode & inObject,
                                                                 class GALGAS_lstring inArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                         const class GALGAS_receiverType constinArgument0,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                         const class GALGAS_semanticContext constinArgument2,
                                                                         const class GALGAS_string constinArgument3,
                                                                         class GALGAS_globalLiteralStringMap & ioArgument4,
                                                                         class GALGAS_variableMap & ioArgument5,
                                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument6,
                                                                         class GALGAS_abstractExpressionGeneration & outArgument7,
                                                                         class C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpression (const int32_t inClassIndex,
                                            categoryMethodSignature_expressionAST_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                           const GALGAS_receiverType constin_inReceiverType,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_string constin_inMode,
                                           GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_variableMap & io_ioVariableMap,
                                           GALGAS_unifiedTypeMap_2D_proxy & out_outExpressionType,
                                           GALGAS_abstractExpressionGeneration & out_outGeneratedCode,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category reader '@abstractInfixOperatorGeneration generateInfixExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractInfixOperatorGeneration_generateInfixExpression) (const class cPtr_abstractInfixOperatorGeneration * inObject,
                                                                                                                class GALGAS_abstractExpressionGeneration inArgument0,
                                                                                                                class GALGAS_abstractExpressionGeneration inArgument1,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_generateInfixExpression (const int32_t inClassIndex,
                                                  categoryReaderSignature_abstractInfixOperatorGeneration_generateInfixExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_generateInfixExpression (const class cPtr_abstractInfixOperatorGeneration * inObject,
                                                                GALGAS_abstractExpressionGeneration in_inleft,
                                                                GALGAS_abstractExpressionGeneration in_inRight,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category reader '@abstractGeneration headerCodeGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractGeneration_headerCodeGeneration) (const class cPtr_abstractGeneration * inObject,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerCodeGeneration (const int32_t inClassIndex,
                                               categoryReaderSignature_abstractGeneration_headerCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_headerCodeGeneration (const class cPtr_abstractGeneration * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@abstractGeneration implementationCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractGeneration_implementationCodeGeneration) (const class cPtr_abstractGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_implementationCodeGeneration (const int32_t inClassIndex,
                                                       categoryReaderSignature_abstractGeneration_implementationCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_implementationCodeGeneration (const class cPtr_abstractGeneration * inObject,
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
//                                    Category method '@infixOperatorMap checkWith'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_checkWith (const class GALGAS_infixOperatorMap inObject,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inLeftType,
                               const class GALGAS_unifiedTypeMap_2D_proxy constin_inRightType,
                               const class GALGAS_lstring constin_inOperator,
                               class GALGAS_unifiedTypeMap_2D_proxy & out_outResultType,
                               class GALGAS_abstractInfixOperatorGeneration & out_outOpString,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

#endif
