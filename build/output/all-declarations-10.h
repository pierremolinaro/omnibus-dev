#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorCallAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constructorCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constructorCallAST_2D_weak (const class GALGAS_constructorCallAST & inSource) ;

  public: GALGAS_constructorCallAST_2D_weak & operator = (const class GALGAS_constructorCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constructorCallAST bang_constructorCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeInfixOperatorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixOperatorAST_2D_weak (const class GALGAS_compileTimeInfixOperatorAST & inSource) ;

  public: GALGAS_compileTimeInfixOperatorAST_2D_weak & operator = (const class GALGAS_compileTimeInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixOperatorAST bang_compileTimeInfixOperatorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeInfixOperatorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixOperatorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorUsage (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixOperatorUsage (const class cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeInfixOperatorUsage constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_ctExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_compileTimeInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                              const GALGAS_lstring & in_mRightOperandName,
                                              const GALGAS_ctExpressionAST & in_mExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeInfixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak (const class GALGAS_compileTimeInfixOperatorUsage & inSource) ;

  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimeInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixOperatorUsage bang_compileTimeInfixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeInfixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_compileTimeInfixOperatorUsage_eval) (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                                                                             const class GALGAS_objectIR constinArgument0,
                                                                             const class GALGAS_objectIR constinArgument1,
                                                                             class GALGAS_bigint & outArgument2,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_eval (const int32_t inClassIndex,
                                extensionMethodSignature_compileTimeInfixOperatorUsage_eval inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GALGAS_objectIR constin_inLeftOperand,
                               const GALGAS_objectIR constin_inRightOperand,
                               GALGAS_bigint & out_outResult,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (const class cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mEqualOperatorUsage (void) const ;

  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mLessThanOperatorUsage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeInfixInfEqualOperatorUsage constructor_new (const class GALGAS_compileTimeInfixOperatorUsage & inOperand0,
                                                                                     const class GALGAS_compileTimeInfixOperatorUsage & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEqualOperatorUsage (class GALGAS_compileTimeInfixOperatorUsage inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLessThanOperatorUsage (class GALGAS_compileTimeInfixOperatorUsage inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixInfEqualOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixInfEqualOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;

//--- Constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                      const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (const class GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage bang_compileTimeInfixInfEqualOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmInfixOperatorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInfixOperatorAST_2D_weak (const class GALGAS_llvmInfixOperatorAST & inSource) ;

  public: GALGAS_llvmInfixOperatorAST_2D_weak & operator = (const class GALGAS_llvmInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInfixOperatorAST bang_llvmInfixOperatorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmInfixOperatorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmInfixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInfixOperatorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInfixOperatorUsage (const class cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mInfixMangledFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmInfixOperatorUsage constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_llvmGenerationInstructionList & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInfixMangledFunctionName (class GALGAS_string inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mInfixMangledFunctionName ;
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_llvmInfixOperatorUsage (const GALGAS_string & in_mInfixMangledFunctionName,
                                       const GALGAS_lstring & in_mLeftOperandName,
                                       const GALGAS_lstring & in_mRightOperandName,
                                       const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmInfixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInfixOperatorUsage_2D_weak (const class GALGAS_llvmInfixOperatorUsage & inSource) ;

  public: GALGAS_llvmInfixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInfixOperatorUsage bang_llvmInfixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmInfixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmInlineInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmInlineInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInlineInfixOperatorUsage (const class cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmInlineInfixOperatorUsage constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmInlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_llvmInlineInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                             const GALGAS_lstring & in_mRightOperandName,
                                             const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInlineInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmInlineInfixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak (const class GALGAS_llvmInlineInfixOperatorUsage & inSource) ;

  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmInlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInlineInfixOperatorUsage bang_llvmInlineInfixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInlineInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmInlineInfixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmInlineInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_infixOperatorRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_infixOperatorRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_infixOperatorRoutineIR (const class cPtr_infixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mTargetVarName (void) const ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;

  public: class GALGAS_string readProperty_mSourceVarName (void) const ;

  public: class GALGAS_omnibusType readProperty_mResultType (void) const ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_infixOperatorRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_omnibusType & inOperand3,
                                                                      const class GALGAS_string & inOperand4,
                                                                      const class GALGAS_omnibusType & inOperand5,
                                                                      const class GALGAS_string & inOperand6,
                                                                      const class GALGAS_omnibusType & inOperand7,
                                                                      const class GALGAS_stringlist & inOperand8,
                                                                      const class GALGAS_allocaList & inOperand9
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_infixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (class GALGAS_stringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceVarName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @infixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_infixOperatorRoutineIR : public cPtr_abstractRoutineIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetVarName ;
  public: GALGAS_omnibusType mProperty_mSourceType ;
  public: GALGAS_string mProperty_mSourceVarName ;
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public: cPtr_infixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                       const GALGAS_bool & in_isRequired,
                                       const GALGAS_bool & in_warnsIfUnused,
                                       const GALGAS_omnibusType & in_mTargetType,
                                       const GALGAS_string & in_mTargetVarName,
                                       const GALGAS_omnibusType & in_mSourceType,
                                       const GALGAS_string & in_mSourceVarName,
                                       const GALGAS_omnibusType & in_mResultType,
                                       const GALGAS_stringlist & in_mGeneratedInstructions,
                                       const GALGAS_allocaList & in_mAllocaList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_infixOperatorRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_infixOperatorRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_infixOperatorRoutineIR_2D_weak (const class GALGAS_infixOperatorRoutineIR & inSource) ;

  public: GALGAS_infixOperatorRoutineIR_2D_weak & operator = (const class GALGAS_infixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_infixOperatorRoutineIR bang_infixOperatorRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_infixOperatorRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_infixOperatorRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimePrefixOperatorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compiletimePrefixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compiletimePrefixOperatorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compiletimePrefixOperatorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compiletimePrefixOperatorAST_2D_weak (const class GALGAS_compiletimePrefixOperatorAST & inSource) ;

  public: GALGAS_compiletimePrefixOperatorAST_2D_weak & operator = (const class GALGAS_compiletimePrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compiletimePrefixOperatorAST bang_compiletimePrefixOperatorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compiletimePrefixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compiletimePrefixOperatorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compiletimePrefixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compiletimePrefixOperatorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimePrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimePrefixOperatorUsage (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimePrefixOperatorUsage (const class cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mPrefixOperatorLocation (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverOperandName (void) const ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimePrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimePrefixOperatorUsage constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_ctExpressionAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefixOperatorLocation (class GALGAS_location inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimePrefixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimePrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimePrefixOperatorUsage : public cPtr_prefixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mPrefixOperatorLocation ;
  public: GALGAS_lstring mProperty_mReceiverOperandName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_compileTimePrefixOperatorUsage (const GALGAS_location & in_mPrefixOperatorLocation,
                                               const GALGAS_lstring & in_mReceiverOperandName,
                                               const GALGAS_ctExpressionAST & in_mExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimePrefixOperatorUsage_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimePrefixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak (const class GALGAS_compileTimePrefixOperatorUsage & inSource) ;

  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimePrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimePrefixOperatorUsage bang_compileTimePrefixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimePrefixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimePrefixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimePrefixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimePrefixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmPrefixOperatorAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmPrefixOperatorAST_2D_weak (const class GALGAS_llvmPrefixOperatorAST & inSource) ;

  public: GALGAS_llvmPrefixOperatorAST_2D_weak & operator = (const class GALGAS_llvmPrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmPrefixOperatorAST bang_llvmPrefixOperatorAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmPrefixOperatorAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmPrefixOperatorAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmPrefixOperatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_llvmPrefixOperatorUsage (const class cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mPrefixMangledFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverOperandName (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmPrefixOperatorUsage constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPrefixMangledFunctionName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmPrefixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmPrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorUsage : public cPtr_prefixOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mPrefixMangledFunctionName ;
  public: GALGAS_lstring mProperty_mReceiverOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorUsage (const GALGAS_string & in_mPrefixMangledFunctionName,
                                        const GALGAS_lstring & in_mReceiverOperandName,
                                        const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorUsage_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmPrefixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmPrefixOperatorUsage_2D_weak (const class GALGAS_llvmPrefixOperatorUsage & inSource) ;

  public: GALGAS_llvmPrefixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmPrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmPrefixOperatorUsage bang_llvmPrefixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmPrefixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmPrefixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefixOperatorRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_prefixOperatorRoutineIR (const class cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mReceiverVarName (void) const ;

  public: class GALGAS_omnibusType readProperty_mResultType (void) const ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefixOperatorRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_omnibusType & inOperand3,
                                                                       const class GALGAS_string & inOperand4,
                                                                       const class GALGAS_omnibusType & inOperand5,
                                                                       const class GALGAS_stringlist & inOperand6,
                                                                       const class GALGAS_allocaList & inOperand7
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (class GALGAS_stringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverVarName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorRoutineIR : public cPtr_abstractRoutineIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mReceiverVarName ;
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public: cPtr_prefixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                        const GALGAS_bool & in_isRequired,
                                        const GALGAS_bool & in_warnsIfUnused,
                                        const GALGAS_omnibusType & in_mReceiverType,
                                        const GALGAS_string & in_mReceiverVarName,
                                        const GALGAS_omnibusType & in_mResultType,
                                        const GALGAS_stringlist & in_mGeneratedInstructions,
                                        const GALGAS_allocaList & in_mAllocaList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_prefixOperatorRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefixOperatorRoutineIR_2D_weak (const class GALGAS_prefixOperatorRoutineIR & inSource) ;

  public: GALGAS_prefixOperatorRoutineIR_2D_weak & operator = (const class GALGAS_prefixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefixOperatorRoutineIR bang_prefixOperatorRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_prefixOperatorRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefixOperatorRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @checkInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_checkInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_checkInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_checkInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_checkInstructionAST_2D_weak (const class GALGAS_checkInstructionAST & inSource) ;

  public: GALGAS_checkInstructionAST_2D_weak & operator = (const class GALGAS_checkInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_checkInstructionAST bang_checkInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_checkInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_checkInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_checkInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstructionAST_2D_weak (const class GALGAS_assignmentInstructionAST & inSource) ;

  public: GALGAS_assignmentInstructionAST_2D_weak & operator = (const class GALGAS_assignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstructionAST bang_assignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const class GALGAS_LValueAST inObject,
                                                const class GALGAS_omnibusType constin_inSelfType,
                                                const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                const class GALGAS_semanticContext constin_inContext,
                                                const class GALGAS_mode constin_inMode,
                                                class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                class GALGAS_allocaList & io_ioAllocaList,
                                                class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                class GALGAS_instructionListListIR & io_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment (const class GALGAS_omnibusType constinArgument0,
                                            const class GALGAS_routineAttributes constinArgument1,
                                            const class GALGAS_semanticContext constinArgument2,
                                            const class GALGAS_mode constinArgument3,
                                            class GALGAS_semanticTemporariesStruct & ioArgument4,
                                            class GALGAS_staticEntityMap & ioArgument5,
                                            class GALGAS_universalValuedObjectMap & ioArgument6,
                                            class GALGAS_allocaList & ioArgument7,
                                            class GALGAS_instructionListIR & ioArgument8,
                                            class GALGAS_instructionListListIR & ioArgument9,
                                            const class GALGAS_LValueOperandAST constinArgument10,
                                            class GALGAS_LValueRepresentation & outArgument11,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment (const class GALGAS_omnibusType constinArgument0,
                                                  const class GALGAS_routineAttributes constinArgument1,
                                                  const class GALGAS_semanticContext constinArgument2,
                                                  const class GALGAS_mode constinArgument3,
                                                  class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                  class GALGAS_staticEntityMap & ioArgument5,
                                                  class GALGAS_universalValuedObjectMap & ioArgument6,
                                                  class GALGAS_allocaList & ioArgument7,
                                                  class GALGAS_instructionListIR & ioArgument8,
                                                  class GALGAS_instructionListListIR & ioArgument9,
                                                  const class GALGAS_lstring constinArgument10,
                                                  const class GALGAS_string constinArgument11,
                                                  const class GALGAS_omnibusType constinArgument12,
                                                  const class GALGAS_LValueOperandAST constinArgument13,
                                                  class GALGAS_LValueRepresentation & outArgument14,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterAssignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterAssignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterAssignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak (const class GALGAS_controlRegisterAssignmentInstructionAST & inSource) ;

  public: GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_controlRegisterAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_controlRegisterAssignmentInstructionAST bang_controlRegisterAssignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterAssignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterAssignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceAssignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sliceAssignmentInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sliceAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sliceAssignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sliceAssignmentInstructionAST_2D_weak (const class GALGAS_sliceAssignmentInstructionAST & inSource) ;

  public: GALGAS_sliceAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_sliceAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sliceAssignmentInstructionAST bang_sliceAssignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sliceAssignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sliceAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sliceAssignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bitbandInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bitbandInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bitbandInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bitbandInstructionAST_2D_weak (const class GALGAS_bitbandInstructionAST & inSource) ;

  public: GALGAS_bitbandInstructionAST_2D_weak & operator = (const class GALGAS_bitbandInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bitbandInstructionAST bang_bitbandInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bitbandInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bitbandInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bitbandInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitbandInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varInstructionWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInstructionWithAssignmentAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInstructionWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInstructionWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInstructionWithAssignmentAST_2D_weak (const class GALGAS_varInstructionWithAssignmentAST & inSource) ;

  public: GALGAS_varInstructionWithAssignmentAST_2D_weak & operator = (const class GALGAS_varInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInstructionWithAssignmentAST bang_varInstructionWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInstructionWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInstructionWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInstructionWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varDeclarationInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varDeclarationInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varDeclarationInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varDeclarationInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varDeclarationInstructionAST_2D_weak (const class GALGAS_varDeclarationInstructionAST & inSource) ;

  public: GALGAS_varDeclarationInstructionAST_2D_weak & operator = (const class GALGAS_varDeclarationInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varDeclarationInstructionAST bang_varDeclarationInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varDeclarationInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varDeclarationInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varDeclarationInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varDeclarationInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @letInstructionWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_letInstructionWithAssignmentAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_letInstructionWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_letInstructionWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_letInstructionWithAssignmentAST_2D_weak (const class GALGAS_letInstructionWithAssignmentAST & inSource) ;

  public: GALGAS_letInstructionWithAssignmentAST_2D_weak & operator = (const class GALGAS_letInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_letInstructionWithAssignmentAST bang_letInstructionWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_letInstructionWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_letInstructionWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionAST_2D_weak (const class GALGAS_forInstructionAST & inSource) ;

  public: GALGAS_forInstructionAST_2D_weak & operator = (const class GALGAS_forInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionAST bang_forInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnArrayIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnArrayIR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionOnArrayIR (const class cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mEnumeratedValueName (void) const ;

  public: class GALGAS_lstring readProperty_mIteratedObjectName (void) const ;

  public: class GALGAS_objectIR readProperty_mIteratedObject (void) const ;

  public: class GALGAS_instructionListIR readProperty_mWhileInstructionList (void) const ;

  public: class GALGAS_string readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const ;

  public: class GALGAS_instructionListIR readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;

  public: class GALGAS_uint readProperty_mArraySize (void) const ;

  public: class GALGAS_stringset readProperty_mInvokedFunctionSet (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnArrayIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionOnArrayIR constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_objectIR & inOperand2,
                                                                       const class GALGAS_instructionListIR & inOperand3,
                                                                       const class GALGAS_string & inOperand4,
                                                                       const class GALGAS_instructionListIR & inOperand5,
                                                                       const class GALGAS_omnibusType & inOperand6,
                                                                       const class GALGAS_uint & inOperand7,
                                                                       const class GALGAS_stringset & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArraySize (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (class GALGAS_instructionListIR inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedValueName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvokedFunctionSet (class GALGAS_stringset inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIteratedObject (class GALGAS_objectIR inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIteratedObjectName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileExpressionBooleanResult_5F_llvmName (class GALGAS_string inArgument0
                                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileInstructionList (class GALGAS_instructionListIR inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnArrayIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionOnArrayIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mEnumeratedValueName ;
  public: GALGAS_lstring mProperty_mIteratedObjectName ;
  public: GALGAS_objectIR mProperty_mIteratedObject ;
  public: GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public: GALGAS_string mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  public: GALGAS_instructionListIR mProperty_mDoInstructionList ;
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public: cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                        const GALGAS_lstring & in_mIteratedObjectName,
                                        const GALGAS_objectIR & in_mIteratedObject,
                                        const GALGAS_instructionListIR & in_mWhileInstructionList,
                                        const GALGAS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                        const GALGAS_instructionListIR & in_mDoInstructionList,
                                        const GALGAS_omnibusType & in_mElementType,
                                        const GALGAS_uint & in_mArraySize,
                                        const GALGAS_stringset & in_mInvokedFunctionSet
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnArrayIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnArrayIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnArrayIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionOnArrayIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionOnArrayIR_2D_weak (const class GALGAS_forInstructionOnArrayIR & inSource) ;

  public: GALGAS_forInstructionOnArrayIR_2D_weak & operator = (const class GALGAS_forInstructionOnArrayIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionOnArrayIR bang_forInstructionOnArrayIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnArrayIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionOnArrayIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnArrayIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnLiteralStringIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnLiteralStringIR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionOnLiteralStringIR (const class cPtr_forInstructionOnLiteralStringIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mVarName (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_objectIR readProperty_mStringElementIteratedObject (void) const ;

  public: class GALGAS_omnibusType readProperty_mLiteralStringType (void) const ;

  public: class GALGAS_instructionListIR readProperty_mWhileInstructionList (void) const ;

  public: class GALGAS_objectIR readProperty_mWhileExpressionResult (void) const ;

  public: class GALGAS_instructionListIR readProperty_mDoInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnLiteralStringIR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionOnLiteralStringIR constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_objectIR & inOperand2,
                                                                               const class GALGAS_omnibusType & inOperand3,
                                                                               const class GALGAS_instructionListIR & inOperand4,
                                                                               const class GALGAS_objectIR & inOperand5,
                                                                               const class GALGAS_instructionListIR & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionOnLiteralStringIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (class GALGAS_instructionListIR inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralStringType (class GALGAS_omnibusType inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringElementIteratedObject (class GALGAS_objectIR inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileExpressionResult (class GALGAS_objectIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhileInstructionList (class GALGAS_instructionListIR inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnLiteralStringIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionOnLiteralStringIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnLiteralStringIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mVarName ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_objectIR mProperty_mStringElementIteratedObject ;
  public: GALGAS_omnibusType mProperty_mLiteralStringType ;
  public: GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public: GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public: GALGAS_instructionListIR mProperty_mDoInstructionList ;

//--- Constructor
  public: cPtr_forInstructionOnLiteralStringIR (const GALGAS_string & in_mVarName,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                const GALGAS_omnibusType & in_mLiteralStringType,
                                                const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                const GALGAS_objectIR & in_mWhileExpressionResult,
                                                const GALGAS_instructionListIR & in_mDoInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionOnLiteralStringIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionOnLiteralStringIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionOnLiteralStringIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak (const class GALGAS_forInstructionOnLiteralStringIR & inSource) ;

  public: GALGAS_forInstructionOnLiteralStringIR_2D_weak & operator = (const class GALGAS_forInstructionOnLiteralStringIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionOnLiteralStringIR bang_forInstructionOnLiteralStringIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionOnLiteralStringIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionOnLiteralStringIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionOnLiteralStringIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnLiteralStringIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forLowerUpperBoundInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak (const class GALGAS_forLowerUpperBoundInstructionAST & inSource) ;

  public: GALGAS_forLowerUpperBoundInstructionAST_2D_weak & operator = (const class GALGAS_forLowerUpperBoundInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forLowerUpperBoundInstructionAST bang_forLowerUpperBoundInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forLowerUpperBoundInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionIR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forLowerUpperBoundInstructionIR (const class cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mVarName (void) const ;

  public: class GALGAS_omnibusType readProperty_mType (void) const ;

  public: class GALGAS_bool readProperty_mUnsigned (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_objectIR readProperty_mLowerExpressionResult (void) const ;

  public: class GALGAS_objectIR readProperty_mUpperExpressionResult (void) const ;

  public: class GALGAS_instructionListIR readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionIR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forLowerUpperBoundInstructionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_omnibusType & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_location & inOperand3,
                                                                               const class GALGAS_objectIR & inOperand4,
                                                                               const class GALGAS_objectIR & inOperand5,
                                                                               const class GALGAS_instructionListIR & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_instructionListIR inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerExpressionResult (class GALGAS_objectIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_omnibusType inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUnsigned (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperExpressionResult (class GALGAS_objectIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_string inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forLowerUpperBoundInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forLowerUpperBoundInstructionIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mVarName ;
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_bool mProperty_mUnsigned ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_objectIR mProperty_mLowerExpressionResult ;
  public: GALGAS_objectIR mProperty_mUpperExpressionResult ;
  public: GALGAS_instructionListIR mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                const GALGAS_omnibusType & in_mType,
                                                const GALGAS_bool & in_mUnsigned,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_objectIR & in_mLowerExpressionResult,
                                                const GALGAS_objectIR & in_mUpperExpressionResult,
                                                const GALGAS_instructionListIR & in_mInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forLowerUpperBoundInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forLowerUpperBoundInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forLowerUpperBoundInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak (const class GALGAS_forLowerUpperBoundInstructionIR & inSource) ;

  public: GALGAS_forLowerUpperBoundInstructionIR_2D_weak & operator = (const class GALGAS_forLowerUpperBoundInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forLowerUpperBoundInstructionIR bang_forLowerUpperBoundInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forLowerUpperBoundInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forLowerUpperBoundInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @callInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_callInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_callInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_callInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_callInstructionAST_2D_weak (const class GALGAS_callInstructionAST & inSource) ;

  public: GALGAS_callInstructionAST_2D_weak & operator = (const class GALGAS_callInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_callInstructionAST bang_callInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_callInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_callInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_callInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_callInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @standAloneProcedureCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_standAloneProcedureCallInstructionAST_2D_weak : public GALGAS_callInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_standAloneProcedureCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak (const class GALGAS_standAloneProcedureCallInstructionAST & inSource) ;

  public: GALGAS_standAloneProcedureCallInstructionAST_2D_weak & operator = (const class GALGAS_standAloneProcedureCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standAloneProcedureCallInstructionAST bang_standAloneProcedureCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_standAloneProcedureCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_standAloneProcedureCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_standAloneProcedureCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standAloneProcedureCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procedureCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procedureCallInstructionAST_2D_weak : public GALGAS_callInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procedureCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procedureCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procedureCallInstructionAST_2D_weak (const class GALGAS_procedureCallInstructionAST & inSource) ;

  public: GALGAS_procedureCallInstructionAST_2D_weak & operator = (const class GALGAS_procedureCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procedureCallInstructionAST bang_procedureCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procedureCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procedureCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procedureCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procedureCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const class GALGAS_LValueAST inObject,
                                    const class GALGAS_omnibusType constin_inSelfType,
                                    const class GALGAS_bool constin_inIsAddressOf,
                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                    const class GALGAS_semanticContext constin_inContext,
                                    const class GALGAS_mode constin_inMode,
                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                    class GALGAS_allocaList & io_ioAllocaList,
                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                    class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'mutatingAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue (const class GALGAS_omnibusType constinArgument0,
                                const class GALGAS_routineAttributes constinArgument1,
                                const class GALGAS_semanticContext constinArgument2,
                                const class GALGAS_mode constinArgument3,
                                class GALGAS_semanticTemporariesStruct & ioArgument4,
                                class GALGAS_staticEntityMap & ioArgument5,
                                class GALGAS_universalValuedObjectMap & ioArgument6,
                                class GALGAS_allocaList & ioArgument7,
                                class GALGAS_instructionListIR & ioArgument8,
                                const class GALGAS_LValueOperandAST constinArgument9,
                                class GALGAS_LValueRepresentation & outArgument10,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue (const class GALGAS_omnibusType constinArgument0,
                                      const class GALGAS_bool constinArgument1,
                                      const class GALGAS_routineAttributes constinArgument2,
                                      const class GALGAS_semanticContext constinArgument3,
                                      const class GALGAS_mode constinArgument4,
                                      class GALGAS_semanticTemporariesStruct & ioArgument5,
                                      class GALGAS_staticEntityMap & ioArgument6,
                                      class GALGAS_universalValuedObjectMap & ioArgument7,
                                      class GALGAS_allocaList & ioArgument8,
                                      class GALGAS_instructionListIR & ioArgument9,
                                      const class GALGAS_lstring constinArgument10,
                                      const class GALGAS_string constinArgument11,
                                      const class GALGAS_omnibusType constinArgument12,
                                      const class GALGAS_LValueOperandAST constinArgument13,
                                      class GALGAS_LValueRepresentation & outArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const class GALGAS_controlRegisterLValueAST inObject,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const class GALGAS_controlRegisterLValueAST inObject,
                                                           const class GALGAS_lstring constin_inConstantName,
                                                           class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const class GALGAS_controlRegisterLValueAST inObject,
                                                            const class GALGAS_bool constin_inWriteAccess,
                                                            const class GALGAS_omnibusType constin_inSelfType,
                                                            const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                            const class GALGAS_semanticContext constin_inContext,
                                                            const class GALGAS_mode constin_inMode,
                                                            class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                            class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                            class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                            class GALGAS_allocaList & io_ioAllocaList,
                                                            class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                            class GALGAS_omnibusType & out_outRegisterType,
                                                            class GALGAS_uint & out_outRegisterTypeBitCount,
                                                            class GALGAS_sliceMap & out_outSliceMap,
                                                            class GALGAS_string & out_outllvmRegisterAddressName,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew (const class GALGAS_omnibusType constinArgument0,
                                      const class GALGAS_routineAttributes constinArgument1,
                                      const class GALGAS_semanticContext constinArgument2,
                                      const class GALGAS_mode constinArgument3,
                                      class GALGAS_semanticTemporariesStruct & ioArgument4,
                                      class GALGAS_staticEntityMap & ioArgument5,
                                      class GALGAS_universalValuedObjectMap & ioArgument6,
                                      class GALGAS_allocaList & ioArgument7,
                                      const class GALGAS_expressionAST constinArgument8,
                                      const class GALGAS_location constinArgument9,
                                      const class GALGAS_bool constinArgument10,
                                      const class GALGAS_bigint constinArgument11,
                                      const class GALGAS_omnibusType constinArgument12,
                                      class GALGAS_instructionListIR & ioArgument13,
                                      class GALGAS_objectIR & outArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration) (const class cPtr_abstractRoutineIR * inObject,
                                                                                     class GALGAS_primitiveAndServiceIRlist & ioArgument0,
                                                                                     class GALGAS_sectionIRlist & ioArgument1,
                                                                                     class GALGAS_generationAdds & ioArgument2,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_svcDeclarationGeneration (const int32_t inClassIndex,
                                                    extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (const class cPtr_abstractRoutineIR * inObject,
                                                   GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GALGAS_sectionIRlist & io_ioSectionList,
                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities) (const class cPtr_abstractRoutineIR * inObject,
                                                                                    class GALGAS_stringset & ioArgument0,
                                                                                    class GALGAS_uint & ioArgument1,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractRoutineIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binaryOperationIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperationIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_binaryOperationIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binaryOperationIR_2D_weak (const class GALGAS_binaryOperationIR & inSource) ;

  public: GALGAS_binaryOperationIR_2D_weak & operator = (const class GALGAS_binaryOperationIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binaryOperationIR bang_binaryOperationIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperationIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binaryOperationIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binaryOperationIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binaryOperationIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          const class GALGAS_bigint constinArgument1,
                                                                                          class GALGAS_string & ioArgument2,
                                                                                          const class GALGAS_generationContext constinArgument3,
                                                                                          class GALGAS_generationAdds & ioArgument4,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_panicRoutineNameForLocationFile (const class GALGAS_location & constinArgument0,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) (const class cPtr_binaryOperationIR * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                     const class GALGAS_generationContext constinArgument3,
                                                                                                     class GALGAS_generationAdds & ioArgument4,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const class cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @storeToUniversalReferenceIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_storeToUniversalReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeToUniversalReferenceIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_storeToUniversalReferenceIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeToUniversalReferenceIR_2D_weak (const class GALGAS_storeToUniversalReferenceIR & inSource) ;

  public: GALGAS_storeToUniversalReferenceIR_2D_weak & operator = (const class GALGAS_storeToUniversalReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeToUniversalReferenceIR bang_storeToUniversalReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_storeToUniversalReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_storeToUniversalReferenceIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_storeToUniversalReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeToUniversalReferenceIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @storeFromTemporaryReferenceIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_storeFromTemporaryReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_storeFromTemporaryReferenceIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak (const class GALGAS_storeFromTemporaryReferenceIR & inSource) ;

  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak & operator = (const class GALGAS_storeFromTemporaryReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeFromTemporaryReferenceIR bang_storeFromTemporaryReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_storeFromTemporaryReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_storeFromTemporaryReferenceIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_storeFromTemporaryReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeFromTemporaryReferenceIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_standaloneRoutineCallIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_standaloneRoutineCallIR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_standaloneRoutineCallIR (const class cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;

  public: class GALGAS_lstring readProperty_mFunctionMangledName (void) const ;

  public: class GALGAS_string readProperty_mFunctionNameForGeneration (void) const ;

  public: class GALGAS_procCallEffectiveParameterListIR readProperty_mArgumentList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_standaloneRoutineCallIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArgumentList (class GALGAS_procCallEffectiveParameterListIR inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionMangledName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameForGeneration (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResult (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standaloneRoutineCallIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @standaloneRoutineCallIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_lstring mProperty_mFunctionMangledName ;
  public: GALGAS_string mProperty_mFunctionNameForGeneration ;
  public: GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public: cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                        const GALGAS_lstring & in_mFunctionMangledName,
                                        const GALGAS_string & in_mFunctionNameForGeneration,
                                        const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_standaloneRoutineCallIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standaloneRoutineCallIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_standaloneRoutineCallIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standaloneRoutineCallIR_2D_weak (const class GALGAS_standaloneRoutineCallIR & inSource) ;

  public: GALGAS_standaloneRoutineCallIR_2D_weak & operator = (const class GALGAS_standaloneRoutineCallIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standaloneRoutineCallIR bang_standaloneRoutineCallIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneRoutineCallIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_standaloneRoutineCallIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standaloneRoutineCallIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @releaseIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_releaseIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_releaseIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_releaseIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_releaseIR_2D_weak (const class GALGAS_releaseIR & inSource) ;

  public: GALGAS_releaseIR_2D_weak & operator = (const class GALGAS_releaseIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_releaseIR bang_releaseIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_releaseIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_releaseIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_releaseIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_releaseIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @storeIndirectVolatileIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_storeIndirectVolatileIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeIndirectVolatileIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_storeIndirectVolatileIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeIndirectVolatileIR_2D_weak (const class GALGAS_storeIndirectVolatileIR & inSource) ;

  public: GALGAS_storeIndirectVolatileIR_2D_weak & operator = (const class GALGAS_storeIndirectVolatileIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeIndirectVolatileIR bang_storeIndirectVolatileIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_storeIndirectVolatileIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_storeIndirectVolatileIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_storeIndirectVolatileIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeIndirectVolatileIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @copyFromReferencesIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_copyFromReferencesIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_copyFromReferencesIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_copyFromReferencesIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_copyFromReferencesIR_2D_weak (const class GALGAS_copyFromReferencesIR & inSource) ;

  public: GALGAS_copyFromReferencesIR_2D_weak & operator = (const class GALGAS_copyFromReferencesIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_copyFromReferencesIR bang_copyFromReferencesIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_copyFromReferencesIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_copyFromReferencesIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_copyFromReferencesIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_copyFromReferencesIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalPropertyReferenceIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getUniversalPropertyReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_getUniversalPropertyReferenceIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak (const class GALGAS_getUniversalPropertyReferenceIR & inSource) ;

  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak & operator = (const class GALGAS_getUniversalPropertyReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getUniversalPropertyReferenceIR bang_getUniversalPropertyReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalPropertyReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getUniversalPropertyReferenceIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalArrayElementReferenceIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getUniversalArrayElementReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_getUniversalArrayElementReferenceIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak (const class GALGAS_getUniversalArrayElementReferenceIR & inSource) ;

  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak & operator = (const class GALGAS_getUniversalArrayElementReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getUniversalArrayElementReferenceIR bang_getUniversalArrayElementReferenceIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalArrayElementReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getUniversalArrayElementReferenceIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalArrayElementReferenceIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ;

