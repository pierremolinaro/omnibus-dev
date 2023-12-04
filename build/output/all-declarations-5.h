#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@interruptMapIR interruptCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const class GALGAS_interruptMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class GALGAS_string & io_ioAScode,
                                              const class GALGAS_string constin_inUndefinedInterruptString,
                                              const class GALGAS_string constin_inXTRInterruptHandlerString,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionInterrupt (const class GALGAS_string & constinArgument0,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmNameForServiceInterrupt (const class GALGAS_lstring & constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guardDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardDeclarationAST_2D_weak (const class GALGAS_guardDeclarationAST & inSource) ;

  public: GALGAS_guardDeclarationAST_2D_weak & operator = (const class GALGAS_guardDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardDeclarationAST bang_guardDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedGuardDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedGuardDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedGuardDeclaration (const class cPtr_decoratedGuardDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mReceiverTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mGuardName (void) const ;

  public: class GALGAS_bool readProperty_mIsPublic (void) const ;

  public: class GALGAS_lstringlist readProperty_mGuardAttributeList (void) const ;

  public: class GALGAS_routineFormalArgumentListAST readProperty_mGuardFormalArgumentList (void) const ;

  public: class GALGAS_guardKind readProperty_mGuardKind (void) const ;

  public: class GALGAS_instructionListAST readProperty_mGuardInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfGuardDeclaration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedGuardDeclaration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedGuardDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_lstringlist & inOperand3,
                                                                         const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                         const class GALGAS_guardKind & inOperand5,
                                                                         const class GALGAS_instructionListAST & inOperand6,
                                                                         const class GALGAS_location & inOperand7
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfGuardDeclaration (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardAttributeList (class GALGAS_lstringlist inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardFormalArgumentList (class GALGAS_routineFormalArgumentListAST inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardInstructionList (class GALGAS_instructionListAST inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardKind (class GALGAS_guardKind inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublic (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverTypeName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedGuardDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedGuardDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedGuardDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext inContext,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_intermediateCodeStruct & ioIntermediateCodeStruct,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverTypeName ;
  public: GALGAS_lstring mProperty_mGuardName ;
  public: GALGAS_bool mProperty_mIsPublic ;
  public: GALGAS_lstringlist mProperty_mGuardAttributeList ;
  public: GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public: GALGAS_guardKind mProperty_mGuardKind ;
  public: GALGAS_instructionListAST mProperty_mGuardInstructionList ;
  public: GALGAS_location mProperty_mEndOfGuardDeclaration ;

//--- Constructor
  public: cPtr_decoratedGuardDeclaration (const GALGAS_lstring & in_mReceiverTypeName,
                                          const GALGAS_lstring & in_mGuardName,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_lstringlist & in_mGuardAttributeList,
                                          const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GALGAS_guardKind & in_mGuardKind,
                                          const GALGAS_instructionListAST & in_mGuardInstructionList,
                                          const GALGAS_location & in_mEndOfGuardDeclaration
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedGuardDeclaration_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedGuardDeclaration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedGuardDeclaration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedGuardDeclaration_2D_weak (const class GALGAS_decoratedGuardDeclaration & inSource) ;

  public: GALGAS_decoratedGuardDeclaration_2D_weak & operator = (const class GALGAS_decoratedGuardDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedGuardDeclaration bang_decoratedGuardDeclaration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedGuardDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedGuardDeclaration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedGuardDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedGuardDeclaration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @guardKindGenerationIR enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardKindGenerationIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_guardKindGenerationIR (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_baseGuard,
    kEnum_convenienceGuard
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardKindGenerationIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardKindGenerationIR constructor_baseGuard (LOCATION_ARGS) ;

  public: static class GALGAS_guardKindGenerationIR constructor_convenienceGuard (const class GALGAS_allocaList & inOperand0,
                                                                                  const class GALGAS_instructionListIR & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_convenienceGuard (class GALGAS_allocaList & outArgument0,
                                                         class GALGAS_instructionListIR & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_baseGuard () const ;

  public: VIRTUAL_IN_DEBUG bool optional_convenienceGuard (class GALGAS_allocaList & outOperand0,
                                                           class GALGAS_instructionListIR & outOperand1,
                                                           class GALGAS_string & outOperand2,
                                                           class GALGAS_procCallEffectiveParameterListIR & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardKindGenerationIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_allocaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_allocaList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mVarLLVMName,
                                                 const class GALGAS_omnibusType & in_mLLVMType,
                                                 const class GALGAS_bool & in_mFormalInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_allocaList extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_allocaList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_allocaList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_omnibusType & inOperand1,
                                                                    const class GALGAS_bool & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allocaList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_allocaList add_operation (const GALGAS_allocaList & inOperand,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalInputArgumentAtIndex (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarLLVMNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFormalInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mLLVMTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarLLVMNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_allocaList ;
 
} ; // End of GALGAS_allocaList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_allocaList : public cGenericAbstractEnumerator {
  public: cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_allocaList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_instructionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instructionListIR constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_instructionListIR constructor_listWithValue (const class GALGAS_abstractInstructionIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractInstructionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instructionListIR add_operation (const GALGAS_instructionListIR & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractInstructionIR constinArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractInstructionIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractInstructionIR & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractInstructionIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractInstructionIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractInstructionIR & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListIR ;
 
} ; // End of GALGAS_instructionListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_instructionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instructionListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallEffectiveParameterListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procCallEffectiveParameterListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_procCallEffectiveParameterListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                 const class GALGAS_objectIR & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallEffectiveParameterListIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procCallEffectiveParameterListIR constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_procCallEffectiveParameterListIR constructor_listWithValue (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                          const class GALGAS_objectIR & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                               class GALGAS_objectIR constinArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                      class GALGAS_objectIR constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                 class GALGAS_objectIR & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                class GALGAS_objectIR & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                      class GALGAS_objectIR & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_objectIR constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                              class GALGAS_objectIR & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                             class GALGAS_objectIR & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_procCallEffectiveParameterListIR ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_procCallEffectiveParameterListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_procCallEffectiveParameterListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @guardKindGenerationIR enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard : public cEnumAssociatedValues {
  public: const GALGAS_allocaList mAssociatedValue0 ;
  public: const GALGAS_instructionListIR mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;
  public: const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList inAssociatedValue0,
                                                                        const GALGAS_instructionListIR inAssociatedValue1,
                                                                        const GALGAS_string inAssociatedValue2,
                                                                        const GALGAS_procCallEffectiveParameterListIR inAssociatedValue3
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardUserRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_guardUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_guardUserRoutineIR (const class cPtr_guardUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mMangledImplementationGuardName (void) const ;

  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;

  public: class GALGAS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardUserRoutineIR extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardUserRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_string & inOperand3,
                                                                  const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                  const class GALGAS_omnibusType & inOperand5,
                                                                  const class GALGAS_guardKindGenerationIR & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (class GALGAS_guardKindGenerationIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMangledImplementationGuardName (class GALGAS_string inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardUserRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardUserRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_guardUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & ioSectionList,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mMangledImplementationGuardName ;
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;

//--- Constructor
  public: cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                   const GALGAS_bool & in_isRequired,
                                   const GALGAS_bool & in_warnsIfUnused,
                                   const GALGAS_string & in_mMangledImplementationGuardName,
                                   const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                   const GALGAS_omnibusType & in_mReceiverType,
                                   const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardUserRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardUserRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guardUserRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardUserRoutineIR_2D_weak (const class GALGAS_guardUserRoutineIR & inSource) ;

  public: GALGAS_guardUserRoutineIR_2D_weak & operator = (const class GALGAS_guardUserRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardUserRoutineIR bang_guardUserRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardUserRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardUserRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardUserRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardUserRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_allocaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mVarLLVMName ;
  public: inline GALGAS_string readProperty_mVarLLVMName (void) const {
    return mProperty_mVarLLVMName ;
  }

  public: GALGAS_omnibusType mProperty_mLLVMType ;
  public: inline GALGAS_omnibusType readProperty_mLLVMType (void) const {
    return mProperty_mLLVMType ;
  }

  public: GALGAS_bool mProperty_mFormalInputArgument ;
  public: inline GALGAS_bool readProperty_mFormalInputArgument (void) const {
    return mProperty_mFormalInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_allocaList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarLLVMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarLLVMName = inValue ;
  }

  public: inline void setter_setMLLVMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLLVMType = inValue ;
  }

  public: inline void setter_setMFormalInputArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalInputArgument = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_allocaList_2D_element (const GALGAS_string & in_mVarLLVMName,
                                        const GALGAS_omnibusType & in_mLLVMType,
                                        const GALGAS_bool & in_mFormalInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_allocaList_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_allocaList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_omnibusType & inOperand1,
                                                                     const class GALGAS_bool & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_allocaList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_allocaList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractInstructionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractInstructionIR (const class cPtr_abstractInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractInstructionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractInstructionIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractInstructionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractInstructionIR mProperty_mInstructionGeneration ;
  public: inline GALGAS_abstractInstructionIR readProperty_mInstructionGeneration (void) const {
    return mProperty_mInstructionGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionGeneration (const GALGAS_abstractInstructionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGeneration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_instructionListIR_2D_element (const GALGAS_abstractInstructionIR & in_mInstructionGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instructionListIR_2D_element constructor_new (const class GALGAS_abstractInstructionIR & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instructionListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_guardImplementationRoutineIR (const class cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;

  public: class GALGAS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardImplementationRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                            const class GALGAS_omnibusType & inOperand4,
                                                                            const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                            const class GALGAS_allocaList & inOperand6,
                                                                            const class GALGAS_instructionListIR & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (class GALGAS_guardKindGenerationIR inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (class GALGAS_instructionListIR inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardImplementationRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public: GALGAS_allocaList mProperty_mAllocaList ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

//--- Constructor
  public: cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GALGAS_omnibusType & in_mReceiverType,
                                             const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                             const GALGAS_allocaList & in_mAllocaList,
                                             const GALGAS_instructionListIR & in_mInstructionGenerationList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guardImplementationRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardImplementationRoutineIR_2D_weak (const class GALGAS_guardImplementationRoutineIR & inSource) ;

  public: GALGAS_guardImplementationRoutineIR_2D_weak & operator = (const class GALGAS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guardImplementationRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_formalPassingModeString (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature typedString' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typedString (const class GALGAS_routineTypedSignature & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature mangledName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_mangledName (const class GALGAS_routineTypedSignature & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_lstring & constinArgument1,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;
  public: inline GALGAS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterKind (void) const {
    return mProperty_mEffectiveParameterKind ;
  }

  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterKind (const GALGAS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterKind = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                      const GALGAS_lstring & in_mSelector) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_effectiveArgumentListAST_2D_element constructor_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRegularRoutineList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedRegularRoutineList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_receiverTypeName ;
  public: inline GALGAS_lstring readProperty_receiverTypeName (void) const {
    return mProperty_receiverTypeName ;
  }

  public: GALGAS_mode mProperty_mode ;
  public: inline GALGAS_mode readProperty_mode (void) const {
    return mProperty_mode ;
  }

  public: GALGAS_bool mProperty_isRequired ;
  public: inline GALGAS_bool readProperty_isRequired (void) const {
    return mProperty_isRequired ;
  }

  public: GALGAS_routineKind mProperty_routineKind ;
  public: inline GALGAS_routineKind readProperty_routineKind (void) const {
    return mProperty_routineKind ;
  }

  public: GALGAS_bool mProperty_warnIfUnused ;
  public: inline GALGAS_bool readProperty_warnIfUnused (void) const {
    return mProperty_warnIfUnused ;
  }

  public: GALGAS_bool mProperty_exportedRoutine ;
  public: inline GALGAS_bool readProperty_exportedRoutine (void) const {
    return mProperty_exportedRoutine ;
  }

  public: GALGAS_routineAttributes mProperty_routineAttributes ;
  public: inline GALGAS_routineAttributes readProperty_routineAttributes (void) const {
    return mProperty_routineAttributes ;
  }

  public: GALGAS_lstring mProperty_routineMangledLLVMName ;
  public: inline GALGAS_lstring readProperty_routineMangledLLVMName (void) const {
    return mProperty_routineMangledLLVMName ;
  }

  public: GALGAS_routineFormalArgumentListAST mProperty_formalArgumentList ;
  public: inline GALGAS_routineFormalArgumentListAST readProperty_formalArgumentList (void) const {
    return mProperty_formalArgumentList ;
  }

  public: GALGAS_bool mProperty_warningOnUnusedArgs ;
  public: inline GALGAS_bool readProperty_warningOnUnusedArgs (void) const {
    return mProperty_warningOnUnusedArgs ;
  }

  public: GALGAS_instructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfRoutineDeclaration ;
  public: inline GALGAS_location readProperty_mEndOfRoutineDeclaration (void) const {
    return mProperty_mEndOfRoutineDeclaration ;
  }

  public: GALGAS_lstring mProperty_returnTypeName ;
  public: inline GALGAS_lstring readProperty_returnTypeName (void) const {
    return mProperty_returnTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReceiverTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_receiverTypeName = inValue ;
  }

  public: inline void setter_setMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mode = inValue ;
  }

  public: inline void setter_setIsRequired (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isRequired = inValue ;
  }

  public: inline void setter_setRoutineKind (const GALGAS_routineKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineKind = inValue ;
  }

  public: inline void setter_setWarnIfUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnIfUnused = inValue ;
  }

  public: inline void setter_setExportedRoutine (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exportedRoutine = inValue ;
  }

  public: inline void setter_setRoutineAttributes (const GALGAS_routineAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineAttributes = inValue ;
  }

  public: inline void setter_setRoutineMangledLLVMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineMangledLLVMName = inValue ;
  }

  public: inline void setter_setFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgumentList = inValue ;
  }

  public: inline void setter_setWarningOnUnusedArgs (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warningOnUnusedArgs = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineDeclaration (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineDeclaration = inValue ;
  }

  public: inline void setter_setReturnTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_returnTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedRegularRoutineList_2D_element (const GALGAS_lstring & in_receiverTypeName,
                                                         const GALGAS_mode & in_mode,
                                                         const GALGAS_bool & in_isRequired,
                                                         const GALGAS_routineKind & in_routineKind,
                                                         const GALGAS_bool & in_warnIfUnused,
                                                         const GALGAS_bool & in_exportedRoutine,
                                                         const GALGAS_routineAttributes & in_routineAttributes,
                                                         const GALGAS_lstring & in_routineMangledLLVMName,
                                                         const GALGAS_routineFormalArgumentListAST & in_formalArgumentList,
                                                         const GALGAS_bool & in_warningOnUnusedArgs,
                                                         const GALGAS_instructionListAST & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                         const GALGAS_lstring & in_returnTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRegularRoutineList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedRegularRoutineList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_mode & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_routineKind & inOperand3,
                                                                                      const class GALGAS_bool & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5,
                                                                                      const class GALGAS_routineAttributes & inOperand6,
                                                                                      const class GALGAS_lstring & inOperand7,
                                                                                      const class GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                      const class GALGAS_bool & inOperand9,
                                                                                      const class GALGAS_instructionListAST & inOperand10,
                                                                                      const class GALGAS_location & inOperand11,
                                                                                      const class GALGAS_lstring & inOperand12
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedRegularRoutineList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedRegularRoutineList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const class GALGAS_decoratedRegularRoutineList inObject,
                                              const class GALGAS_semanticContext constin_inContext,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList-element semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const class GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const class GALGAS_semanticContext constin_inContext,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const class GALGAS_allocaList inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_regularRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_regularRoutineIR (const class cPtr_regularRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;

  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;

  public: class GALGAS_bool readProperty_mExportedFunction (void) const ;

  public: class GALGAS_routineKind readProperty_mKind (void) const ;

  public: class GALGAS_omnibusType readProperty_mReturnType (void) const ;

  public: class GALGAS_bool readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_regularRoutineIR extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_bool & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                const class GALGAS_omnibusType & inOperand3,
                                                                const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                const class GALGAS_allocaList & inOperand5,
                                                                const class GALGAS_instructionListIR & inOperand6,
                                                                const class GALGAS_bool & inOperand7,
                                                                const class GALGAS_routineKind & inOperand8,
                                                                const class GALGAS_omnibusType & inOperand9,
                                                                const class GALGAS_bool & inOperand10
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_regularRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAppendFileAndLineArgumentForPanicLocation (class GALGAS_bool inArgument0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExportedFunction (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (class GALGAS_instructionListIR inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_routineKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_regularRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @regularRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_regularRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_allocaList mProperty_mAllocaList ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public: GALGAS_bool mProperty_mExportedFunction ;
  public: GALGAS_routineKind mProperty_mKind ;
  public: GALGAS_omnibusType mProperty_mReturnType ;
  public: GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;

//--- Constructor
  public: cPtr_regularRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                 const GALGAS_bool & in_isRequired,
                                 const GALGAS_bool & in_warnsIfUnused,
                                 const GALGAS_omnibusType & in_mReceiverType,
                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                 const GALGAS_allocaList & in_mAllocaList,
                                 const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                 const GALGAS_bool & in_mExportedFunction,
                                 const GALGAS_routineKind & in_mKind,
                                 const GALGAS_omnibusType & in_mReturnType,
                                 const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_regularRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_regularRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_regularRoutineIR_2D_weak (const class GALGAS_regularRoutineIR & inSource) ;

  public: GALGAS_regularRoutineIR_2D_weak & operator = (const class GALGAS_regularRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_regularRoutineIR bang_regularRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_regularRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_regularRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_regularRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_regularRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mode string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_mode & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mode isSafe' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isSafe (const class GALGAS_mode & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForSystemRoutine' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const class GALGAS_mode & inObject,
                                                                                        const class GALGAS_string & constinArgument0,
                                                                                        const class GALGAS_string & constinArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @panicAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_panicAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_panicAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_panicAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_panicAST_2D_weak (const class GALGAS_panicAST & inSource) ;

  public: GALGAS_panicAST_2D_weak & operator = (const class GALGAS_panicAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_panicAST bang_panicAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_panicAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_panicAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedPanicRoutine : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedPanicRoutine (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedPanicRoutine constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedPanicRoutine (const class cPtr_decoratedPanicRoutine * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsSetup (void) const ;

  public: class GALGAS_lbigint readProperty_mPriority (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedPanicRoutine extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedPanicRoutine constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lbigint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsSetup (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPriority (class GALGAS_lbigint inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedPanicRoutine class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedPanicRoutine class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedPanicRoutine : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext inContext,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_intermediateCodeStruct & ioIntermediateCodeStruct,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsSetup ;
  public: GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public: cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                      const GALGAS_lbigint & in_mPriority
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedPanicRoutine_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedPanicRoutine_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedPanicRoutine_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedPanicRoutine_2D_weak (const class GALGAS_decoratedPanicRoutine & inSource) ;

  public: GALGAS_decoratedPanicRoutine_2D_weak & operator = (const class GALGAS_decoratedPanicRoutine & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedPanicRoutine bang_decoratedPanicRoutine_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedPanicRoutine_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedPanicRoutine_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedPanicRoutine_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_panicSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bigint mProperty_mPriority ;
  public: inline GALGAS_bigint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_panicSortedListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPriority (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_panicSortedListIR_2D_element (const GALGAS_bigint & in_mPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_panicSortedListIR_2D_element constructor_new (const class GALGAS_bigint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_panicSortedListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicSortedListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fileSpecificPanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_fileSpecificPanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_fileSpecificPanicRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_fileSpecificPanicRoutineIR (const class cPtr_fileSpecificPanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_inFilePath (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fileSpecificPanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fileSpecificPanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_string & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setInFilePath (class GALGAS_string inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fileSpecificPanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @fileSpecificPanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_fileSpecificPanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_inFilePath ;

//--- Constructor
  public: cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                           const GALGAS_bool & in_isRequired,
                                           const GALGAS_bool & in_warnsIfUnused,
                                           const GALGAS_string & in_inFilePath
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fileSpecificPanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_fileSpecificPanicRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak (const class GALGAS_fileSpecificPanicRoutineIR & inSource) ;

  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak & operator = (const class GALGAS_fileSpecificPanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_fileSpecificPanicRoutineIR bang_fileSpecificPanicRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fileSpecificPanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fileSpecificPanicRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fileSpecificPanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fileSpecificPanicRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_universalModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_universalModePanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_universalModePanicRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_universalModePanicRoutineIR (const class cPtr_universalModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_universalModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_universalModePanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_universalModePanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @universalModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_universalModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & ioSectionList,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_universalModePanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_universalModePanicRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_universalModePanicRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_universalModePanicRoutineIR_2D_weak (const class GALGAS_universalModePanicRoutineIR & inSource) ;

  public: GALGAS_universalModePanicRoutineIR_2D_weak & operator = (const class GALGAS_universalModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_universalModePanicRoutineIR bang_universalModePanicRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_universalModePanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_universalModePanicRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_universalModePanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_universalModePanicRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sectionModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_sectionModePanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sectionModePanicRoutineIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sectionModePanicRoutineIR (const class cPtr_sectionModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_panicSortedListIR readProperty_mPanicSetupListIR (void) const ;

  public: class GALGAS_panicSortedListIR readProperty_mPanicLoopListIR (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sectionModePanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_panicSortedListIR & inOperand3,
                                                                         const class GALGAS_panicSortedListIR & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPanicLoopListIR (class GALGAS_panicSortedListIR inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPanicSetupListIR (class GALGAS_panicSortedListIR inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sectionModePanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sectionModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sectionModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: GALGAS_panicSortedListIR mProperty_mPanicLoopListIR ;

//--- Constructor
  public: cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                          const GALGAS_bool & in_isRequired,
                                          const GALGAS_bool & in_warnsIfUnused,
                                          const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                          const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sectionModePanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sectionModePanicRoutineIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sectionModePanicRoutineIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sectionModePanicRoutineIR_2D_weak (const class GALGAS_sectionModePanicRoutineIR & inSource) ;

  public: GALGAS_sectionModePanicRoutineIR_2D_weak & operator = (const class GALGAS_sectionModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sectionModePanicRoutineIR bang_sectionModePanicRoutineIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionModePanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sectionModePanicRoutineIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sectionModePanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sectionModePanicRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeConvertToBooleanAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeConvertToBooleanAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeConvertToBooleanAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak (const class GALGAS_compileTimeConvertToBooleanAST & inSource) ;

  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak & operator = (const class GALGAS_compileTimeConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeConvertToBooleanAST bang_compileTimeConvertToBooleanAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeConvertToBooleanAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeConvertToBooleanAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeConvertToBooleanAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeConvertToBooleanAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractLLVMInstruction mProperty_mInstruction ;
  public: inline GALGAS_abstractLLVMInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_abstractLLVMInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_llvmGenerationInstructionList_2D_element (const GALGAS_abstractLLVMInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenerationInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmGenerationInstructionList_2D_element constructor_new (const class GALGAS_abstractLLVMInstruction & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmGenerationInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmGenerationInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmConvertToBooleanAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmConvertToBooleanAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmConvertToBooleanAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmConvertToBooleanAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmConvertToBooleanAST_2D_weak (const class GALGAS_llvmConvertToBooleanAST & inSource) ;

  public: GALGAS_llvmConvertToBooleanAST_2D_weak & operator = (const class GALGAS_llvmConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmConvertToBooleanAST bang_llvmConvertToBooleanAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmConvertToBooleanAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmConvertToBooleanAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmConvertToBooleanAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmConvertToBooleanAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @implicitBooleanConversionResult enum                                   *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_compileTime,
    kEnum_llvmVariable
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implicitBooleanConversionResult constructor_compileTime (const class GALGAS_bool & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_implicitBooleanConversionResult constructor_llvmVariable (const class GALGAS_string & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implicitBooleanConversionResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_compileTime (class GALGAS_bool & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmVariable (class GALGAS_string & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_compileTime (class GALGAS_bool & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmVariable (class GALGAS_string & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @implicitBooleanConversionResult enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_implicitBooleanConversionResult_compileTime : public cEnumAssociatedValues {
  public: const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (const GALGAS_bool inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable : public cEnumAssociatedValues {
  public: const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (const GALGAS_string inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@implicitBooleanConversionResult llvmName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmName (const class GALGAS_implicitBooleanConversionResult & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const class GALGAS_objectIR constin_inReceiverOperand,
                                                       const class GALGAS_location constin_inErrorLocation,
                                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                       class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                       class GALGAS_allocaList & io_ioAllocaList,
                                                       class GALGAS_implicitBooleanConversionResult & out_outResult,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeImplicitConverterToBoolean (const class cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeImplicitConverterToBoolean constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_ctExpressionAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR inReceiverOperand,
           const class GALGAS_location inErrorLocation,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & outResult,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_ctExpressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeImplicitConverterToBoolean_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (const class GALGAS_compileTimeImplicitConverterToBoolean & inSource) ;

  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_compileTimeImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeImplicitConverterToBoolean bang_compileTimeImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeImplicitConverterToBoolean_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeImplicitConverterToBoolean_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmImplicitConverterToBoolean constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmImplicitConverterToBoolean (const class cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmImplicitConverterToBoolean constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_omnibusType & inOperand1,
                                                                              const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR inReceiverOperand,
           const class GALGAS_location inErrorLocation,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & outResult,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_llvmImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                               const GALGAS_omnibusType & in_mReceiverType,
                                               const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_llvmImplicitConverterToBoolean_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak (const class GALGAS_llvmImplicitConverterToBoolean & inSource) ;

  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_llvmImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmImplicitConverterToBoolean bang_llvmImplicitConverterToBoolean_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmImplicitConverterToBoolean_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmImplicitConverterToBoolean_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const class GALGAS_implicitConversionToBooleanMap inObject,
                                                   const class GALGAS_objectIR constin_inReceiverOperand,
                                                   const class GALGAS_location constin_inErrorLocation,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_implicitBooleanConversionResult & out_outResult,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR omnibusTypeDescriptionName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_omnibusTypeDescriptionName (const class GALGAS_objectIR & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_expressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionAST_2D_weak (const class GALGAS_expressionAST & inSource) ;

  public: GALGAS_expressionAST_2D_weak & operator = (const class GALGAS_expressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionAST bang_expressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_expressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (class cPtr_expressionAST * inObject,
                                                               class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (class cPtr_expressionAST * inObject,
                                            const class GALGAS_omnibusType constin_inSelfType,
                                            const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                            const class GALGAS_omnibusType constin_inTargetType,
                                            const class GALGAS_semanticContext constin_inContext,
                                            const class GALGAS_mode constin_inMode,
                                            class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                            class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                            class GALGAS_allocaList & io_ioAllocaList,
                                            class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                            class GALGAS_objectIR & out_outResult,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @convertExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_convertExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_convertExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_convertExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_convertExpressionAST_2D_weak (const class GALGAS_convertExpressionAST & inSource) ;

  public: GALGAS_convertExpressionAST_2D_weak & operator = (const class GALGAS_convertExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_convertExpressionAST bang_convertExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_convertExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_convertExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_convertExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_convertExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractInstructionIR_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractInstructionIR_2D_weak (const class GALGAS_abstractInstructionIR & inSource) ;

  public: GALGAS_abstractInstructionIR_2D_weak & operator = (const class GALGAS_abstractInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractInstructionIR bang_abstractInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extendExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extendExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extendExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extendExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extendExpressionAST_2D_weak (const class GALGAS_extendExpressionAST & inSource) ;

  public: GALGAS_extendExpressionAST_2D_weak & operator = (const class GALGAS_extendExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extendExpressionAST bang_extendExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extendExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extendExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_truncateExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncateExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_truncateExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncateExpressionAST_2D_weak (const class GALGAS_truncateExpressionAST & inSource) ;

  public: GALGAS_truncateExpressionAST_2D_weak & operator = (const class GALGAS_truncateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncateExpressionAST bang_truncateExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_truncateExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_truncateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_truncateInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_truncateInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_truncateInstructionIR (const class cPtr_truncateInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;

  public: class GALGAS_objectIR readProperty_mOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateInstructionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_truncateInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @truncateInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_truncateInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_objectIR mProperty_mOperand ;

//--- Constructor
  public: cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                      const GALGAS_objectIR & in_mOperand
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_truncateInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncateInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_truncateInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncateInstructionIR_2D_weak (const class GALGAS_truncateInstructionIR & inSource) ;

  public: GALGAS_truncateInstructionIR_2D_weak & operator = (const class GALGAS_truncateInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncateInstructionIR bang_truncateInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_truncateInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_truncateInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2D_weak ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Constructor from pointer
  public: GALGAS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;

  public: class GALGAS_LValueRepresentation readProperty_mLValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @LValueRepresentation struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusType mProperty_type ;
  public: inline GALGAS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GALGAS_string mProperty_llvmName ;
  public: inline GALGAS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_LValueRepresentation constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_LValueRepresentation (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_LValueRepresentation (void) ;

//--------------------------------- Native constructor
  public: GALGAS_LValueRepresentation (const GALGAS_omnibusType & in_type,
                                       const GALGAS_string & in_llvmName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_LValueRepresentation extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_LValueRepresentation constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_LValueRepresentation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_LValueRepresentation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addressofInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_LValueRepresentation mProperty_mLValue ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                       const GALGAS_LValueRepresentation & in_mLValue
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sizeofExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sizeofExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofExpressionAST_2D_weak (const class GALGAS_sizeofExpressionAST & inSource) ;

  public: GALGAS_sizeofExpressionAST_2D_weak & operator = (const class GALGAS_sizeofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofExpressionAST bang_sizeofExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sizeofExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sizeofExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofTypeAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sizeofTypeAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofTypeAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sizeofTypeAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofTypeAST_2D_weak (const class GALGAS_sizeofTypeAST & inSource) ;

  public: GALGAS_sizeofTypeAST_2D_weak & operator = (const class GALGAS_sizeofTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofTypeAST bang_sizeofTypeAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sizeofTypeAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sizeofTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofTypeAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sizeofInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_sizeofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sizeofInstructionIR (const class cPtr_sizeofInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sizeofInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                   const class GALGAS_omnibusType & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSourceType (class GALGAS_omnibusType inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sizeofInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_omnibusType mProperty_mSourceType ;

//--- Constructor
  public: cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                    const GALGAS_omnibusType & in_mSourceType
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sizeofInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sizeofInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofInstructionIR_2D_weak (const class GALGAS_sizeofInstructionIR & inSource) ;

  public: GALGAS_sizeofInstructionIR_2D_weak & operator = (const class GALGAS_sizeofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofInstructionIR bang_sizeofInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sizeofInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sizeofInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_primaryInExpressionAccessAST mProperty_mAccess ;
  public: inline GALGAS_primaryInExpressionAccessAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GALGAS_primaryInExpressionAccessAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_primaryInExpressionAccessListAST_2D_element constructor_new (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typedConstantCallAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typedConstantCallAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typedConstantCallAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typedConstantCallAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typedConstantCallAST_2D_weak (const class GALGAS_typedConstantCallAST & inSource) ;

  public: GALGAS_typedConstantCallAST_2D_weak & operator = (const class GALGAS_typedConstantCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typedConstantCallAST bang_typedConstantCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typedConstantCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typedConstantCallAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typedConstantCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typedConstantCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ifExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionAST_2D_weak (const class GALGAS_ifExpressionAST & inSource) ;

  public: GALGAS_ifExpressionAST_2D_weak & operator = (const class GALGAS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionAST bang_ifExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanShortCircuitAndOperatorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (const class GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & operator = (const class GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST bang_booleanShortCircuitAndOperatorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceFieldListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerSliceFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSliceWidth ;
  public: inline GALGAS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mExpressionLocation ;
  public: inline GALGAS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & in_mSliceWidth,
                                                      const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_location & in_mExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerSliceFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerSliceFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_expressionAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerSliceFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerSliceFieldListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerSliceExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerSliceExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerSliceExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerSliceExpressionAST_2D_weak (const class GALGAS_integerSliceExpressionAST & inSource) ;

  public: GALGAS_integerSliceExpressionAST_2D_weak & operator = (const class GALGAS_integerSliceExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerSliceExpressionAST bang_integerSliceExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerSliceExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerSliceExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerSliceExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerSliceExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntegerInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntegerInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalIntegerInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalIntegerInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalIntegerInExpressionAST_2D_weak (const class GALGAS_literalIntegerInExpressionAST & inSource) ;

  public: GALGAS_literalIntegerInExpressionAST_2D_weak & operator = (const class GALGAS_literalIntegerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalIntegerInExpressionAST bang_literalIntegerInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntegerInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalIntegerInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalIntegerInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalIntegerInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringInExpressionAST_2D_weak (const class GALGAS_literalStringInExpressionAST & inSource) ;

  public: GALGAS_literalStringInExpressionAST_2D_weak & operator = (const class GALGAS_literalStringInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringInExpressionAST bang_literalStringInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBooleanInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalBooleanInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBooleanInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalBooleanInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBooleanInExpressionAST_2D_weak (const class GALGAS_literalBooleanInExpressionAST & inSource) ;

  public: GALGAS_literalBooleanInExpressionAST_2D_weak & operator = (const class GALGAS_literalBooleanInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBooleanInExpressionAST bang_literalBooleanInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBooleanInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBooleanInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBooleanInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBooleanInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_registerInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_registerInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerInExpressionAST_2D_weak (const class GALGAS_registerInExpressionAST & inSource) ;

  public: GALGAS_registerInExpressionAST_2D_weak & operator = (const class GALGAS_registerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerInExpressionAST bang_registerInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIntegerFieldListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerIntegerFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFieldName ;
  public: inline GALGAS_lstring readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mExpressionLocation ;
  public: inline GALGAS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & in_mFieldName,
                                                         const GALGAS_expressionAST & in_mExpression,
                                                         const GALGAS_location & in_mExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerIntegerFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerIntegerFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_expressionAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerIntegerFieldListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerConstantExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerConstantExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_registerConstantExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_registerConstantExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerConstantExpressionAST_2D_weak (const class GALGAS_registerConstantExpressionAST & inSource) ;

  public: GALGAS_registerConstantExpressionAST_2D_weak & operator = (const class GALGAS_registerConstantExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerConstantExpressionAST bang_registerConstantExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerConstantExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerConstantExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerConstantExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerConstantExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_primaryInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_primaryInExpressionAST_2D_weak (const class GALGAS_primaryInExpressionAST & inSource) ;

  public: GALGAS_primaryInExpressionAST_2D_weak & operator = (const class GALGAS_primaryInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_primaryInExpressionAST bang_primaryInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_primaryInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneFunctionInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_standaloneFunctionInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_standaloneFunctionInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak (const class GALGAS_standaloneFunctionInExpressionAST & inSource) ;

  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak & operator = (const class GALGAS_standaloneFunctionInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standaloneFunctionInExpressionAST bang_standaloneFunctionInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneFunctionInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_standaloneFunctionInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_standaloneFunctionInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standaloneFunctionInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallEffectiveParameterListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallEffectiveParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallEffectiveParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallEffectiveParameterListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_expressionAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionCallEffectiveParameterListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorCallAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimeInfixOperatorEnumeration string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_compileTimeInfixOperatorEnumeration & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixOperatorUsage (const class cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_objectIR inRightOperand,
           class GALGAS_bigint & outResult,
           C_Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (const class cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mEqualOperatorUsage (void) const ;

  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mLessThanOperatorUsage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixInfEqualOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixInfEqualOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;

//--- Constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                      const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @genericFormalParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericFormalParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_genericFormalParameter mProperty_mParameter ;
  public: inline GALGAS_genericFormalParameter readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameter (const GALGAS_genericFormalParameter & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_genericFormalParameterList_2D_element (const GALGAS_genericFormalParameter & in_mParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_genericFormalParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_genericFormalParameterList_2D_element constructor_new (const class GALGAS_genericFormalParameter & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_genericFormalParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_genericFormalParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2D_element ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInfixOperatorUsage (const class cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mInfixMangledFunctionName (void) const ;

  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInlineInfixOperatorUsage (const class cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_infixOperatorRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @infixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_infixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_infixOperatorRoutineIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const class GALGAS_objectIR constin_inLeftOperand,
                                       const class GALGAS_location constin_inOperatorLocation,
                                       const class GALGAS_objectIR constin_inRightOperand,
                                       const class GALGAS_omnibusType constin_inResultType,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_allocaList & io_ioAllocaList,
                                       class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       class GALGAS_objectIR & out_outResultValue,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const class GALGAS_infixOperatorMap inObject,
                                                const class GALGAS_objectIR constin_inLeftOperand,
                                                const class GALGAS_omnibusInfixOperator constin_inInfixOperator,
                                                const class GALGAS_location constin_inOperatorLocation,
                                                const class GALGAS_objectIR constin_inRightOperand,
                                                class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GALGAS_allocaList & io_ioAllocaList,
                                                class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                class GALGAS_objectIR & out_outResultValue,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_infixOperatorMapKey (const class GALGAS_omnibusType & constinArgument0,
                                                   const class GALGAS_omnibusInfixOperator & constinArgument1,
                                                   const class GALGAS_location & constinArgument2,
                                                   const class GALGAS_omnibusType & constinArgument3,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR type' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_type (const class GALGAS_objectIR & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfixOperatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfixOperatorUsage (const class cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfixOperatorUsage constructor_new (const class GALGAS_string & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GALGAS_string & in_mLLVMOperation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfixOperatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfixOperatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfixOperatorUsage_2D_weak (const class GALGAS_inlineInfixOperatorUsage & inSource) ;

  public: GALGAS_inlineInfixOperatorUsage_2D_weak & operator = (const class GALGAS_inlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfixOperatorUsage bang_inlineInfixOperatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfixOperatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfixOperatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusInfixOperator string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_omnibusInfixOperator & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

