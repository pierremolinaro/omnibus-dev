#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const class GGS_taskListAST inObject,
                                     class GGS_semanticContext & io_ioContext,
                                     class GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                     class GGS_routineListIR & io_ioRoutineListIR,
                                     class GGS_staticEntityMap & io_ioStaticEntityMap,
                                     class GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedTaskListDeclaration (const class cPtr_decoratedTaskListDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_decoratedTaskList readProperty_mTaskList (void) const ;
  public: void setProperty_mTaskList (const GGS_decoratedTaskList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskListDeclaration init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskListDeclaration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_decoratedTaskList final {
  public: DownEnumerator_decoratedTaskList (const class GGS_decoratedTaskList & inList) ;

  public: ~ DownEnumerator_decoratedTaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedTaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_decoratedTaskList (const DownEnumerator_decoratedTaskList &) = delete ;
  private: DownEnumerator_decoratedTaskList & operator = (const DownEnumerator_decoratedTaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_decoratedTaskList final {
  public: UpEnumerator_decoratedTaskList (const class GGS_decoratedTaskList & inList)  ;

  public: ~ UpEnumerator_decoratedTaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedTaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_decoratedTaskList (const UpEnumerator_decoratedTaskList &) = delete ;
  private: UpEnumerator_decoratedTaskList & operator = (const UpEnumerator_decoratedTaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @decoratedTaskList list
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;

//--- Default constructor
  public: GGS_decoratedTaskList (void) ;

//--- Destructor
  public: virtual ~ GGS_decoratedTaskList (void) = default ;

//--- Copy
  public: GGS_decoratedTaskList (const GGS_decoratedTaskList &) = default ;
  public: GGS_decoratedTaskList & operator = (const GGS_decoratedTaskList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_decoratedTaskList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_decoratedTaskList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_decoratedTaskList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTaskName,
                                                 const class GGS_lbigint & in_mStackSize,
                                                 const class GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const class GGS_location & in_mEndOfTaskDeclaration,
                                                 const class GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lbigint & inOperand1,
                                                                       const class GGS_taskSetupListAST & inOperand2,
                                                                       const class GGS_taskSetupListAST & inOperand3,
                                                                       const class GGS_taskSetupListAST & inOperand4,
                                                                       const class GGS_location & inOperand5,
                                                                       const class GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_decoratedTaskList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lbigint & inOperand1,
                                   const class GGS_taskSetupListAST & inOperand2,
                                   const class GGS_taskSetupListAST & inOperand3,
                                   const class GGS_taskSetupListAST & inOperand4,
                                   const class GGS_location & inOperand5,
                                   const class GGS_bool & inOperand6
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_decoratedTaskList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_decoratedTaskList add_operation (const GGS_decoratedTaskList & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lbigint constinArgument1,
                              class GGS_taskSetupListAST constinArgument2,
                              class GGS_taskSetupListAST constinArgument3,
                              class GGS_taskSetupListAST constinArgument4,
                              class GGS_location constinArgument5,
                              class GGS_bool constinArgument6,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lbigint constinArgument1,
                                     class GGS_taskSetupListAST constinArgument2,
                                     class GGS_taskSetupListAST constinArgument3,
                                     class GGS_taskSetupListAST constinArgument4,
                                     class GGS_location constinArgument5,
                                     class GGS_bool constinArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lbigint & outArgument1,
                                class GGS_taskSetupListAST & outArgument2,
                                class GGS_taskSetupListAST & outArgument3,
                                class GGS_taskSetupListAST & outArgument4,
                                class GGS_location & outArgument5,
                                class GGS_bool & outArgument6,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lbigint & outArgument1,
                               class GGS_taskSetupListAST & outArgument2,
                               class GGS_taskSetupListAST & outArgument3,
                               class GGS_taskSetupListAST & outArgument4,
                               class GGS_location & outArgument5,
                               class GGS_bool & outArgument6,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lbigint & outArgument1,
                                     class GGS_taskSetupListAST & outArgument2,
                                     class GGS_taskSetupListAST & outArgument3,
                                     class GGS_taskSetupListAST & outArgument4,
                                     class GGS_location & outArgument5,
                                     class GGS_bool & outArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoStartAtIndex (class GGS_bool constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfTaskDeclarationAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMStackSizeAtIndex (class GGS_lbigint constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskActivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskDeactivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskSetupListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lbigint & outArgument1,
                             class GGS_taskSetupListAST & outArgument2,
                             class GGS_taskSetupListAST & outArgument3,
                             class GGS_taskSetupListAST & outArgument4,
                             class GGS_location & outArgument5,
                             class GGS_bool & outArgument6,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lbigint & outArgument1,
                            class GGS_taskSetupListAST & outArgument2,
                            class GGS_taskSetupListAST & outArgument3,
                            class GGS_taskSetupListAST & outArgument4,
                            class GGS_location & outArgument5,
                            class GGS_bool & outArgument6,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mAutoStartAtIndex (const class GGS_uint & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfTaskDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lbigint getter_mStackSizeAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskActivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskDeactivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mTaskNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_decoratedTaskList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_decoratedTaskList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_decoratedTaskList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_decoratedTaskList ;
  friend class DownEnumerator_decoratedTaskList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedTaskListDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedTaskListDeclaration_init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_decoratedTaskList mProperty_mTaskList ;


//--- Default constructor
  public: cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_syncInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncInstructionAST (const class cPtr_syncInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_syncInstructionBranchListAST readProperty_mBranchList (void) const ;
  public: void setProperty_mBranchList (const GGS_syncInstructionBranchListAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_on_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_on_5F_instruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_syncInstructionBranchListAST & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syncInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_syncInstructionBranchListAST & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_syncInstructionBranchListAST mProperty_mBranchList ;
  public: GGS_location mProperty_mEndOf_5F_on_5F_instruction ;


//--- Default constructor
  public: cPtr_syncInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncInstructionAST (const GGS_location & in_mInstructionLocation,
                                   const GGS_syncInstructionBranchListAST & in_mBranchList,
                                   const GGS_location & in_mEndOf_5F_on_5F_instruction,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskActivateFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_taskActivateFunctionIR (const class cPtr_taskActivateFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mAssemblerTaskName (void) const ;
  public: void setProperty_mAssemblerTaskName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mActivateServiceInvocationName (void) const ;
  public: void setProperty_mActivateServiceInvocationName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mTaskIndex (void) const ;
  public: void setProperty_mTaskIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskActivateFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_bool & inOperand2,
                                                                                                 const class GGS_string & inOperand3,
                                                                                                 const class GGS_string & inOperand4,
                                                                                                 const class GGS_uint & inOperand5,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskActivateFunctionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @taskActivateFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_taskActivateFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           const class GGS_string & inOperand4,
                                                                                           const class GGS_uint & inOperand5,
                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mAssemblerTaskName ;
  public: GGS_string mProperty_mActivateServiceInvocationName ;
  public: GGS_uint mProperty_mTaskIndex ;


//--- Default constructor
  public: cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_taskActivateFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                       const GGS_bool & in_isRequired,
                                       const GGS_bool & in_warnsIfUnused,
                                       const GGS_string & in_mAssemblerTaskName,
                                       const GGS_string & in_mActivateServiceInvocationName,
                                       const GGS_uint & in_mTaskIndex,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum constructorValue
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_constructorValue (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_null,
    enum_simple,
    enum_structure,
    enum_arrayValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_simple (class GGS_bigint & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_structure (class GGS_sortedOperandIRList & out_sortedOperandList) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayValue (class GGS_omnibusType & out_elementType,
                                                                   class GGS_uint & out_size) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorValue extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorValue class_func_arrayValue (const class GGS_omnibusType & inOperand0,
                                                                   const class GGS_uint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_null (LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_simple (const class GGS_bigint & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_structure (const class GGS_sortedOperandIRList & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayValue (class GGS_omnibusType & outArgument0,
                                         class GGS_uint & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: void method_extractSimple (class GGS_bigint & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractStructure (class GGS_sortedOperandIRList & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_constructorValue_2E_arrayValue_3F_ getter_getArrayValue (LOCATION_ARGS) const ;

  public: class GGS_constructorValue_2E_simple_3F_ getter_getSimple (LOCATION_ARGS) const ;

  public: class GGS_constructorValue_2E_structure_3F_ getter_getStructure (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNull (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSimple (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForActivateTask (class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceCall (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledNameFromAST (const class GGS_string & constinArgument0,
                                                      const class GGS_lstring & constinArgument1,
                                                      const class GGS_routineFormalArgumentListAST & constinArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationDecorationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_declarationDecorationList final {
  public: DownEnumerator_declarationDecorationList (const class GGS_declarationDecorationList & inList) ;

  public: ~ DownEnumerator_declarationDecorationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationDecorationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationDecorationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declarationDecorationList (const DownEnumerator_declarationDecorationList &) = delete ;
  private: DownEnumerator_declarationDecorationList & operator = (const DownEnumerator_declarationDecorationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declarationDecorationList final {
  public: UpEnumerator_declarationDecorationList (const class GGS_declarationDecorationList & inList)  ;

  public: ~ UpEnumerator_declarationDecorationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationDecorationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationDecorationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declarationDecorationList (const UpEnumerator_declarationDecorationList &) = delete ;
  private: UpEnumerator_declarationDecorationList & operator = (const UpEnumerator_declarationDecorationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @declarationDecorationList list
//--------------------------------------------------------------------------------------------------

class GGS_declarationDecorationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_declarationDecorationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_declarationDecorationList (void) ;

//--- Destructor
  public: virtual ~ GGS_declarationDecorationList (void) = default ;

//--- Copy
  public: GGS_declarationDecorationList (const GGS_declarationDecorationList &) = default ;
  public: GGS_declarationDecorationList & operator = (const GGS_declarationDecorationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_declarationDecorationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_declarationDecorationList subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_declarationDecorationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationDecorationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationDecorationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationDecorationList class_func_listWithValue (const class GGS_abstractDecoratedDeclaration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_declarationDecorationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_abstractDecoratedDeclaration & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_declarationDecorationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_declarationDecorationList add_operation (const GGS_declarationDecorationList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_abstractDecoratedDeclaration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_abstractDecoratedDeclaration constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_abstractDecoratedDeclaration & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_abstractDecoratedDeclaration & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_abstractDecoratedDeclaration & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationAtIndex (class GGS_abstractDecoratedDeclaration constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_abstractDecoratedDeclaration & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_abstractDecoratedDeclaration & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_abstractDecoratedDeclaration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_declarationDecorationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationDecorationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationDecorationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declarationDecorationList ;
  friend class DownEnumerator_declarationDecorationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationDecorationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constructorMap final {

  public: DownEnumerator_constructorMap (const class GGS_constructorMap & inMap) ;

  public: ~ DownEnumerator_constructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;

  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;

  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constructorMap (const DownEnumerator_constructorMap &) = delete ;
  private: DownEnumerator_constructorMap & operator = (const DownEnumerator_constructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constructorMap final {
  public: UpEnumerator_constructorMap (const class GGS_constructorMap & inMap)  ;

  public: ~ UpEnumerator_constructorMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GGS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
  public: class GGS_constructorMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constructorMap (const UpEnumerator_constructorMap &) = delete ;
  private: UpEnumerator_constructorMap & operator = (const UpEnumerator_constructorMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constructorMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constructorMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constructorMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constructorMap (void) ;

//--- Handle copy
  public: GGS_constructorMap (const GGS_constructorMap & inSource) ;
  public: GGS_constructorMap & operator = (const GGS_constructorMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_constructorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constructorMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorMap extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorMap class_func_mapWithMapToOverride (const class GGS_constructorMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_constructorSignature constinArgument1,
                                 class GGS_constructorValue constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInitValueForKey (class GGS_constructorValue constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMSignatureForKey (class GGS_constructorSignature constinArgument0,
                                           class GGS_string constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_constructorSignature & outArgument1,
                                 class GGS_constructorValue & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_constructorValue getter_mInitValueForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_constructorSignature getter_mSignatureForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_constructorMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_constructorMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constructorMap ;
  friend class DownEnumerator_constructorMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const class GGS_unifiedTypeMap inObject,
                                 const class GGS_lstring constin_inLKey,
                                 class GGS_omnibusType & out_outTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ;

extern BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listTargets ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_printPasses ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ;

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ;

extern StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

extern StringListCommandLineOption gOption_omnibus_5F_options_pathList ;

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithoutArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithoutArgument (class GGS_routineMapForContext & ioObject,
                                                 const class GGS_string constin_inOmnibusTypeDescriptionName,
                                                 const class GGS_string constin_inLLVMBaseTypeName,
                                                 const class GGS_lstring constin_inMethodName,
                                                 const class GGS_mode constin_inMode,
                                                 const class GGS_unifiedTypeMapEntry constin_inResultType,
                                                 class GGS_lstring & out_outRoutineLLVMName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (class GGS_universalValuedObjectMap & ioObject,
                                 const class GGS_lstring constin_inTaskName,
                                 const class GGS_omnibusType constin_inTaskType,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: inline GGS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_lbigint mProperty_mStackSize ;
  public: inline GGS_lbigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskSetupListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskSetupListAST (void) const {
    return mProperty_mTaskSetupListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskActivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskActivateListAST (void) const {
    return mProperty_mTaskActivateListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskDeactivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskDeactivateListAST (void) const {
    return mProperty_mTaskDeactivateListAST ;
  }

  public: GGS_location mProperty_mEndOfTaskDeclaration ;
  public: inline GGS_location readProperty_mEndOfTaskDeclaration (void) const {
    return mProperty_mEndOfTaskDeclaration ;
  }

  public: GGS_bool mProperty_mAutoStart ;
  public: inline GGS_bool readProperty_mAutoStart (void) const {
    return mProperty_mAutoStart ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_decoratedTaskList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMTaskSetupListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskSetupListAST = inValue ;
  }

  public: inline void setter_setMTaskActivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskActivateListAST = inValue ;
  }

  public: inline void setter_setMTaskDeactivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskDeactivateListAST = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_decoratedTaskList_2E_element (const GGS_lstring & in_mTaskName,
                                            const GGS_lbigint & in_mStackSize,
                                            const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                            const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                            const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                            const GGS_location & in_mEndOfTaskDeclaration,
                                            const GGS_bool & in_mAutoStart) ;

//--------------------------------- Copy constructor
  public: GGS_decoratedTaskList_2E_element (const GGS_decoratedTaskList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_decoratedTaskList_2E_element & operator = (const GGS_decoratedTaskList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lbigint & inOperand1,
                                                                                    const class GGS_taskSetupListAST & inOperand2,
                                                                                    const class GGS_taskSetupListAST & inOperand3,
                                                                                    const class GGS_taskSetupListAST & inOperand4,
                                                                                    const class GGS_location & inOperand5,
                                                                                    const class GGS_bool & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskListDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedTaskListDeclaration_2E_weak (const class GGS_decoratedTaskListDeclaration & inSource) ;

  public: GGS_decoratedTaskListDeclaration_2E_weak & operator = (const class GGS_decoratedTaskListDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedTaskListDeclaration_2E_weak init_nil (void) {
    GGS_decoratedTaskListDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedTaskListDeclaration bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedTaskListDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskListDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskListDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mTaskType ;
  public: inline GGS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskMapIR_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_omnibusType & in_mTaskType,
                                    const GGS_uint & in_mPriority,
                                    const GGS_bigint & in_mStackSize,
                                    const GGS_stringlist & in_mSetupOrderedList,
                                    const GGS_stringlist & in_mActivateOrderedList,
                                    const GGS_stringlist & in_mDeactivateOrderedList,
                                    const GGS_uint & in_mTaskNameStringIndex,
                                    const GGS_bool & in_mActivate) ;

//--------------------------------- Copy constructor
  public: GGS_taskMapIR_2E_element (const GGS_taskMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskMapIR_2E_element & operator = (const GGS_taskMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMapIR_2E_element init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_omnibusType & inOperand1,
                                                                                    const class GGS_uint & inOperand2,
                                                                                    const class GGS_bigint & inOperand3,
                                                                                    const class GGS_stringlist & inOperand4,
                                                                                    const class GGS_stringlist & inOperand5,
                                                                                    const class GGS_stringlist & inOperand6,
                                                                                    const class GGS_uint & inOperand7,
                                                                                    const class GGS_bool & inOperand8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMapIR_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: taskMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_taskMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_taskMapIR_2E_element_3F_ (const GGS_taskMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_taskMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_taskMapIR_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_taskSortedListIR final {
//--- Constructor
  public: DownEnumerator_taskSortedListIR (const class GGS_taskSortedListIR & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_taskSortedListIR_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_taskSortedListIR_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_taskSortedListIR (const DownEnumerator_taskSortedListIR &) = delete ;
  private: DownEnumerator_taskSortedListIR & operator = (const DownEnumerator_taskSortedListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_taskSortedListIR final {
//--- Constructor
  public: UpEnumerator_taskSortedListIR (const class GGS_taskSortedListIR & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_taskSortedListIR_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_taskSortedListIR_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_taskSortedListIR (const UpEnumerator_taskSortedListIR &) = delete ;
  private: UpEnumerator_taskSortedListIR & operator = (const UpEnumerator_taskSortedListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR sorted list
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_taskSortedListIR_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_taskSortedListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_taskSortedListIR (void) = default ;

//--- Handle copy
  public: GGS_taskSortedListIR (const GGS_taskSortedListIR &) = default ;
  public: GGS_taskSortedListIR & operator = (const GGS_taskSortedListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_taskSortedListIR_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSortedListIR class_func_sortedListWithValue (const class GGS_string & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            const class GGS_bigint & inOperand2,
                                                                            const class GGS_stringlist & inOperand3,
                                                                            const class GGS_stringlist & inOperand4,
                                                                            const class GGS_stringlist & inOperand5,
                                                                            const class GGS_uint & inOperand6,
                                                                            const class GGS_bool & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_taskSortedListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_uint & inOperand1,
                                   const class GGS_bigint & inOperand2,
                                   const class GGS_stringlist & inOperand3,
                                   const class GGS_stringlist & inOperand4,
                                   const class GGS_stringlist & inOperand5,
                                   const class GGS_uint & inOperand6,
                                   const class GGS_bool & inOperand7
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_taskSortedListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string inArgument0,
                              class GGS_uint inArgument1,
                              class GGS_bigint inArgument2,
                              class GGS_stringlist inArgument3,
                              class GGS_stringlist inArgument4,
                              class GGS_stringlist inArgument5,
                              class GGS_uint inArgument6,
                              class GGS_bool inArgument7,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_popGreatest (class GGS_string & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_bigint & outArgument2,
                                   class GGS_stringlist & outArgument3,
                                   class GGS_stringlist & outArgument4,
                                   class GGS_stringlist & outArgument5,
                                   class GGS_uint & outArgument6,
                                   class GGS_bool & outArgument7,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_popSmallest (class GGS_string & outArgument0,
                                   class GGS_uint & outArgument1,
                                   class GGS_bigint & outArgument2,
                                   class GGS_stringlist & outArgument3,
                                   class GGS_stringlist & outArgument4,
                                   class GGS_stringlist & outArgument5,
                                   class GGS_uint & outArgument6,
                                   class GGS_bool & outArgument7,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_greatest (class GGS_string & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_bigint & outArgument2,
                                class GGS_stringlist & outArgument3,
                                class GGS_stringlist & outArgument4,
                                class GGS_stringlist & outArgument5,
                                class GGS_uint & outArgument6,
                                class GGS_bool & outArgument7,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void method_smallest (class GGS_string & outArgument0,
                                class GGS_uint & outArgument1,
                                class GGS_bigint & outArgument2,
                                class GGS_stringlist & outArgument3,
                                class GGS_stringlist & outArgument4,
                                class GGS_stringlist & outArgument5,
                                class GGS_uint & outArgument6,
                                class GGS_bool & outArgument7,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_taskSortedListIR ;
  friend class DownEnumerator_taskSortedListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTaskName ;
  public: inline GGS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskSortedListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSortedListIR_2E_element (const GGS_string & in_mTaskName,
                                           const GGS_uint & in_mPriority,
                                           const GGS_bigint & in_mStackSize,
                                           const GGS_stringlist & in_mSetupOrderedList,
                                           const GGS_stringlist & in_mActivateOrderedList,
                                           const GGS_stringlist & in_mDeactivateOrderedList,
                                           const GGS_uint & in_mTaskNameStringIndex,
                                           const GGS_bool & in_mActivate) ;

//--------------------------------- Copy constructor
  public: GGS_taskSortedListIR_2E_element (const GGS_taskSortedListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskSortedListIR_2E_element & operator = (const GGS_taskSortedListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       const class GGS_bigint & inOperand2,
                                                                                       const class GGS_stringlist & inOperand3,
                                                                                       const class GGS_stringlist & inOperand4,
                                                                                       const class GGS_stringlist & inOperand5,
                                                                                       const class GGS_uint & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalTaskVariableList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalTaskVariableList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTaskName ;
  public: inline GGS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_string mProperty_mTaskTypeName ;
  public: inline GGS_string readProperty_mTaskTypeName (void) const {
    return mProperty_mTaskTypeName ;
  }

  public: GGS_objectIR mProperty_mInitialValue ;
  public: inline GGS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalTaskVariableList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMTaskTypeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskTypeName = inValue ;
  }

  public: inline void setter_setMInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalTaskVariableList_2E_element (const GGS_string & in_mTaskName,
                                                 const GGS_string & in_mTaskTypeName,
                                                 const GGS_objectIR & in_mInitialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalTaskVariableList_2E_element (const GGS_globalTaskVariableList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalTaskVariableList_2E_element & operator = (const GGS_globalTaskVariableList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalTaskVariableList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_objectIR & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalTaskVariableList_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const class GGS_taskMapIR inObject,
                                   class GGS_string & io_ioLLVMcode,
                                   const class GGS_generationContext constin_inGenerationContext,
                                   class GGS_generationAdds & io_ioGenerationAdds,
                                   class GGS_primitiveAndServiceIRlist & io_ioServiceList,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_activateNameForTaskType (const class GGS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_deactivateNameForTaskType (const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_literalStringName (const class GGS_uint & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmAttributeFunction (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForFunction (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForGlobalVariable (const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSelf (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceImplementation (const class GGS_string & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmSeparatorLine (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmTitleComment (const class GGS_string & constinArgument0,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_mainRoutineNameForTask (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_setupNameForTaskType (const class GGS_string & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackAddressForTask (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackNameForTask (const class GGS_string & constinArgument0,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmValue (const class GGS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveAndServiceIRlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_primitiveAndServiceIRlist final {
  public: DownEnumerator_primitiveAndServiceIRlist (const class GGS_primitiveAndServiceIRlist & inList) ;

  public: ~ DownEnumerator_primitiveAndServiceIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primitiveAndServiceIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_primitiveAndServiceIRlist (const DownEnumerator_primitiveAndServiceIRlist &) = delete ;
  private: DownEnumerator_primitiveAndServiceIRlist & operator = (const DownEnumerator_primitiveAndServiceIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_primitiveAndServiceIRlist final {
  public: UpEnumerator_primitiveAndServiceIRlist (const class GGS_primitiveAndServiceIRlist & inList)  ;

  public: ~ UpEnumerator_primitiveAndServiceIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primitiveAndServiceIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_primitiveAndServiceIRlist (const UpEnumerator_primitiveAndServiceIRlist &) = delete ;
  private: UpEnumerator_primitiveAndServiceIRlist & operator = (const UpEnumerator_primitiveAndServiceIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @primitiveAndServiceIRlist list
//--------------------------------------------------------------------------------------------------

class GGS_primitiveAndServiceIRlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;

//--- Default constructor
  public: GGS_primitiveAndServiceIRlist (void) ;

//--- Destructor
  public: virtual ~ GGS_primitiveAndServiceIRlist (void) = default ;

//--- Copy
  public: GGS_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist &) = default ;
  public: GGS_primitiveAndServiceIRlist & operator = (const GGS_primitiveAndServiceIRlist &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_primitiveAndServiceIRlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_primitiveAndServiceIRlist subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_primitiveAndServiceIRlist (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mCallName,
                                                 const class GGS_string & in_mImplementationName,
                                                 const class GGS_bool & in_mHasReturnValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveAndServiceIRlist init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveAndServiceIRlist extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveAndServiceIRlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_primitiveAndServiceIRlist inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_bool & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_primitiveAndServiceIRlist_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_primitiveAndServiceIRlist add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_bool constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_bool & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_bool & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCallNameAtIndex (class GGS_string constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMHasReturnValueAtIndex (class GGS_bool constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMImplementationNameAtIndex (class GGS_string constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_bool & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_bool & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_string getter_mCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mHasReturnValueAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_primitiveAndServiceIRlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_primitiveAndServiceIRlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_primitiveAndServiceIRlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_primitiveAndServiceIRlist ;
  friend class DownEnumerator_primitiveAndServiceIRlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationAdds struct
//--------------------------------------------------------------------------------------------------

class GGS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mUniqueIndex ;
  public: inline GGS_uint readProperty_mUniqueIndex (void) const {
    return mProperty_mUniqueIndex ;
  }

  public: GGS_stringset mProperty_mExternFunctionDeclarationSet ;
  public: inline GGS_stringset readProperty_mExternFunctionDeclarationSet (void) const {
    return mProperty_mExternFunctionDeclarationSet ;
  }

  public: GGS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GGS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GGS_bool mProperty_mUsesGuards ;
  public: inline GGS_bool readProperty_mUsesGuards (void) const {
    return mProperty_mUsesGuards ;
  }

  public: GGS_bool mProperty_mNeedsDynamicMemoryAllocation ;
  public: inline GGS_bool readProperty_mNeedsDynamicMemoryAllocation (void) const {
    return mProperty_mNeedsDynamicMemoryAllocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationAdds (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUniqueIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUniqueIndex = inValue ;
  }

  public: inline void setter_setMExternFunctionDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionDeclarationSet = inValue ;
  }

  public: inline void setter_setMStaticEntityMap (const GGS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMUsesGuards (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUsesGuards = inValue ;
  }

  public: inline void setter_setMNeedsDynamicMemoryAllocation (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsDynamicMemoryAllocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationAdds (const GGS_uint & in_mUniqueIndex,
                              const GGS_stringset & in_mExternFunctionDeclarationSet,
                              const GGS_staticEntityMap & in_mStaticEntityMap,
                              const GGS_bool & in_mUsesGuards,
                              const GGS_bool & in_mNeedsDynamicMemoryAllocation) ;

//--------------------------------- Copy constructor
  public: GGS_generationAdds (const GGS_generationAdds & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationAdds & operator = (const GGS_generationAdds & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationAdds init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationAdds extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationAdds ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationContext struct
//--------------------------------------------------------------------------------------------------

class GGS_generationContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_mPanicCodeLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicCodeLLVMType (void) const {
    return mProperty_mPanicCodeLLVMType ;
  }

  public: GGS_omnibusType mProperty_mPanicLineLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicLineLLVMType (void) const {
    return mProperty_mPanicLineLLVMType ;
  }

  public: GGS_string mProperty_mNopInstructionInLLVM ;
  public: inline GGS_string readProperty_mNopInstructionInLLVM (void) const {
    return mProperty_mNopInstructionInLLVM ;
  }

  public: GGS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GGS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GGS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GGS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPanicCodeLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeLLVMType = inValue ;
  }

  public: inline void setter_setMPanicLineLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineLLVMType = inValue ;
  }

  public: inline void setter_setMNopInstructionInLLVM (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionInLLVM = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GGS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GGS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationContext (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                 const GGS_omnibusType & in_mPanicLineLLVMType,
                                 const GGS_string & in_mNopInstructionInLLVM,
                                 const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                 const GGS_availableInterruptMap & in_mAvailableInterruptMap) ;

//--------------------------------- Copy constructor
  public: GGS_generationContext (const GGS_generationContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationContext & operator = (const GGS_generationContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationContext init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_omnibusType & inOperand1,
                                                                 const class GGS_string & inOperand2,
                                                                 const class GGS_globalTaskVariableList & inOperand3,
                                                                 const class GGS_availableInterruptMap & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationContext extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskActivateFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskActivateFunctionIR_2E_weak (const class GGS_taskActivateFunctionIR & inSource) ;

  public: GGS_taskActivateFunctionIR_2E_weak & operator = (const class GGS_taskActivateFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_taskActivateFunctionIR_2E_weak init_nil (void) {
    GGS_taskActivateFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_taskActivateFunctionIR bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_taskActivateFunctionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskActivateFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskActivateFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (class GGS_instructionListIR & ioObject,
                                                          const class GGS_omnibusType constin_inType,
                                                          const class GGS_string constin_inLLVMName,
                                                          const class GGS_string constin_inElementLLVMName,
                                                          const class GGS_uint constin_inPropertyIndex,
                                                          const class GGS_string constin_inPropertyName,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalPropertyReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalPropertyReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getUniversalPropertyReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getUniversalPropertyReferenceIR (const class cPtr_getUniversalPropertyReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GGS_uint & inValue) ;

  public: class GGS_string readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getUniversalPropertyReferenceIR init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               const class GGS_uint & inOperand3,
                                                                               const class GGS_string & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalPropertyReferenceIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         const class GGS_string & inOperand4,
                                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_string mProperty_mElementLLVMName ;
  public: GGS_uint mProperty_mPropertyIndex ;
  public: GGS_string mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_getUniversalPropertyReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalPropertyReferenceIR (const GGS_omnibusType & in_mType,
                                                const GGS_string & in_mLLVMName,
                                                const GGS_string & in_mElementLLVMName,
                                                const GGS_uint & in_mPropertyIndex,
                                                const GGS_string & in_mPropertyName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalPropertyReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalPropertyReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getUniversalPropertyReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getUniversalPropertyReferenceIR_2E_weak (const class GGS_getUniversalPropertyReferenceIR & inSource) ;

  public: GGS_getUniversalPropertyReferenceIR_2E_weak & operator = (const class GGS_getUniversalPropertyReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getUniversalPropertyReferenceIR_2E_weak init_nil (void) {
    GGS_getUniversalPropertyReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getUniversalPropertyReferenceIR bang_getUniversalPropertyReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getUniversalPropertyReferenceIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalPropertyReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalPropertyReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalPropertyReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_assertInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assertInstructionAST (const class cPtr_assertInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assertInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_expressionAST & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assertInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_assertInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assertInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                  const class GGS_expressionAST & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_assertInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assertInstructionAST (const GGS_location & in_mInstructionLocation,
                                     const GGS_expressionAST & in_mExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionAST_2E_weak (const class GGS_assertInstructionAST & inSource) ;

  public: GGS_assertInstructionAST_2E_weak & operator = (const class GGS_assertInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assertInstructionAST_2E_weak init_nil (void) {
    GGS_assertInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assertInstructionAST bang_assertInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assertInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assertInstructionIR (const class cPtr_assertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mAssertInstructionLocation (void) const ;
  public: void setProperty_mAssertInstructionLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionValue (void) const ;
  public: void setProperty_mExpressionValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assertInstructionIR init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_instructionListIR & inOperand1,
                                                           const class GGS_objectIR & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assertInstructionIR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_instructionListIR & inOperand1,
                                                     const class GGS_objectIR & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mAssertInstructionLocation ;
  public: GGS_instructionListIR mProperty_mInstructionList ;
  public: GGS_objectIR mProperty_mExpressionValue ;


//--- Default constructor
  public: cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assertInstructionIR (const GGS_location & in_mAssertInstructionLocation,
                                    const GGS_instructionListIR & in_mInstructionList,
                                    const GGS_objectIR & in_mExpressionValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assertInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionIR_2E_weak (const class GGS_assertInstructionIR & inSource) ;

  public: GGS_assertInstructionIR_2E_weak & operator = (const class GGS_assertInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assertInstructionIR_2E_weak init_nil (void) {
    GGS_assertInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assertInstructionIR bang_assertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assertInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerSliceFieldListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_integerSliceFieldListAST final {
  public: DownEnumerator_integerSliceFieldListAST (const class GGS_integerSliceFieldListAST & inList) ;

  public: ~ DownEnumerator_integerSliceFieldListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_integerSliceFieldListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_integerSliceFieldListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_integerSliceFieldListAST (const DownEnumerator_integerSliceFieldListAST &) = delete ;
  private: DownEnumerator_integerSliceFieldListAST & operator = (const DownEnumerator_integerSliceFieldListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_integerSliceFieldListAST final {
  public: UpEnumerator_integerSliceFieldListAST (const class GGS_integerSliceFieldListAST & inList)  ;

  public: ~ UpEnumerator_integerSliceFieldListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_integerSliceFieldListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_integerSliceFieldListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_integerSliceFieldListAST (const UpEnumerator_integerSliceFieldListAST &) = delete ;
  private: UpEnumerator_integerSliceFieldListAST & operator = (const UpEnumerator_integerSliceFieldListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @integerSliceFieldListAST list
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceFieldListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_integerSliceFieldListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_integerSliceFieldListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_integerSliceFieldListAST (void) = default ;

//--- Copy
  public: GGS_integerSliceFieldListAST (const GGS_integerSliceFieldListAST &) = default ;
  public: GGS_integerSliceFieldListAST & operator = (const GGS_integerSliceFieldListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_integerSliceFieldListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_integerSliceFieldListAST subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_integerSliceFieldListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceWidth,
                                                 const class GGS_expressionAST & in_mExpression,
                                                 const class GGS_location & in_mExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerSliceFieldListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceFieldListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerSliceFieldListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                              const class GGS_expressionAST & inOperand1,
                                                                              const class GGS_location & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_integerSliceFieldListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_expressionAST & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_integerSliceFieldListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_integerSliceFieldListAST add_operation (const GGS_integerSliceFieldListAST & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_expressionAST constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_expressionAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_expressionAST & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_expressionAST & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_expressionAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_expressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionLocationAtIndex (class GGS_location constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceWidthAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_expressionAST & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_expressionAST & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_expressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mExpressionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSliceWidthAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_integerSliceFieldListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_integerSliceFieldListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_integerSliceFieldListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_integerSliceFieldListAST ;
  friend class DownEnumerator_integerSliceFieldListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerSliceFieldListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceFieldListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mExpressionLocation ;
  public: inline GGS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_integerSliceFieldListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_integerSliceFieldListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                   const GGS_expressionAST & in_mExpression,
                                                   const GGS_location & in_mExpressionLocation) ;

//--------------------------------- Copy constructor
  public: GGS_integerSliceFieldListAST_2E_element (const GGS_integerSliceFieldListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_integerSliceFieldListAST_2E_element & operator = (const GGS_integerSliceFieldListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerSliceFieldListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_expressionAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceFieldListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_integerSliceExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_integerSliceExpressionAST (const class cPtr_integerSliceExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_integerSliceFieldListAST readProperty_mSliceValues (void) const ;
  public: void setProperty_mSliceValues (const GGS_integerSliceFieldListAST & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerSliceExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_integerSliceFieldListAST & inOperand1,
                                                                 const class GGS_location & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceExpressionAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @integerSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_integerSliceExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerSliceExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_integerSliceFieldListAST & inOperand1,
                                                           const class GGS_location & inOperand2,
                                                           Compiler * inCompiler) ;


//--- Extension method addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_integerSliceFieldListAST mProperty_mSliceValues ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_integerSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerSliceExpressionAST (const GGS_lstring & in_mTypeName,
                                          const GGS_integerSliceFieldListAST & in_mSliceValues,
                                          const GGS_location & in_mLocation,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerSliceExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerSliceExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerSliceExpressionAST_2E_weak (const class GGS_integerSliceExpressionAST & inSource) ;

  public: GGS_integerSliceExpressionAST_2E_weak & operator = (const class GGS_integerSliceExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerSliceExpressionAST_2E_weak init_nil (void) {
    GGS_integerSliceExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerSliceExpressionAST bang_integerSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_integerSliceExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerSliceExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerSliceExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @systemRoutineDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemRoutineDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_systemRoutineDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_systemRoutineDeclarationAST (const class cPtr_systemRoutineDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mSystemRoutineName (void) const ;
  public: void setProperty_mSystemRoutineName (const GGS_lstring & inValue) ;

  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_bool readProperty_mPublic (void) const ;
  public: void setProperty_mPublic (const GGS_bool & inValue) ;

  public: class GGS_lstringlist readProperty_mAttributeList (void) const ;
  public: void setProperty_mAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mFormalArgumentList (void) const ;
  public: void setProperty_mFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_lstring readProperty_mReturnTypeName (void) const ;
  public: void setProperty_mReturnTypeName (const GGS_lstring & inValue) ;

  public: class GGS_instructionListAST readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfInstructionListLocation (void) const ;
  public: void setProperty_mEndOfInstructionListLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_systemRoutineDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_lstring & inOperand1,
                                                                                           const class GGS_mode & inOperand2,
                                                                                           const class GGS_bool & inOperand3,
                                                                                           const class GGS_lstringlist & inOperand4,
                                                                                           const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                           const class GGS_lstring & inOperand6,
                                                                                           const class GGS_instructionListAST & inOperand7,
                                                                                           const class GGS_location & inOperand8,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemRoutineDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemRoutineDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @systemRoutineDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_systemRoutineDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void systemRoutineDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_mode & inOperand2,
                                                                                     const class GGS_bool & inOperand3,
                                                                                     const class GGS_lstringlist & inOperand4,
                                                                                     const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                     const class GGS_lstring & inOperand6,
                                                                                     const class GGS_instructionListAST & inOperand7,
                                                                                     const class GGS_location & inOperand8,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mSystemRoutineName ;
  public: GGS_mode mProperty_mMode ;
  public: GGS_bool mProperty_mPublic ;
  public: GGS_lstringlist mProperty_mAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;
  public: GGS_lstring mProperty_mReturnTypeName ;
  public: GGS_instructionListAST mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstructionListLocation ;


//--- Default constructor
  public: cPtr_systemRoutineDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_systemRoutineDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                            const GGS_lstring & in_mSystemRoutineName,
                                            const GGS_mode & in_mMode,
                                            const GGS_bool & in_mPublic,
                                            const GGS_lstringlist & in_mAttributeList,
                                            const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                            const GGS_lstring & in_mReturnTypeName,
                                            const GGS_instructionListAST & in_mInstructionList,
                                            const GGS_location & in_mEndOfInstructionListLocation,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @systemRoutineDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemRoutineDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemRoutineDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemRoutineDeclarationAST_2E_weak (const class GGS_systemRoutineDeclarationAST & inSource) ;

  public: GGS_systemRoutineDeclarationAST_2E_weak & operator = (const class GGS_systemRoutineDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_systemRoutineDeclarationAST_2E_weak init_nil (void) {
    GGS_systemRoutineDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_systemRoutineDeclarationAST bang_systemRoutineDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_systemRoutineDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemRoutineDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_systemRoutineDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemRoutineDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sectionIRlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sectionIRlist final {
  public: DownEnumerator_sectionIRlist (const class GGS_sectionIRlist & inList) ;

  public: ~ DownEnumerator_sectionIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sectionIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sectionIRlist (const DownEnumerator_sectionIRlist &) = delete ;
  private: DownEnumerator_sectionIRlist & operator = (const DownEnumerator_sectionIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sectionIRlist final {
  public: UpEnumerator_sectionIRlist (const class GGS_sectionIRlist & inList)  ;

  public: ~ UpEnumerator_sectionIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sectionIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sectionIRlist (const UpEnumerator_sectionIRlist &) = delete ;
  private: UpEnumerator_sectionIRlist & operator = (const UpEnumerator_sectionIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sectionIRlist list
//--------------------------------------------------------------------------------------------------

class GGS_sectionIRlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sectionIRlist_2E_element> mArray ;

//--- Default constructor
  public: GGS_sectionIRlist (void) ;

//--- Destructor
  public: virtual ~ GGS_sectionIRlist (void) = default ;

//--- Copy
  public: GGS_sectionIRlist (const GGS_sectionIRlist &) = default ;
  public: GGS_sectionIRlist & operator = (const GGS_sectionIRlist &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_sectionIRlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sectionIRlist subList (const int32_t inStart,
                                      const int32_t inLength,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sectionIRlist (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_string & in_mSectionCallName,
                                                 const class GGS_string & in_mSectionImplementationName,
                                                 const class GGS_bool & in_invocationFromAnyMode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionIRlist init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionIRlist extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionIRlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                   const class GGS_string & inOperand1,
                                                                   const class GGS_bool & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_sectionIRlist inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_string & inOperand1,
                                   const class GGS_bool & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_sectionIRlist_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_sectionIRlist add_operation (const GGS_sectionIRlist & inOperand,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_string constinArgument0,
                              class GGS_string constinArgument1,
                              class GGS_bool constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_string constinArgument0,
                                     class GGS_string constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_string & outArgument0,
                                class GGS_string & outArgument1,
                                class GGS_bool & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_string & outArgument0,
                               class GGS_string & outArgument1,
                               class GGS_bool & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_string & outArgument0,
                                     class GGS_string & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setInvocationFromAnyModeAtIndex (class GGS_bool constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMSectionCallNameAtIndex (class GGS_string constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMSectionImplementationNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_string & outArgument0,
                             class GGS_string & outArgument1,
                             class GGS_bool & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_string & outArgument0,
                            class GGS_string & outArgument1,
                            class GGS_bool & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_invocationFromAnyModeAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSectionCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSectionImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_sectionIRlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_sectionIRlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_sectionIRlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sectionIRlist ;
  friend class DownEnumerator_sectionIRlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sectionIRlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sectionIRlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mSectionCallName ;
  public: inline GGS_string readProperty_mSectionCallName (void) const {
    return mProperty_mSectionCallName ;
  }

  public: GGS_string mProperty_mSectionImplementationName ;
  public: inline GGS_string readProperty_mSectionImplementationName (void) const {
    return mProperty_mSectionImplementationName ;
  }

  public: GGS_bool mProperty_invocationFromAnyMode ;
  public: inline GGS_bool readProperty_invocationFromAnyMode (void) const {
    return mProperty_invocationFromAnyMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sectionIRlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSectionCallName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionCallName = inValue ;
  }

  public: inline void setter_setMSectionImplementationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionImplementationName = inValue ;
  }

  public: inline void setter_setInvocationFromAnyMode (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_invocationFromAnyMode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sectionIRlist_2E_element (const GGS_string & in_mSectionCallName,
                                        const GGS_string & in_mSectionImplementationName,
                                        const GGS_bool & in_invocationFromAnyMode) ;

//--------------------------------- Copy constructor
  public: GGS_sectionIRlist_2E_element (const GGS_sectionIRlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sectionIRlist_2E_element & operator = (const GGS_sectionIRlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionIRlist_2E_element init_21__21__21_invocationFromAnyMode (const class GGS_string & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionIRlist_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveAndServiceIRlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_primitiveAndServiceIRlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mCallName ;
  public: inline GGS_string readProperty_mCallName (void) const {
    return mProperty_mCallName ;
  }

  public: GGS_string mProperty_mImplementationName ;
  public: inline GGS_string readProperty_mImplementationName (void) const {
    return mProperty_mImplementationName ;
  }

  public: GGS_bool mProperty_mHasReturnValue ;
  public: inline GGS_bool readProperty_mHasReturnValue (void) const {
    return mProperty_mHasReturnValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCallName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCallName = inValue ;
  }

  public: inline void setter_setMImplementationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationName = inValue ;
  }

  public: inline void setter_setMHasReturnValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasReturnValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (const GGS_string & in_mCallName,
                                                    const GGS_string & in_mImplementationName,
                                                    const GGS_bool & in_mHasReturnValue) ;

//--------------------------------- Copy constructor
  public: GGS_primitiveAndServiceIRlist_2E_element (const GGS_primitiveAndServiceIRlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primitiveAndServiceIRlist_2E_element & operator = (const GGS_primitiveAndServiceIRlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveAndServiceIRlist_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_bool & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveAndServiceIRlist_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineTypedSignature_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineTypedSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineTypedSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GGS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineTypedSignature_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                const GGS_lstring & in_mSelector,
                                                const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                const GGS_lstring & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_routineTypedSignature_2E_element (const GGS_routineTypedSignature_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineTypedSignature_2E_element & operator = (const GGS_routineTypedSignature_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineTypedSignature_2E_element init_21__21__21__21_ (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineTypedSignature_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineTypedSignature_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @systemUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemUserRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_systemUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_systemUserRoutineIR (const class cPtr_systemUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mMangledImplementationName (void) const ;
  public: void setProperty_mMangledImplementationName (const GGS_string & inValue) ;

  public: class GGS_routineTypedSignature readProperty_mFormalArgumentList (void) const ;
  public: void setProperty_mFormalArgumentList (const GGS_routineTypedSignature & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverTypeProxy (void) const ;
  public: void setProperty_mReceiverTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_bool readProperty_mIsSection (void) const ;
  public: void setProperty_mIsSection (const GGS_bool & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_systemUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_bool & inOperand1,
                                                                                                      const class GGS_bool & inOperand2,
                                                                                                      const class GGS_string & inOperand3,
                                                                                                      const class GGS_routineTypedSignature & inOperand4,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                      const class GGS_bool & inOperand6,
                                                                                                      const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemUserRoutineIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @systemUserRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_systemUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                const class GGS_string & inOperand3,
                                                                                                const class GGS_routineTypedSignature & inOperand4,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                const class GGS_bool & inOperand6,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mMangledImplementationName ;
  public: GGS_routineTypedSignature mProperty_mFormalArgumentList ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverTypeProxy ;
  public: GGS_bool mProperty_mIsSection ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;


//--- Default constructor
  public: cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_systemUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                    const GGS_bool & in_isRequired,
                                    const GGS_bool & in_warnsIfUnused,
                                    const GGS_string & in_mMangledImplementationName,
                                    const GGS_routineTypedSignature & in_mFormalArgumentList,
                                    const GGS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                    const GGS_bool & in_mIsSection,
                                    const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @systemUserRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_systemUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_systemUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_systemUserRoutineIR_2E_weak (const class GGS_systemUserRoutineIR & inSource) ;

  public: GGS_systemUserRoutineIR_2E_weak & operator = (const class GGS_systemUserRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_systemUserRoutineIR_2E_weak init_nil (void) {
    GGS_systemUserRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_systemUserRoutineIR bang_systemUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_systemUserRoutineIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_systemUserRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_systemUserRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_systemUserRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (class GGS_instructionListIR & ioObject,
                                        const class GGS_string constin_inComment,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_freeCommentIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_freeCommentIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_freeCommentIR (const class cPtr_freeCommentIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mComment (void) const ;
  public: void setProperty_mComment (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_freeCommentIR init_21_ (const class GGS_string & inOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_freeCommentIR extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeCommentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

class cPtr_freeCommentIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void freeCommentIR_init_21_ (const class GGS_string & inOperand0,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mComment ;


//--- Default constructor
  public: cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeCommentIR (const GGS_string & in_mComment,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @freeCommentIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_freeCommentIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_freeCommentIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_freeCommentIR_2E_weak (const class GGS_freeCommentIR & inSource) ;

  public: GGS_freeCommentIR_2E_weak & operator = (const class GGS_freeCommentIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_freeCommentIR_2E_weak init_nil (void) {
    GGS_freeCommentIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_freeCommentIR bang_freeCommentIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_freeCommentIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_freeCommentIR_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_freeCommentIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_freeCommentIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (class GGS_instructionListIR & ioObject,
                                                              const class GGS_omnibusType constin_inType,
                                                              const class GGS_string constin_inLLVMName,
                                                              const class GGS_omnibusType constin_inElementType,
                                                              const class GGS_string constin_inElementLLVMName,
                                                              const class GGS_objectIR constin_inIndexIR,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getUniversalArrayElementReferenceIR (const class cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getUniversalArrayElementReferenceIR init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_omnibusType & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_objectIR & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalArrayElementReferenceIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_omnibusType & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_objectIR & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_string mProperty_mElementLLVMName ;
  public: GGS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_getUniversalArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalArrayElementReferenceIR (const GGS_omnibusType & in_mType,
                                                    const GGS_string & in_mLLVMName,
                                                    const GGS_omnibusType & in_mElementType,
                                                    const GGS_string & in_mElementLLVMName,
                                                    const GGS_objectIR & in_mIndexIR,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalArrayElementReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

  public: GGS_getUniversalArrayElementReferenceIR_2E_weak & operator = (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getUniversalArrayElementReferenceIR_2E_weak init_nil (void) {
    GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getUniversalArrayElementReferenceIR bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getUniversalArrayElementReferenceIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalArrayElementReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalArrayElementReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compiletimePrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_compiletimePrefixOperatorAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compiletimePrefixOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compiletimePrefixOperatorAST (const class cPtr_compiletimePrefixOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_compileTimePrefixOperatorEnumeration readProperty_mPrefixOperator (void) const ;
  public: void setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) ;

  public: class GGS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;
  public: void setProperty_mResultTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compiletimePrefixOperatorAST init_21__21__21__21__21__21_ (const class GGS_compileTimePrefixOperatorEnumeration & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstring & inOperand3,
                                                                                const class GGS_ctExpressionAST & inOperand4,
                                                                                const class GGS_lstring & inOperand5,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compiletimePrefixOperatorAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimePrefixOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compiletimePrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

class cPtr_compiletimePrefixOperatorAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (const class GGS_compileTimePrefixOperatorEnumeration & inOperand0,
                                                                          const class GGS_location & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_lstring & inOperand3,
                                                                          const class GGS_ctExpressionAST & inOperand4,
                                                                          const class GGS_lstring & inOperand5,
                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_compileTimePrefixOperatorEnumeration mProperty_mPrefixOperator ;
  public: GGS_location mProperty_mPrefixOperatorLocation ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mResultTypeName ;


//--- Default constructor
  public: cPtr_compiletimePrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compiletimePrefixOperatorAST (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                             const GGS_location & in_mPrefixOperatorLocation,
                                             const GGS_lstring & in_mReceiverName,
                                             const GGS_lstring & in_mReceiverTypeName,
                                             const GGS_ctExpressionAST & in_mExpression,
                                             const GGS_lstring & in_mResultTypeName,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compiletimePrefixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compiletimePrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compiletimePrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compiletimePrefixOperatorAST_2E_weak (const class GGS_compiletimePrefixOperatorAST & inSource) ;

  public: GGS_compiletimePrefixOperatorAST_2E_weak & operator = (const class GGS_compiletimePrefixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compiletimePrefixOperatorAST_2E_weak init_nil (void) {
    GGS_compiletimePrefixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compiletimePrefixOperatorAST bang_compiletimePrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compiletimePrefixOperatorAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compiletimePrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compiletimePrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimePrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimePrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimePrefixOperatorUsage (const class cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimePrefixOperatorUsage init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_ctExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimePrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimePrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimePrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimePrefixOperatorUsage_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_ctExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mPrefixOperatorLocation ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimePrefixOperatorUsage (const GGS_location & in_mPrefixOperatorLocation,
                                               const GGS_lstring & in_mReceiverOperandName,
                                               const GGS_ctExpressionAST & in_mExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimePrefixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

  public: GGS_compileTimePrefixOperatorUsage_2E_weak & operator = (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimePrefixOperatorUsage_2E_weak init_nil (void) {
    GGS_compileTimePrefixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimePrefixOperatorUsage bang_compileTimePrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimePrefixOperatorUsage unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimePrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionAST (const class cPtr_ifInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mTestExpression (void) const ;
  public: void setProperty_mTestExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mTestExpressionEndLocation (void) const ;
  public: void setProperty_mTestExpressionEndLocation (const GGS_location & inValue) ;

  public: class GGS_bool readProperty_mStaticIfExpression (void) const ;
  public: void setProperty_mStaticIfExpression (const GGS_bool & inValue) ;

  public: class GGS_instructionListAST readProperty_mThenInstructionList (void) const ;
  public: void setProperty_mThenInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfThenInstructionList (void) const ;
  public: void setProperty_mEndOfThenInstructionList (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mElseInstructionList (void) const ;
  public: void setProperty_mElseInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfElseInstructionList (void) const ;
  public: void setProperty_mEndOfElseInstructionList (const GGS_location & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_if_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_if_5F_instruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_expressionAST & inOperand1,
                                                                                const class GGS_location & inOperand2,
                                                                                const class GGS_bool & inOperand3,
                                                                                const class GGS_instructionListAST & inOperand4,
                                                                                const class GGS_location & inOperand5,
                                                                                const class GGS_instructionListAST & inOperand6,
                                                                                const class GGS_location & inOperand7,
                                                                                const class GGS_location & inOperand8,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_expressionAST & inOperand1,
                                                                          const class GGS_location & inOperand2,
                                                                          const class GGS_bool & inOperand3,
                                                                          const class GGS_instructionListAST & inOperand4,
                                                                          const class GGS_location & inOperand5,
                                                                          const class GGS_instructionListAST & inOperand6,
                                                                          const class GGS_location & inOperand7,
                                                                          const class GGS_location & inOperand8,
                                                                          Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mTestExpression ;
  public: GGS_location mProperty_mTestExpressionEndLocation ;
  public: GGS_bool mProperty_mStaticIfExpression ;
  public: GGS_instructionListAST mProperty_mThenInstructionList ;
  public: GGS_location mProperty_mEndOfThenInstructionList ;
  public: GGS_instructionListAST mProperty_mElseInstructionList ;
  public: GGS_location mProperty_mEndOfElseInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_if_5F_instruction ;


//--- Default constructor
  public: cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                 const GGS_expressionAST & in_mTestExpression,
                                 const GGS_location & in_mTestExpressionEndLocation,
                                 const GGS_bool & in_mStaticIfExpression,
                                 const GGS_instructionListAST & in_mThenInstructionList,
                                 const GGS_location & in_mEndOfThenInstructionList,
                                 const GGS_instructionListAST & in_mElseInstructionList,
                                 const GGS_location & in_mEndOfElseInstructionList,
                                 const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionAST_2E_weak (const class GGS_ifInstructionAST & inSource) ;

  public: GGS_ifInstructionAST_2E_weak & operator = (const class GGS_ifInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionAST_2E_weak init_nil (void) {
    GGS_ifInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionAST bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_ifInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionIR (const class cPtr_ifInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMTestName (void) const ;
  public: void setProperty_mLLVMTestName (const GGS_string & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListIR readProperty_mThenInstructionGenerationList (void) const ;
  public: void setProperty_mThenInstructionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mElseInstructionGenerationList (void) const ;
  public: void setProperty_mElseInstructionGenerationList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionIR init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                           const class GGS_location & inOperand1,
                                                           const class GGS_instructionListIR & inOperand2,
                                                           const class GGS_instructionListIR & inOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionIR extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionIR_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                     const class GGS_location & inOperand1,
                                                     const class GGS_instructionListIR & inOperand2,
                                                     const class GGS_instructionListIR & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMTestName ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_instructionListIR mProperty_mThenInstructionGenerationList ;
  public: GGS_instructionListIR mProperty_mElseInstructionGenerationList ;


//--- Default constructor
  public: cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionIR (const GGS_string & in_mLLVMTestName,
                                const GGS_location & in_mLocation,
                                const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionIR_2E_weak (const class GGS_ifInstructionIR & inSource) ;

  public: GGS_ifInstructionIR_2E_weak & operator = (const class GGS_ifInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionIR_2E_weak init_nil (void) {
    GGS_ifInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionIR bang_ifInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixedSizeArrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_fixedSizeArrayTypeDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_fixedSizeArrayTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_fixedSizeArrayTypeDeclarationAST (const class cPtr_fixedSizeArrayTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFixedSizeArrayType (void) const ;
  public: void setProperty_mFixedSizeArrayType (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mElementTypeName (void) const ;
  public: void setProperty_mElementTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mSizeExpressionLocation (void) const ;
  public: void setProperty_mSizeExpressionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixedSizeArrayTypeDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_expressionAST & inOperand2,
                                                                            const class GGS_location & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixedSizeArrayTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @fixedSizeArrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_fixedSizeArrayTypeDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void fixedSizeArrayTypeDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_expressionAST & inOperand2,
                                                                      const class GGS_location & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFixedSizeArrayType ;
  public: GGS_lstring mProperty_mElementTypeName ;
  public: GGS_expressionAST mProperty_mSizeExpression ;
  public: GGS_location mProperty_mSizeExpressionLocation ;


//--- Default constructor
  public: cPtr_fixedSizeArrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_fixedSizeArrayTypeDeclarationAST (const GGS_lstring & in_mFixedSizeArrayType,
                                                 const GGS_lstring & in_mElementTypeName,
                                                 const GGS_expressionAST & in_mSizeExpression,
                                                 const GGS_location & in_mSizeExpressionLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixedSizeArrayTypeDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_fixedSizeArrayTypeDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (const class GGS_fixedSizeArrayTypeDeclarationAST & inSource) ;

  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & operator = (const class GGS_fixedSizeArrayTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_fixedSizeArrayTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_fixedSizeArrayTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_fixedSizeArrayTypeDeclarationAST bang_fixedSizeArrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_fixedSizeArrayTypeDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixedSizeArrayTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixedSizeArrayTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMStaticArrayTypeDefinitionIR : public GGS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GGS_userLLVMStaticArrayTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_userLLVMStaticArrayTypeDefinitionIR (const class cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR init_21__21__21_ (const class GGS_string & inOperand0,
                                                                           const class GGS_omnibusType & inOperand1,
                                                                           const class GGS_bigint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMStaticArrayTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_bigint & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GGS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                    const GGS_omnibusType & in_mElementType,
                                                    const GGS_bigint & in_mSize,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak : public GGS_userLLVMTypeDefinitionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (const class GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & operator = (const class GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak init_nil (void) {
    GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_userLLVMStaticArrayTypeDefinitionIR bang_userLLVMStaticArrayTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_userLLVMStaticArrayTypeDefinitionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixedSizeArrayAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_fixedSizeArrayAssignmentOperatorUsage : public GGS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_fixedSizeArrayAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_fixedSizeArrayAssignmentOperatorUsage (const class cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_uint readProperty_mArraySize (void) const ;
  public: void setProperty_mArraySize (const GGS_uint & inValue) ;

  public: class GGS_string readProperty_mAssignValueToElements_5F_functionName (void) const ;
  public: void setProperty_mAssignValueToElements_5F_functionName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixedSizeArrayAssignmentOperatorUsage init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_uint & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixedSizeArrayAssignmentOperatorUsage extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_fixedSizeArrayAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void fixedSizeArrayAssignmentOperatorUsage_init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionListIR,
           class GGS_allocaList & arg_ioAllocaList,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_string arg_inTargetLLVMName,
           const class GGS_objectIR arg_inSourcePossibleReference,
           const class GGS_location arg_inErrorLocation,
           const class GGS_bool arg_inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_uint mProperty_mArraySize ;
  public: GGS_string mProperty_mAssignValueToElements_5F_functionName ;


//--- Default constructor
  public: cPtr_fixedSizeArrayAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_fixedSizeArrayAssignmentOperatorUsage (const GGS_omnibusType & in_mElementType,
                                                      const GGS_uint & in_mArraySize,
                                                      const GGS_string & in_mAssignValueToElements_5F_functionName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixedSizeArrayAssignmentOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak : public GGS_abstractAssignmentOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (const class GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) ;

  public: GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & operator = (const class GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak init_nil (void) {
    GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_fixedSizeArrayAssignmentOperatorUsage bang_fixedSizeArrayAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_fixedSizeArrayAssignmentOperatorUsage unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mFixedSizeArrayType (void) const ;
  public: void setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_uint readProperty_mArraySize (void) const ;
  public: void setProperty_mArraySize (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                const class GGS_bool & inOperand2,
                                                                                                                                const class GGS_omnibusType & inOperand3,
                                                                                                                                const class GGS_omnibusType & inOperand4,
                                                                                                                                const class GGS_uint & inOperand5,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignRepeatedValueToFixedSizeArrayElementsFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                                          const class GGS_bool & inOperand1,
                                                                                                                          const class GGS_bool & inOperand2,
                                                                                                                          const class GGS_omnibusType & inOperand3,
                                                                                                                          const class GGS_omnibusType & inOperand4,
                                                                                                                          const class GGS_uint & inOperand5,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mFixedSizeArrayType ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_uint mProperty_mArraySize ;


//--- Default constructor
  public: cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_omnibusType & in_mFixedSizeArrayType,
                                                                      const GGS_omnibusType & in_mElementType,
                                                                      const GGS_uint & in_mArraySize,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (const class GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & operator = (const class GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak init_nil (void) {
    GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticArrayTypeAssignFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticArrayTypeAssignFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_staticArrayTypeAssignFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_staticArrayTypeAssignFunctionIR (const class cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mFixedSizeArrayType (void) const ;
  public: void setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticArrayTypeAssignFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  const class GGS_omnibusType & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticArrayTypeAssignFunctionIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticArrayTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @staticArrayTypeAssignFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_staticArrayTypeAssignFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_omnibusType & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mFixedSizeArrayType ;


//--- Default constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                const GGS_bool & in_isRequired,
                                                const GGS_bool & in_warnsIfUnused,
                                                const GGS_omnibusType & in_mFixedSizeArrayType,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticArrayTypeAssignFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticArrayTypeAssignFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak (const class GGS_staticArrayTypeAssignFunctionIR & inSource) ;

  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak & operator = (const class GGS_staticArrayTypeAssignFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_staticArrayTypeAssignFunctionIR_2E_weak init_nil (void) {
    GGS_staticArrayTypeAssignFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_staticArrayTypeAssignFunctionIR bang_staticArrayTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_staticArrayTypeAssignFunctionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticArrayTypeAssignFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticArrayTypeAssignFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticArrayTypeAssignFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupIndexAST_2E_index struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupIndexAST_2E_index : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_index ;
  public: inline GGS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GGS_location mProperty_endOfIndex ;
  public: inline GGS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GGS_bool mProperty_checkIndexExpression ;
  public: inline GGS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupIndexAST_2E_index (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupIndexAST_2E_index (const GGS_expressionAST & in_index,
                                              const GGS_location & in_endOfIndex,
                                              const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupIndexAST_2E_index (const GGS_registerGroupIndexAST_2E_index & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupIndexAST_2E_index & operator = (const GGS_registerGroupIndexAST_2E_index & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupIndexAST_2E_index init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                      const class GGS_location & inOperand1,
                                                                      const class GGS_bool & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupIndexAST_2E_index extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupIndexAST.index? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupIndexAST_2E_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupIndexAST_2E_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupIndexAST_2E_index_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupIndexAST_2E_index_3F_ (const GGS_registerGroupIndexAST_2E_index & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupIndexAST_2E_index_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupIndexAST_2E_index unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupIndexAST_2E_index_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST_2E_index_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerIndexAST_2E_index struct
//--------------------------------------------------------------------------------------------------

class GGS_registerIndexAST_2E_index : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_index ;
  public: inline GGS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GGS_location mProperty_endOfIndex ;
  public: inline GGS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GGS_bool mProperty_checkIndexExpression ;
  public: inline GGS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerIndexAST_2E_index (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerIndexAST_2E_index (const GGS_expressionAST & in_index,
                                         const GGS_location & in_endOfIndex,
                                         const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_registerIndexAST_2E_index (const GGS_registerIndexAST_2E_index & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerIndexAST_2E_index & operator = (const GGS_registerIndexAST_2E_index & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerIndexAST_2E_index init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                 const class GGS_location & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIndexAST_2E_index extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerIndexAST.index? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerIndexAST_2E_index_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerIndexAST_2E_index mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerIndexAST_2E_index_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerIndexAST_2E_index_3F_ (const GGS_registerIndexAST_2E_index & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerIndexAST_2E_index_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerIndexAST_2E_index unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIndexAST_2E_index_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST_2E_index_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_switchCaseListAST final {
  public: DownEnumerator_switchCaseListAST (const class GGS_switchCaseListAST & inList) ;

  public: ~ DownEnumerator_switchCaseListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstringlist current_mCaseIdentifiers (LOCATION_ARGS) const ;
  public: class GGS_instructionListAST current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_switchCaseListAST (const DownEnumerator_switchCaseListAST &) = delete ;
  private: DownEnumerator_switchCaseListAST & operator = (const DownEnumerator_switchCaseListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_switchCaseListAST final {
  public: UpEnumerator_switchCaseListAST (const class GGS_switchCaseListAST & inList)  ;

  public: ~ UpEnumerator_switchCaseListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstringlist current_mCaseIdentifiers (LOCATION_ARGS) const ;
  public: class GGS_instructionListAST current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_switchCaseListAST (const UpEnumerator_switchCaseListAST &) = delete ;
  private: UpEnumerator_switchCaseListAST & operator = (const UpEnumerator_switchCaseListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @switchCaseListAST list
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_switchCaseListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_switchCaseListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_switchCaseListAST (void) = default ;

//--- Copy
  public: GGS_switchCaseListAST (const GGS_switchCaseListAST &) = default ;
  public: GGS_switchCaseListAST & operator = (const GGS_switchCaseListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_switchCaseListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_switchCaseListAST subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_switchCaseListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstringlist & in_mCaseIdentifiers,
                                                 const class GGS_instructionListAST & in_mCaseInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListAST init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchCaseListAST class_func_listWithValue (const class GGS_lstringlist & inOperand0,
                                                                       const class GGS_instructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_switchCaseListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstringlist & inOperand0,
                                   const class GGS_instructionListAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_switchCaseListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_switchCaseListAST add_operation (const GGS_switchCaseListAST & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstringlist constinArgument0,
                              class GGS_instructionListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstringlist constinArgument0,
                                     class GGS_instructionListAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstringlist & outArgument0,
                                class GGS_instructionListAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstringlist & outArgument0,
                               class GGS_instructionListAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstringlist & outArgument0,
                                     class GGS_instructionListAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseIdentifiersAtIndex (class GGS_lstringlist constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseInstructionListAtIndex (class GGS_instructionListAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstringlist & outArgument0,
                             class GGS_instructionListAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstringlist & outArgument0,
                            class GGS_instructionListAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mCaseIdentifiersAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListAST getter_mCaseInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_switchCaseListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchCaseListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchCaseListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_switchCaseListAST ;
  friend class DownEnumerator_switchCaseListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstringlist mProperty_mCaseIdentifiers ;
  public: inline GGS_lstringlist readProperty_mCaseIdentifiers (void) const {
    return mProperty_mCaseIdentifiers ;
  }

  public: GGS_instructionListAST mProperty_mCaseInstructionList ;
  public: inline GGS_instructionListAST readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchCaseListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifiers (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifiers = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListAST_2E_element (const GGS_lstringlist & in_mCaseIdentifiers,
                                            const GGS_instructionListAST & in_mCaseInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_switchCaseListAST_2E_element (const GGS_switchCaseListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchCaseListAST_2E_element & operator = (const GGS_switchCaseListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListAST_2E_element init_21__21_ (const class GGS_lstringlist & inOperand0,
                                                                const class GGS_instructionListAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListAST_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionAST (const class cPtr_switchInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mSwitchExpression (void) const ;
  public: void setProperty_mSwitchExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_test_5F_expression (void) const ;
  public: void setProperty_mEndOf_5F_test_5F_expression (const GGS_location & inValue) ;

  public: class GGS_switchCaseListAST readProperty_mSwitchCaseList (void) const ;
  public: void setProperty_mSwitchCaseList (const GGS_switchCaseListAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_switch_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_switch_5F_instruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_expressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    const class GGS_switchCaseListAST & inOperand3,
                                                                    const class GGS_location & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_expressionAST & inOperand1,
                                                              const class GGS_location & inOperand2,
                                                              const class GGS_switchCaseListAST & inOperand3,
                                                              const class GGS_location & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mSwitchExpression ;
  public: GGS_location mProperty_mEndOf_5F_test_5F_expression ;
  public: GGS_switchCaseListAST mProperty_mSwitchCaseList ;
  public: GGS_location mProperty_mEndOf_5F_switch_5F_instruction ;


//--- Default constructor
  public: cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                     const GGS_expressionAST & in_mSwitchExpression,
                                     const GGS_location & in_mEndOf_5F_test_5F_expression,
                                     const GGS_switchCaseListAST & in_mSwitchCaseList,
                                     const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionAST_2E_weak (const class GGS_switchInstructionAST & inSource) ;

  public: GGS_switchInstructionAST_2E_weak & operator = (const class GGS_switchInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionAST_2E_weak init_nil (void) {
    GGS_switchInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionAST bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_switchCaseListIR final {
  public: DownEnumerator_switchCaseListIR (const class GGS_switchCaseListIR & inList) ;

  public: ~ DownEnumerator_switchCaseListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_switchCaseListIR (const DownEnumerator_switchCaseListIR &) = delete ;
  private: DownEnumerator_switchCaseListIR & operator = (const DownEnumerator_switchCaseListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_switchCaseListIR final {
  public: UpEnumerator_switchCaseListIR (const class GGS_switchCaseListIR & inList)  ;

  public: ~ UpEnumerator_switchCaseListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_switchCaseListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_switchCaseListIR (const UpEnumerator_switchCaseListIR &) = delete ;
  private: UpEnumerator_switchCaseListIR & operator = (const UpEnumerator_switchCaseListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @switchCaseListIR list
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_switchCaseListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_switchCaseListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_switchCaseListIR (void) = default ;

//--- Copy
  public: GGS_switchCaseListIR (const GGS_switchCaseListIR &) = default ;
  public: GGS_switchCaseListIR & operator = (const GGS_switchCaseListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_switchCaseListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_switchCaseListIR subList (const int32_t inStart,
                                         const int32_t inLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_switchCaseListIR (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_uintlist & in_mCaseIdentifierIndexes,
                                                 const class GGS_instructionListIR & in_mCaseInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListIR init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchCaseListIR class_func_listWithValue (const class GGS_uintlist & inOperand0,
                                                                      const class GGS_instructionListIR & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_switchCaseListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_uintlist & inOperand0,
                                   const class GGS_instructionListIR & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_switchCaseListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_switchCaseListIR add_operation (const GGS_switchCaseListIR & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_uintlist constinArgument0,
                              class GGS_instructionListIR constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_uintlist constinArgument0,
                                     class GGS_instructionListIR constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_uintlist & outArgument0,
                                class GGS_instructionListIR & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_uintlist & outArgument0,
                               class GGS_instructionListIR & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_uintlist & outArgument0,
                                     class GGS_instructionListIR & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseIdentifierIndexesAtIndex (class GGS_uintlist constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMCaseInstructionListAtIndex (class GGS_instructionListIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_uintlist & outArgument0,
                             class GGS_instructionListIR & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_uintlist & outArgument0,
                            class GGS_instructionListIR & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_uintlist getter_mCaseIdentifierIndexesAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListIR getter_mCaseInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_switchCaseListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchCaseListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_switchCaseListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_switchCaseListIR ;
  friend class DownEnumerator_switchCaseListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchCaseListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_switchCaseListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uintlist mProperty_mCaseIdentifierIndexes ;
  public: inline GGS_uintlist readProperty_mCaseIdentifierIndexes (void) const {
    return mProperty_mCaseIdentifierIndexes ;
  }

  public: GGS_instructionListIR mProperty_mCaseInstructionList ;
  public: inline GGS_instructionListIR readProperty_mCaseInstructionList (void) const {
    return mProperty_mCaseInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_switchCaseListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseIdentifierIndexes (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseIdentifierIndexes = inValue ;
  }

  public: inline void setter_setMCaseInstructionList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_switchCaseListIR_2E_element (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                           const GGS_instructionListIR & in_mCaseInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_switchCaseListIR_2E_element (const GGS_switchCaseListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_switchCaseListIR_2E_element & operator = (const GGS_switchCaseListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchCaseListIR_2E_element init_21__21_ (const class GGS_uintlist & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchCaseListIR_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_switchInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_switchInstructionIR (const class cPtr_switchInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mLabelIndex (void) const ;
  public: void setProperty_mLabelIndex (const GGS_uint & inValue) ;

  public: class GGS_instructionListIR readProperty_mSwitchExpressionGenerationList (void) const ;
  public: void setProperty_mSwitchExpressionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mSwitchExpression (void) const ;
  public: void setProperty_mSwitchExpression (const GGS_objectIR & inValue) ;

  public: class GGS_switchCaseListIR readProperty_mCaseGenerationList (void) const ;
  public: void setProperty_mCaseGenerationList (const GGS_switchCaseListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_switchInstructionIR init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_switchCaseListIR & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @switchInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_switchInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void switchInstructionIR_init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                         const class GGS_instructionListIR & inOperand1,
                                                         const class GGS_objectIR & inOperand2,
                                                         const class GGS_switchCaseListIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mLabelIndex ;
  public: GGS_instructionListIR mProperty_mSwitchExpressionGenerationList ;
  public: GGS_objectIR mProperty_mSwitchExpression ;
  public: GGS_switchCaseListIR mProperty_mCaseGenerationList ;


//--- Default constructor
  public: cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_switchInstructionIR (const GGS_uint & in_mLabelIndex,
                                    const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                    const GGS_objectIR & in_mSwitchExpression,
                                    const GGS_switchCaseListIR & in_mCaseGenerationList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @switchInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_switchInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_switchInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_switchInstructionIR_2E_weak (const class GGS_switchInstructionIR & inSource) ;

  public: GGS_switchInstructionIR_2E_weak & operator = (const class GGS_switchInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_switchInstructionIR_2E_weak init_nil (void) {
    GGS_switchInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_switchInstructionIR bang_switchInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_switchInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_switchInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_switchInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_switchInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (class GGS_instructionListIR & ioObject,
                                            const class GGS_objectIR constin_inTargetValue,
                                            const class GGS_string constin_in_5F_if_5F_variableLLVMName,
                                            const class GGS_objectIR constin_in_5F_then_5F_variable,
                                            const class GGS_objectIR constin_in_5F_else_5F_variable,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_selectInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selectInstructionIR (const class cPtr_selectInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_m_5F_if_5F_variableLLVMName (void) const ;
  public: void setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_m_5F_then_5F_variable (void) const ;
  public: void setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_m_5F_else_5F_variable (void) const ;
  public: void setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selectInstructionIR init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_objectIR & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstructionIR_init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                         const class GGS_string & inOperand1,
                                                         const class GGS_objectIR & inOperand2,
                                                         const class GGS_objectIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTargetValue ;
  public: GGS_string mProperty_m_5F_if_5F_variableLLVMName ;
  public: GGS_objectIR mProperty_m_5F_then_5F_variable ;
  public: GGS_objectIR mProperty_m_5F_else_5F_variable ;


//--- Default constructor
  public: cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                    const GGS_objectIR & in_m_5F_else_5F_variable,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selectInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selectInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selectInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selectInstructionIR_2E_weak (const class GGS_selectInstructionIR & inSource) ;

  public: GGS_selectInstructionIR_2E_weak & operator = (const class GGS_selectInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selectInstructionIR_2E_weak init_nil (void) {
    GGS_selectInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selectInstructionIR bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selectInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selectInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selectInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum llvmPrefixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorEnumeration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorEnumeration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_notOp,
    enum_bitWiseComplement,
    enum_minusOp,
    enum_minusOpNoOvf
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorEnumeration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorEnumeration class_func_bitWiseComplement (LOCATION_ARGS) ;

  public: static class GGS_llvmPrefixOperatorEnumeration class_func_minusOp (LOCATION_ARGS) ;

  public: static class GGS_llvmPrefixOperatorEnumeration class_func_minusOpNoOvf (LOCATION_ARGS) ;

  public: static class GGS_llvmPrefixOperatorEnumeration class_func_notOp (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isBitWiseComplement (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMinusOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMinusOpNoOvf (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNotOp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmPrefixOperatorAST (const class cPtr_llvmPrefixOperatorAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_llvmPrefixOperatorEnumeration readProperty_mPrefixOperator (void) const ;
  public: void setProperty_mPrefixOperator (const GGS_llvmPrefixOperatorEnumeration & inValue) ;

  public: class GGS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

  public: class GGS_lstring readProperty_mResultTypeName (void) const ;
  public: void setProperty_mResultTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmPrefixOperatorAST init_21__21__21__21__21__21_ (const class GGS_llvmPrefixOperatorEnumeration & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstring & inOperand3,
                                                                         const class GGS_llvmGenerationInstructionList & inOperand4,
                                                                         const class GGS_lstring & inOperand5,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmPrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmPrefixOperatorAST_init_21__21__21__21__21__21_ (const class GGS_llvmPrefixOperatorEnumeration & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_lstring & inOperand3,
                                                                   const class GGS_llvmGenerationInstructionList & inOperand4,
                                                                   const class GGS_lstring & inOperand5,
                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_llvmPrefixOperatorEnumeration mProperty_mPrefixOperator ;
  public: GGS_location mProperty_mPrefixOperatorLocation ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;
  public: GGS_lstring mProperty_mResultTypeName ;


//--- Default constructor
  public: cPtr_llvmPrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorAST (const GGS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                      const GGS_location & in_mPrefixOperatorLocation,
                                      const GGS_lstring & in_mReceiverName,
                                      const GGS_lstring & in_mReceiverTypeName,
                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                      const GGS_lstring & in_mResultTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorAST_2E_weak (const class GGS_llvmPrefixOperatorAST & inSource) ;

  public: GGS_llvmPrefixOperatorAST_2E_weak & operator = (const class GGS_llvmPrefixOperatorAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmPrefixOperatorAST_2E_weak init_nil (void) {
    GGS_llvmPrefixOperatorAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorAST bang_llvmPrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmPrefixOperatorAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmPrefixOperatorUsage (const class cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPrefixMangledFunctionName (void) const ;
  public: void setProperty_mPrefixMangledFunctionName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmPrefixOperatorUsage init_21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_llvmGenerationInstructionList & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmPrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmPrefixOperatorUsage_init_21__21__21_ (const class GGS_string & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_llvmGenerationInstructionList & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mPrefixMangledFunctionName ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorUsage (const GGS_string & in_mPrefixMangledFunctionName,
                                        const GGS_lstring & in_mReceiverOperandName,
                                        const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmPrefixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorUsage_2E_weak (const class GGS_llvmPrefixOperatorUsage & inSource) ;

  public: GGS_llvmPrefixOperatorUsage_2E_weak & operator = (const class GGS_llvmPrefixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmPrefixOperatorUsage_2E_weak init_nil (void) {
    GGS_llvmPrefixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorUsage bang_llvmPrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmPrefixOperatorUsage unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorRoutineIR (const class cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mReceiverVarName (void) const ;
  public: void setProperty_mReceiverVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GGS_omnibusType & inValue) ;

  public: class GGS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_bool & inOperand1,
                                                                                                          const class GGS_bool & inOperand2,
                                                                                                          const class GGS_omnibusType & inOperand3,
                                                                                                          const class GGS_string & inOperand4,
                                                                                                          const class GGS_omnibusType & inOperand5,
                                                                                                          const class GGS_stringlist & inOperand6,
                                                                                                          const class GGS_allocaList & inOperand7,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorRoutineIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_omnibusType & inOperand3,
                                                                                                    const class GGS_string & inOperand4,
                                                                                                    const class GGS_omnibusType & inOperand5,
                                                                                                    const class GGS_stringlist & inOperand6,
                                                                                                    const class GGS_allocaList & inOperand7,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_string mProperty_mReceiverVarName ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_stringlist mProperty_mGeneratedInstructions ;
  public: GGS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                        const GGS_bool & in_isRequired,
                                        const GGS_bool & in_warnsIfUnused,
                                        const GGS_omnibusType & in_mReceiverType,
                                        const GGS_string & in_mReceiverVarName,
                                        const GGS_omnibusType & in_mResultType,
                                        const GGS_stringlist & in_mGeneratedInstructions,
                                        const GGS_allocaList & in_mAllocaList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorRoutineIR_2E_weak (const class GGS_prefixOperatorRoutineIR & inSource) ;

  public: GGS_prefixOperatorRoutineIR_2E_weak & operator = (const class GGS_prefixOperatorRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefixOperatorRoutineIR_2E_weak init_nil (void) {
    GGS_prefixOperatorRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefixOperatorRoutineIR bang_prefixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefixOperatorRoutineIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_checkInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_checkInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_checkInstructionAST (const class cPtr_checkInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mCheckMessage (void) const ;
  public: void setProperty_mCheckMessage (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           const class GGS_expressionAST & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkInstructionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_checkInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @checkInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_checkInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void checkInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_expressionAST & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mCheckMessage ;
  public: GGS_expressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_checkInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_checkInstructionAST (const GGS_location & in_mInstructionLocation,
                                    const GGS_lstring & in_mCheckMessage,
                                    const GGS_expressionAST & in_mExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_checkInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_checkInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_checkInstructionAST_2E_weak (const class GGS_checkInstructionAST & inSource) ;

  public: GGS_checkInstructionAST_2E_weak & operator = (const class GGS_checkInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_checkInstructionAST_2E_weak init_nil (void) {
    GGS_checkInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_checkInstructionAST bang_checkInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_checkInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_checkInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum guardKind
//--------------------------------------------------------------------------------------------------

class GGS_guardKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_baseGuard,
    enum_convenienceGuard
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_convenienceGuard (class GGS_callInstructionAST & out_base) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardKind class_func_baseGuard (LOCATION_ARGS) ;

  public: static class GGS_guardKind class_func_convenienceGuard (const class GGS_callInstructionAST & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractConvenienceGuard (class GGS_callInstructionAST & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_guardKind_2E_convenienceGuard_3F_ getter_getConvenienceGuard (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @callInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_callInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_callInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_callInstructionAST (const class cPtr_callInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_effectiveArgumentListAST readProperty_mArguments (void) const ;
  public: void setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfArguments (void) const ;
  public: void setProperty_mEndOfArguments (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_callInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_effectiveArgumentListAST & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_callInstructionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_callInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_callInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardKind_2E_convenienceGuard struct
//--------------------------------------------------------------------------------------------------

class GGS_guardKind_2E_convenienceGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_callInstructionAST mProperty_base ;
  public: inline GGS_callInstructionAST readProperty_base (void) const {
    return mProperty_base ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardKind_2E_convenienceGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBase (const GGS_callInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_base = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKind_2E_convenienceGuard (const GGS_callInstructionAST & in_base) ;

//--------------------------------- Copy constructor
  public: GGS_guardKind_2E_convenienceGuard (const GGS_guardKind_2E_convenienceGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardKind_2E_convenienceGuard & operator = (const GGS_guardKind_2E_convenienceGuard & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardKind_2E_convenienceGuard init_21_ (const class GGS_callInstructionAST & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKind_2E_convenienceGuard extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardKind.convenienceGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardKind_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKind_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKind_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardKind_2E_convenienceGuard_3F_ (const GGS_guardKind_2E_convenienceGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardKind_2E_convenienceGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardKind_2E_convenienceGuard unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKind_2E_convenienceGuard_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_guardDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_guardDeclarationAST (const class cPtr_guardDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_string readProperty_mReceiverLLVMBaseTypeName (void) const ;
  public: void setProperty_mReceiverLLVMBaseTypeName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mGuardName (void) const ;
  public: void setProperty_mGuardName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mIsPublic (void) const ;
  public: void setProperty_mIsPublic (const GGS_bool & inValue) ;

  public: class GGS_lstringlist readProperty_mGuardAttributeList (void) const ;
  public: void setProperty_mGuardAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mGuardFormalArgumentList (void) const ;
  public: void setProperty_mGuardFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_guardKind readProperty_mGuardKind (void) const ;
  public: void setProperty_mGuardKind (const GGS_guardKind & inValue) ;

  public: class GGS_instructionListAST readProperty_mGuardInstructionList (void) const ;
  public: void setProperty_mGuardInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfGuardDeclaration (void) const ;
  public: void setProperty_mEndOfGuardDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   const class GGS_lstringlist & inOperand4,
                                                                                   const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                   const class GGS_guardKind & inOperand6,
                                                                                   const class GGS_instructionListAST & inOperand7,
                                                                                   const class GGS_location & inOperand8,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @guardDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_guardDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_bool & inOperand3,
                                                                             const class GGS_lstringlist & inOperand4,
                                                                             const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                             const class GGS_guardKind & inOperand6,
                                                                             const class GGS_instructionListAST & inOperand7,
                                                                             const class GGS_location & inOperand8,
                                                                             Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_string mProperty_mReceiverLLVMBaseTypeName ;
  public: GGS_lstring mProperty_mGuardName ;
  public: GGS_bool mProperty_mIsPublic ;
  public: GGS_lstringlist mProperty_mGuardAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public: GGS_guardKind mProperty_mGuardKind ;
  public: GGS_instructionListAST mProperty_mGuardInstructionList ;
  public: GGS_location mProperty_mEndOfGuardDeclaration ;


//--- Default constructor
  public: cPtr_guardDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                    const GGS_string & in_mReceiverLLVMBaseTypeName,
                                    const GGS_lstring & in_mGuardName,
                                    const GGS_bool & in_mIsPublic,
                                    const GGS_lstringlist & in_mGuardAttributeList,
                                    const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                    const GGS_guardKind & in_mGuardKind,
                                    const GGS_instructionListAST & in_mGuardInstructionList,
                                    const GGS_location & in_mEndOfGuardDeclaration,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardDeclarationAST_2E_weak (const class GGS_guardDeclarationAST & inSource) ;

  public: GGS_guardDeclarationAST_2E_weak & operator = (const class GGS_guardDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardDeclarationAST_2E_weak init_nil (void) {
    GGS_guardDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardDeclarationAST bang_guardDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardMapForContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPublic ;
  public: inline GGS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: inline GGS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_lstring mProperty_mUserRoutineLLVMName ;
  public: inline GGS_lstring readProperty_mUserRoutineLLVMName (void) const {
    return mProperty_mUserRoutineLLVMName ;
  }

  public: GGS_lstring mProperty_mImplementationRoutineLLVMName ;
  public: inline GGS_lstring readProperty_mImplementationRoutineLLVMName (void) const {
    return mProperty_mImplementationRoutineLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardMapForContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMUserRoutineLLVMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserRoutineLLVMName = inValue ;
  }

  public: inline void setter_setMImplementationRoutineLLVMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationRoutineLLVMName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardMapForContext_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_bool & in_mIsPublic,
                                             const GGS_routineTypedSignature & in_mSignature,
                                             const GGS_lstring & in_mUserRoutineLLVMName,
                                             const GGS_lstring & in_mImplementationRoutineLLVMName) ;

//--------------------------------- Copy constructor
  public: GGS_guardMapForContext_2E_element (const GGS_guardMapForContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardMapForContext_2E_element & operator = (const GGS_guardMapForContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardMapForContext_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bool & inOperand1,
                                                                             const class GGS_routineTypedSignature & inOperand2,
                                                                             const class GGS_lstring & inOperand3,
                                                                             const class GGS_lstring & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardMapForContext_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardMapForContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardMapForContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardMapForContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardMapForContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardMapForContext_2E_element_3F_ (const GGS_guardMapForContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardMapForContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardMapForContext_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardMapForContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedGuardDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedGuardDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedGuardDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedGuardDeclaration (const class cPtr_decoratedGuardDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mGuardName (void) const ;
  public: void setProperty_mGuardName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_mIsPublic (void) const ;
  public: void setProperty_mIsPublic (const GGS_bool & inValue) ;

  public: class GGS_lstringlist readProperty_mGuardAttributeList (void) const ;
  public: void setProperty_mGuardAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mGuardFormalArgumentList (void) const ;
  public: void setProperty_mGuardFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_guardKind readProperty_mGuardKind (void) const ;
  public: void setProperty_mGuardKind (const GGS_guardKind & inValue) ;

  public: class GGS_instructionListAST readProperty_mGuardInstructionList (void) const ;
  public: void setProperty_mGuardInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfGuardDeclaration (void) const ;
  public: void setProperty_mEndOfGuardDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedGuardDeclaration init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_lstringlist & inOperand3,
                                                                                     const class GGS_routineFormalArgumentListAST & inOperand4,
                                                                                     const class GGS_guardKind & inOperand5,
                                                                                     const class GGS_instructionListAST & inOperand6,
                                                                                     const class GGS_location & inOperand7,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedGuardDeclaration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedGuardDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedGuardDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_routineFormalArgumentListAST & inOperand4,
                                                                               const class GGS_guardKind & inOperand5,
                                                                               const class GGS_instructionListAST & inOperand6,
                                                                               const class GGS_location & inOperand7,
                                                                               Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mGuardName ;
  public: GGS_bool mProperty_mIsPublic ;
  public: GGS_lstringlist mProperty_mGuardAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public: GGS_guardKind mProperty_mGuardKind ;
  public: GGS_instructionListAST mProperty_mGuardInstructionList ;
  public: GGS_location mProperty_mEndOfGuardDeclaration ;


//--- Default constructor
  public: cPtr_decoratedGuardDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedGuardDeclaration (const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_lstring & in_mGuardName,
                                          const GGS_bool & in_mIsPublic,
                                          const GGS_lstringlist & in_mGuardAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GGS_guardKind & in_mGuardKind,
                                          const GGS_instructionListAST & in_mGuardInstructionList,
                                          const GGS_location & in_mEndOfGuardDeclaration,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedGuardDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedGuardDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedGuardDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedGuardDeclaration_2E_weak (const class GGS_decoratedGuardDeclaration & inSource) ;

  public: GGS_decoratedGuardDeclaration_2E_weak & operator = (const class GGS_decoratedGuardDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedGuardDeclaration_2E_weak init_nil (void) {
    GGS_decoratedGuardDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedGuardDeclaration bang_decoratedGuardDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedGuardDeclaration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedGuardDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedGuardDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedGuardDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @callInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_callInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void callInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                    const class GGS_effectiveArgumentListAST & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    Compiler * inCompiler) ;


//--- Extension method baseGuardAnalyze
  public: virtual void method_baseGuardAnalyze (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_guardKindGenerationIR & arg_outConvenienceGuardGenerationIR,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_effectiveArgumentListAST mProperty_mArguments ;
  public: GGS_location mProperty_mEndOfArguments ;


//--- Default constructor
  public: cPtr_callInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_callInstructionAST (const GGS_location & in_mInstructionLocation,
                                   const GGS_effectiveArgumentListAST & in_mArguments,
                                   const GGS_location & in_mEndOfArguments,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum guardKindGenerationIR
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_baseGuard,
    enum_convenienceGuard
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_convenienceGuard (class GGS_allocaList & out_baseGuardAllocaList,
                                                                         class GGS_instructionListIR & out_baseGuardInstructionGenerationList,
                                                                         class GGS_string & out_baseGuardMangledName,
                                                                         class GGS_procCallEffectiveParameterListIR & out_baseGuardEffectiveParameterList) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKindGenerationIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardKindGenerationIR class_func_baseGuard (LOCATION_ARGS) ;

  public: static class GGS_guardKindGenerationIR class_func_convenienceGuard (const class GGS_allocaList & inOperand0,
                                                                              const class GGS_instructionListIR & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              const class GGS_procCallEffectiveParameterListIR & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractConvenienceGuard (class GGS_allocaList & outArgument0,
                                               class GGS_instructionListIR & outArgument1,
                                               class GGS_string & outArgument2,
                                               class GGS_procCallEffectiveParameterListIR & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ getter_getConvenienceGuard (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallEffectiveParameterListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_procCallEffectiveParameterListIR final {
  public: DownEnumerator_procCallEffectiveParameterListIR (const class GGS_procCallEffectiveParameterListIR & inList) ;

  public: ~ DownEnumerator_procCallEffectiveParameterListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procCallEffectiveParameterListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_procCallEffectiveParameterListIR (const DownEnumerator_procCallEffectiveParameterListIR &) = delete ;
  private: DownEnumerator_procCallEffectiveParameterListIR & operator = (const DownEnumerator_procCallEffectiveParameterListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_procCallEffectiveParameterListIR final {
  public: UpEnumerator_procCallEffectiveParameterListIR (const class GGS_procCallEffectiveParameterListIR & inList)  ;

  public: ~ UpEnumerator_procCallEffectiveParameterListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procCallEffectiveParameterListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_procCallEffectiveParameterListIR (const UpEnumerator_procCallEffectiveParameterListIR &) = delete ;
  private: UpEnumerator_procCallEffectiveParameterListIR & operator = (const UpEnumerator_procCallEffectiveParameterListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @procCallEffectiveParameterListIR list
//--------------------------------------------------------------------------------------------------

class GGS_procCallEffectiveParameterListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_procCallEffectiveParameterListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_procCallEffectiveParameterListIR (void) = default ;

//--- Copy
  public: GGS_procCallEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR &) = default ;
  public: GGS_procCallEffectiveParameterListIR & operator = (const GGS_procCallEffectiveParameterListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_procCallEffectiveParameterListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_procCallEffectiveParameterListIR subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_procCallEffectiveParameterListIR (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                 const class GGS_objectIR & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallEffectiveParameterListIR init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallEffectiveParameterListIR extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallEffectiveParameterListIR class_func_listWithValue (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                      const class GGS_objectIR & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_procCallEffectiveParameterListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                   const class GGS_objectIR & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_procCallEffectiveParameterListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_procCallEffectiveParameterListIR add_operation (const GGS_procCallEffectiveParameterListIR & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                              class GGS_objectIR constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                                     class GGS_objectIR constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                class GGS_objectIR & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                               class GGS_objectIR & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                                     class GGS_objectIR & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEffectiveParameterPassingModeAtIndex (class GGS_procEffectiveParameterPassingModeIR constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterAtIndex (class GGS_objectIR constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                             class GGS_objectIR & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_procEffectiveParameterPassingModeIR & outArgument0,
                            class GGS_objectIR & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_objectIR getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_procCallEffectiveParameterListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_procCallEffectiveParameterListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_procCallEffectiveParameterListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_procCallEffectiveParameterListIR ;
  friend class DownEnumerator_procCallEffectiveParameterListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardKindGenerationIR_2E_convenienceGuard struct
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR_2E_convenienceGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_allocaList mProperty_baseGuardAllocaList ;
  public: inline GGS_allocaList readProperty_baseGuardAllocaList (void) const {
    return mProperty_baseGuardAllocaList ;
  }

  public: GGS_instructionListIR mProperty_baseGuardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_baseGuardInstructionGenerationList (void) const {
    return mProperty_baseGuardInstructionGenerationList ;
  }

  public: GGS_string mProperty_baseGuardMangledName ;
  public: inline GGS_string readProperty_baseGuardMangledName (void) const {
    return mProperty_baseGuardMangledName ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_baseGuardEffectiveParameterList ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_baseGuardEffectiveParameterList (void) const {
    return mProperty_baseGuardEffectiveParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseGuardAllocaList (const GGS_allocaList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardAllocaList = inValue ;
  }

  public: inline void setter_setBaseGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setBaseGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardMangledName = inValue ;
  }

  public: inline void setter_setBaseGuardEffectiveParameterList (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseGuardEffectiveParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_allocaList & in_baseGuardAllocaList,
                                                         const GGS_instructionListIR & in_baseGuardInstructionGenerationList,
                                                         const GGS_string & in_baseGuardMangledName,
                                                         const GGS_procCallEffectiveParameterListIR & in_baseGuardEffectiveParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardKindGenerationIR_2E_convenienceGuard & operator = (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard init_21__21__21__21_ (const class GGS_allocaList & inOperand0,
                                                                                     const class GGS_instructionListIR & inOperand1,
                                                                                     const class GGS_string & inOperand2,
                                                                                     const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardKindGenerationIR.convenienceGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardKindGenerationIR_2E_convenienceGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ (const GGS_guardKindGenerationIR_2E_convenienceGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardKindGenerationIR_2E_convenienceGuard unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR_2E_convenienceGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardUserRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_guardUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_guardUserRoutineIR (const class cPtr_guardUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mMangledImplementationGuardName (void) const ;
  public: void setProperty_mMangledImplementationGuardName (const GGS_string & inValue) ;

  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_bool & inOperand2,
                                                                                                 const class GGS_string & inOperand3,
                                                                                                 const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                 const class GGS_omnibusType & inOperand5,
                                                                                                 const class GGS_guardKindGenerationIR & inOperand6,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardUserRoutineIR extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @guardUserRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_guardUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                           const class GGS_omnibusType & inOperand5,
                                                                                           const class GGS_guardKindGenerationIR & inOperand6,
                                                                                           Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mMangledImplementationGuardName ;
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;


//--- Default constructor
  public: cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                   const GGS_bool & in_isRequired,
                                   const GGS_bool & in_warnsIfUnused,
                                   const GGS_string & in_mMangledImplementationGuardName,
                                   const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                   const GGS_omnibusType & in_mReceiverType,
                                   const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardUserRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardUserRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardUserRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardUserRoutineIR_2E_weak (const class GGS_guardUserRoutineIR & inSource) ;

  public: GGS_guardUserRoutineIR_2E_weak & operator = (const class GGS_guardUserRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardUserRoutineIR_2E_weak init_nil (void) {
    GGS_guardUserRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardUserRoutineIR bang_guardUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardUserRoutineIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardUserRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardUserRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardUserRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardImplementationRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardImplementationRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_guardImplementationRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_guardImplementationRoutineIR (const class cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardImplementationRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_bool & inOperand2,
                                                                                                               const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                                               const class GGS_omnibusType & inOperand4,
                                                                                                               const class GGS_guardKindGenerationIR & inOperand5,
                                                                                                               const class GGS_allocaList & inOperand6,
                                                                                                               const class GGS_instructionListIR & inOperand7,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardImplementationRoutineIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @guardImplementationRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_bool & inOperand2,
                                                                                                         const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                                         const class GGS_omnibusType & inOperand4,
                                                                                                         const class GGS_guardKindGenerationIR & inOperand5,
                                                                                                         const class GGS_allocaList & inOperand6,
                                                                                                         const class GGS_instructionListIR & inOperand7,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public: GGS_allocaList mProperty_mAllocaList ;
  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardImplementationRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GGS_omnibusType & in_mReceiverType,
                                             const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                             const GGS_allocaList & in_mAllocaList,
                                             const GGS_instructionListIR & in_mInstructionGenerationList,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardImplementationRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_guardImplementationRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_guardImplementationRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_guardImplementationRoutineIR_2E_weak (const class GGS_guardImplementationRoutineIR & inSource) ;

  public: GGS_guardImplementationRoutineIR_2E_weak & operator = (const class GGS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_guardImplementationRoutineIR_2E_weak init_nil (void) {
    GGS_guardImplementationRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_guardImplementationRoutineIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardImplementationRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardImplementationRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_guardImplementationRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (class cPtr_expressionAST * inObject,
                                                               class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (class cPtr_expressionAST * inObject,
                                            const class GGS_omnibusType constin_inSelfType,
                                            const class GGS_routineAttributes constin_inRoutineAttributes,
                                            const class GGS_omnibusType constin_inTargetType,
                                            const class GGS_semanticContext constin_inContext,
                                            const class GGS_mode constin_inMode,
                                            class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GGS_staticEntityMap & io_ioStaticEntityMap,
                                            class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                            class GGS_allocaList & io_ioAllocaList,
                                            class GGS_instructionListIR & io_ioInstructionGenerationList,
                                            class GGS_objectIR & out_outResult,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_registerInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_registerInExpressionAST (const class cPtr_registerInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_controlRegisterLValueAST readProperty_mControlRegisterLValue (void) const ;
  public: void setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) ;

  public: class GGS_lstring readProperty_mFieldName (void) const ;
  public: void setProperty_mFieldName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerInExpressionAST init_21__21_ (const class GGS_controlRegisterLValueAST & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerInExpressionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @registerInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_registerInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void registerInExpressionAST_init_21__21_ (const class GGS_controlRegisterLValueAST & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_controlRegisterLValueAST mProperty_mControlRegisterLValue ;
  public: GGS_lstring mProperty_mFieldName ;


//--- Default constructor
  public: cPtr_registerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_registerInExpressionAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                        const GGS_lstring & in_mFieldName,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_registerInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerInExpressionAST_2E_weak (const class GGS_registerInExpressionAST & inSource) ;

  public: GGS_registerInExpressionAST_2E_weak & operator = (const class GGS_registerInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_registerInExpressionAST_2E_weak init_nil (void) {
    GGS_registerInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_registerInExpressionAST bang_registerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_registerInExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_panicInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_panicInstructionAST (const class cPtr_panicInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mCodeExpression (void) const ;
  public: void setProperty_mCodeExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                       const class GGS_expressionAST & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicInstructionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_panicInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void panicInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                 const class GGS_expressionAST & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mCodeExpression ;


//--- Default constructor
  public: cPtr_panicInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_panicInstructionAST (const GGS_location & in_mInstructionLocation,
                                    const GGS_expressionAST & in_mCodeExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicInstructionAST_2E_weak (const class GGS_panicInstructionAST & inSource) ;

  public: GGS_panicInstructionAST_2E_weak & operator = (const class GGS_panicInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_panicInstructionAST_2E_weak init_nil (void) {
    GGS_panicInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_panicInstructionAST bang_panicInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_panicInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_panicInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_panicInstructionIR (const class cPtr_panicInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mThrowLocation (void) const ;
  public: void setProperty_mThrowLocation (const GGS_location & inValue) ;

  public: class GGS_bigint readProperty_mPanicCode (void) const ;
  public: void setProperty_mPanicCode (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicInstructionIR init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_bigint & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicInstructionIR extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_panicInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void panicInstructionIR_init_21__21_ (const class GGS_location & inOperand0,
                                                const class GGS_bigint & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mThrowLocation ;
  public: GGS_bigint mProperty_mPanicCode ;


//--- Default constructor
  public: cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_panicInstructionIR (const GGS_location & in_mThrowLocation,
                                   const GGS_bigint & in_mPanicCode,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicInstructionIR_2E_weak (const class GGS_panicInstructionIR & inSource) ;

  public: GGS_panicInstructionIR_2E_weak & operator = (const class GGS_panicInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_panicInstructionIR_2E_weak init_nil (void) {
    GGS_panicInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_panicInstructionIR bang_panicInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_panicInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObject
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObject (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_driver,
    enum_task,
    enum_globalConstant,
    enum_localConstant,
    enum_localVariable,
    enum_globalSyncInstance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_driver (class GGS_omnibusType & out_type,
                                                               class GGS_bool & out_instancied) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_task (class GGS_omnibusType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalConstant (class GGS_objectIR & out_objectIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localConstant (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName,
                                                                      class GGS_bool & out_isFormalInputArgument) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localVariable (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalSyncInstance (class GGS_omnibusType & out_type,
                                                                           class GGS_lstring & out_omnibusName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject class_func_driver (const class GGS_omnibusType & inOperand0,
                                                           const class GGS_bool & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalConstant (const class GGS_objectIR & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalSyncInstance (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localConstant (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localVariable (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_task (const class GGS_omnibusType & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractDriver (class GGS_omnibusType & outArgument0,
                                     class GGS_bool & outArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractGlobalConstant (class GGS_objectIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: void method_extractGlobalSyncInstance (class GGS_omnibusType & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_extractLocalConstant (class GGS_omnibusType & outArgument0,
                                            class GGS_lstring & outArgument1,
                                            class GGS_bool & outArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractLocalVariable (class GGS_omnibusType & outArgument0,
                                            class GGS_lstring & outArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_extractTask (class GGS_omnibusType & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_valuedObject_2E_driver_3F_ getter_getDriver (LOCATION_ARGS) const ;

  public: class GGS_valuedObject_2E_globalConstant_3F_ getter_getGlobalConstant (LOCATION_ARGS) const ;

  public: class GGS_valuedObject_2E_globalSyncInstance_3F_ getter_getGlobalSyncInstance (LOCATION_ARGS) const ;

  public: class GGS_valuedObject_2E_localConstant_3F_ getter_getLocalConstant (LOCATION_ARGS) const ;

  public: class GGS_valuedObject_2E_localVariable_3F_ getter_getLocalVariable (LOCATION_ARGS) const ;

  public: class GGS_valuedObject_2E_task_3F_ getter_getTask (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDriver (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGlobalConstant (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGlobalSyncInstance (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLocalConstant (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLocalVariable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTask (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObjectState
//--------------------------------------------------------------------------------------------------

class GGS_valuedObjectState : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObjectState (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noValue,
    enum_hasUnreadValue,
    enum_hasReadValue
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObjectState extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObjectState class_func_hasReadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_hasUnreadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_noValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_valuedObjectState & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isHasReadValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isHasUnreadValue (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObjectState ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @flatValuedObjectMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_valuedObjectState mProperty_mObjectState ;
  public: inline GGS_valuedObjectState readProperty_mObjectState (void) const {
    return mProperty_mObjectState ;
  }

  public: GGS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: inline GGS_bool readProperty_mObjectShouldBeValuedAtEndOfScope (void) const {
    return mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }

  public: GGS_valuedObject mProperty_mValuedObject ;
  public: inline GGS_valuedObject readProperty_mValuedObject (void) const {
    return mProperty_mValuedObject ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMObjectState (const GGS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectState = inValue ;
  }

  public: inline void setter_setMObjectShouldBeValuedAtEndOfScope (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
  }

  public: inline void setter_setMValuedObject (const GGS_valuedObject & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObject = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_valuedObjectState & in_mObjectState,
                                              const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                              const GGS_valuedObject & in_mValuedObject) ;

//--------------------------------- Copy constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_flatValuedObjectMap_2E_element & operator = (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_flatValuedObjectMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_valuedObjectState & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_valuedObject & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_flatValuedObjectMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: flatValuedObjectMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_flatValuedObjectMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_flatValuedObjectMap_2E_element_3F_ (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_flatValuedObjectMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_flatValuedObjectMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_flatValuedObjectMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ;

