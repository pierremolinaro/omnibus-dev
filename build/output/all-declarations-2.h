#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

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
//                          Extension method '@panicClauseListAST noteTypesInPrecedenceGraph'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_panicClauseListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
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
//                   Extension method '@systemRoutineDeclarationListAST noteTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@systemRoutineDeclarationListAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_systemRoutineDeclarationListAST inObject,
                                     const class GALGAS_string constin_inReceiverTypeName,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @routineCallingSheme enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall : public cEnumAssociatedValues {
  public : const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall (const GALGAS_uint & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_routineCallingSheme_propertyIndirectCall (void) {}
} ;

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
                                                         const class GALGAS_routineFormalArgumentList & constinArgument2,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension getter '@routineFormalArgumentList routineSignature' (as function)                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_routineFormalArgumentList & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'routineSignature'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSignature (class GALGAS_unifiedTypeMap & ioArgument0,
                               const class GALGAS_routineFormalArgumentList constinArgument1,
                               class GALGAS_routineTypedSignature & outArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension setter '@routineMapForContext insertKey'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertKey (class GALGAS_routineMapForContext & ioObject,
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
                                      const class GALGAS_routineFormalArgumentList constinArgument4,
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
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                  const class GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
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
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                        const class GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sectionIRlist add_operation (const GALGAS_sectionIRlist & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_routineFormalArgumentListForGeneration constinArgument3,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  class GALGAS_routineFormalArgumentListForGeneration & outArgument3,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 class GALGAS_routineFormalArgumentListForGeneration & outArgument3,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_routineFormalArgumentListForGeneration & outArgument3,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               class GALGAS_routineFormalArgumentListForGeneration & outArgument3,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              class GALGAS_routineFormalArgumentListForGeneration & outArgument3,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_mFormalArgumentListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReceiverType (LOCATION_ARGS) const ;
  public : class GALGAS_routineFormalArgumentListForGeneration current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sectionIRlist_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @routineFormalArgumentListForGeneration list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineFormalArgumentListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const class GALGAS_string & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineFormalArgumentListForGeneration constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineFormalArgumentListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListForGeneration add_operation (const GALGAS_routineFormalArgumentListForGeneration & inOperand,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineFormalArgumentListForGeneration ;
 
} ; // End of GALGAS_routineFormalArgumentListForGeneration class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineFormalArgumentListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_routineFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListForGeneration & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineFormalArgumentListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sectionIRlist_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sectionIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mSectionCallName ;

  public : GALGAS_string mProperty_mSectionImplementationName ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;

  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sectionIRlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sectionIRlist_2D_element (const GALGAS_string & in_mSectionCallName,
                                            const GALGAS_string & in_mSectionImplementationName,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                            const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType) ;

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
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                         const class GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                         const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
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
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionCallName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionImplementationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sectionIRlist_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @routineFormalArgumentListForGeneration_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineFormalArgumentListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentKind ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mFormalArgumentType ;

  public : GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineFormalArgumentListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                     const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineFormalArgumentListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineFormalArgumentListForGeneration_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                  const class GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineFormalArgumentListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineFormalArgumentListForGeneration_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListForGeneration_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@routineMapIR' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_routineMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;
  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_bool mProperty_mIsRequired ;
  public : GALGAS_bool mProperty_mWarnIfUnused ;
  public : GALGAS_bool mProperty_mGlobal ;
  public : GALGAS_routineKind mProperty_mKind ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;
  public : GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;

//--- Constructor
  public : cMapElement_routineMapIR (const GALGAS_lstring & inKey,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                     const GALGAS_lstring & in_mRoutineNameForGeneration,
                                     const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                     const GALGAS_allocaList & in_mAllocaList,
                                     const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                     const GALGAS_bool & in_mIsRequired,
                                     const GALGAS_bool & in_mWarnIfUnused,
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
//                                           @routineMapIR_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;

  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;

  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

  public : GALGAS_bool mProperty_mIsRequired ;

  public : GALGAS_bool mProperty_mWarnIfUnused ;

  public : GALGAS_bool mProperty_mGlobal ;

  public : GALGAS_routineKind mProperty_mKind ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

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
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                           const GALGAS_lstring & in_mRoutineNameForGeneration,
                                           const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                           const GALGAS_allocaList & in_mAllocaList,
                                           const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                           const GALGAS_bool & in_mIsRequired,
                                           const GALGAS_bool & in_mWarnIfUnused,
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
                                                                        const class GALGAS_routineFormalArgumentListForGeneration & inOperand3,
                                                                        const class GALGAS_allocaList & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
                                                                        const class GALGAS_bool & inOperand7,
                                                                        const class GALGAS_bool & inOperand8,
                                                                        const class GALGAS_routineKind & inOperand9,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand10,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGlobal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRequired (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarnIfUnused (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@bootList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_bootList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

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
//                               Extension method '@initList noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_initList inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
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
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mSelfType ;

  public : GALGAS_string mProperty_mGlobalVariable ;

  public : GALGAS_bigint mProperty_mPriority ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionListIR ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_initListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_initListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_initListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_initListIR_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
                                         const GALGAS_string & in_mGlobalVariable,
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
  public : static class GALGAS_initListIR_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSelfType (LOCATION_ARGS) const ;


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
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGlobalVariable (const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@typeKind llvmTypeName' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_typeKind & inObject,
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
  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

//--- Constructor
  public : cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                             const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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

  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;

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
                                                   const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
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
                                                                                const class GALGAS_routineFormalArgumentListForGeneration & inOperand1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

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
  public : GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

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
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mSelfType ;
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_mode mProperty_mMode ;

//--- Constructor
  public : cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
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
                                                    class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                                    class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                                    class GALGAS_allocaList & io_ioAllocaList,
                                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Extension method '@universalPropertyAndRoutineMapForContext checkLocalVariableFinalState'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState) (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkLocalVariableFinalState (const int32_t inClassIndex,
                                                        extensionMethodSignature_universalPropertyAndRoutineMapForContext_checkLocalVariableFinalState inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkLocalVariableFinalState (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                       C_Compiler * inCompiler
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
                                 class GALGAS_unifiedSymbolMapEx & outArgument4,
                                 class GALGAS_universalPropertyAndRoutineMapForContext & outArgument5,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @unifiedSymbolMapEx unique map                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedSymbolMapEx ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForReadAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForReadWriteAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForDropAccess ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForConstantMethodCall ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_searchForMethodCall ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedSymbolMapEx_neutralAccess ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedSymbolMapEx : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedSymbolMapEx (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedSymbolMapEx (const GALGAS_unifiedSymbolMapEx & inSource) ;
  public : GALGAS_unifiedSymbolMapEx & operator = (const GALGAS_unifiedSymbolMapEx & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedSymbolMapEx extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedSymbolMapEx constructor_emptyMap (LOCATION_ARGS) ;


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
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedSymbolMapEx * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedSymbolMapEx ;
 
} ; // End of GALGAS_unifiedSymbolMapEx class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedSymbolMapEx : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedSymbolMapEx (const GALGAS_unifiedSymbolMapEx & inEnumeratedObject,
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

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedSymbolMapEx ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@unifiedSymbolMapEx' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedSymbolMapEx : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_type ;
  public : GALGAS_bool mProperty_readAccessAllowed ;
  public : GALGAS_objectIR mProperty_objectIR ;
  public : GALGAS_bool mProperty_copyable ;
  public : GALGAS_bool mProperty_canBeUsedAsInputParameter ;

//--- Constructor
  public : cMapElement_unifiedSymbolMapEx (const GALGAS_lstring & inKey,
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
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mSelfType ;

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
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mSelfType,
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
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mSelfType (LOCATION_ARGS) const ;


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
//                                    Function 'llvmNameForSectionOrSafeInterrupt'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionOrSafeInterrupt (const class GALGAS_string & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForServiceInterrupt'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_llvmNameForServiceInterrupt (const class GALGAS_lstring & constinArgument0,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_plm_5F_options_doNotDetectRecursiveCalls ;

extern C_BoolCommandLineOption gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile ;

extern C_BoolCommandLineOption gOption_plm_5F_options_emitTypeMap ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listEmbeddedSampleFiles ;

extern C_BoolCommandLineOption gOption_plm_5F_options_listTargets ;

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
                                    const class GALGAS_routineFormalArgumentList constinArgument2,
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
  public : GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
//--------------------------------- Properties
  public : GALGAS_procEffectiveParameterPassingModeIR mProperty_mEffectiveParameterPassingMode ;

  public : GALGAS_objectIR mProperty_mParameter ;

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
  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_bool mProperty_mWarnIfUnused ;

//--- Constructor
  public : cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                   const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_routineFormalArgumentListForGeneration mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;

  public : GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;

  public : GALGAS_allocaList mProperty_mAllocaList ;

  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

  public : GALGAS_bool mProperty_mWarnIfUnused ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_guardMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guardMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guardMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_routineFormalArgumentListForGeneration & in_mFormalArgumentListForGeneration,
                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
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
                                                                      const class GALGAS_routineFormalArgumentListForGeneration & inOperand1,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                      const class GALGAS_guardKindGenerationIR & inOperand3,
                                                                      const class GALGAS_allocaList & inOperand4,
                                                                      const class GALGAS_instructionListIR & inOperand5,
                                                                      const class GALGAS_bool & inOperand6
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

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListForGeneration getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

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
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                                          const class GALGAS_semanticContext constinArgument4,
                                                                          const class GALGAS_mode constinArgument5,
                                                                          class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                          class GALGAS_staticStringMap & ioArgument7,
                                                                          class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument8,
                                                                          class GALGAS_allocaList & ioArgument9,
                                                                          class GALGAS_instructionListIR & ioArgument10,
                                                                          class GALGAS_objectIR & outArgument11,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expressionAST_analyzeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                            const GALGAS_bool constin_inGuard,
                                            const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                            const GALGAS_unifiedTypeMap_2D_proxy constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_mode constin_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                            GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_expressionAST mProperty_mExpression ;

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
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mResultType ;
  public : GALGAS_infixOperatorDescription mProperty_mOperation ;

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
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mResultType ;

  public : GALGAS_infixOperatorDescription mProperty_mOperation ;

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
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mFieldName ;

  public : GALGAS_expressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mExpressionLocation ;

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
//                                     @effectiveArgumentListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;

  public : GALGAS_lstring mProperty_mSelector ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                       const GALGAS_lstring & in_mSelector) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_effectiveArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveArgumentListAST_2D_element constructor_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_effectiveArgumentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @primaryInExpressionAccessListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_primaryInExpressionAccessAST mProperty_mAccess ;

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
                                                                 class GALGAS_unifiedSymbolMapEx & ioArgument8,
                                                                 class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument9,
                                                                 class GALGAS_allocaList & ioArgument10,
                                                                 class GALGAS_instructionListIR & ioArgument11,
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
                                  GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                  GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
                                                   class GALGAS_unifiedSymbolMapEx & io_ioVariableMap,
                                                   class GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
//                      Extension setter '@universalPropertyAndRoutineMapForContext closeBranch'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeBranch) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                               const class GALGAS_location constinArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeBranch (const int32_t inClassIndex,
                                       extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeBranch inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeBranch (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                      const GALGAS_location constin_inErrorLocation,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension setter '@universalPropertyAndRoutineMapForContext openBranch'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_openBranch) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openBranch (const int32_t inClassIndex,
                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openBranch inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openBranch (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                     C_Compiler * inCompiler
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
  public : GALGAS_location mProperty_mThrowLocation ;
  public : GALGAS_bigint mProperty_mPanicCode ;

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
  public : GALGAS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
//--------------------------------- Properties
  public : GALGAS_guardedCommandIR mProperty_mGuardedCommand ;

  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

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
  public : GALGAS_location mProperty_mSelectInstructionLocation ;
  public : GALGAS_syncInstructionBranchListIR mProperty_mOnInstructionBranchListIR ;

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
  public : GALGAS_procEffectiveParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
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

  public : static class GALGAS_procEffectiveParameterList constructor_listWithValue (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterList add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
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
//--------------------------------- Properties
  public : GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterPassingMode ;

  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mParameterType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procEffectiveParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
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
  public : static class GALGAS_procEffectiveParameterList_2D_element constructor_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mParameterType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procEffectiveParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;

#endif
