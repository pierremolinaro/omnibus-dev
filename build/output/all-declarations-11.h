#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctIntExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ctIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctIntExpressionAST_2D_weak (const class GALGAS_ctIntExpressionAST & inSource) ;

  public: GALGAS_ctIntExpressionAST_2D_weak & operator = (const class GALGAS_ctIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctIntExpressionAST bang_ctIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ctIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ctIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ctIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ctIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ctIdentifierExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ctIdentifierExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctIdentifierExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ctIdentifierExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctIdentifierExpressionAST_2D_weak (const class GALGAS_ctIdentifierExpressionAST & inSource) ;

  public: GALGAS_ctIdentifierExpressionAST_2D_weak & operator = (const class GALGAS_ctIdentifierExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctIdentifierExpressionAST bang_ctIdentifierExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ctIdentifierExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ctIdentifierExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ctIdentifierExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ctIdentifierExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenericType_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmGenericType_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmGenericType_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmGenericType_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmGenericType_2D_weak (const class GALGAS_llvmGenericType & inSource) ;

  public: GALGAS_llvmGenericType_2D_weak & operator = (const class GALGAS_llvmGenericType & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmGenericType bang_llvmGenericType_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenericType_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmGenericType_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmGenericType_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmGenericType_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmAssignmentOperatorDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (const class GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) ;

  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & operator = (const class GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmAssignmentOperatorDeclarationAST bang_llvmAssignmentOperatorDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmAssignmentOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorUsage (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_llvmAssignmentOperatorUsage (const class cPtr_llvmAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;

  public: class GALGAS_lstring readProperty_mTargetVarName (void) const ;

  public: class GALGAS_genericFormalParameterList readProperty_mTargetGenericFormalParameterList (void) const ;

  public: class GALGAS_omnibusType readProperty_mSourceTpe (void) const ;

  public: class GALGAS_lstring readProperty_mSourceVarName (void) const ;

  public: class GALGAS_genericFormalParameterList readProperty_mSourceGenericFormalParameterList (void) const ;

  public: class GALGAS_ctExpressionAST readProperty_mWhereClause (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmAssignmentOperatorUsage constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_genericFormalParameterList & inOperand2,
                                                                           const class GALGAS_omnibusType & inOperand3,
                                                                           const class GALGAS_lstring & inOperand4,
                                                                           const class GALGAS_genericFormalParameterList & inOperand5,
                                                                           const class GALGAS_ctExpressionAST & inOperand6,
                                                                           const class GALGAS_llvmGenerationInstructionList & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceGenericFormalParameterList (class GALGAS_genericFormalParameterList inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceTpe (class GALGAS_omnibusType inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceVarName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetGenericFormalParameterList (class GALGAS_genericFormalParameterList inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhereClause (class GALGAS_ctExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmAssignmentOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;
  public: GALGAS_lstring mProperty_mTargetVarName ;
  public: GALGAS_genericFormalParameterList mProperty_mTargetGenericFormalParameterList ;
  public: GALGAS_omnibusType mProperty_mSourceTpe ;
  public: GALGAS_lstring mProperty_mSourceVarName ;
  public: GALGAS_genericFormalParameterList mProperty_mSourceGenericFormalParameterList ;
  public: GALGAS_ctExpressionAST mProperty_mWhereClause ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_llvmAssignmentOperatorUsage (const GALGAS_omnibusType & in_mTargetType,
                                            const GALGAS_lstring & in_mTargetVarName,
                                            const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                            const GALGAS_omnibusType & in_mSourceTpe,
                                            const GALGAS_lstring & in_mSourceVarName,
                                            const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                            const GALGAS_ctExpressionAST & in_mWhereClause,
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
// Phase 1: @llvmAssignmentOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmAssignmentOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak (const class GALGAS_llvmAssignmentOperatorUsage & inSource) ;

  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_llvmAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmAssignmentOperatorUsage bang_llvmAssignmentOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmAssignmentOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmAssignmentOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_assignmentRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentRoutineIR (const class cPtr_assignmentRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mTargetVarName (void) const ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;

  public: class GALGAS_string readProperty_mSourceVarName (void) const ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentRoutineIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
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
  public: typeComparisonResult objectCompare (const GALGAS_assignmentRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (class GALGAS_stringlist inArgument0
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
 
} ; // End of GALGAS_assignmentRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentRoutineIR : public cPtr_abstractRoutineIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetVarName ;
  public: GALGAS_omnibusType mProperty_mSourceType ;
  public: GALGAS_string mProperty_mSourceVarName ;
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public: cPtr_assignmentRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
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
// Phase 1: @assignmentRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentRoutineIR_2D_weak (const class GALGAS_assignmentRoutineIR & inSource) ;

  public: GALGAS_assignmentRoutineIR_2D_weak & operator = (const class GALGAS_assignmentRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentRoutineIR bang_assignmentRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleAssignmentCopyRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleAssignmentCopyRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_simpleAssignmentCopyRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_simpleAssignmentCopyRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_simpleAssignmentCopyRoutineIR (const class cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleAssignmentCopyRoutineIR extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_simpleAssignmentCopyRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_omnibusType & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleAssignmentCopyRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @simpleAssignmentCopyRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_simpleAssignmentCopyRoutineIR : public cPtr_abstractRoutineIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;

//--- Constructor
  public: cPtr_simpleAssignmentCopyRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_omnibusType & in_mTargetType
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
// Phase 1: @simpleAssignmentCopyRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_simpleAssignmentCopyRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_simpleAssignmentCopyRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (const class GALGAS_simpleAssignmentCopyRoutineIR & inSource) ;

  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & operator = (const class GALGAS_simpleAssignmentCopyRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_simpleAssignmentCopyRoutineIR bang_simpleAssignmentCopyRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleAssignmentCopyRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_simpleAssignmentCopyRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_simpleAssignmentCopyRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmVarInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmVarInstruction_2D_weak : public GALGAS_abstractLLVMInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmVarInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmVarInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmVarInstruction_2D_weak (const class GALGAS_llvmVarInstruction & inSource) ;

  public: GALGAS_llvmVarInstruction_2D_weak & operator = (const class GALGAS_llvmVarInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmVarInstruction bang_llvmVarInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmVarInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmVarInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmVarInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmVarInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configurationDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configurationDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_configurationDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_configurationDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_configurationDeclarationAST_2D_weak (const class GALGAS_configurationDeclarationAST & inSource) ;

  public: GALGAS_configurationDeclarationAST_2D_weak & operator = (const class GALGAS_configurationDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_configurationDeclarationAST bang_configurationDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_configurationDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configurationDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_configurationDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configurationDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (class GALGAS_semanticContext & ioObject,
                                   const class GALGAS_lstring constin_inTypeName,
                                   const class GALGAS_lstring constin_inGetterName,
                                   const class GALGAS_propertyVisibility constin_inVisibility,
                                   const class GALGAS_propertyGetterKind constin_inAccess,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext addComputedPropertyGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (class GALGAS_semanticContext & ioObject,
                                                const class GALGAS_lstring constin_inTypeName,
                                                const class GALGAS_string constin_inLLVMBaseTypeName,
                                                const class GALGAS_lstring constin_inPropertyName,
                                                const class GALGAS_mode constin_inMode,
                                                const class GALGAS_propertyVisibility constin_inVisibility,
                                                const class GALGAS_unifiedTypeMap_2D_entry constin_inResultTypeProxy,
                                                class GALGAS_lstring & out_outRoutineLLVMName,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_getterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticContext insertPropertySetter'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (class GALGAS_semanticContext & ioObject,
                                           const class GALGAS_lstring constin_inTypeName,
                                           const class GALGAS_lstring constin_inSetterName,
                                           const class GALGAS_propertyVisibility constin_inVisibility,
                                           const class GALGAS_propertySetterKind constin_inAccess,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertySetterMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap extensionGetter_propertySetterMap (const class GALGAS_semanticContext & inObject,
                                                                  const class GALGAS_omnibusType & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext booleanType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_booleanType (const class GALGAS_semanticContext & inObject,
                                                      const class GALGAS_location & constinArgument0,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'boolTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mFixedSizeArrayType (void) const ;

  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;

  public: class GALGAS_uint readProperty_mArraySize (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_bool & inOperand1,
                                                                                                     const class GALGAS_bool & inOperand2,
                                                                                                     const class GALGAS_omnibusType & inOperand3,
                                                                                                     const class GALGAS_omnibusType & inOperand4,
                                                                                                     const class GALGAS_uint & inOperand5
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArraySize (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFixedSizeArrayType (class GALGAS_omnibusType inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public cPtr_abstractRoutineIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_omnibusType mProperty_mFixedSizeArrayType ;
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;

//--- Constructor
  public: cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                      const GALGAS_omnibusType & in_mElementType,
                                                                      const GALGAS_uint & in_mArraySize
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
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (const class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & operator = (const class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST-element enterPropertyInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const class GALGAS_structurePropertyListAST_2D_element inObject,
                                             class GALGAS_semanticContext & io_ioContext,
                                             class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                             const class GALGAS_lstring constin_inReceiverTypeName,
                                             const class GALGAS_lstring constin_inOmnibusTypeSpecificName,
                                             const class GALGAS_string constin_inReceiverLLVMBaseTypeName,
                                             class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                             class GALGAS_propertyList & io_ioPropertyList,
                                             class GALGAS_sortedOperandIRList & io_sortedOperandIRList,
                                             class GALGAS_constructorSignature & io_constructorSignature,
                                             class GALGAS_string & io_ioConstructorKey,
                                             class GALGAS_bool & io_canBeCopied,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'boolType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_boolType (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_setterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'voidType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_voidType (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_computeStaticExpression (class GALGAS_semanticContext & ioArgument0,
                                      class GALGAS_staticEntityMap & ioArgument1,
                                      const class GALGAS_expressionAST constinArgument2,
                                      const class GALGAS_location constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      class GALGAS_objectIR & outArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterDeclarationList-element buildControlRegisterMapForGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_buildControlRegisterMapForGroup (const class GALGAS_controlRegisterDeclarationList_2D_element inObject,
                                                      class GALGAS_semanticContext & io_ioContext,
                                                      class GALGAS_controlRegisterMap & io_ioControlRegisterMap,
                                                      class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap (const class GALGAS_controlRegisterBitSliceList constinArgument0,
                                           const class GALGAS_location constinArgument1,
                                           class GALGAS_semanticContext & ioArgument2,
                                           class GALGAS_omnibusType & ioArgument3,
                                           const class GALGAS_uint constinArgument4,
                                           class GALGAS_controlRegisterFieldMap & outArgument5,
                                           class GALGAS_sliceMap & outArgument6,
                                           class GALGAS_controlRegisterFieldList & outArgument7,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_controlRegisterType (const class GALGAS_lstring constinArgument0,
                                  class GALGAS_semanticContext & ioArgument1,
                                  class GALGAS_omnibusType & outArgument2,
                                  class GALGAS_uint & outArgument3,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@globalSyncInstanceMapIR-element generateLLVM'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVM (const class GALGAS_globalSyncInstanceMapIR_2D_element inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR-element generateLLVMDriverVariableDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverVariableDefinition (const class GALGAS_driverListIR_2D_element inObject,
                                                           class GALGAS_string & io_ioLLVMcode,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedTaskList-element taskSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_taskSemanticAnalysis (const class GALGAS_decoratedTaskList_2D_element inObject,
                                           const class GALGAS_semanticContext constin_inContext,
                                           const class GALGAS_uint constin_inPriority,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines (const class GALGAS_taskSetupListAST constinArgument0,
                                         class GALGAS_stringlist & outArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR_2D_element inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@callInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_callInstructionAST_baseGuardAnalyze) (const class cPtr_callInstructionAST * inObject,
                                                                              const class GALGAS_omnibusType constinArgument0,
                                                                              const class GALGAS_routineAttributes constinArgument1,
                                                                              const class GALGAS_semanticContext constinArgument2,
                                                                              const class GALGAS_mode constinArgument3,
                                                                              class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                              class GALGAS_staticEntityMap & ioArgument5,
                                                                              class GALGAS_universalValuedObjectMap & ioArgument6,
                                                                              class GALGAS_guardKindGenerationIR & outArgument7,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_baseGuardAnalyze (const class cPtr_callInstructionAST * inObject,
                                           const GALGAS_omnibusType constin_inSelfType,
                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                           GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionResultVariableName'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofControlRegisterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addressofControlRegisterAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofControlRegisterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_addressofControlRegisterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofControlRegisterAST_2D_weak (const class GALGAS_addressofControlRegisterAST & inSource) ;

  public: GALGAS_addressofControlRegisterAST_2D_weak & operator = (const class GALGAS_addressofControlRegisterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofControlRegisterAST bang_addressofControlRegisterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofControlRegisterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addressofControlRegisterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addressofControlRegisterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofControlRegisterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addressofExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_addressofExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofExpressionAST_2D_weak (const class GALGAS_addressofExpressionAST & inSource) ;

  public: GALGAS_addressofExpressionAST_2D_weak & operator = (const class GALGAS_addressofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofExpressionAST bang_addressofExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addressofExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addressofExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addressofInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_addressofInstructionIR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;

  public: class GALGAS_LValueRepresentation readProperty_mLValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofInstructionIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addressofInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                      const class GALGAS_LValueRepresentation & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLValue (class GALGAS_LValueRepresentation inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addressofInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_LValueRepresentation mProperty_mLValue ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                       const GALGAS_LValueRepresentation & in_mLValue
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
// Phase 1: @addressofInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addressofInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_addressofInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofInstructionIR_2D_weak (const class GALGAS_addressofInstructionIR & inSource) ;

  public: GALGAS_addressofInstructionIR_2D_weak & operator = (const class GALGAS_addressofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofInstructionIR bang_addressofInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addressofInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addressofInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addressofInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2D_weak ;

