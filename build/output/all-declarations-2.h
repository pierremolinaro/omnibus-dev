#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

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
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGlobalVariable (const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procFormalArgumentListForGeneration list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procFormalArgumentListForGeneration (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procFormalArgumentListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentListForGeneration constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const class GALGAS_string & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procFormalArgumentListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procFormalArgumentListForGeneration add_operation (const GALGAS_procFormalArgumentListForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procFormalArgumentListForGeneration ;
 
} ; // End of GALGAS_procFormalArgumentListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procFormalArgumentListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procFormalArgumentListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@routineMapIR' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mRoutineNameForGeneration ;
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mIsRequired ;
  public : GALGAS_bool mAttribute_mWarnIfUnused ;
  public : GALGAS_bool mAttribute_mWeak ;
  public : GALGAS_bool mAttribute_mGlobal ;
  public : GALGAS_routineKind mAttribute_mKind ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;
  public : GALGAS_bool mAttribute_mAppendFileAndLineArgumentForPanicLocation ;

//--- Constructor
  public : cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                     const GALGAS_lstring & in_mRoutineNameForGeneration,
                                     const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                     const GALGAS_allocaList & in_mAllocaList,
                                     const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                     const GALGAS_bool & in_mIsRequired,
                                     const GALGAS_bool & in_mWarnIfUnused,
                                     const GALGAS_bool & in_mWeak,
                                     const GALGAS_bool & in_mGlobal,
                                     const GALGAS_routineKind & in_mKind,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
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
//                                      @procFormalArgumentList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_procFormalArgumentPassingMode mAttribute_mFormalArgumentPassingMode ;
  public : GALGAS_lstring mAttribute_mSelector ;
  public : GALGAS_lstring mAttribute_mFormalArgumentTypeName ;
  public : GALGAS_lstring mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                     const GALGAS_lstring & in_mSelector,
                                                     const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                     const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procFormalArgumentList_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procFormalArgumentList_2D_element & inOperand) const ;

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
 
} ; // End of GALGAS_procFormalArgumentList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ;

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
//                                            Function 'mutatingAttribute'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'weakAttribute'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_weakAttribute (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @procedureSignature list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procedureSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procedureSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procedureSignature (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_string & in_mSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procedureSignature extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procedureSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_procedureSignature constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procedureSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procedureSignature add_operation (const GALGAS_procedureSignature & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procedureSignature ;
 
} ; // End of GALGAS_procedureSignature class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procedureSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_procedureSignature (const GALGAS_procedureSignature & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procedureSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureSignature ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@routineMapForContext' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMapForContext : public cMapElement {
//--- Map attributes
  public : GALGAS_lstring mAttribute_mRoutineLLVMName ;
  public : GALGAS_bool mAttribute_mIsPublic ;
  public : GALGAS_bool mAttribute_mGlobal ;
  public : GALGAS_mode mAttribute_mMode ;
  public : GALGAS_procedureSignature mAttribute_mSignature ;
  public : GALGAS_routineKind mAttribute_mRoutineKind ;
  public : GALGAS_bool mAttribute_mWeak ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;
  public : GALGAS_bool mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
  public : GALGAS_bool mAttribute_mCanAccessProperties ;
  public : GALGAS_bool mAttribute_mCanMutateProperties ;

//--- Constructor
  public : cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                             const GALGAS_lstring & in_mRoutineLLVMName,
                                             const GALGAS_bool & in_mIsPublic,
                                             const GALGAS_bool & in_mGlobal,
                                             const GALGAS_mode & in_mMode,
                                             const GALGAS_procedureSignature & in_mSignature,
                                             const GALGAS_routineKind & in_mRoutineKind,
                                             const GALGAS_bool & in_mWeak,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                             const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                             const GALGAS_bool & in_mCanAccessProperties,
                                             const GALGAS_bool & in_mCanMutateProperties
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
//                      Extension method '@functionDeclarationListAST procedureSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_procedureSemanticAnalysis (const class GALGAS_functionDeclarationListAST inObject,
                                                class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
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

