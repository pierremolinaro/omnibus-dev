#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskGuardListAST_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskGuardListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mGuardName ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;

  public : GALGAS_lstringlist mProperty_mGuardPath ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskGuardListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskGuardListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskGuardListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskGuardListAST_2D_element (const GALGAS_lstring & in_mGuardName,
                                               const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                               const GALGAS_lstringlist & in_mGuardPath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskGuardListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskGuardListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                            const class GALGAS_lstringlist & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskGuardListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardPath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskGuardListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskGuardListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @instructionListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_instructionAST mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionListAST_2D_element (const GALGAS_instructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListAST_2D_element constructor_new (const class GALGAS_instructionAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionAST getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskSetupSortedListAST sorted list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskSetupSortedListAST : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_taskSetupSortedListAST (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskSetupSortedListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskSetupSortedListAST constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_taskSetupSortedListAST constructor_sortedListWithValue (const class GALGAS_lbigint & inOperand0,
                                                                                       const class GALGAS_instructionListAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2,
                                                                                       const class GALGAS_bigint & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskSetupSortedListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lbigint & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_bigint & inOperand3
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lbigint & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_bigint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lbigint & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_bigint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lbigint & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lbigint & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskSetupSortedListAST ;
 
} ; // End of GALGAS_taskSetupSortedListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskSetupSortedListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskSetupSortedListAST (const GALGAS_taskSetupSortedListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lbigint current_mTaskSetupPriority (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mTaskSetupInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mSetupPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskSetupSortedListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupSortedListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @taskSetupSortedListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskSetupSortedListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lbigint mProperty_mTaskSetupPriority ;

  public : GALGAS_instructionListAST mProperty_mTaskSetupInstructionList ;

  public : GALGAS_location mProperty_mEndOfTaskSetupDeclaration ;

  public : GALGAS_bigint mProperty_mSetupPriority ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskSetupSortedListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskSetupSortedListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskSetupSortedListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskSetupSortedListAST_2D_element (const GALGAS_lbigint & in_mTaskSetupPriority,
                                                     const GALGAS_instructionListAST & in_mTaskSetupInstructionList,
                                                     const GALGAS_location & in_mEndOfTaskSetupDeclaration,
                                                     const GALGAS_bigint & in_mSetupPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskSetupSortedListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskSetupSortedListAST_2D_element constructor_new (const class GALGAS_lbigint & inOperand0,
                                                                                  const class GALGAS_instructionListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2,
                                                                                  const class GALGAS_bigint & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskSetupSortedListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskSetupDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mSetupPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mTaskSetupInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mTaskSetupPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskSetupSortedListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupSortedListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@taskListAST noteTypesInPrecedenceGraph'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_taskListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmTypeNameFromPLMname'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_llvmTypeNameFromPLMname (const class GALGAS_lstring & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GALGAS_instructionListAST inObject,
                                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @taskMap map                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_taskMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_taskMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_taskMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_taskMap (const GALGAS_taskMap & inSource) ;
  public : GALGAS_taskMap & operator = (const GALGAS_taskMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_taskMap constructor_mapWithMapToOverride (const class GALGAS_taskMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_PLMType constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_taskMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMap ;
 
} ; // End of GALGAS_taskMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskMap : public cGenericAbstractEnumerator {
  public : cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mTaskType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Class for element of '@taskMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_taskMap : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_mTaskType ;

//--- Constructor
  public : cMapElement_taskMap (const GALGAS_lstring & inKey,
                                const GALGAS_PLMType & in_mTaskType
                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @taskMap_2D_element struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_PLMType mProperty_mTaskType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_PLMType & in_mTaskType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_PLMType & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTaskType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@taskListAST enterInContext'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_taskListAST inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                     class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @decoratedTaskList class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTaskList : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedTaskList (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedTaskList constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedTaskList * ptr (void) const { return (const cPtr_decoratedTaskList *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedTaskList (const cPtr_decoratedTaskList * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTaskList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTaskList constructor_new (const class GALGAS_decoratedLaskList & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedTaskList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedLaskList getter_mTaskList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedTaskList class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @decoratedLaskList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedLaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedLaskList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedLaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTaskName,
                                                  const class GALGAS_lbigint & in_mPriority,
                                                  const class GALGAS_lbigint & in_mStackSize,
                                                  const class GALGAS_structurePropertyListAST & in_mVarList,
                                                  const class GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                  const class GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                  const class GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                  const class GALGAS_decoratedTaskEntryList & in_mDecoratedTaskEntryList,
                                                  const class GALGAS_decoratedTaskGuardList & in_mDecoratedTaskGuardList,
                                                  const class GALGAS_location & in_mEndOfTaskDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedLaskList extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedLaskList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedLaskList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lbigint & inOperand1,
                                                                            const class GALGAS_lbigint & inOperand2,
                                                                            const class GALGAS_structurePropertyListAST & inOperand3,
                                                                            const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                            const class GALGAS_taskSetupListAST & inOperand5,
                                                                            const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                            const class GALGAS_decoratedTaskEntryList & inOperand7,
                                                                            const class GALGAS_decoratedTaskGuardList & inOperand8,
                                                                            const class GALGAS_location & inOperand9
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedLaskList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lbigint & inOperand1,
                                                      const class GALGAS_lbigint & inOperand2,
                                                      const class GALGAS_structurePropertyListAST & inOperand3,
                                                      const class GALGAS_functionDeclarationListAST & inOperand4,
                                                      const class GALGAS_taskSetupListAST & inOperand5,
                                                      const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                      const class GALGAS_decoratedTaskEntryList & inOperand7,
                                                      const class GALGAS_decoratedTaskGuardList & inOperand8,
                                                      const class GALGAS_location & inOperand9
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedLaskList add_operation (const GALGAS_decoratedLaskList & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lbigint constinArgument1,
                                                       class GALGAS_lbigint constinArgument2,
                                                       class GALGAS_structurePropertyListAST constinArgument3,
                                                       class GALGAS_functionDeclarationListAST constinArgument4,
                                                       class GALGAS_taskSetupListAST constinArgument5,
                                                       class GALGAS_syncInstructionBranchListAST constinArgument6,
                                                       class GALGAS_decoratedTaskEntryList constinArgument7,
                                                       class GALGAS_decoratedTaskGuardList constinArgument8,
                                                       class GALGAS_location constinArgument9,
                                                       class GALGAS_uint constinArgument10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  class GALGAS_lbigint & outArgument2,
                                                  class GALGAS_structurePropertyListAST & outArgument3,
                                                  class GALGAS_functionDeclarationListAST & outArgument4,
                                                  class GALGAS_taskSetupListAST & outArgument5,
                                                  class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                  class GALGAS_decoratedTaskEntryList & outArgument7,
                                                  class GALGAS_decoratedTaskGuardList & outArgument8,
                                                  class GALGAS_location & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 class GALGAS_structurePropertyListAST & outArgument3,
                                                 class GALGAS_functionDeclarationListAST & outArgument4,
                                                 class GALGAS_taskSetupListAST & outArgument5,
                                                 class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                 class GALGAS_decoratedTaskEntryList & outArgument7,
                                                 class GALGAS_decoratedTaskGuardList & outArgument8,
                                                 class GALGAS_location & outArgument9,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lbigint & outArgument1,
                                                       class GALGAS_lbigint & outArgument2,
                                                       class GALGAS_structurePropertyListAST & outArgument3,
                                                       class GALGAS_functionDeclarationListAST & outArgument4,
                                                       class GALGAS_taskSetupListAST & outArgument5,
                                                       class GALGAS_syncInstructionBranchListAST & outArgument6,
                                                       class GALGAS_decoratedTaskEntryList & outArgument7,
                                                       class GALGAS_decoratedTaskGuardList & outArgument8,
                                                       class GALGAS_location & outArgument9,
                                                       class GALGAS_uint constinArgument10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lbigint & outArgument1,
                                               class GALGAS_lbigint & outArgument2,
                                               class GALGAS_structurePropertyListAST & outArgument3,
                                               class GALGAS_functionDeclarationListAST & outArgument4,
                                               class GALGAS_taskSetupListAST & outArgument5,
                                               class GALGAS_syncInstructionBranchListAST & outArgument6,
                                               class GALGAS_decoratedTaskEntryList & outArgument7,
                                               class GALGAS_decoratedTaskGuardList & outArgument8,
                                               class GALGAS_location & outArgument9,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigint & outArgument1,
                                              class GALGAS_lbigint & outArgument2,
                                              class GALGAS_structurePropertyListAST & outArgument3,
                                              class GALGAS_functionDeclarationListAST & outArgument4,
                                              class GALGAS_taskSetupListAST & outArgument5,
                                              class GALGAS_syncInstructionBranchListAST & outArgument6,
                                              class GALGAS_decoratedTaskEntryList & outArgument7,
                                              class GALGAS_decoratedTaskGuardList & outArgument8,
                                              class GALGAS_location & outArgument9,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskEntryList getter_mDecoratedTaskEntryListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskGuardList getter_mDecoratedTaskGuardListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_mGuardedCommandListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSizeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mTaskProcListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mVarListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedLaskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedLaskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedLaskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedLaskList ;
 
} ; // End of GALGAS_decoratedLaskList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedLaskList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedLaskList (const GALGAS_decoratedLaskList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyListAST current_mVarList (LOCATION_ARGS) const ;
  public : class GALGAS_functionDeclarationListAST current_mTaskProcList (LOCATION_ARGS) const ;
  public : class GALGAS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public : class GALGAS_syncInstructionBranchListAST current_mGuardedCommandList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedTaskEntryList current_mDecoratedTaskEntryList (LOCATION_ARGS) const ;
  public : class GALGAS_decoratedTaskGuardList current_mDecoratedTaskGuardList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedLaskList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedLaskList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @decoratedTaskList class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedTaskList : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_decoratedLaskList mProperty_mTaskList ;

//--- Constructor
  public : cPtr_decoratedTaskList (const GALGAS_decoratedLaskList & in_mTaskList
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedLaskList getter_mTaskList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineTypedSignature list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineTypedSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineTypedSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineTypedSignature extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineTypedSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineTypedSignature constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineTypedSignature add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineTypedSignature ;
 
} ; // End of GALGAS_routineTypedSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineTypedSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineTypedSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @routineDescriptor struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineDescriptor : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bool mProperty_isPublic ;

  public : GALGAS_bool mProperty_exported ;

  public : GALGAS_routineKind mProperty_routineKind ;

  public : GALGAS_routineTypedSignature mProperty_signature ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_returnTypeProxy ;

  public : GALGAS_bool mProperty_canAccessProperties ;

  public : GALGAS_bool mProperty_canMutateProperties ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineDescriptor (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineDescriptor (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineDescriptor (const GALGAS_bool & in_isPublic,
                                     const GALGAS_bool & in_exported,
                                     const GALGAS_routineKind & in_routineKind,
                                     const GALGAS_routineTypedSignature & in_signature,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_returnTypeProxy,
                                     const GALGAS_bool & in_canAccessProperties,
                                     const GALGAS_bool & in_canMutateProperties) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineDescriptor extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineDescriptor constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_routineKind & inOperand2,
                                                                  const class GALGAS_routineTypedSignature & inOperand3,
                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                  const class GALGAS_bool & inOperand5,
                                                                  const class GALGAS_bool & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineDescriptor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_canAccessProperties (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_canMutateProperties (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_exported (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_returnTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_routineKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_signature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineDescriptor class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDescriptor ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typeKind enum, associated values                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_enumeration : public cEnumAssociatedValues {
  public : const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_enumeration (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_structure : public cEnumAssociatedValues {
  public : const GALGAS_propertyList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_structure (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_integer : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_uint mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint & inAssociatedValue0,
                                                   const GALGAS_bigint & inAssociatedValue1,
                                                   const GALGAS_bool & inAssociatedValue2,
                                                   const GALGAS_uint & inAssociatedValue3
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_integer (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_opaque : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint & inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_opaque (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_arrayType : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_arrayType (const GALGAS_PLMType & inAssociatedValue0,
                                                     const GALGAS_bigint & inAssociatedValue1
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_arrayType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_function : public cEnumAssociatedValues {
  public : const GALGAS_routineDescriptor mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_function (const GALGAS_routineDescriptor & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_pointer : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_pointer (const GALGAS_PLMType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_pointer (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @subprogramInvocationGraph graph                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_subprogramInvocationGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_subprogramInvocationGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subprogramInvocationGraph extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subprogramInvocationGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_lstring inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_lstringlist & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_lstringlist & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_lstringlist & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_lstringlist & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_lstringlist & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_lstringlist & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subprogramInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subprogramInvocationGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                             const class GALGAS_stringset & constinOperand1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subprogramInvocationGraph class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subprogramInvocationGraph ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @constructorSignature list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_constructorSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSelector,
                                                  const class GALGAS_PLMType & in_mType,
                                                  const class GALGAS_uint & in_mFieldIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorSignature extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_constructorSignature constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_PLMType & inOperand1,
                                                                               const class GALGAS_uint & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_uint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_constructorSignature add_operation (const GALGAS_constructorSignature & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_PLMType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_PLMType & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_PLMType & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_PLMType & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_PLMType & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_PLMType & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_constructorSignature ;
 
} ; // End of GALGAS_constructorSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_constructorSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constructorSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @declarationDecorationList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declarationDecorationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_declarationDecorationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationDecorationList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationDecorationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_declarationDecorationList constructor_listWithValue (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_declarationDecorationList add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDecoratedDeclaration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDecoratedDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationDecorationList ;
 
} ; // End of GALGAS_declarationDecorationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_declarationDecorationList : public cGenericAbstractEnumerator {
  public : cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declarationDecorationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @decoratedTaskEntryList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTaskEntryList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedTaskEntryList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedTaskEntryList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mEntryName,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mEntryFormalArgumentList,
                                                  const class GALGAS_routineTypedSignature & in_mEntrySignature,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mEntryReturnTypeProxy,
                                                  const class GALGAS_lstringlist & in_mEntryPath,
                                                  const class GALGAS_lstring & in_mInvokedMethodName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTaskEntryList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTaskEntryList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedTaskEntryList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                                 const class GALGAS_routineTypedSignature & inOperand2,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_lstring & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedTaskEntryList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_routineTypedSignature & inOperand2,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                      const class GALGAS_lstringlist & inOperand4,
                                                      const class GALGAS_lstring & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedTaskEntryList add_operation (const GALGAS_decoratedTaskEntryList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                       class GALGAS_routineTypedSignature constinArgument2,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                       class GALGAS_lstringlist constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_routineTypedSignature & outArgument2,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                  class GALGAS_lstringlist & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_routineTypedSignature & outArgument2,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                       class GALGAS_routineTypedSignature & outArgument2,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                       class GALGAS_lstringlist & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineFormalArgumentListAST & outArgument1,
                                               class GALGAS_routineTypedSignature & outArgument2,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                               class GALGAS_lstringlist & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineFormalArgumentListAST & outArgument1,
                                              class GALGAS_routineTypedSignature & outArgument2,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mEntryFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntryNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEntryPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mEntryReturnTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mEntrySignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInvokedMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskEntryList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskEntryList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskEntryList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedTaskEntryList ;
 
} ; // End of GALGAS_decoratedTaskEntryList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedTaskEntryList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedTaskEntryList (const GALGAS_decoratedTaskEntryList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mEntryName (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mEntryFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_routineTypedSignature current_mEntrySignature (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mEntryReturnTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mEntryPath (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInvokedMethodName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedTaskEntryList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskEntryList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @decoratedTaskGuardList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTaskGuardList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_decoratedTaskGuardList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_decoratedTaskGuardList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGuardName,
                                                  const class GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                  const class GALGAS_routineTypedSignature & in_mGuardSignature,
                                                  const class GALGAS_lstringlist & in_mGuardPath,
                                                  const class GALGAS_lstring & in_mInvokedGuardName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTaskGuardList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTaskGuardList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_decoratedTaskGuardList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                                 const class GALGAS_routineTypedSignature & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_lstring & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedTaskGuardList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                      const class GALGAS_routineTypedSignature & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_lstring & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_decoratedTaskGuardList add_operation (const GALGAS_decoratedTaskGuardList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                       class GALGAS_routineTypedSignature constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                  class GALGAS_routineTypedSignature & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_routineTypedSignature & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineFormalArgumentListAST & outArgument1,
                                                       class GALGAS_routineTypedSignature & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineFormalArgumentListAST & outArgument1,
                                               class GALGAS_routineTypedSignature & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineFormalArgumentListAST & outArgument1,
                                              class GALGAS_routineTypedSignature & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mGuardSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInvokedGuardNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskGuardList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskGuardList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskGuardList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedTaskGuardList ;
 
} ; // End of GALGAS_decoratedTaskGuardList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_decoratedTaskGuardList : public cGenericAbstractEnumerator {
  public : cEnumerator_decoratedTaskGuardList (const GALGAS_decoratedTaskGuardList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mGuardName (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListAST current_mGuardFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_routineTypedSignature current_mGuardSignature (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mGuardPath (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mInvokedGuardName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_decoratedTaskGuardList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskGuardList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @globalTaskVariableList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalTaskVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_globalTaskVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTaskName,
                                                  const class GALGAS_string & in_mTaskTypeName,
                                                  const class GALGAS_objectIR & in_mInitialValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalTaskVariableList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalTaskVariableList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_globalTaskVariableList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_objectIR & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_globalTaskVariableList add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_objectIR constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_objectIR & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_objectIR & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_objectIR & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_objectIR & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_objectIR & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_globalTaskVariableList ;
 
} ; // End of GALGAS_globalTaskVariableList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_globalTaskVariableList : public cGenericAbstractEnumerator {
  public : cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTaskTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalTaskVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @constructorValue enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_constructorValue (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_simple,
    kEnum_structure,
    kEnum_arrayValue
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorValue extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorValue constructor_arrayValue (const class GALGAS_PLMType & inOperand0,
                                                                        const class GALGAS_uint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_constructorValue constructor_simple (const class GALGAS_bigint & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_constructorValue constructor_structure (const class GALGAS_sortedOperandIRList & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayValue (class GALGAS_PLMType & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_simple (class GALGAS_bigint & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_structure (class GALGAS_sortedOperandIRList & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSimple (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorValue class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@constructorMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_constructorSignature mProperty_mSignature ;
  public : GALGAS_constructorValue mProperty_mInitValue ;

//--- Constructor
  public : cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                       const GALGAS_constructorSignature & in_mSignature,
                                       const GALGAS_constructorValue & in_mInitValue
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@guardMapForContext' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_guardMapForContext : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_routineTypedSignature mProperty_mSignature ;

//--- Constructor
  public : cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                           const GALGAS_bool & in_mIsPublic,
                                           const GALGAS_routineTypedSignature & in_mSignature
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @propertyAccessKind enum                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyAccessKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyAccessKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_constantProperty,
    kEnum_indexed,
    kEnum_nonVirtualMethod
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyAccessKind extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyAccessKind constructor_constantProperty (const class GALGAS_objectIR & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyAccessKind constructor_indexed (const class GALGAS_PLMType & inOperand0,
                                                                       const class GALGAS_uint & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyAccessKind constructor_nonVirtualMethod (const class GALGAS_routineDescriptor & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyAccessKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_constantProperty (class GALGAS_objectIR & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_indexed (class GALGAS_PLMType & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nonVirtualMethod (class GALGAS_routineDescriptor & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIndexed (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNonVirtualMethod (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyAccessKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@propertyMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_propertyAccessKind mProperty_mAccess ;

//--- Constructor
  public : cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                    const GALGAS_bool & in_mIsPublic,
                                    const GALGAS_propertyAccessKind & in_mAccess
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @staticStringMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_staticStringMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_staticStringMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticStringMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_staticStringMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) ;
  public : GALGAS_staticStringMap & operator = (const GALGAS_staticStringMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticStringMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticStringMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_staticStringMap constructor_mapWithMapToOverride (const class GALGAS_staticStringMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_staticStringMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticStringMap ;
 
} ; // End of GALGAS_staticStringMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_staticStringMap : public cGenericAbstractEnumerator {
  public : cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_staticStringMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@staticStringMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_staticStringMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public : cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@functionDeclarationListAST enterFunctionInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterFunctionInContext (const class GALGAS_functionDeclarationListAST inObject,
                                             const class GALGAS_string constin_inSelfTypeName,
                                             class GALGAS_semanticContext & io_ioContext,
                                             class GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@structurePropertyListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_structurePropertyListAST_2D_element inObject,
                                     const class GALGAS_lstring constin_inStructureName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                     class GALGAS_propertyList & io_propertyList,
                                     class GALGAS_propertyMap & io_propertyMap,
                                     class GALGAS_sortedOperandIRList & io_sortedOperandIRList,
                                     class GALGAS_constructorSignature & io_constructorSignature,
                                     class GALGAS_string & io_ioConstructorKey,
                                     class GALGAS_bool & io_canBeCopied,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@taskEntryListAST-element enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_taskEntryListAST_2D_element inObject,
                                     const class GALGAS_lstring constin_inTaskName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                     class GALGAS_decoratedTaskEntryList & io_ioDecoratedTaskEntryList,
                                     class GALGAS_propertyMap & io_ioTaskPropertyMap,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@taskGuardListAST-element enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_taskGuardListAST_2D_element inObject,
                                     const class GALGAS_lstring constin_inTaskName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                     class GALGAS_decoratedTaskGuardList & io_ioDecoratedTaskGuardList,
                                     class GALGAS_guardMapForContext & io_ioGuardMap,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertType (class GALGAS_lstring constinArgument0,
                                                    class GALGAS_PLMType constinArgument1,
                                                    class GALGAS_uint constinArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GALGAS_PLMType constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_indexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_typeForKey (const class GALGAS_string & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_type (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_index (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_type ;
  public : GALGAS_uint mProperty_index ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_PLMType & in_type,
                                       const GALGAS_uint & in_index
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @availableInterruptMap map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_availableInterruptMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_availableInterruptMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_availableInterruptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_availableInterruptMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) ;
  public : GALGAS_availableInterruptMap & operator = (const GALGAS_availableInterruptMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_availableInterruptMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_availableInterruptMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_availableInterruptMap constructor_mapWithMapToOverride (const class GALGAS_availableInterruptMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_interruptionPanicCode & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_interruptionPanicCode constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeForKey (class GALGAS_interruptionPanicCode constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_interruptionPanicCode & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCodeForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_availableInterruptMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_availableInterruptMap ;
 
} ; // End of GALGAS_availableInterruptMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_availableInterruptMap : public cGenericAbstractEnumerator {
  public : cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_availableInterruptMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @globalConstantMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_globalConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_globalConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_globalConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) ;
  public : GALGAS_globalConstantMap & operator = (const GALGAS_globalConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_globalConstantMap constructor_mapWithMapToOverride (const class GALGAS_globalConstantMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_objectIR constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_objectIR constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_objectIR & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_globalConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalConstantMap ;
 
} ; // End of GALGAS_globalConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_globalConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @infixOperatorMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_infixOperatorMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_infixOperatorMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_infixOperatorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) ;
  public : GALGAS_infixOperatorMap & operator = (const GALGAS_infixOperatorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperatorMap constructor_mapWithMapToOverride (const class GALGAS_infixOperatorMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_infixOperatorDescription & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType constinArgument1,
                                                   class GALGAS_infixOperatorDescription constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperationForKey (class GALGAS_infixOperatorDescription constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_PLMType constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_infixOperatorDescription & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorDescription getter_mOperationForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_infixOperatorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_infixOperatorMap ;
 
} ; // End of GALGAS_infixOperatorMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_infixOperatorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mResultType (LOCATION_ARGS) const ;
  public : class GALGAS_infixOperatorDescription current_mOperation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_infixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @initRoutineMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_initRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_initRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_initRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_initRoutineMap (const GALGAS_initRoutineMap & inSource) ;
  public : GALGAS_initRoutineMap & operator = (const GALGAS_initRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initRoutineMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_initRoutineMap constructor_mapWithMapToOverride (const class GALGAS_initRoutineMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_initRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_initRoutineMap ;
 
} ; // End of GALGAS_initRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_initRoutineMap (const GALGAS_initRoutineMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @panicRoutinePriorityMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_panicRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_panicRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) ;
  public : GALGAS_panicRoutinePriorityMap & operator = (const GALGAS_panicRoutinePriorityMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicRoutinePriorityMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicRoutinePriorityMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_panicRoutinePriorityMap constructor_mapWithMapToOverride (const class GALGAS_panicRoutinePriorityMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertLoopKey (class GALGAS_lstring constinArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertSetupKey (class GALGAS_lstring constinArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchLoopKey (class GALGAS_lstring constinArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_searchSetupKey (class GALGAS_lstring constinArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_panicRoutinePriorityMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_panicRoutinePriorityMap ;
 
} ; // End of GALGAS_panicRoutinePriorityMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_panicRoutinePriorityMap : public cGenericAbstractEnumerator {
  public : cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_panicRoutinePriorityMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @prefixOperatorMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_prefixOperatorMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_prefixOperatorMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_prefixOperatorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) ;
  public : GALGAS_prefixOperatorMap & operator = (const GALGAS_prefixOperatorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperatorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperatorMap constructor_mapWithMapToOverride (const class GALGAS_prefixOperatorMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_prefixOperatorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_prefixOperatorMap ;
 
} ; // End of GALGAS_prefixOperatorMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_prefixOperatorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_prefixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @internalRoutineMapForContext map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_internalRoutineMapForContext ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_internalRoutineMapForContext_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_internalRoutineMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_internalRoutineMapForContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_internalRoutineMapForContext (const GALGAS_internalRoutineMapForContext & inSource) ;
  public : GALGAS_internalRoutineMapForContext & operator = (const GALGAS_internalRoutineMapForContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_internalRoutineMapForContext extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_internalRoutineMapForContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_internalRoutineMapForContext constructor_mapWithMapToOverride (const class GALGAS_internalRoutineMapForContext & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineArgumentSignatureMapForContext & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineArgumentSignatureMapForContext constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineArgumentSignatureMapForContextForKey (class GALGAS_routineArgumentSignatureMapForContext constinArgument0,
                                                                                         class GALGAS_string constinArgument1,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineArgumentSignatureMapForContext & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineArgumentSignatureMapForContext getter_mRoutineArgumentSignatureMapForContextForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_internalRoutineMapForContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_internalRoutineMapForContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_internalRoutineMapForContext ;
 
} ; // End of GALGAS_internalRoutineMapForContext class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_internalRoutineMapForContext : public cGenericAbstractEnumerator {
  public : cEnumerator_internalRoutineMapForContext (const GALGAS_internalRoutineMapForContext & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_routineArgumentSignatureMapForContext current_mRoutineArgumentSignatureMapForContext (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_internalRoutineMapForContext_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMapForContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineMapForContext struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMapForContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_internalRoutineMapForContext mProperty_mInternalRoutineMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineMapForContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMapForContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineMapForContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMapForContext (const GALGAS_internalRoutineMapForContext & in_mInternalRoutineMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMapForContext extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMapForContext constructor_new (const class GALGAS_internalRoutineMapForContext & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineMapForContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_internalRoutineMapForContext getter_mInternalRoutineMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMapForContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_targetParameters mProperty_mTargetParameters ;

  public : GALGAS_uint mProperty_mPointerSize ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mPanicCodeType ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mPanicLineType ;

  public : GALGAS_unifiedTypeMap mProperty_mTypeMap ;

  public : GALGAS_routineMapForContext mProperty_mRoutineMapForContext ;

  public : GALGAS_guardMapForContext mProperty_mGuardMapForContext ;

  public : GALGAS_initRoutineMap mProperty_mInitRoutineMap ;

  public : GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;

  public : GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;

  public : GALGAS_controlRegisterMap mProperty_mControlRegisterMap ;

  public : GALGAS_globalConstantMap mProperty_mGlobalConstantMap ;

  public : GALGAS_driverMap mProperty_mDriverMap ;

  public : GALGAS_staticlistMap mProperty_mStaticListMap ;

  public : GALGAS_stringset mProperty_mDefinedInterruptSet ;

  public : GALGAS_availableInterruptMap mProperty_mAvailableInterruptMap ;

  public : GALGAS_infixOperatorMap mProperty_mEqualOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mNonEqualOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mStrictInfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mInfEqualOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mStrictSupOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mSupEqualOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mAndOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mOrOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mXorOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mBooleanXorOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mAddOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mAddNoOvfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mSubOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mSubNoOvfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mMulOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mMulNoOvfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mDivOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mDivNoOvfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mModOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mModNoOvfOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mLeftShiftOperatorMap ;

  public : GALGAS_infixOperatorMap mProperty_mRightShiftOperatorMap ;

  public : GALGAS_prefixOperatorMap mProperty_mUnaryMinusOperatorMap ;

  public : GALGAS_prefixOperatorMap mProperty_mNotOperatorMap ;

  public : GALGAS_prefixOperatorMap mProperty_mUnsignedComplementOperatorMap ;

  public : GALGAS_taskMap mProperty_mTaskMap ;

  public : GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;

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
  public : GALGAS_semanticContext (const GALGAS_targetParameters & in_mTargetParameters,
                                   const GALGAS_uint & in_mPointerSize,
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
                                   const GALGAS_driverMap & in_mDriverMap,
                                   const GALGAS_staticlistMap & in_mStaticListMap,
                                   const GALGAS_stringset & in_mDefinedInterruptSet,
                                   const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
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
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_targetParameters & inOperand0,
                                                                const class GALGAS_uint & inOperand1,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const class GALGAS_unifiedTypeMap & inOperand4,
                                                                const class GALGAS_routineMapForContext & inOperand5,
                                                                const class GALGAS_guardMapForContext & inOperand6,
                                                                const class GALGAS_initRoutineMap & inOperand7,
                                                                const class GALGAS_panicRoutinePriorityMap & inOperand8,
                                                                const class GALGAS_panicRoutinePriorityMap & inOperand9,
                                                                const class GALGAS_controlRegisterMap & inOperand10,
                                                                const class GALGAS_globalConstantMap & inOperand11,
                                                                const class GALGAS_driverMap & inOperand12,
                                                                const class GALGAS_staticlistMap & inOperand13,
                                                                const class GALGAS_stringset & inOperand14,
                                                                const class GALGAS_availableInterruptMap & inOperand15,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_mAvailableInterruptMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mBooleanXorOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_mControlRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mDefinedInterruptSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mDivNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mDivOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_driverMap getter_mDriverMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapForContext getter_mGuardMapForContext (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mInfEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutineMap getter_mInitRoutineMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mLeftShiftOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mModNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mModOperatorMap (LOCATION_ARGS) const ;

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

  public : VIRTUAL_IN_DEBUG class GALGAS_staticlistMap getter_mStaticListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mStrictInfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mStrictSupOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSubNoOvfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSubOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mSupEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;

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
//                                        @decoratedLaskList_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedLaskList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mTaskName ;

  public : GALGAS_lbigint mProperty_mPriority ;

  public : GALGAS_lbigint mProperty_mStackSize ;

  public : GALGAS_structurePropertyListAST mProperty_mVarList ;

  public : GALGAS_functionDeclarationListAST mProperty_mTaskProcList ;

  public : GALGAS_taskSetupListAST mProperty_mTaskSetupListAST ;

  public : GALGAS_syncInstructionBranchListAST mProperty_mGuardedCommandList ;

  public : GALGAS_decoratedTaskEntryList mProperty_mDecoratedTaskEntryList ;

  public : GALGAS_decoratedTaskGuardList mProperty_mDecoratedTaskGuardList ;

  public : GALGAS_location mProperty_mEndOfTaskDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedLaskList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedLaskList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedLaskList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedLaskList_2D_element (const GALGAS_lstring & in_mTaskName,
                                                const GALGAS_lbigint & in_mPriority,
                                                const GALGAS_lbigint & in_mStackSize,
                                                const GALGAS_structurePropertyListAST & in_mVarList,
                                                const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                const GALGAS_decoratedTaskEntryList & in_mDecoratedTaskEntryList,
                                                const GALGAS_decoratedTaskGuardList & in_mDecoratedTaskGuardList,
                                                const GALGAS_location & in_mEndOfTaskDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedLaskList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedLaskList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lbigint & inOperand1,
                                                                             const class GALGAS_lbigint & inOperand2,
                                                                             const class GALGAS_structurePropertyListAST & inOperand3,
                                                                             const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                             const class GALGAS_taskSetupListAST & inOperand5,
                                                                             const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                             const class GALGAS_decoratedTaskEntryList & inOperand7,
                                                                             const class GALGAS_decoratedTaskGuardList & inOperand8,
                                                                             const class GALGAS_location & inOperand9
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedLaskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskEntryList getter_mDecoratedTaskEntryList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskGuardList getter_mDecoratedTaskGuardList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_mGuardedCommandList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mTaskProcList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskSetupListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mVarList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedLaskList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedLaskList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @decoratedTaskEntryList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTaskEntryList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mEntryName ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mEntryFormalArgumentList ;

  public : GALGAS_routineTypedSignature mProperty_mEntrySignature ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mEntryReturnTypeProxy ;

  public : GALGAS_lstringlist mProperty_mEntryPath ;

  public : GALGAS_lstring mProperty_mInvokedMethodName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedTaskEntryList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedTaskEntryList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedTaskEntryList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedTaskEntryList_2D_element (const GALGAS_lstring & in_mEntryName,
                                                     const GALGAS_routineFormalArgumentListAST & in_mEntryFormalArgumentList,
                                                     const GALGAS_routineTypedSignature & in_mEntrySignature,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mEntryReturnTypeProxy,
                                                     const GALGAS_lstringlist & in_mEntryPath,
                                                     const GALGAS_lstring & in_mInvokedMethodName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTaskEntryList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTaskEntryList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                                  const class GALGAS_routineTypedSignature & inOperand2,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                  const class GALGAS_lstringlist & inOperand4,
                                                                                  const class GALGAS_lstring & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedTaskEntryList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mEntryFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntryName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEntryPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mEntryReturnTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mEntrySignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInvokedMethodName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedTaskEntryList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskEntryList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @decoratedTaskGuardList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedTaskGuardList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mGuardName ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;

  public : GALGAS_routineTypedSignature mProperty_mGuardSignature ;

  public : GALGAS_lstringlist mProperty_mGuardPath ;

  public : GALGAS_lstring mProperty_mInvokedGuardName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedTaskGuardList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedTaskGuardList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_decoratedTaskGuardList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedTaskGuardList_2D_element (const GALGAS_lstring & in_mGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                     const GALGAS_routineTypedSignature & in_mGuardSignature,
                                                     const GALGAS_lstringlist & in_mGuardPath,
                                                     const GALGAS_lstring & in_mInvokedGuardName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedTaskGuardList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedTaskGuardList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_routineFormalArgumentListAST & inOperand1,
                                                                                  const class GALGAS_routineTypedSignature & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedTaskGuardList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mGuardSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInvokedGuardName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedTaskGuardList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskGuardList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @taskMapIR map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_taskMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_taskMapIR_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_taskMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) ;
  public : GALGAS_taskMapIR & operator = (const GALGAS_taskMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMapIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_taskMapIR constructor_mapWithMapToOverride (const class GALGAS_taskMapIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_bigint & inOperand2,
                                                      const class GALGAS_bigint & inOperand3,
                                                      const class GALGAS_allocaList & inOperand4,
                                                      const class GALGAS_instructionListIR & inOperand5,
                                                      const class GALGAS_uint & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType constinArgument1,
                                                   class GALGAS_bigint constinArgument2,
                                                   class GALGAS_bigint constinArgument3,
                                                   class GALGAS_allocaList constinArgument4,
                                                   class GALGAS_instructionListIR constinArgument5,
                                                   class GALGAS_uint constinArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_bigint & outArgument2,
                                                   class GALGAS_bigint & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_uint & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAllocaListForKey (class GALGAS_allocaList constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInitInstructionListIRForKey (class GALGAS_instructionListIR constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPriorityForKey (class GALGAS_bigint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStackSizeForKey (class GALGAS_bigint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTaskNameStringIndexForKey (class GALGAS_uint constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_PLMType constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_bigint & outArgument2,
                                                   class GALGAS_bigint & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_uint & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaListForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInitInstructionListIRForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriorityForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mStackSizeForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTaskNameStringIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_taskMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMapIR ;
 
} ; // End of GALGAS_taskMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mTaskType (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInitInstructionListIR (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @allocaList list                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allocaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_allocaList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mVarLLVMName,
                                                  const class GALGAS_string & in_mLLVMTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allocaList extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_allocaList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_allocaList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allocaList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList add_operation (const GALGAS_allocaList & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarLLVMNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allocaList ;
 
} ; // End of GALGAS_allocaList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_allocaList : public cGenericAbstractEnumerator {
  public : cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mLLVMTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allocaList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instructionListIR list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_instructionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListIR extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionListIR constructor_listWithValue (const class GALGAS_abstractInstructionIR & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractInstructionIR & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR add_operation (const GALGAS_instructionListIR & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractInstructionIR & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractInstructionIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractInstructionIR & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractInstructionIR & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractInstructionIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListIR ;
 
} ; // End of GALGAS_instructionListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instructionListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@taskMapIR' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_taskMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_mTaskType ;
  public : GALGAS_bigint mProperty_mPriority ;
  public : GALGAS_bigint mProperty_mStackSize ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInitInstructionListIR ;
  public : GALGAS_uint mProperty_mTaskNameStringIndex ;

//--- Constructor
  public : cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                  const GALGAS_PLMType & in_mTaskType,
                                  const GALGAS_bigint & in_mPriority,
                                  const GALGAS_bigint & in_mStackSize,
                                  const GALGAS_allocaList & in_mAllocaList,
                                  const GALGAS_instructionListIR & in_mInitInstructionListIR,
                                  const GALGAS_uint & in_mTaskNameStringIndex
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskMapIR_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_PLMType mProperty_mTaskType ;

  public : GALGAS_bigint mProperty_mPriority ;

  public : GALGAS_bigint mProperty_mStackSize ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInitInstructionListIR ;

  public : GALGAS_uint mProperty_mTaskNameStringIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_taskMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_PLMType & in_mTaskType,
                                        const GALGAS_bigint & in_mPriority,
                                        const GALGAS_bigint & in_mStackSize,
                                        const GALGAS_allocaList & in_mAllocaList,
                                        const GALGAS_instructionListIR & in_mInitInstructionListIR,
                                        const GALGAS_uint & in_mTaskNameStringIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_PLMType & inOperand1,
                                                                     const class GALGAS_bigint & inOperand2,
                                                                     const class GALGAS_bigint & inOperand3,
                                                                     const class GALGAS_allocaList & inOperand4,
                                                                     const class GALGAS_instructionListIR & inOperand5,
                                                                     const class GALGAS_uint & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInitInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTaskNameStringIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTaskType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allocaList_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allocaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mVarLLVMName ;

  public : GALGAS_string mProperty_mLLVMTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allocaList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_allocaList_2D_element (const GALGAS_string & in_mVarLLVMName,
                                         const GALGAS_string & in_mLLVMTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allocaList_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_allocaList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_allocaList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarLLVMName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allocaList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractInstructionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractInstructionIR : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractInstructionIR (void) ;

//---
  public : inline const class cPtr_abstractInstructionIR * ptr (void) const { return (const cPtr_abstractInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractInstructionIR (const cPtr_abstractInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractInstructionIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @abstractInstructionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractInstructionIR : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractInstructionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @instructionListIR_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractInstructionIR mProperty_mInstructionGeneration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionListIR_2D_element (const GALGAS_abstractInstructionIR & in_mInstructionGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListIR_2D_element constructor_new (const class GALGAS_abstractInstructionIR & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractInstructionIR getter_mInstructionGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskSortedListIR sorted list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_taskSortedListIR (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskSortedListIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskSortedListIR constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_taskSortedListIR constructor_sortedListWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_bigint & inOperand1,
                                                                                 const class GALGAS_bigint & inOperand2,
                                                                                 const class GALGAS_allocaList & inOperand3,
                                                                                 const class GALGAS_instructionListIR & inOperand4,
                                                                                 const class GALGAS_uint & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bigint & inOperand1,
                                                      const class GALGAS_bigint & inOperand2,
                                                      const class GALGAS_allocaList & inOperand3,
                                                      const class GALGAS_instructionListIR & inOperand4,
                                                      const class GALGAS_uint & inOperand5
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_string & outArgument0,
                                                     class GALGAS_bigint & outArgument1,
                                                     class GALGAS_bigint & outArgument2,
                                                     class GALGAS_allocaList & outArgument3,
                                                     class GALGAS_instructionListIR & outArgument4,
                                                     class GALGAS_uint & outArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_string & outArgument0,
                                                     class GALGAS_bigint & outArgument1,
                                                     class GALGAS_bigint & outArgument2,
                                                     class GALGAS_allocaList & outArgument3,
                                                     class GALGAS_instructionListIR & outArgument4,
                                                     class GALGAS_uint & outArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_string & outArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_allocaList & outArgument3,
                                                  class GALGAS_instructionListIR & outArgument4,
                                                  class GALGAS_uint & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_string & outArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_allocaList & outArgument3,
                                                  class GALGAS_instructionListIR & outArgument4,
                                                  class GALGAS_uint & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskSortedListIR ;
 
} ; // End of GALGAS_taskSortedListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskSortedListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mSetupInstructionListIR (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskSortedListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskSortedListIR_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTaskName ;

  public : GALGAS_bigint mProperty_mPriority ;

  public : GALGAS_bigint mProperty_mStackSize ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mSetupInstructionListIR ;

  public : GALGAS_uint mProperty_mTaskNameStringIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskSortedListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskSortedListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskSortedListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskSortedListIR_2D_element (const GALGAS_string & in_mTaskName,
                                               const GALGAS_bigint & in_mPriority,
                                               const GALGAS_bigint & in_mStackSize,
                                               const GALGAS_allocaList & in_mAllocaList,
                                               const GALGAS_instructionListIR & in_mSetupInstructionListIR,
                                               const GALGAS_uint & in_mTaskNameStringIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskSortedListIR_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_bigint & inOperand1,
                                                                            const class GALGAS_bigint & inOperand2,
                                                                            const class GALGAS_allocaList & inOperand3,
                                                                            const class GALGAS_instructionListIR & inOperand4,
                                                                            const class GALGAS_uint & inOperand5
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskSortedListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mSetupInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTaskNameStringIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskSortedListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@taskMapIR generateCode'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCode (const class GALGAS_taskMapIR inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   const class GALGAS_generationContext constin_inGenerationContext,
                                   class GALGAS_generationAdds & io_ioGenerationAdds,
                                   class GALGAS__32_stringlist & io_ioServiceList,
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
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_literalStringName (const class GALGAS_uint & constinArgument0,
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
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForFunction (const class GALGAS_string & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmNameForSelf'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSelf (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForServiceCall (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForServiceImplementation (const class GALGAS_string & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForTaskLoopFunction'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForTaskLoopFunction (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Function 'llvmNameForTaskSelfTerminateService'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForTaskSelfTerminateService (class C_Compiler * inCompiler
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
//                                          Function 'mainRoutineNameForTask'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mainRoutineNameForTask (const class GALGAS_string & constinArgument0,
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
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_stackNameForTask (const class GALGAS_string & constinArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@objectIR llvmName' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectIR & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR instructionListLLVMCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_instructionListLLVMCode (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @generationAdds struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_uint mProperty_mUniqueIndex ;

  public : GALGAS_stringset mProperty_mExternFunctionDeclarationSet ;

  public : GALGAS_staticStringMap mProperty_mStaticStringMap ;

  public : GALGAS_bool mProperty_mUsesGuards ;

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
  public : static class GALGAS_generationAdds constructor_new (const class GALGAS_uint & inOperand0,
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
//--------------------------------- Properties
  public : GALGAS_string mProperty_mPanicCodeLLVMType ;

  public : GALGAS_string mProperty_mPanicLineLLVMType ;

  public : GALGAS_string mProperty_mNopInstructionInLLVM ;

  public : GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;

  public : GALGAS_availableInterruptMap mProperty_mAvailableInterruptMap ;

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
                                     const GALGAS_string & in_mNopInstructionInLLVM,
                                     const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                     const GALGAS_availableInterruptMap & in_mAvailableInterruptMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationContext extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generationContext constructor_new (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_string & inOperand2,
                                                                  const class GALGAS_globalTaskVariableList & inOperand3,
                                                                  const class GALGAS_availableInterruptMap & inOperand4
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
  public : VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_mAvailableInterruptMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNopInstructionInLLVM (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPanicCodeLLVMType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPanicLineLLVMType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @routineFormalArgumentListAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;

  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_lstring mProperty_mFormalArgumentTypeName ;

  public : GALGAS_lstring mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineFormalArgumentListAST_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GALGAS_lstring & in_mSelector,
                                                           const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                           const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListAST_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                        const class GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineFormalArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineTypedSignature_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineTypedSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;

  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mTypeProxy ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                    const GALGAS_lstring & in_mSelector,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineTypedSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineTypedSignature_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineTypedSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@mode panicAllowed' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_panicAllowed (const class GALGAS_mode & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension getter '@mode string' (as function)                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_string (const class GALGAS_mode & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@mode controlRegisterAccess' (as function)                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_controlRegisterAccess (const class GALGAS_mode & inObject,
                                                         const class GALGAS_bool & constinArgument0,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@panicRoutinePriorityMap' map                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_panicRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @panicRoutinePriorityMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicRoutinePriorityMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicRoutinePriorityMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicRoutinePriorityMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicRoutinePriorityMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicRoutinePriorityMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @instructionListSortedListIR sorted list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_instructionListSortedListIR (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListSortedListIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListSortedListIR constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionListSortedListIR constructor_sortedListWithValue (const class GALGAS_instructionListIR & inOperand0,
                                                                                            const class GALGAS_bigint & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListSortedListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instructionListIR & inOperand0,
                                                      const class GALGAS_bigint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_instructionListIR & outArgument0,
                                                     class GALGAS_bigint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_instructionListIR & outArgument0,
                                                     class GALGAS_bigint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_instructionListIR & outArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_instructionListIR & outArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListSortedListIR ;
 
} ; // End of GALGAS_instructionListSortedListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instructionListSortedListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListSortedListIR (const GALGAS_instructionListSortedListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListSortedListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListSortedListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @instructionListSortedListIR_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_instructionListIR mProperty_mInstructionList ;

  public : GALGAS_bigint mProperty_mPriority ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_instructionListSortedListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListSortedListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_instructionListSortedListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_instructionListSortedListIR_2D_element (const GALGAS_instructionListIR & in_mInstructionList,
                                                          const GALGAS_bigint & in_mPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_instructionListSortedListIR_2D_element constructor_new (const class GALGAS_instructionListIR & inOperand0,
                                                                                       const class GALGAS_bigint & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionListSortedListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListSortedListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListSortedListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@systemRoutineDeclarationListAST enterSystemRoutineInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterSystemRoutineInContext (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                                  const class GALGAS_string constin_inReceiverTypeName,
                                                  class GALGAS_semanticContext & io_ioContext,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'mutatingAttribute'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_routineMangledNameFromAST (const class GALGAS_string & constinArgument0,
                                                         const class GALGAS_lstring & constinArgument1,
                                                         const class GALGAS_routineFormalArgumentListAST & constinArgument2,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@routineFormalArgumentListAST routineSignature' (as function)                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_routineFormalArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'routineSignature'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSignature (class GALGAS_unifiedTypeMap & ioArgument0,
                               const class GALGAS_routineFormalArgumentListAST constinArgument1,
                               class GALGAS_routineTypedSignature & outArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@routineMapForContext insertRoutine'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertRoutine (class GALGAS_routineMapForContext & ioObject,
                                    const class GALGAS_lstring constin_inRoutineName,
                                    const class GALGAS_lstring constin_inArgumentSignature,
                                    const class GALGAS_lstring constin_inRoutineLLVMName,
                                    const class GALGAS_routineDescriptor constin_inDescriptor,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@systemRoutineDeclarationListAST systemRoutineSemanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_systemRoutineSemanticAnalysis (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                                    class GALGAS_PLMType in_inReceiverType,
                                                    const class GALGAS_semanticContext constin_inSemanticContext,
                                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'noUnusedWarningAttribute'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_noUnusedWarningAttribute (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const class GALGAS_PLMType constinArgument0,
                                      const class GALGAS_routineKind constinArgument1,
                                      const class GALGAS_mode constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_routineFormalArgumentListAST constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_instructionListAST constinArgument6,
                                      const class GALGAS_location constinArgument7,
                                      const class GALGAS_bool constinArgument8,
                                      const class GALGAS_bool constinArgument9,
                                      const class GALGAS_bool constinArgument10,
                                      const class GALGAS_bool constinArgument11,
                                      const class GALGAS_semanticContext constinArgument12,
                                      class GALGAS_semanticTemporariesStruct & ioArgument13,
                                      class GALGAS_intermediateCodeStruct & ioArgument14,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @bootListIR sorted list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_bootListIR (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootListIR extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootListIR constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_bootListIR constructor_sortedListWithValue (const class GALGAS_bigint & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_allocaList & inOperand2,
                                                                           const class GALGAS_instructionListIR & inOperand3,
                                                                           const class GALGAS_location & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_bootListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0,
                                                      const class GALGAS_location & inOperand1,
                                                      const class GALGAS_allocaList & inOperand2,
                                                      const class GALGAS_instructionListIR & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     class GALGAS_allocaList & outArgument2,
                                                     class GALGAS_instructionListIR & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     class GALGAS_allocaList & outArgument2,
                                                     class GALGAS_instructionListIR & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  class GALGAS_allocaList & outArgument2,
                                                  class GALGAS_instructionListIR & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  class GALGAS_allocaList & outArgument2,
                                                  class GALGAS_instructionListIR & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bootListIR ;
 
} ; // End of GALGAS_bootListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bootListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_bootListIR (const GALGAS_bootListIR & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bigint current_mBootIndex (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mInitLocation (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionListIR (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInitLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @initListIR sorted list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_initListIR (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initListIR extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initListIR constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_initListIR constructor_sortedListWithValue (const class GALGAS_PLMType & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_bigint & inOperand2,
                                                                           const class GALGAS_allocaList & inOperand3,
                                                                           const class GALGAS_instructionListIR & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_initListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_PLMType & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bigint & inOperand2,
                                                      const class GALGAS_allocaList & inOperand3,
                                                      const class GALGAS_instructionListIR & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     class GALGAS_bigint & outArgument2,
                                                     class GALGAS_allocaList & outArgument3,
                                                     class GALGAS_instructionListIR & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_string & outArgument1,
                                                     class GALGAS_bigint & outArgument2,
                                                     class GALGAS_allocaList & outArgument3,
                                                     class GALGAS_instructionListIR & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_allocaList & outArgument3,
                                                  class GALGAS_instructionListIR & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_allocaList & outArgument3,
                                                  class GALGAS_instructionListIR & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_initListIR ;
 
} ; // End of GALGAS_initListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_initListIR (const GALGAS_initListIR & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_PLMType current_mSelfType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mDriverName (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionListIR (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @generationListIR list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_generationListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_generationListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractGenerationIR & in_mGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationListIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generationListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_generationListIR constructor_listWithValue (const class GALGAS_abstractGenerationIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_generationListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractGenerationIR & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_generationListIR add_operation (const GALGAS_generationListIR & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractGenerationIR constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractGenerationIR & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractGenerationIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractGenerationIR & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractGenerationIR & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractGenerationIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGenerationIR getter_mGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generationListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generationListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generationListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_generationListIR ;
 
} ; // End of GALGAS_generationListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_generationListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_generationListIR (const GALGAS_generationListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractGenerationIR current_mGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_generationListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @externProcedureMapIR map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_externProcedureMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_externProcedureMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) ;
  public : GALGAS_externProcedureMapIR & operator = (const GALGAS_externProcedureMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureMapIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_externProcedureMapIR constructor_mapWithMapToOverride (const class GALGAS_externProcedureMapIR & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineFormalArgumentListIR constinArgument1,
                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GALGAS_routineFormalArgumentListIR constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_externProcedureMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externProcedureMapIR ;
 
} ; // End of GALGAS_externProcedureMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externProcedureMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externProcedureMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @globalConstantMapIR map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_globalConstantMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_globalConstantMapIR_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_globalConstantMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_globalConstantMapIR (const GALGAS_globalConstantMapIR & inSource) ;
  public : GALGAS_globalConstantMapIR & operator = (const GALGAS_globalConstantMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantMapIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_globalConstantMapIR constructor_mapWithMapToOverride (const class GALGAS_globalConstantMapIR & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_objectIR & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                   class GALGAS_objectIR constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSourceExpressionForKey (class GALGAS_objectIR constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_objectIR & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceExpressionForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_globalConstantMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalConstantMapIR ;
 
} ; // End of GALGAS_globalConstantMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_globalConstantMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_globalConstantMapIR (const GALGAS_globalConstantMapIR & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mSourceExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalConstantMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @guardMapIR map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_guardMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_guardMapIR_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_guardMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_guardMapIR (const GALGAS_guardMapIR & inSource) ;
  public : GALGAS_guardMapIR & operator = (const GALGAS_guardMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardMapIR extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_guardMapIR constructor_mapWithMapToOverride (const class GALGAS_guardMapIR & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                      const class GALGAS_PLMType & inOperand2,
                                                      const class GALGAS_guardKindGenerationIR & inOperand3,
                                                      const class GALGAS_allocaList & inOperand4,
                                                      const class GALGAS_instructionListIR & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineFormalArgumentListIR constinArgument1,
                                                   class GALGAS_PLMType constinArgument2,
                                                   class GALGAS_guardKindGenerationIR constinArgument3,
                                                   class GALGAS_allocaList constinArgument4,
                                                   class GALGAS_instructionListIR constinArgument5,
                                                   class GALGAS_bool constinArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineFormalArgumentListIR & outArgument1,
                                                   class GALGAS_PLMType & outArgument2,
                                                   class GALGAS_guardKindGenerationIR & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAllocaListForKey (class GALGAS_allocaList constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GALGAS_routineFormalArgumentListIR constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIRForKey (class GALGAS_guardKindGenerationIR constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListForKey (class GALGAS_instructionListIR constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeForKey (class GALGAS_PLMType constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWarnIfUnusedForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_routineFormalArgumentListIR & outArgument1,
                                                   class GALGAS_PLMType & outArgument2,
                                                   class GALGAS_guardKindGenerationIR & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaListForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIRForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverTypeForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnusedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_guardMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_guardMapIR ;
 
} ; // End of GALGAS_guardMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guardMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_guardMapIR (const GALGAS_guardMapIR & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mReceiverType (LOCATION_ARGS) const ;
  public : class GALGAS_guardKindGenerationIR current_mGuardKindGenerationIR (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mWarnIfUnused (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guardMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @interruptMapIR map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_interruptMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_interruptMapIR_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_interruptMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_interruptMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) ;
  public : GALGAS_interruptMapIR & operator = (const GALGAS_interruptMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptMapIR extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_interruptMapIR constructor_mapWithMapToOverride (const class GALGAS_interruptMapIR & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_allocaList & inOperand3,
                                                      const class GALGAS_instructionListIR & inOperand4,
                                                      const class GALGAS_mode & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType constinArgument1,
                                                   class GALGAS_string constinArgument2,
                                                   class GALGAS_allocaList constinArgument3,
                                                   class GALGAS_instructionListIR constinArgument4,
                                                   class GALGAS_mode constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_allocaList & outArgument3,
                                                   class GALGAS_instructionListIR & outArgument4,
                                                   class GALGAS_mode & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAllocaListForKey (class GALGAS_allocaList constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGlobalVariableNameForKey (class GALGAS_string constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListForKey (class GALGAS_instructionListIR constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModeForKey (class GALGAS_mode constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelfTypeForKey (class GALGAS_PLMType constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   class GALGAS_allocaList & outArgument3,
                                                   class GALGAS_instructionListIR & outArgument4,
                                                   class GALGAS_mode & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaListForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableNameForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mSelfTypeForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_interruptMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_interruptMapIR ;
 
} ; // End of GALGAS_interruptMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_interruptMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mSelfType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGlobalVariableName (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_interruptMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineMapIR map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMapIR ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_routineMapIR_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineMapIR (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineMapIR (const GALGAS_routineMapIR & inSource) ;
  public : GALGAS_routineMapIR & operator = (const GALGAS_routineMapIR & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMapIR extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_routineMapIR constructor_mapWithMapToOverride (const class GALGAS_routineMapIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                      const class GALGAS_allocaList & inOperand4,
                                                      const class GALGAS_instructionListIR & inOperand5,
                                                      const class GALGAS_bool & inOperand6,
                                                      const class GALGAS_bool & inOperand7,
                                                      const class GALGAS_bool & inOperand8,
                                                      const class GALGAS_routineKind & inOperand9,
                                                      const class GALGAS_PLMType & inOperand10,
                                                      const class GALGAS_bool & inOperand11,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   class GALGAS_routineFormalArgumentListIR constinArgument3,
                                                   class GALGAS_allocaList constinArgument4,
                                                   class GALGAS_instructionListIR constinArgument5,
                                                   class GALGAS_bool constinArgument6,
                                                   class GALGAS_bool constinArgument7,
                                                   class GALGAS_bool constinArgument8,
                                                   class GALGAS_routineKind constinArgument9,
                                                   class GALGAS_PLMType constinArgument10,
                                                   class GALGAS_bool constinArgument11,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_routineFormalArgumentListIR & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   class GALGAS_bool & outArgument7,
                                                   class GALGAS_bool & outArgument8,
                                                   class GALGAS_routineKind & outArgument9,
                                                   class GALGAS_PLMType & outArgument10,
                                                   class GALGAS_bool & outArgument11,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAllocaListForKey (class GALGAS_allocaList constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAppendFileAndLineArgumentForPanicLocationForKey (class GALGAS_bool constinArgument0,
                                                                                             class GALGAS_string constinArgument1,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GALGAS_routineFormalArgumentListIR constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGlobalForKey (class GALGAS_bool constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListForKey (class GALGAS_instructionListIR constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsRequiredForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKindForKey (class GALGAS_routineKind constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeForKey (class GALGAS_PLMType constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnTypeForKey (class GALGAS_PLMType constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineNameForGenerationForKey (class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMWarnIfUnusedForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_PLMType & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_routineFormalArgumentListIR & outArgument3,
                                                   class GALGAS_allocaList & outArgument4,
                                                   class GALGAS_instructionListIR & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   class GALGAS_bool & outArgument7,
                                                   class GALGAS_bool & outArgument8,
                                                   class GALGAS_routineKind & outArgument9,
                                                   class GALGAS_PLMType & outArgument10,
                                                   class GALGAS_bool & outArgument11,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaListForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAppendFileAndLineArgumentForPanicLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGlobalForKey (const class GALGAS_string & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRequiredForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mKindForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverTypeForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReturnTypeForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnusedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineMapIR ;
 
} ; // End of GALGAS_routineMapIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineMapIR : public cGenericAbstractEnumerator {
  public : cEnumerator_routineMapIR (const GALGAS_routineMapIR & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mReceiverType (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRoutineNameForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_allocaList current_mAllocaList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsRequired (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mWarnIfUnused (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mGlobal (LOCATION_ARGS) const ;
  public : class GALGAS_routineKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mReturnType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @intermediateCodeStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_staticStringMap mProperty_mStaticStringMap ;

  public : GALGAS_globalConstantMapIR mProperty_mGlobalConstantMap ;

  public : GALGAS_routineMapIR mProperty_mRoutineMapIR ;

  public : GALGAS_guardMapIR mProperty_mGuardMapIR ;

  public : GALGAS_interruptMapIR mProperty_mInterruptMapIR ;

  public : GALGAS_externProcedureMapIR mProperty_mExternProcedureMapIR ;

  public : GALGAS_stringset mProperty_mRequiredProcedureSet ;

  public : GALGAS_bootListIR mProperty_mBootList ;

  public : GALGAS_initListIR mProperty_mInitList ;

  public : GALGAS_instructionListSortedListIR mProperty_mPanicSetupInstructionListIR ;

  public : GALGAS_instructionListSortedListIR mProperty_mPanicLoopInstructionListIR ;

  public : GALGAS_taskMapIR mProperty_mTaskMapIR ;

  public : GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;

  public : GALGAS_uint mProperty_mMaxBranchOfOnInstructions ;

  public : GALGAS_targetParameters mProperty_mTargetParameters ;

  public : GALGAS_driverListIR mProperty_mDriverList ;

  public : GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForIntermediate ;

  public : GALGAS_generationListIR mProperty_mGenerationListIR ;

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
                                          const GALGAS_globalConstantMapIR & in_mGlobalConstantMap,
                                          const GALGAS_routineMapIR & in_mRoutineMapIR,
                                          const GALGAS_guardMapIR & in_mGuardMapIR,
                                          const GALGAS_interruptMapIR & in_mInterruptMapIR,
                                          const GALGAS_externProcedureMapIR & in_mExternProcedureMapIR,
                                          const GALGAS_stringset & in_mRequiredProcedureSet,
                                          const GALGAS_bootListIR & in_mBootList,
                                          const GALGAS_initListIR & in_mInitList,
                                          const GALGAS_instructionListSortedListIR & in_mPanicSetupInstructionListIR,
                                          const GALGAS_instructionListSortedListIR & in_mPanicLoopInstructionListIR,
                                          const GALGAS_taskMapIR & in_mTaskMapIR,
                                          const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                          const GALGAS_uint & in_mMaxBranchOfOnInstructions,
                                          const GALGAS_targetParameters & in_mTargetParameters,
                                          const GALGAS_driverListIR & in_mDriverList,
                                          const GALGAS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForIntermediate,
                                          const GALGAS_generationListIR & in_mGenerationListIR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_intermediateCodeStruct extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_intermediateCodeStruct constructor_new (const class GALGAS_staticStringMap & inOperand0,
                                                                       const class GALGAS_globalConstantMapIR & inOperand1,
                                                                       const class GALGAS_routineMapIR & inOperand2,
                                                                       const class GALGAS_guardMapIR & inOperand3,
                                                                       const class GALGAS_interruptMapIR & inOperand4,
                                                                       const class GALGAS_externProcedureMapIR & inOperand5,
                                                                       const class GALGAS_stringset & inOperand6,
                                                                       const class GALGAS_bootListIR & inOperand7,
                                                                       const class GALGAS_initListIR & inOperand8,
                                                                       const class GALGAS_instructionListSortedListIR & inOperand9,
                                                                       const class GALGAS_instructionListSortedListIR & inOperand10,
                                                                       const class GALGAS_taskMapIR & inOperand11,
                                                                       const class GALGAS_globalTaskVariableList & inOperand12,
                                                                       const class GALGAS_uint & inOperand13,
                                                                       const class GALGAS_targetParameters & inOperand14,
                                                                       const class GALGAS_driverListIR & inOperand15,
                                                                       const class GALGAS_staticListInvokedFunctionSetMap & inOperand16,
                                                                       const class GALGAS_generationListIR & inOperand17
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

  public : VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_mDriverList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_mExternProcedureMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generationListIR getter_mGenerationListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMapIR getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapIR getter_mGuardMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListIR getter_mInitList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptMapIR getter_mInterruptMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxBranchOfOnInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListSortedListIR getter_mPanicLoopInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListSortedListIR getter_mPanicSetupInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRequiredProcedureSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMapIR getter_mRoutineMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_mStaticArrayMapForIntermediate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_mTaskMapIR (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_intermediateCodeStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bootRoutinePriorityMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bootRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_bootRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inSource) ;
  public : GALGAS_bootRoutinePriorityMap & operator = (const GALGAS_bootRoutinePriorityMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootRoutinePriorityMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootRoutinePriorityMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_bootRoutinePriorityMap constructor_mapWithMapToOverride (const class GALGAS_bootRoutinePriorityMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootRoutinePriorityMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bootRoutinePriorityMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bootRoutinePriorityMap ;
 
} ; // End of GALGAS_bootRoutinePriorityMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bootRoutinePriorityMap : public cGenericAbstractEnumerator {
  public : cEnumerator_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootRoutinePriorityMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @initRoutinePriorityMap map                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_initRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_initRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inSource) ;
  public : GALGAS_initRoutinePriorityMap & operator = (const GALGAS_initRoutinePriorityMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initRoutinePriorityMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initRoutinePriorityMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_initRoutinePriorityMap constructor_mapWithMapToOverride (const class GALGAS_initRoutinePriorityMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutinePriorityMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_initRoutinePriorityMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_initRoutinePriorityMap ;
 
} ; // End of GALGAS_initRoutinePriorityMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initRoutinePriorityMap : public cGenericAbstractEnumerator {
  public : cEnumerator_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initRoutinePriorityMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initRoutinePriorityMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTemporariesStruct struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_uint mProperty_mTemporaryIndex ;

  public : GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;

  public : GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;

  public : GALGAS_initRoutinePriorityMap mProperty_mInitRoutinePriorityMap ;

  public : GALGAS_bootRoutinePriorityMap mProperty_mBootRoutinePriorityMap ;

  public : GALGAS_subprogramInvocationGraph mProperty_mSubprogramInvocationGraph ;

  public : GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForTemporaries ;

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
                                             const GALGAS_subprogramInvocationGraph & in_mSubprogramInvocationGraph,
                                             const GALGAS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForTemporaries) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTemporariesStruct extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticTemporariesStruct constructor_new (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                          const class GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                          const class GALGAS_initRoutinePriorityMap & inOperand3,
                                                                          const class GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                          const class GALGAS_subprogramInvocationGraph & inOperand5,
                                                                          const class GALGAS_staticListInvokedFunctionSetMap & inOperand6
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

  public : VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_mStaticArrayMapForTemporaries (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subprogramInvocationGraph getter_mSubprogramInvocationGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTemporaryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTemporariesStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @sectionIRlist list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sectionIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sectionIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSectionCallName,
                                                  const class GALGAS_string & in_mSectionImplementationName,
                                                  const class GALGAS_PLMType & in_mReceiverType,
                                                  const class GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const class GALGAS_PLMType & in_mReturnType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sectionIRlist extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sectionIRlist constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_sectionIRlist constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_PLMType & inOperand2,
                                                                        const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                        const class GALGAS_PLMType & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_PLMType & inOperand2,
                                                      const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                      const class GALGAS_PLMType & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sectionIRlist add_operation (const GALGAS_sectionIRlist & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_PLMType constinArgument2,
                                                       class GALGAS_routineFormalArgumentListIR constinArgument3,
                                                       class GALGAS_PLMType constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_PLMType & outArgument2,
                                                  class GALGAS_routineFormalArgumentListIR & outArgument3,
                                                  class GALGAS_PLMType & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_PLMType & outArgument2,
                                                 class GALGAS_routineFormalArgumentListIR & outArgument3,
                                                 class GALGAS_PLMType & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_PLMType & outArgument2,
                                                       class GALGAS_routineFormalArgumentListIR & outArgument3,
                                                       class GALGAS_PLMType & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_PLMType & outArgument2,
                                               class GALGAS_routineFormalArgumentListIR & outArgument3,
                                               class GALGAS_PLMType & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_PLMType & outArgument2,
                                              class GALGAS_routineFormalArgumentListIR & outArgument3,
                                              class GALGAS_PLMType & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReturnTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionCallNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionImplementationNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sectionIRlist ;
 
} ; // End of GALGAS_sectionIRlist class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_sectionIRlist : public cGenericAbstractEnumerator {
  public : cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mReceiverType (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sectionIRlist_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @routineFormalArgumentListIR list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                  const class GALGAS_PLMType & in_mFormalArgumentType,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineFormalArgumentListIR constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const class GALGAS_PLMType & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_PLMType & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_PLMType constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_PLMType & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_PLMType & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_PLMType & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_PLMType & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_PLMType & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineFormalArgumentListIR ;
 
} ; // End of GALGAS_routineFormalArgumentListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineFormalArgumentListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public : class GALGAS_PLMType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineFormalArgumentListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sectionIRlist_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sectionIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mSectionCallName ;

  public : GALGAS_string mProperty_mSectionImplementationName ;

  public : GALGAS_PLMType mProperty_mReceiverType ;

  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_PLMType mProperty_mReturnType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sectionIRlist_2D_element (const GALGAS_string & in_mSectionCallName,
                                            const GALGAS_string & in_mSectionImplementationName,
                                            const GALGAS_PLMType & in_mReceiverType,
                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GALGAS_PLMType & in_mReturnType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sectionIRlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sectionIRlist_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_PLMType & inOperand2,
                                                                         const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                         const class GALGAS_PLMType & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sectionIRlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReturnType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionCallName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionImplementationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sectionIRlist_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @routineFormalArgumentListIR_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentKind ;

  public : GALGAS_PLMType mProperty_mFormalArgumentType ;

  public : GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                          const GALGAS_PLMType & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListIR_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                       const class GALGAS_PLMType & inOperand1,
                                                                                       const class GALGAS_string & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineFormalArgumentListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineFormalArgumentListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@routineMapIR' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_mReceiverType ;
  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_bool mProperty_mIsRequired ;
  public : GALGAS_bool mProperty_mWarnIfUnused ;
  public : GALGAS_bool mProperty_mGlobal ;
  public : GALGAS_routineKind mProperty_mKind ;
  public : GALGAS_PLMType mProperty_mReturnType ;
  public : GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;

//--- Constructor
  public : cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                     const GALGAS_PLMType & in_mReceiverType,
                                     const GALGAS_lstring & in_mRoutineNameForGeneration,
                                     const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                     const GALGAS_allocaList & in_mAllocaList,
                                     const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                     const GALGAS_bool & in_mIsRequired,
                                     const GALGAS_bool & in_mWarnIfUnused,
                                     const GALGAS_bool & in_mGlobal,
                                     const GALGAS_routineKind & in_mKind,
                                     const GALGAS_PLMType & in_mReturnType,
                                     const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @routineMapIR_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_PLMType mProperty_mReceiverType ;

  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;

  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

  public : GALGAS_bool mProperty_mIsRequired ;

  public : GALGAS_bool mProperty_mWarnIfUnused ;

  public : GALGAS_bool mProperty_mGlobal ;

  public : GALGAS_routineKind mProperty_mKind ;

  public : GALGAS_PLMType mProperty_mReturnType ;

  public : GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_PLMType & in_mReceiverType,
                                           const GALGAS_lstring & in_mRoutineNameForGeneration,
                                           const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                           const GALGAS_allocaList & in_mAllocaList,
                                           const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                           const GALGAS_bool & in_mIsRequired,
                                           const GALGAS_bool & in_mWarnIfUnused,
                                           const GALGAS_bool & in_mGlobal,
                                           const GALGAS_routineKind & in_mKind,
                                           const GALGAS_PLMType & in_mReturnType,
                                           const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_PLMType & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                        const class GALGAS_allocaList & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
                                                                        const class GALGAS_bool & inOperand7,
                                                                        const class GALGAS_bool & inOperand8,
                                                                        const class GALGAS_routineKind & inOperand9,
                                                                        const class GALGAS_PLMType & inOperand10,
                                                                        const class GALGAS_bool & inOperand11
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGlobal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRequired (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReturnType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@bootRoutinePriorityMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bootRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_bootRoutinePriorityMap (const GALGAS_lstring & inKey
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @bootRoutinePriorityMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootRoutinePriorityMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootRoutinePriorityMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bootRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bootRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootRoutinePriorityMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootRoutinePriorityMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootRoutinePriorityMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootRoutinePriorityMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bootListIR_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bigint mProperty_mBootIndex ;

  public : GALGAS_location mProperty_mInitLocation ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionListIR ;

  public : GALGAS_location mProperty_mEndOfInitLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bootListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bootListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bootListIR_2D_element (const GALGAS_bigint & in_mBootIndex,
                                         const GALGAS_location & in_mInitLocation,
                                         const GALGAS_allocaList & in_mAllocaList,
                                         const GALGAS_instructionListIR & in_mInstructionListIR,
                                         const GALGAS_location & in_mEndOfInitLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bootListIR_2D_element constructor_new (const class GALGAS_bigint & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_allocaList & inOperand2,
                                                                      const class GALGAS_instructionListIR & inOperand3,
                                                                      const class GALGAS_location & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBootIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionListIR (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@bootListIR generateCode'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCode (const class GALGAS_bootListIR inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   const class GALGAS_generationContext constin_inGenerationContext,
                                   class GALGAS_generationAdds & io_ioGenerationAdds,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@initRoutineMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_initRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_initRoutineMap (const GALGAS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @initRoutineMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_initRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_initRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_initRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_initRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@initRoutinePriorityMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_initRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_initRoutinePriorityMap (const GALGAS_lstring & inKey
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @initRoutinePriorityMap_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initRoutinePriorityMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_initRoutinePriorityMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_initRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_initRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initRoutinePriorityMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initRoutinePriorityMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_initRoutinePriorityMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initRoutinePriorityMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initListIR_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_PLMType mProperty_mSelfType ;

  public : GALGAS_string mProperty_mDriverName ;

  public : GALGAS_bigint mProperty_mPriority ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionListIR ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_initListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_initListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_initListIR_2D_element (const GALGAS_PLMType & in_mSelfType,
                                         const GALGAS_string & in_mDriverName,
                                         const GALGAS_bigint & in_mPriority,
                                         const GALGAS_allocaList & in_mAllocaList,
                                         const GALGAS_instructionListIR & in_mInstructionListIR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_initListIR_2D_element constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_bigint & inOperand2,
                                                                      const class GALGAS_allocaList & inOperand3,
                                                                      const class GALGAS_instructionListIR & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_initListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mSelfType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initListIR generateLLVMinitCode'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVMinitCode (const class GALGAS_initListIR inObject,
                                           class GALGAS_string & io_ioLLVMcode,
                                           const class GALGAS_routineMapIR constin_inProcedureMapIR,
                                           const class GALGAS_generationContext constin_inGenerationContext,
                                           class GALGAS_generationAdds & io_ioGenerationAdds,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@PLMType llvmTypeName' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_PLMType & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalPassingModeString (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@functionDeclarationListAST noteTypesInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_functionDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @decoratedFunction class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedFunction : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedFunction (void) ;

//---
  public : inline const class cPtr_decoratedFunction * ptr (void) const { return (const cPtr_decoratedFunction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedFunction (const cPtr_decoratedFunction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedFunction extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedFunction constructor_new (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_mode & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_lstring & inOperand3,
                                                                  const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                  const class GALGAS_lstring & inOperand5,
                                                                  const class GALGAS_instructionListAST & inOperand6,
                                                                  const class GALGAS_location & inOperand7,
                                                                  const class GALGAS_bool & inOperand8,
                                                                  const class GALGAS_bool & inOperand9
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedFunction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFunctionFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_misGlobalProcedure (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedFunction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedFunction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @decoratedFunction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedFunction : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_string mProperty_mSelfTypeName ;
  public : GALGAS_mode mProperty_mMode ;
  public : GALGAS_bool mProperty_mPublicFunction ;
  public : GALGAS_lstring mProperty_mFunctionName ;
  public : GALGAS_routineFormalArgumentListAST mProperty_mFunctionFormalArgumentList ;
  public : GALGAS_lstring mProperty_mFunctionReturnTypeName ;
  public : GALGAS_instructionListAST mProperty_mFunctionInstructionList ;
  public : GALGAS_location mProperty_mEndOfFunctionDeclaration ;
  public : GALGAS_bool mProperty_mWarnIfUnused ;
  public : GALGAS_bool mProperty_misGlobalProcedure ;

//--- Constructor
  public : cPtr_decoratedFunction (const GALGAS_string & in_mSelfTypeName,
                                   const GALGAS_mode & in_mMode,
                                   const GALGAS_bool & in_mPublicFunction,
                                   const GALGAS_lstring & in_mFunctionName,
                                   const GALGAS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                   const GALGAS_lstring & in_mFunctionReturnTypeName,
                                   const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                   const GALGAS_location & in_mEndOfFunctionDeclaration,
                                   const GALGAS_bool & in_mWarnIfUnused,
                                   const GALGAS_bool & in_misGlobalProcedure
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSelfTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mode getter_mMode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mPublicFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListAST getter_mFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionReturnTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_misGlobalProcedure (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @requiredProcedureDeclarationListAST_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_requiredProcedureDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mName ;

  public : GALGAS_mode mProperty_mExecutionMode ;

  public : GALGAS_bool mProperty_mIsExported ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;

  public : GALGAS_location mProperty_mEndOfProcLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                                  const GALGAS_mode & in_mExecutionMode,
                                                                  const GALGAS_bool & in_mIsExported,
                                                                  const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                  const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredProcedureDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_requiredProcedureDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_mode & inOperand1,
                                                                                               const class GALGAS_bool & inOperand2,
                                                                                               const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                               const class GALGAS_location & inOperand4
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mExecutionMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExported (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_requiredProcedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @externProcedureDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mExternProcedureName ;

  public : GALGAS_mode mProperty_mMode ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mProcFormalArgumentList ;

  public : GALGAS_lstring mProperty_mReturnTypeName ;

  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;

  public : GALGAS_location mProperty_mEndOfProcLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_externProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externProcedureDeclarationListAST_2D_element (const GALGAS_lstring & in_mExternProcedureName,
                                                                const GALGAS_mode & in_mMode,
                                                                const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                                const GALGAS_lstring & in_mReturnTypeName,
                                                                const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_mode & inOperand1,
                                                                                             const class GALGAS_routineFormalArgumentListAST & inOperand2,
                                                                                             const class GALGAS_lstring & inOperand3,
                                                                                             const class GALGAS_lstring & inOperand4,
                                                                                             const class GALGAS_location & inOperand5
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externProcedureDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternProcedureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externProcedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@externProcedureDeclarationListAST noteTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_externProcedureDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@externProcedureDeclarationListAST enterExternProcInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const class GALGAS_externProcedureDeclarationListAST inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const class GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension method '@externProcedureDeclarationListAST externProcedureSemanticAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externProcedureDeclarationListAST inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@externProcedureDeclarationListAST-element externProcedureSemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@externProcedureMapIR' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_externProcedureMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

//--- Constructor
  public : cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externProcedureMapIR_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externProcedureMapIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_externProcedureMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externProcedureMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externProcedureMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externProcedureMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@externProcedureMapIR llvmPrototypeGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@externProcedureMapIR-element llvmPrototypeGeneration'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR_2D_element inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @isrDeclarationListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_isrDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mISRName ;

  public : GALGAS_mode mProperty_mMode ;

  public : GALGAS_lstring mProperty_mModuleName ;

  public : GALGAS_instructionListAST mProperty_mISRInstructionList ;

  public : GALGAS_location mProperty_mEndOfISRDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_isrDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_isrDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_isrDeclarationListAST_2D_element (const GALGAS_lstring & in_mISRName,
                                                    const GALGAS_mode & in_mMode,
                                                    const GALGAS_lstring & in_mModuleName,
                                                    const GALGAS_instructionListAST & in_mISRInstructionList,
                                                    const GALGAS_location & in_mEndOfISRDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_isrDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_isrDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_mode & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_instructionListAST & inOperand3,
                                                                                 const class GALGAS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_isrDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfISRDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mISRInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mISRName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_isrDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@isrDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_isrDeclarationListAST inObject,
                                     class GALGAS_semanticContext & io_ioSemanticContext,
                                     class GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @decoratedISRDeclarations class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_decoratedISRDeclarations : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedISRDeclarations (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedISRDeclarations constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedISRDeclarations * ptr (void) const { return (const cPtr_decoratedISRDeclarations *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedISRDeclarations (const cPtr_decoratedISRDeclarations * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedISRDeclarations extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedISRDeclarations constructor_new (const class GALGAS_isrDeclarationListAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedISRDeclarations & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_mISRDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedISRDeclarations class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclarations ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @decoratedISRDeclarations class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_decoratedISRDeclarations : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_isrDeclarationListAST mProperty_mISRDeclarationList ;

//--- Constructor
  public : cPtr_decoratedISRDeclarations (const GALGAS_isrDeclarationListAST & in_mISRDeclarationList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_isrDeclarationListAST getter_mISRDeclarationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@interruptMapIR' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_interruptMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_mSelfType ;
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_mode mProperty_mMode ;

//--- Constructor
  public : cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                       const GALGAS_PLMType & in_mSelfType,
                                       const GALGAS_string & in_mGlobalVariableName,
                                       const GALGAS_allocaList & in_mAllocaList,
                                       const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                       const GALGAS_mode & in_mMode
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @interruptMapIR_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_interruptMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_PLMType mProperty_mSelfType ;

  public : GALGAS_string mProperty_mGlobalVariableName ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

  public : GALGAS_mode mProperty_mMode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_PLMType & in_mSelfType,
                                             const GALGAS_string & in_mGlobalVariableName,
                                             const GALGAS_allocaList & in_mAllocaList,
                                             const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                             const GALGAS_mode & in_mMode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_PLMType & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_allocaList & inOperand3,
                                                                          const class GALGAS_instructionListIR & inOperand4,
                                                                          const class GALGAS_mode & inOperand5
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mSelfType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_interruptMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;

