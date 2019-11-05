#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-8.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @standaloneRoutineCallIR class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_standaloneRoutineCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_standaloneRoutineCallIR (void) ;

//---
  public : inline const class cPtr_standaloneRoutineCallIR * ptr (void) const { return (const cPtr_standaloneRoutineCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_standaloneRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_standaloneRoutineCallIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standaloneRoutineCallIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @standaloneRoutineCallIR class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_lstring mProperty_mFunctionMangledName ;
  public : GALGAS_string mProperty_mFunctionNameForGeneration ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                         const GALGAS_lstring & in_mFunctionMangledName,
                                         const GALGAS_string & in_mFunctionNameForGeneration,
                                         const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @terminusNativePrefixOperator class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_terminusNativePrefixOperator : public GALGAS_terminusPrefixOperator {
//--- Constructor
  public : GALGAS_terminusNativePrefixOperator (void) ;

//---
  public : inline const class cPtr_terminusNativePrefixOperator * ptr (void) const { return (const cPtr_terminusNativePrefixOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminusNativePrefixOperator (const cPtr_terminusNativePrefixOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminusNativePrefixOperator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminusNativePrefixOperator constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_ctExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminusNativePrefixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInfixOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminusNativePrefixOperator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminusNativePrefixOperator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @terminusNativePrefixOperator class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_terminusNativePrefixOperator : public cPtr_terminusPrefixOperator {
//--- Attributes
  public : GALGAS_location mProperty_mInfixOperatorLocation ;
  public : GALGAS_lstring mProperty_mReceiverOperandName ;
  public : GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_terminusNativePrefixOperator (const GALGAS_location & in_mInfixOperatorLocation,
                                              const GALGAS_lstring & in_mReceiverOperandName,
                                              const GALGAS_ctExpressionAST & in_mExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInfixOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @assignmentRoutineIR class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignmentRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_assignmentRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_assignmentRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_assignmentRoutineIR * ptr (void) const { return (const cPtr_assignmentRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentRoutineIR (const cPtr_assignmentRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentRoutineIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_omnibusType & inOperand3,
                                                                    const class GALGAS_string & inOperand4,
                                                                    const class GALGAS_omnibusType & inOperand5,
                                                                    const class GALGAS_string & inOperand6,
                                                                    const class GALGAS_stringlist & inOperand7,
                                                                    const class GALGAS_allocaList & inOperand8
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentRoutineIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @assignmentRoutineIR class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_assignmentRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mTargetType ;
  public : GALGAS_string mProperty_mTargetVarName ;
  public : GALGAS_omnibusType mProperty_mSourceType ;
  public : GALGAS_string mProperty_mSourceVarName ;
  public : GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public : GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public : cPtr_assignmentRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                     const GALGAS_bool & in_isRequired,
                                     const GALGAS_bool & in_warnsIfUnused,
                                     const GALGAS_omnibusType & in_mTargetType,
                                     const GALGAS_string & in_mTargetVarName,
                                     const GALGAS_omnibusType & in_mSourceType,
                                     const GALGAS_string & in_mSourceVarName,
                                     const GALGAS_stringlist & in_mGeneratedInstructions,
                                     const GALGAS_allocaList & in_mAllocaList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSourceVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @userLLVMStaticArrayTypeDefinitionIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_userLLVMStaticArrayTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--- Constructor
  public : GALGAS_userLLVMStaticArrayTypeDefinitionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_userLLVMStaticArrayTypeDefinitionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_userLLVMStaticArrayTypeDefinitionIR * ptr (void) const { return (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_userLLVMStaticArrayTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_userLLVMStaticArrayTypeDefinitionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                    const class GALGAS_omnibusType & inOperand1,
                                                                                    const class GALGAS_bigint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMStaticArrayTypeDefinitionIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @userLLVMStaticArrayTypeDefinitionIR class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_userLLVMStaticArrayTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mElementType ;
  public : GALGAS_bigint mProperty_mSize ;

//--- Constructor
  public : cPtr_userLLVMStaticArrayTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                     const GALGAS_omnibusType & in_mElementType,
                                                     const GALGAS_bigint & in_mSize
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @staticArrayTypeAssignFunctionIR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_staticArrayTypeAssignFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_staticArrayTypeAssignFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_staticArrayTypeAssignFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_staticArrayTypeAssignFunctionIR * ptr (void) const { return (const cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticArrayTypeAssignFunctionIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticArrayTypeAssignFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_omnibusType & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mStaticArrayType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticArrayTypeAssignFunctionIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @staticArrayTypeAssignFunctionIR class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_staticArrayTypeAssignFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mStaticArrayType ;

//--- Constructor
  public : cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                 const GALGAS_bool & in_isRequired,
                                                 const GALGAS_bool & in_warnsIfUnused,
                                                 const GALGAS_omnibusType & in_mStaticArrayType
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mStaticArrayType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @dynArrayAppendFunctionIR class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_dynArrayAppendFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_dynArrayAppendFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dynArrayAppendFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_dynArrayAppendFunctionIR * ptr (void) const { return (const cPtr_dynArrayAppendFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dynArrayAppendFunctionIR extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_dynArrayAppendFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                         const class GALGAS_string & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dynArrayAppendFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mArrayTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mElementTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInsertFunctionMangledName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynArrayAppendFunctionIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @dynArrayAppendFunctionIR class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_dynArrayAppendFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mArrayTypeProxy ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mElementTypeProxy ;
  public : GALGAS_string mProperty_mInsertFunctionMangledName ;

//--- Constructor
  public : cPtr_dynArrayAppendFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                          const GALGAS_bool & in_isRequired,
                                          const GALGAS_bool & in_warnsIfUnused,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mArrayTypeProxy,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                          const GALGAS_string & in_mInsertFunctionMangledName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mArrayTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mElementTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mInsertFunctionMangledName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@structurePropertyListAST-element enterPropertyInContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterPropertyInContext (const class GALGAS_structurePropertyListAST_2D_element inObject,
                                             class GALGAS_semanticContext & io_ioContext,
                                             class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                             const class GALGAS_lstring constin_inReceiverTypeName,
                                             const class GALGAS_string constin_inReceiverLLVMBaseTypeName,
                                             class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                             class GALGAS_propertyList & io_ioPropertyList,
                                             class GALGAS_propertyGetterMap & io_ioPropertyGetterMap,
                                             class GALGAS_propertySetterMap & io_ioPropertySetterMap,
                                             class GALGAS_sortedOperandIRList & io_sortedOperandIRList,
                                             class GALGAS_constructorSignature & io_constructorSignature,
                                             class GALGAS_string & io_ioConstructorKey,
                                             class GALGAS_bool & io_canBeCopied,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'setterLLVMName'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_setterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'computeStaticExpression'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_computeStaticExpression (class GALGAS_semanticContext & ioArgument0,
                                      class GALGAS_staticEntityMap & ioArgument1,
                                      const class GALGAS_expressionAST constinArgument2,
                                      const class GALGAS_location constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      class GALGAS_objectIR & outArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