void routine_routineSemanticAnalysis (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                      const class GALGAS_routineKind constinArgument1,
                                      const class GALGAS_mode constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_procFormalArgumentList constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_instructionListAST constinArgument6,
                                      const class GALGAS_location constinArgument7,
                                      const class GALGAS_bool constinArgument8,
                                      const class GALGAS_bool constinArgument9,
                                      const class GALGAS_bool constinArgument10,
                                      const class GALGAS_bool constinArgument11,
                                      const class GALGAS_bool constinArgument12,
                                      const class GALGAS_semanticContext constinArgument13,
                                      class GALGAS_semanticTemporariesStruct & ioArgument14,
                                      class GALGAS_intermediateCodeStruct & ioArgument15,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

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
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;

//--- Constructor
  public : cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                             const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;


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
                                                   const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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
                                                                                const class GALGAS_procFormalArgumentListForGeneration & inOperand1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externProcedureMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @procFormalArgumentListForGeneration_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_procFormalArgumentPassingMode mAttribute_mFormalArgumentKind ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mFormalArgumentType ;
  public : GALGAS_string mAttribute_mFormalArgumentName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procFormalArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                  const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procFormalArgumentListForGeneration_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                               const class GALGAS_string & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procFormalArgumentListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procFormalArgumentListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ;

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
//                              Extension method '@isrDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_isrDeclarationListAST inObject,
                                     class GALGAS_semanticContext & io_ioSemanticContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@isrDeclarationListAST isrSemanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_isrSemanticAnalysis (const class GALGAS_isrDeclarationListAST inObject,
                                          const class GALGAS_semanticContext constin_inSemanticContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_interruptNameForInvocationGraph (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@availableInterruptMap' map                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_availableInterruptMap : public cMapElement {
//--- Map attributes
  public : GALGAS_interruptionPanicCode mAttribute_mInterruptionPanicCode ;

//--- Constructor
  public : cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                              const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
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
//                                     Class for element of '@interruptMapIR' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_interruptMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSelfType ;
  public : GALGAS_string mAttribute_mGlobalVariableName ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mXTR ;

//--- Constructor
  public : cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                       const GALGAS_string & in_mGlobalVariableName,
                                       const GALGAS_allocaList & in_mAllocaList,
                                       const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                       const GALGAS_bool & in_mXTR
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
//                        Extension method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                    const class GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                    const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                    const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                                    const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                    const class GALGAS_semanticContext constin_inContext,
                                                    const class GALGAS_mode constin_inCurrentMode,
                                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                    class GALGAS_variableMap & io_ioVariableMap,
                                                    class GALGAS_allocaList & io_ioAllocaList,
                                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'initialVariableMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initialVariableMap (const class GALGAS_semanticContext constinArgument0,
                                 const class GALGAS_mode constinArgument1,
                                 class GALGAS_bool inArgument2,
                                 const class GALGAS_lstring constinArgument3,
                                 class GALGAS_variableMap & outArgument4,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @variableMap unique map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_variableMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForReadAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForDropAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForConstantMethodCall ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_searchForMethodCall ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_variableMap_neutralAccess ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_variableMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_variableMap (const GALGAS_variableMap & inSource) ;
  public : GALGAS_variableMap & operator = (const GALGAS_variableMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_variableMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_variableMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_closeBranch (class GALGAS_location inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertConstant (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                        class GALGAS_bool constinArgument2,
                                                        class GALGAS_objectIR constinArgument3,
                                                        class GALGAS_bool constinArgument4,
                                                        class GALGAS_bool constinArgument5,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertConstantInputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                           class GALGAS_bool constinArgument2,
                                                                           class GALGAS_objectIR constinArgument3,
                                                                           class GALGAS_bool constinArgument4,
                                                                           class GALGAS_bool constinArgument5,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertConstantInputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                           class GALGAS_bool constinArgument2,
                                                                                           class GALGAS_objectIR constinArgument3,
                                                                                           class GALGAS_bool constinArgument4,
                                                                                           class GALGAS_bool constinArgument5,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertDefinedVariable (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                               class GALGAS_bool constinArgument2,
                                                               class GALGAS_objectIR constinArgument3,
                                                               class GALGAS_bool constinArgument4,
                                                               class GALGAS_bool constinArgument5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInaccessibleControlRegister (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                           class GALGAS_bool constinArgument2,
                                                                           class GALGAS_objectIR constinArgument3,
                                                                           class GALGAS_bool constinArgument4,
                                                                           class GALGAS_bool constinArgument5,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                   class GALGAS_bool constinArgument2,
                                                                   class GALGAS_objectIR constinArgument3,
                                                                   class GALGAS_bool constinArgument4,
                                                                   class GALGAS_bool constinArgument5,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                   class GALGAS_bool constinArgument2,
                                                                                   class GALGAS_objectIR constinArgument3,
                                                                                   class GALGAS_bool constinArgument4,
                                                                                   class GALGAS_bool constinArgument5,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputOutputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                         class GALGAS_bool constinArgument2,
                                                                         class GALGAS_objectIR constinArgument3,
                                                                         class GALGAS_bool constinArgument4,
                                                                         class GALGAS_bool constinArgument5,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertInputOutputFormalArgumentDeclaredAsUnused (class GALGAS_lstring constinArgument0,
                                                                                         class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                                         class GALGAS_bool constinArgument2,
                                                                                         class GALGAS_objectIR constinArgument3,
                                                                                         class GALGAS_bool constinArgument4,
                                                                                         class GALGAS_bool constinArgument5,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertModule (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_objectIR constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_bool constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertOutputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                    class GALGAS_bool constinArgument2,
                                                                    class GALGAS_objectIR constinArgument3,
                                                                    class GALGAS_bool constinArgument4,
                                                                    class GALGAS_bool constinArgument5,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUndefinedConstant (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                 class GALGAS_bool constinArgument2,
                                                                 class GALGAS_objectIR constinArgument3,
                                                                 class GALGAS_bool constinArgument4,
                                                                 class GALGAS_bool constinArgument5,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUndefinedVariable (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                 class GALGAS_bool constinArgument2,
                                                                 class GALGAS_objectIR constinArgument3,
                                                                 class GALGAS_bool constinArgument4,
                                                                 class GALGAS_bool constinArgument5,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUsedConstant (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                            class GALGAS_bool constinArgument2,
                                                            class GALGAS_objectIR constinArgument3,
                                                            class GALGAS_bool constinArgument4,
                                                            class GALGAS_bool constinArgument5,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertUsedConstantInputFormalArgument (class GALGAS_lstring constinArgument0,
                                                                               class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                                               class GALGAS_bool constinArgument2,
                                                                               class GALGAS_objectIR constinArgument3,
                                                                               class GALGAS_bool constinArgument4,
                                                                               class GALGAS_bool constinArgument5,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_neutralAccess (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_objectIR & outArgument3,
                                                       class GALGAS_bool & outArgument4,
                                                       class GALGAS_bool & outArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForConstantMethodCall (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                                     class GALGAS_bool & outArgument2,
                                                                     class GALGAS_objectIR & outArgument3,
                                                                     class GALGAS_bool & outArgument4,
                                                                     class GALGAS_bool & outArgument5,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForDropAccess (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                             class GALGAS_bool & outArgument2,
                                                             class GALGAS_objectIR & outArgument3,
                                                             class GALGAS_bool & outArgument4,
                                                             class GALGAS_bool & outArgument5,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForMethodCall (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                             class GALGAS_bool & outArgument2,
                                                             class GALGAS_objectIR & outArgument3,
                                                             class GALGAS_bool & outArgument4,
                                                             class GALGAS_bool & outArgument5,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForReadAccess (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                             class GALGAS_bool & outArgument2,
                                                             class GALGAS_objectIR & outArgument3,
                                                             class GALGAS_bool & outArgument4,
                                                             class GALGAS_bool & outArgument5,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForReadWriteAccess (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                                  class GALGAS_bool & outArgument2,
                                                                  class GALGAS_objectIR & outArgument3,
                                                                  class GALGAS_bool & outArgument4,
                                                                  class GALGAS_bool & outArgument5,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_searchForWriteAccess (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                              class GALGAS_bool & outArgument2,
                                                              class GALGAS_objectIR & outArgument3,
                                                              class GALGAS_bool & outArgument4,
                                                              class GALGAS_bool & outArgument5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setCanBeUsedAsInputParameterForKey (class GALGAS_bool constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setCopyableForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setObjectIRForKey (class GALGAS_objectIR constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setReadAccessAllowedForKey (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_checkAutomatonStates (class GALGAS_location inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_canBeUsedAsInputParameterForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_copyableForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_objectIRForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_readAccessAllowedForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_typeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_variableMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_variableMap ;
 
} ; // End of GALGAS_variableMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_variableMap : public cGenericAbstractEnumerator {
  public : cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_type (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_readAccessAllowed (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_objectIR (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_copyable (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_canBeUsedAsInputParameter (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@variableMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_variableMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_type ;
  public : GALGAS_bool mAttribute_readAccessAllowed ;
  public : GALGAS_objectIR mAttribute_objectIR ;
  public : GALGAS_bool mAttribute_copyable ;
  public : GALGAS_bool mAttribute_canBeUsedAsInputParameter ;

//--- Constructor
  public : cMapElement_variableMap (const GALGAS_lstring & inKey,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_type,
                                    const GALGAS_bool & in_readAccessAllowed,
                                    const GALGAS_objectIR & in_objectIR,
                                    const GALGAS_bool & in_copyable,
                                    const GALGAS_bool & in_canBeUsedAsInputParameter
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
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSelfType ;
  public : GALGAS_string mAttribute_mGlobalVariableName ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mXTR ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_interruptMapIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                             const GALGAS_string & in_mGlobalVariableName,
                                             const GALGAS_allocaList & in_mAllocaList,
                                             const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                             const GALGAS_bool & in_mXTR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_interruptMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_interruptMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_allocaList & inOperand3,
                                                                          const class GALGAS_instructionListIR & inOperand4,
                                                                          const class GALGAS_bool & inOperand5
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

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSelfType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mXTR (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_interruptMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@interruptMapIR interruptCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_interruptCodeGeneration (const class GALGAS_interruptMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class GALGAS_string & io_ioAScode,
                                              const class GALGAS_string constin_inUndefinedInterruptString,
                                              const class GALGAS_string constin_inXTRInterruptHandlerString,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'llvmNameForISR'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForISR (const class GALGAS_string & constinArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForInterrupt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_llvmNameForInterrupt (const class GALGAS_lstring & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedTargets ;

extern C_BoolCommandLineOption gOption_plm_5F_options_noPanicGeneration ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_31_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_32_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationS ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimizationZ_33_ ;

extern C_BoolCommandLineOption gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination ;

extern C_BoolCommandLineOption gOption_plm_5F_options_performFlashing ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeControlRegisterHTMLDumpFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeDeclarationDependencyGraphFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeGlobalConstantHTMLDumpFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_writeRoutineInvocationGraphFile ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedSampleFile ;

extern C_StringCommandLineOption gOption_plm_5F_options_extractEmbeddedTargets ;

extern C_StringCommandLineOption gOption_plm_5F_options_useDirAsTargetDir ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringListCommandLineOption gOption_plm_5F_options_pathList ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@svcDeclarationListAST noteTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_svcDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@svcDeclarationListAST enterInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_svcDeclarationListAST inObject,
                                     const class GALGAS_string constin_inReceiverTypeName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@svcDeclarationListAST svcSemanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_svcSemanticAnalysis (const class GALGAS_svcDeclarationListAST inObject,
                                          class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                          const class GALGAS_semanticContext constin_inSemanticContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @routineMapIR_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mRoutineNameForGeneration ;
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mIsRequired ;
  public : GALGAS_bool mAttribute_mWarnIfUnused ;
  public : GALGAS_bool mAttribute_mWeak ;
  public : GALGAS_bool mAttribute_mGlobal ;
  public : GALGAS_routineKind mAttribute_mKind ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;
  public : GALGAS_bool mAttribute_mAppendFileAndLineArgumentForPanicLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                           const GALGAS_lstring & in_mRoutineNameForGeneration,
                                           const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                           const GALGAS_allocaList & in_mAllocaList,
                                           const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                           const GALGAS_bool & in_mIsRequired,
                                           const GALGAS_bool & in_mWarnIfUnused,
                                           const GALGAS_bool & in_mWeak,
                                           const GALGAS_bool & in_mGlobal,
                                           const GALGAS_routineKind & in_mKind,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
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
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_procFormalArgumentListForGeneration & inOperand3,
                                                                        const class GALGAS_allocaList & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
                                                                        const class GALGAS_bool & inOperand7,
                                                                        const class GALGAS_bool & inOperand8,
                                                                        const class GALGAS_bool & inOperand9,
                                                                        const class GALGAS_routineKind & inOperand10,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand11,
                                                                        const class GALGAS_bool & inOperand12
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

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGlobal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRequired (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWeak (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@serviceDeclarationListAST noteServiceTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteServiceTypesInPrecedenceGraph (const class GALGAS_serviceDeclarationListAST inObject,
                                                        class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@serviceDeclarationListAST enterInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_serviceDeclarationListAST inObject,
                                     const class GALGAS_string constin_inReceiverTypeName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@serviceDeclarationListAST serviceSemanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_serviceSemanticAnalysis (const class GALGAS_serviceDeclarationListAST inObject,
                                              class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                              const class GALGAS_semanticContext constin_inSemanticContext,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@routineMapIR serviceCodeGeneration'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_serviceCodeGeneration (const class GALGAS_routineMapIR inObject,
                                            class GALGAS_string & io_ioLLVMcode,
                                            class GALGAS__32_stringlist & io_ioServiceList,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@guardDeclarationListAST noteTypesInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_guardDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@guardDeclarationListAST enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_guardDeclarationListAST inObject,
                                     const class GALGAS_string constin_inReceiverTypeName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@guardMapForContext' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_guardMapForContext : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mAttribute_mIsPublic ;
  public : GALGAS_procedureSignature mAttribute_mSignature ;

//--- Constructor
  public : cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                           const GALGAS_bool & in_mIsPublic,
                                           const GALGAS_procedureSignature & in_mSignature
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
//                          Extension method '@guardDeclarationListAST guardSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardSemanticAnalysis (const class GALGAS_guardDeclarationListAST inObject,
                                            class GALGAS_unifiedTypeMap_2D_proxy in_inReceiverType,
                                            const class GALGAS_semanticContext constin_inSemanticContext,
                                            class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                    const class GALGAS_lstring constinArgument1,
                                    const class GALGAS_procFormalArgumentList constinArgument2,
                                    const class GALGAS_guardKind constinArgument3,
                                    const class GALGAS_instructionListAST constinArgument4,
                                    const class GALGAS_location constinArgument5,
                                    const class GALGAS_bool constinArgument6,
                                    const class GALGAS_semanticContext constinArgument7,
                                    class GALGAS_semanticTemporariesStruct & ioArgument8,
                                    class GALGAS_intermediateCodeStruct & ioArgument9,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallEffectiveParameterListIR list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallEffectiveParameterListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procCallEffectiveParameterListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procCallEffectiveParameterListIR (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                  const class GALGAS_objectIR & in_mParameter
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallEffectiveParameterListIR extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procCallEffectiveParameterListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_procCallEffectiveParameterListIR constructor_listWithValue (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                           const class GALGAS_objectIR & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                       class GALGAS_objectIR constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                  class GALGAS_objectIR & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                 class GALGAS_objectIR & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                       class GALGAS_objectIR & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                               class GALGAS_objectIR & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                              class GALGAS_objectIR & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procCallEffectiveParameterListIR ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procCallEffectiveParameterListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procCallEffectiveParameterListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterPassingModeIR enum                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procEffectiveParameterPassingModeIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterPassingModeIR (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_output,
    kEnum_outputInput
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procEffectiveParameterPassingModeIR extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procEffectiveParameterPassingModeIR constructor_input (LOCATION_ARGS) ;

  public : static class GALGAS_procEffectiveParameterPassingModeIR constructor_output (LOCATION_ARGS) ;

  public : static class GALGAS_procEffectiveParameterPassingModeIR constructor_outputInput (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procEffectiveParameterPassingModeIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procEffectiveParameterPassingModeIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @procCallEffectiveParameterListIR_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallEffectiveParameterListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_procEffectiveParameterPassingModeIR mAttribute_mEffectiveParameterPassingMode ;
  public : GALGAS_objectIR mAttribute_mParameter ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_procCallEffectiveParameterListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                               const GALGAS_objectIR & in_mParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallEffectiveParameterListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procCallEffectiveParameterListIR_2D_element constructor_new (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                            const class GALGAS_objectIR & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mParameter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @guardKindGenerationIR enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardKindGenerationIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardKindGenerationIR (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_baseGuard,
    kEnum_convenienceGuard
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
  public : static GALGAS_guardKindGenerationIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardKindGenerationIR constructor_baseGuard (LOCATION_ARGS) ;

  public : static class GALGAS_guardKindGenerationIR constructor_convenienceGuard (const class GALGAS_allocaList & inOperand0,
                                                                                   const class GALGAS_instructionListIR & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_convenienceGuard (class GALGAS_allocaList & outArgument0,
                                                          class GALGAS_instructionListIR & outArgument1,
                                                          class GALGAS_string & outArgument2,
                                                          class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardKindGenerationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@guardMapIR' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_guardMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_guardKindGenerationIR mAttribute_mGuardKindGenerationIR ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mWarnIfUnused ;

//--- Constructor
  public : cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                   const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                   const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                   const GALGAS_allocaList & in_mAllocaList,
                                   const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                   const GALGAS_bool & in_mWarnIfUnused
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
//                                            @guardMapIR_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_procFormalArgumentListForGeneration mAttribute_mFormalArgumentListForGeneration ;
  public : GALGAS_guardKindGenerationIR mAttribute_mGuardKindGenerationIR ;
  public : GALGAS_allocaList mAttribute_mAllocaList ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;
  public : GALGAS_bool mAttribute_mWarnIfUnused ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_guardMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guardMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guardMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_procFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                         const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                         const GALGAS_allocaList & in_mAllocaList,
                                         const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                         const GALGAS_bool & in_mWarnIfUnused) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_procFormalArgumentListForGeneration & inOperand1,
                                                                      const class GALGAS_guardKindGenerationIR & inOperand2,
                                                                      const class GALGAS_allocaList & inOperand3,
                                                                      const class GALGAS_instructionListIR & inOperand4,
                                                                      const class GALGAS_bool & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@guardMapIR guardCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardCodeGeneration (const class GALGAS_guardMapIR inObject,
                                          class GALGAS_string & io_ioLLVMcode,
                                          class GALGAS__32_stringlist & io_ioServiceList,
                                          const class GALGAS_generationContext constin_inGenerationContext,
                                          class GALGAS_generationAdds & io_ioGenerationAdds,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @guardKindGenerationIR enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard : public cEnumAssociatedValues {
  public : const GALGAS_allocaList mAssociatedValue0 ;
  public : const GALGAS_instructionListIR mAssociatedValue1 ;
  public : const GALGAS_string mAssociatedValue2 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList & inAssociatedValue0,
                                                                         const GALGAS_instructionListIR & inAssociatedValue1,
                                                                         const GALGAS_string & inAssociatedValue2,
                                                                         const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGuardCall (const class GALGAS_string & constinArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForGuardImplementation'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGuardImplementation (const class GALGAS_string & constinArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@guardMapIR-element llvmCodeGeneration'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const class GALGAS_guardMapIR_2D_element inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                          const class GALGAS_bool constinArgument1,
                                                                          const class GALGAS_bool constinArgument2,
                                                                          const class GALGAS_lstring constinArgument3,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                                          const class GALGAS_semanticContext constinArgument5,
                                                                          const class GALGAS_mode constinArgument6,
                                                                          class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                          class GALGAS_staticStringMap & ioArgument8,
                                                                          class GALGAS_variableMap & ioArgument9,
                                                                          class GALGAS_allocaList & ioArgument10,
                                                                          class GALGAS_instructionListIR & ioArgument11,
                                                                          class GALGAS_objectIR & outArgument12,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expressionAST_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                            const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                            const GALGAS_bool constin_inGuard,
                                            const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_mode constin_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                            GALGAS_variableMap & io_ioVariableMap,
                                            GALGAS_allocaList & io_ioAllocaList,
                                            GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                            GALGAS_objectIR & out_outResult,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@expressionAST analyzeStaticExpression'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_analyzeStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                const class GALGAS_location constinArgument0,
                                                                                const class GALGAS_semanticContext constinArgument1,
                                                                                class GALGAS_staticStringMap & ioArgument2,
                                                                                class GALGAS_objectIR & outArgument3,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeStaticExpression (const int32_t inClassIndex,
                                                   extensionMethodSignature_expressionAST_analyzeStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeStaticExpression (const class cPtr_expressionAST * inObject,
                                                  const GALGAS_location constin_inErrorLocation,
                                                  const GALGAS_semanticContext constin_inContext,
                                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                  GALGAS_objectIR & out_outResult,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@objectIR isStatic' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_isStatic (const class GALGAS_objectIR & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @functionCallEffectiveParameterList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallEffectiveParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mSelector ;
  public : GALGAS_expressionAST mAttribute_mExpression ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_functionCallEffectiveParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionCallEffectiveParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & in_mSelector,
                                                                 const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallEffectiveParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallEffectiveParameterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_expressionAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallEffectiveParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorDescription class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorDescription : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_infixOperatorDescription (void) ;

//---
  public : inline const class cPtr_infixOperatorDescription * ptr (void) const { return (const cPtr_infixOperatorDescription *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixOperatorDescription (const cPtr_infixOperatorDescription * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorDescription extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorDescription & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmBinaryOperation getter_mOperator (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorDescription class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorDescription ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@infixOperatorMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_infixOperatorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_infixOperatorDescription mAttribute_mOperation ;

//--- Constructor
  public : cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                         const GALGAS_infixOperatorDescription & in_mOperation
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
//                                         @infixOperatorMap_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_infixOperatorDescription mAttribute_mOperation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                               const GALGAS_infixOperatorDescription & in_mOperation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                            const class GALGAS_infixOperatorDescription & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorDescription getter_mOperation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @registerIntegerFieldListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFieldName ;
  public : GALGAS_expressionAST mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mExpressionLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & in_mFieldName,
                                                          const GALGAS_expressionAST & in_mExpression,
                                                          const GALGAS_location & in_mExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerIntegerFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerIntegerFieldListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @effectiveParameterListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_effectiveParameterPassingModeAST mAttribute_mEffectiveParameterKind ;
  public : GALGAS_lstring mAttribute_mSelector ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_effectiveParameterListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_effectiveParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_effectiveParameterListAST_2D_element (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                        const GALGAS_lstring & in_mSelector) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_effectiveParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveParameterListAST_2D_element constructor_new (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_effectiveParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterPassingModeAST getter_mEffectiveParameterKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_effectiveParameterListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveParameterListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @primaryInExpressionAccessListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_primaryInExpressionAccessAST mAttribute_mAccess ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAccessListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessListAST_2D_element constructor_new (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessAST getter_mAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_instructionAST * inObject,
                                                                                               class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@instructionAST analyze'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_analyze) (const class cPtr_instructionAST * inObject,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                 const class GALGAS_bool constinArgument1,
                                                                 const class GALGAS_bool constinArgument2,
                                                                 const class GALGAS_lstring constinArgument3,
                                                                 const class GALGAS_semanticContext constinArgument4,
                                                                 const class GALGAS_mode constinArgument5,
                                                                 class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                 class GALGAS_staticStringMap & ioArgument7,
                                                                 class GALGAS_variableMap & ioArgument8,
                                                                 class GALGAS_allocaList & ioArgument9,
                                                                 class GALGAS_instructionListIR & ioArgument10,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_instructionAST_analyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyze (const class cPtr_instructionAST * inObject,
                                  const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                  const GALGAS_bool constin_inRoutineCanMutateProperties,
                                  const GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                  const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                  const GALGAS_semanticContext constin_inContext,
                                  const GALGAS_mode constin_inCurrentMode,
                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                  GALGAS_variableMap & io_ioVariableMap,
                                  GALGAS_allocaList & io_ioAllocaList,
                                  GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@instructionListAST analyzeBranchInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                                   const class GALGAS_bool constin_inRoutineCanMutateProperties,
                                                   const class GALGAS_bool constin_inDirectAccessToPropertiesAllowed,
                                                   const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                   class GALGAS_location in_inEndOfInstructionList,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_mode constin_inCurrentMode,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                   class GALGAS_variableMap & io_ioVariableMap,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendSourceLineComment'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSourceLineComment (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_location constin_inSourceLocation,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract extension method '@abstractInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractInstructionIR_llvmInstructionCode) (const class cPtr_abstractInstructionIR * inObject,
                                                                                    class GALGAS_string & ioArgument0,
                                                                                    const class GALGAS_generationContext constinArgument1,
                                                                                    class GALGAS_generationAdds & ioArgument2,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_llvmInstructionCode (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_llvmInstructionCode (const class cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @panicInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_panicInstructionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicInstructionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_panicInstructionIR * ptr (void) const { return (const cPtr_panicInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_bigint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPanicCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mThrowLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @panicInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_panicInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mThrowLocation ;
  public : GALGAS_bigint mAttribute_mPanicCode ;

//--- Constructor
  public : cPtr_panicInstructionIR (const GALGAS_location & in_mThrowLocation,
                                    const GALGAS_bigint & in_mPanicCode
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mThrowLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mPanicCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @syncInstructionBranchListIR list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionBranchListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syncInstructionBranchListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syncInstructionBranchListIR (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                  const class GALGAS_instructionListIR & in_mInstructionGenerationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionBranchListIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionBranchListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syncInstructionBranchListIR constructor_listWithValue (const class GALGAS_guardedCommandIR & inOperand0,
                                                                                      const class GALGAS_instructionListIR & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syncInstructionBranchListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_guardedCommandIR & inOperand0,
                                                      const class GALGAS_instructionListIR & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchListIR add_operation (const GALGAS_syncInstructionBranchListIR & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_guardedCommandIR constinArgument0,
                                                       class GALGAS_instructionListIR constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_guardedCommandIR & outArgument0,
                                                  class GALGAS_instructionListIR & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_guardedCommandIR & outArgument0,
                                                 class GALGAS_instructionListIR & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_guardedCommandIR & outArgument0,
                                                       class GALGAS_instructionListIR & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_guardedCommandIR & outArgument0,
                                               class GALGAS_instructionListIR & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_guardedCommandIR & outArgument0,
                                              class GALGAS_instructionListIR & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syncInstructionBranchListIR ;
 
} ; // End of GALGAS_syncInstructionBranchListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syncInstructionBranchListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_syncInstructionBranchListIR (const GALGAS_syncInstructionBranchListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syncInstructionBranchListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @guardedCommandIR enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardedCommandIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardedCommandIR (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_synchronization,
    kEnum_booleanGuard,
    kEnum_boolAndSync
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
  public : static GALGAS_guardedCommandIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardedCommandIR constructor_boolAndSync (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_instructionListIR & inOperand1,
                                                                         const class GALGAS_objectIR & inOperand2,
                                                                         const class GALGAS_string & inOperand3,
                                                                         const class GALGAS_string & inOperand4,
                                                                         const class GALGAS_instructionListIR & inOperand5,
                                                                         const class GALGAS_procCallEffectiveParameterListIR & inOperand6
                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommandIR constructor_booleanGuard (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_instructionListIR & inOperand1,
                                                                          const class GALGAS_objectIR & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommandIR constructor_synchronization (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_instructionListIR & inOperand3,
                                                                             const class GALGAS_procCallEffectiveParameterListIR & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardedCommandIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_boolAndSync (class GALGAS_bool & outArgument0,
                                                     class GALGAS_instructionListIR & outArgument1,
                                                     class GALGAS_objectIR & outArgument2,
                                                     class GALGAS_string & outArgument3,
                                                     class GALGAS_string & outArgument4,
                                                     class GALGAS_instructionListIR & outArgument5,
                                                     class GALGAS_procCallEffectiveParameterListIR & outArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_booleanGuard (class GALGAS_bool & outArgument0,
                                                      class GALGAS_instructionListIR & outArgument1,
                                                      class GALGAS_objectIR & outArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_synchronization (class GALGAS_bool & outArgument0,
                                                         class GALGAS_string & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_instructionListIR & outArgument3,
                                                         class GALGAS_procCallEffectiveParameterListIR & outArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSynchronization (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardedCommandIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @guardedCommandIR enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandIR_synchronization : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;
  public : const GALGAS_string mAssociatedValue2 ;
  public : const GALGAS_instructionListIR mAssociatedValue3 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue4 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandIR_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                   const GALGAS_string & inAssociatedValue1,
                                                                   const GALGAS_string & inAssociatedValue2,
                                                                   const GALGAS_instructionListIR & inAssociatedValue3,
                                                                   const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue4
                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandIR_synchronization (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandIR_booleanGuard : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_instructionListIR mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandIR_booleanGuard (const GALGAS_bool & inAssociatedValue0,
                                                                const GALGAS_instructionListIR & inAssociatedValue1,
                                                                const GALGAS_objectIR & inAssociatedValue2
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandIR_booleanGuard (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandIR_boolAndSync : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_instructionListIR mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;
  public : const GALGAS_string mAssociatedValue3 ;
  public : const GALGAS_string mAssociatedValue4 ;
  public : const GALGAS_instructionListIR mAssociatedValue5 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue6 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                               const GALGAS_instructionListIR & inAssociatedValue1,
                                                               const GALGAS_objectIR & inAssociatedValue2,
                                                               const GALGAS_string & inAssociatedValue3,
                                                               const GALGAS_string & inAssociatedValue4,
                                                               const GALGAS_instructionListIR & inAssociatedValue5,
                                                               const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue6
                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandIR_boolAndSync (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @syncInstructionBranchListIR_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionBranchListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_guardedCommandIR mAttribute_mGuardedCommand ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_syncInstructionBranchListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_syncInstructionBranchListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_syncInstructionBranchListIR_2D_element (const GALGAS_guardedCommandIR & in_mGuardedCommand,
                                                          const GALGAS_instructionListIR & in_mInstructionGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionBranchListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionBranchListIR_2D_element constructor_new (const class GALGAS_guardedCommandIR & inOperand0,
                                                                                       const class GALGAS_instructionListIR & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syncInstructionBranchListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guardedCommandIR getter_mGuardedCommand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syncInstructionBranchListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syncInstructionIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_syncInstructionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syncInstructionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_syncInstructionIR * ptr (void) const { return (const cPtr_syncInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syncInstructionIR (const cPtr_syncInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionIR extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_syncInstructionBranchListIR & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syncInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListIR getter_mOnInstructionBranchListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSelectInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syncInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @syncInstructionIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syncInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mSelectInstructionLocation ;
  public : GALGAS_syncInstructionBranchListIR mAttribute_mOnInstructionBranchListIR ;

//--- Constructor
  public : cPtr_syncInstructionIR (const GALGAS_location & in_mSelectInstructionLocation,
                                   const GALGAS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSelectInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchListIR getter_mOnInstructionBranchListIR (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procEffectiveParameterList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procEffectiveParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procEffectiveParameterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procEffectiveParameterList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procEffectiveParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_procEffectiveParameterList constructor_listWithValue (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterList add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveParameterPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procEffectiveParameterList ;
 
} ; // End of GALGAS_procEffectiveParameterList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procEffectiveParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_effectiveParameterPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procEffectiveParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @procEffectiveParameterList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procEffectiveParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_effectiveParameterPassingModeAST mAttribute_mEffectiveParameterPassingMode ;
  public : GALGAS_lstring mAttribute_mSelector ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mParameterType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                         const GALGAS_lstring & in_mSelector,
                                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procEffectiveParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procEffectiveParameterList_2D_element constructor_new (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterPassingModeAST getter_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mParameterType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procEffectiveParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @calleeKindIR enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_calleeKindIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_calleeKindIR (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_function,
    kEnum_primitiveFromProcessorUserMode,
    kEnum_safeFromProcessorUserMode,
    kEnum_sectionFromProcessorUserMode,
    kEnum_serviceFromProcessorUserMode,
    kEnum_primitiveFromProcessorPrivilegedMode,
    kEnum_sectionFromProcessorPrivilegedMode,
    kEnum_safeFromProcessorPrivilegedMode,
    kEnum_serviceFromProcessorPrivilegedMode
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_calleeKindIR extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_calleeKindIR constructor_function (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_primitiveFromProcessorPrivilegedMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_primitiveFromProcessorUserMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_safeFromProcessorPrivilegedMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_safeFromProcessorUserMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_sectionFromProcessorPrivilegedMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_sectionFromProcessorUserMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_serviceFromProcessorPrivilegedMode (LOCATION_ARGS) ;

  public : static class GALGAS_calleeKindIR constructor_serviceFromProcessorUserMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_calleeKindIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitiveFromProcessorPrivilegedMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitiveFromProcessorUserMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafeFromProcessorPrivilegedMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafeFromProcessorUserMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSectionFromProcessorPrivilegedMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSectionFromProcessorUserMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isServiceFromProcessorPrivilegedMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isServiceFromProcessorUserMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_calleeKindIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_calleeKindIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @switchCaseList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstringlist mAttribute_mCaseIdentifiers ;
  public : GALGAS_instructionListAST mAttribute_mCaseInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchCaseList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_switchCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_switchCaseList_2D_element (const GALGAS_lstringlist & in_mCaseIdentifiers,
                                             const GALGAS_instructionListAST & in_mCaseInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseList_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                          const class GALGAS_instructionListAST & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCaseIdentifiers (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mCaseInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchCaseList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @switchCaseListIR list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchCaseListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchCaseListIR (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                                  const class GALGAS_instructionListIR & in_mCaseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseListIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseListIR constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchCaseListIR constructor_listWithValue (const class GALGAS_uintlist & inOperand0,
                                                                           const class GALGAS_instructionListIR & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchCaseListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uintlist & inOperand0,
                                                      const class GALGAS_instructionListIR & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseListIR add_operation (const GALGAS_switchCaseListIR & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uintlist constinArgument0,
                                                       class GALGAS_instructionListIR constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uintlist & outArgument0,
                                                  class GALGAS_instructionListIR & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uintlist & outArgument0,
                                                 class GALGAS_instructionListIR & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uintlist & outArgument0,
                                                       class GALGAS_instructionListIR & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_uintlist & outArgument0,
                                               class GALGAS_instructionListIR & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_uintlist & outArgument0,
                                              class GALGAS_instructionListIR & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mCaseIdentifierIndexesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mCaseInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchCaseListIR ;
 
} ; // End of GALGAS_switchCaseListIR class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_switchCaseListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_switchCaseListIR (const GALGAS_switchCaseListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uintlist current_mCaseIdentifierIndexes (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListIR current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchCaseListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @switchCaseListIR_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uintlist mAttribute_mCaseIdentifierIndexes ;
  public : GALGAS_instructionListIR mAttribute_mCaseInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_switchCaseListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_switchCaseListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_switchCaseListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_switchCaseListIR_2D_element (const GALGAS_uintlist & in_mCaseIdentifierIndexes,
                                               const GALGAS_instructionListIR & in_mCaseInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseListIR_2D_element constructor_new (const class GALGAS_uintlist & inOperand0,
                                                                            const class GALGAS_instructionListIR & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchCaseListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mCaseIdentifierIndexes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mCaseInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchCaseListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @accessInAssignmentListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_accessInAssignmentAST mAttribute_mAccess ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_accessInAssignmentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessInAssignmentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentListAST_2D_element constructor_new (const class GALGAS_accessInAssignmentAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST getter_mAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessInAssignmentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;

#endif
