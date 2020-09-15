#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForFunction' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GALGAS_mode & inObject,
                                                                                   const class GALGAS_string & constinArgument0,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@routineFormalArgumentListAST routineSignature' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_routineFormalArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithInputArgument (class GALGAS_routineMapForContext & ioObject,
                                                   const class GALGAS_string constin_inOmnibusTypeDescriptionName,
                                                   class GALGAS_semanticContext & io_ioContext,
                                                   const class GALGAS_string constin_inLLVMBaseTypeName,
                                                   const class GALGAS_lstring constin_inMethodName,
                                                   const class GALGAS_mode constin_inMode,
                                                   const class GALGAS_string constin_inInputSelector,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inInputArgumentTypeProxy,
                                                   const class GALGAS_string constin_inInputArgumentName,
                                                   const class GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                                   class GALGAS_lstring & out_outRoutineLLVMName,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_routineTypedSignature (class GALGAS_unifiedTypeMap & ioArgument0,
                                    const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                    class GALGAS_routineTypedSignature & outArgument2,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithTwoInputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithTwoInputArguments (class GALGAS_routineMapForContext & ioObject,
                                                       const class GALGAS_string constin_inOmnibusTypeDescriptionName,
                                                       class GALGAS_semanticContext & io_ioContext,
                                                       const class GALGAS_string constin_inLLVMBaseTypeName,
                                                       const class GALGAS_lstring constin_inMethodName,
                                                       const class GALGAS_mode constin_inMode,
                                                       const class GALGAS_string constin_inInputSelector_31_,
                                                       const class GALGAS_unifiedTypeMap_2D_proxy constin_inInputArgumentTypeProxy_31_,
                                                       const class GALGAS_string constin_inInputArgumentName_31_,
                                                       const class GALGAS_string constin_inInputSelector_32_,
                                                       const class GALGAS_unifiedTypeMap_2D_proxy constin_inInputArgumentTypeProxy_32_,
                                                       const class GALGAS_string constin_inInputArgumentName_32_,
                                                       const class GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                                       class GALGAS_lstring & out_outRoutineLLVMName,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sectionIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_sectionIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSectionCallName,
                                                  const class GALGAS_string & in_mSectionImplementationName,
                                                  const class GALGAS_bool & in_invocationFromAnyMode
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
                                                                        const class GALGAS_bool & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_sectionIRlist add_operation (const GALGAS_sectionIRlist & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_sectionIRlist_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setInvocationFromAnyModeAtIndex (class GALGAS_bool constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSectionCallNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSectionImplementationNameAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_invocationFromAnyModeAtIndex (const class GALGAS_uint & constinOperand0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sectionIRlist ;
 
} ; // End of GALGAS_sectionIRlist class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_sectionIRlist : public cGenericAbstractEnumerator {
  public : cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sectionIRlist_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sectionIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mSectionCallName ;

  public : GALGAS_string mProperty_mSectionImplementationName ;

  public : GALGAS_bool mProperty_invocationFromAnyMode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sectionIRlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sectionIRlist_2D_element (const GALGAS_string & in_mSectionCallName,
                                            const GALGAS_string & in_mSectionImplementationName,
                                            const GALGAS_bool & in_invocationFromAnyMode) ;

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
                                                                         const class GALGAS_bool & inOperand2
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_invocationFromAnyMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionCallName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionImplementationName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sectionIRlist_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveAndServiceIRlist_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primitiveAndServiceIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mCallName ;

  public : GALGAS_string mProperty_mImplementationName ;

  public : GALGAS_bool mProperty_mHasReturnValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_primitiveAndServiceIRlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_primitiveAndServiceIRlist_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_primitiveAndServiceIRlist_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_primitiveAndServiceIRlist_2D_element (const GALGAS_string & in_mCallName,
                                                        const GALGAS_string & in_mImplementationName,
                                                        const GALGAS_bool & in_mHasReturnValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primitiveAndServiceIRlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primitiveAndServiceIRlist_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primitiveAndServiceIRlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCallName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasReturnValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primitiveAndServiceIRlist_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_externFunctionDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST enterExternProcInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GALGAS_externFunctionDeclarationListAST inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element enterExternProcInContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externFunctionDeclarationListAST inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element externProcedureSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineFormalArgumentListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListIR (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                  const class GALGAS_omnibusType & in_mFormalArgumentType,
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
                                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_routineFormalArgumentListIR_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_omnibusType constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_omnibusType & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentKindAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_omnibusType & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineFormalArgumentListIR ;
 
} ; // End of GALGAS_routineFormalArgumentListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineFormalArgumentListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineFormalArgumentListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineFormalArgumentListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentKind ;

  public : GALGAS_omnibusType mProperty_mFormalArgumentType ;

  public : GALGAS_string mProperty_mFormalArgumentName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                          const GALGAS_omnibusType & in_mFormalArgumentType,
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
                                                                                       const class GALGAS_omnibusType & inOperand1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mFormalArgumentType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineFormalArgumentListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externProcedureMapIR' map
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : virtual ~ GALGAS_externProcedureMapIR_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externProcedureMapIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR llvmPrototypeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@interruptMapIR' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_interruptMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_mSelfType ;
  public : GALGAS_string mProperty_mDriverName ;
  public : GALGAS_mode mProperty_mMode ;

//--- Constructor
  public : cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                       const GALGAS_omnibusType & in_mSelfType,
                                       const GALGAS_string & in_mDriverName,
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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptMapIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_interruptMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_omnibusType mProperty_mSelfType ;

  public : GALGAS_string mProperty_mDriverName ;

  public : GALGAS_mode mProperty_mMode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_omnibusType & in_mSelfType,
                                             const GALGAS_string & in_mDriverName,
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
                                                                          const class GALGAS_omnibusType & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_mode & inOperand3
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

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSelfType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_interruptMapIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;

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
//                                         Phase 1: @guardKindGenerationIR enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public : GALGAS_allocaList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mVarLLVMName,
                                                  const class GALGAS_omnibusType & in_mLLVMType,
                                                  const class GALGAS_bool & in_mFormalInputArgument
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
                                                                     const class GALGAS_omnibusType & inOperand1,
                                                                     const class GALGAS_bool & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allocaList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_bool & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList add_operation (const GALGAS_allocaList & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_allocaList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_omnibusType constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_omnibusType & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalInputArgumentAtIndex (class GALGAS_bool constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLLVMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMVarLLVMNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_omnibusType & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFormalInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mLLVMTypeAtIndex (const class GALGAS_uint & constinOperand0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allocaList ;
 
} ; // End of GALGAS_allocaList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_allocaList : public cGenericAbstractEnumerator {
  public : cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allocaList_2D_element current (LOCATION_ARGS) const ;
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
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_instructionListIR_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

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

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListIR ;
 
} ; // End of GALGAS_instructionListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_instructionListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListIR_2D_element current (LOCATION_ARGS) const ;
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
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_procCallEffectiveParameterListIR_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

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

  public : VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_objectIR constinArgument0,
                                                              class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procCallEffectiveParameterListIR ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_procCallEffectiveParameterListIR : public cGenericAbstractEnumerator {
  public : cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procCallEffectiveParameterListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @guardKindGenerationIR enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_allocaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mVarLLVMName ;

  public : GALGAS_omnibusType mProperty_mLLVMType ;

  public : GALGAS_bool mProperty_mFormalInputArgument ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allocaList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_allocaList_2D_element (const GALGAS_string & in_mVarLLVMName,
                                         const GALGAS_omnibusType & in_mLLVMType,
                                         const GALGAS_bool & in_mFormalInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allocaList_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_allocaList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      const class GALGAS_bool & inOperand2
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFormalInputArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mLLVMType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarLLVMName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allocaList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractInstructionIR mProperty_mInstructionGeneration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_instructionListIR_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR_2D_element ;

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
  public : GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;

  public : GALGAS_lstring mProperty_mSelector ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_effectiveArgumentListAST_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
  public : GALGAS_lstring mProperty_receiverTypeName ;

  public : GALGAS_mode mProperty_mode ;

  public : GALGAS_bool mProperty_isRequired ;

  public : GALGAS_routineKind mProperty_routineKind ;

  public : GALGAS_bool mProperty_warnIfUnused ;

  public : GALGAS_bool mProperty_exportedRoutine ;

  public : GALGAS_routineAttributes mProperty_routineAttributes ;

  public : GALGAS_lstring mProperty_routineMangledLLVMName ;

  public : GALGAS_routineFormalArgumentListAST mProperty_formalArgumentList ;

  public : GALGAS_bool mProperty_warningOnUnusedArgs ;

  public : GALGAS_instructionListAST mProperty_mInstructionList ;

  public : GALGAS_location mProperty_mEndOfRoutineDeclaration ;

  public : GALGAS_lstring mProperty_returnTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_decoratedRegularRoutineList_2D_element (const GALGAS_lstring & in_receiverTypeName,
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
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedRegularRoutineList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedRegularRoutineList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedRegularRoutineList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_exportedRoutine (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_formalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRequired (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_receiverTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_returnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineAttributes getter_routineAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_routineKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_routineMangledLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_warnIfUnused (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_warningOnUnusedArgs (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
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
// Phase 1: @panicSortedListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_panicSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bigint mProperty_mPriority ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicSortedListIR_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_panicSortedListIR_2D_element (const GALGAS_bigint & in_mPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicSortedListIR_2D_element constructor_new (const class GALGAS_bigint & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicSortedListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicSortedListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractLLVMInstruction mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_llvmGenerationInstructionList_2D_element (const GALGAS_abstractLLVMInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmGenerationInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmGenerationInstructionList_2D_element constructor_new (const class GALGAS_abstractLLVMInstruction & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmGenerationInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractLLVMInstruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmGenerationInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @implicitBooleanConversionResult enum                                   *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_implicitBooleanConversionResult (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_compileTime,
    kEnum_llvmVariable
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
  public : static GALGAS_implicitBooleanConversionResult extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implicitBooleanConversionResult constructor_compileTime (const class GALGAS_bool & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_implicitBooleanConversionResult constructor_llvmVariable (const class GALGAS_string & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_implicitBooleanConversionResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_compileTime (class GALGAS_bool & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmVariable (class GALGAS_string & outArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicitBooleanConversionResult class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @implicitBooleanConversionResult enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_implicitBooleanConversionResult_compileTime : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (const GALGAS_bool & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_implicitBooleanConversionResult_compileTime (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (const GALGAS_string & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable (void) {}
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

typedef void (*extensionMethodSignature_abstractImplicitConverterToBoolean_generateConvertToBooleanCode) (const class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                                                                          const class GALGAS_objectIR constinArgument0,
                                                                                                          const class GALGAS_location constinArgument1,
                                                                                                          class GALGAS_semanticTemporariesStruct & ioArgument2,
                                                                                                          class GALGAS_instructionListIR & ioArgument3,
                                                                                                          class GALGAS_allocaList & ioArgument4,
                                                                                                          class GALGAS_implicitBooleanConversionResult & outArgument5,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateConvertToBooleanCode (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractImplicitConverterToBoolean_generateConvertToBooleanCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (const class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const GALGAS_objectIR constin_inReceiverOperand,
                                                       const GALGAS_location constin_inErrorLocation,
                                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                       GALGAS_allocaList & io_ioAllocaList,
                                                       GALGAS_implicitBooleanConversionResult & out_outResult,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

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
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph) (const class cPtr_expressionAST * inObject,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (const class cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                          const class GALGAS_omnibusType constinArgument0,
                                                                          const class GALGAS_routineAttributes constinArgument1,
                                                                          const class GALGAS_omnibusType constinArgument2,
                                                                          const class GALGAS_semanticContext constinArgument3,
                                                                          const class GALGAS_mode constinArgument4,
                                                                          class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                          class GALGAS_staticEntityMap & ioArgument6,
                                                                          class GALGAS_universalValuedObjectMap & ioArgument7,
                                                                          class GALGAS_allocaList & ioArgument8,
                                                                          class GALGAS_instructionListIR & ioArgument9,
                                                                          class GALGAS_objectIR & outArgument10,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpression (const int32_t inClassIndex,
                                             extensionMethodSignature_expressionAST_analyzeExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (const class cPtr_expressionAST * inObject,
                                            const GALGAS_omnibusType constin_inSelfType,
                                            const GALGAS_routineAttributes constin_inRoutineAttributes,
                                            const GALGAS_omnibusType constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_mode constin_inMode,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                            GALGAS_allocaList & io_ioAllocaList,
                                            GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                            GALGAS_objectIR & out_outResult,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_truncateInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_truncateInstructionIR (void) ;

//---
  public : inline const class cPtr_truncateInstructionIR * ptr (void) const { return (const cPtr_truncateInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_truncateInstructionIR (const cPtr_truncateInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_truncateInstructionIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_truncateInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                      const class GALGAS_objectIR & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_objectIR inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_truncateInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @truncateInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_truncateInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mOperand ;

//--- Constructor
  public : cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                       const GALGAS_objectIR & in_mOperand
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTarget (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperand (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_primaryInExpressionAccessAST mProperty_mAccess ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceFieldListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerSliceFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSliceWidth ;

  public : GALGAS_expressionAST mProperty_mExpression ;

  public : GALGAS_location mProperty_mExpressionLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & in_mSliceWidth,
                                                       const GALGAS_expressionAST & in_mExpression,
                                                       const GALGAS_location & in_mExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerSliceFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_integerSliceFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_expressionAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerSliceFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSliceWidth (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerSliceFieldListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIntegerFieldListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : virtual ~ GALGAS_registerIntegerFieldListAST_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerIntegerFieldListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallEffectiveParameterListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallEffectiveParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSelector ;

  public : GALGAS_expressionAST mProperty_mExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & in_mSelector,
                                                                    const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallEffectiveParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionCallEffectiveParameterListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_expressionAST & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallEffectiveParameterListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;

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
// Phase 1: @genericFormalParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_genericFormalParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_genericFormalParameter mProperty_mParameter ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_genericFormalParameterList_2D_element (const GALGAS_genericFormalParameter & in_mParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_genericFormalParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_genericFormalParameterList_2D_element constructor_new (const class GALGAS_genericFormalParameter & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_genericFormalParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_genericFormalParameter getter_mParameter (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_genericFormalParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusInfixOperatorUsage_generateCode) (const class cPtr_omnibusInfixOperatorUsage * inObject,
                                                                                 const class GALGAS_objectIR constinArgument0,
                                                                                 const class GALGAS_location constinArgument1,
                                                                                 const class GALGAS_objectIR constinArgument2,
                                                                                 const class GALGAS_omnibusType constinArgument3,
                                                                                 class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                                 class GALGAS_allocaList & ioArgument5,
                                                                                 class GALGAS_instructionListIR & ioArgument6,
                                                                                 class GALGAS_objectIR & outArgument7,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_omnibusInfixOperatorUsage_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const GALGAS_objectIR constin_inLeftOperand,
                                       const GALGAS_location constin_inOperatorLocation,
                                       const GALGAS_objectIR constin_inRightOperand,
                                       const GALGAS_omnibusType constin_inResultType,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_allocaList & io_ioAllocaList,
                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       GALGAS_objectIR & out_outResultValue,
                                       C_Compiler * inCompiler
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
// Phase 1: @inlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public : GALGAS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inlineInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inlineInfixOperatorUsage * ptr (void) const { return (const cPtr_inlineInfixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inlineInfixOperatorUsage (const cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inlineInfixOperatorUsage constructor_new (const class GALGAS_string & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inlineInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public : cPtr_inlineInfixOperatorUsage (const GALGAS_string & in_mLLVMOperation
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusInfixOperator string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_omnibusInfixOperator & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration prefixOperator' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefixOperator extensionGetter_prefixOperator (const class GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration string' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration prefixOperator' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefixOperator extensionGetter_prefixOperator (const class GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_prefixOperatorUsage_generateCode) (const class cPtr_prefixOperatorUsage * inObject,
                                                                           const class GALGAS_objectIR constinArgument0,
                                                                           const class GALGAS_location constinArgument1,
                                                                           const class GALGAS_omnibusType constinArgument2,
                                                                           const class GALGAS_bool constinArgument3,
                                                                           const class GALGAS_bool constinArgument4,
                                                                           class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                           class GALGAS_instructionListIR & ioArgument6,
                                                                           class GALGAS_objectIR & outArgument7,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_prefixOperatorUsage_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_prefixOperatorUsage * inObject,
                                       const GALGAS_objectIR constin_inReceiverOperand,
                                       const GALGAS_location constin_inOperatorLocation,
                                       const GALGAS_omnibusType constin_inResultType,
                                       const GALGAS_bool constin_inDoNotGeneratePanicCode,
                                       const GALGAS_bool constin_inSafeMode,
                                       GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       GALGAS_objectIR & out_outResultValue,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const class GALGAS_prefixOperatorMap inObject,
                                                 const class GALGAS_objectIR constin_inReceiverOperand,
                                                 const class GALGAS_prefixOperator constin_inPrefixOperator,
                                                 const class GALGAS_location constin_inOperatorLocation,
                                                 const class GALGAS_bool constin_inSafeMode,
                                                 const class GALGAS_bool constin_inDoNotGeneratePanicCode,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                 class GALGAS_objectIR & out_outResultValue,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_prefixOperatorMapKey (const class GALGAS_omnibusType & constinArgument0,
                                                    const class GALGAS_prefixOperator & constinArgument1,
                                                    const class GALGAS_location & constinArgument2,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_instructionAST * inObject,
                                                                                               class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_instructionAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_instructionAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_instructionAST_instructionSemanticAnalysis) (const class cPtr_instructionAST * inObject,
                                                                                     const class GALGAS_omnibusType constinArgument0,
                                                                                     const class GALGAS_routineAttributes constinArgument1,
                                                                                     const class GALGAS_semanticContext constinArgument2,
                                                                                     const class GALGAS_mode constinArgument3,
                                                                                     class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                                     class GALGAS_staticEntityMap & ioArgument5,
                                                                                     class GALGAS_universalValuedObjectMap & ioArgument6,
                                                                                     class GALGAS_allocaList & ioArgument7,
                                                                                     class GALGAS_instructionListIR & ioArgument8,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_instructionSemanticAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_instructionAST_instructionSemanticAnalysis inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (const class cPtr_instructionAST * inObject,
                                                      const GALGAS_omnibusType constin_inSelfType,
                                                      const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                      const GALGAS_semanticContext constin_inContext,
                                                      const GALGAS_mode constin_inMode,
                                                      GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                      GALGAS_allocaList & io_ioAllocaList,
                                                      GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_omnibusType constin_inSelfType,
                                                   const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                   class GALGAS_location in_inEndOfInstructionList,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_mode constin_inMode,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSourceLineComment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_location constin_inSourceLocation,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                  const class GALGAS_location constin_inErrorLocation,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                    const class GALGAS_omnibusType constin_inSelfType,
                                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                    const class GALGAS_semanticContext constin_inContext,
                                                    const class GALGAS_mode constin_inMode,
                                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GALGAS_allocaList & io_ioAllocaList,
                                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractInstructionIR_llvmInstructionCode) (const class cPtr_abstractInstructionIR * inObject,
                                                                                    class GALGAS_string & ioArgument0,
                                                                                    const class GALGAS_generationContext constinArgument1,
                                                                                    class GALGAS_generationAdds & ioArgument2,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_llvmInstructionCode (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractInstructionIR_llvmInstructionCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (const class cPtr_abstractInstructionIR * inObject,
                                              GALGAS_string & io_ioLLVMcode,
                                              const GALGAS_generationContext constin_inGenerationContext,
                                              GALGAS_generationAdds & io_ioGenerationAdds,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assertInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_assertInstructionIR (void) ;

//---
  public : inline const class cPtr_assertInstructionIR * ptr (void) const { return (const cPtr_assertInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assertInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_instructionListIR & inOperand1,
                                                                    const class GALGAS_objectIR & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAssertInstructionLocation (class GALGAS_location inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpressionValue (class GALGAS_objectIR inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_instructionListIR inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mExpressionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assertInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mProperty_mAssertInstructionLocation ;
  public : GALGAS_instructionListIR mProperty_mInstructionList ;
  public : GALGAS_objectIR mProperty_mExpressionValue ;

//--- Constructor
  public : cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                     const GALGAS_instructionListIR & in_mInstructionList,
                                     const GALGAS_objectIR & in_mExpressionValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAssertInstructionLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_instructionListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mExpressionValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressionValue (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

