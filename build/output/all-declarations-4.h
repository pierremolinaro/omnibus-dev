#ifndef all_2D_declarations_2D__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'initialVariableMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap function_initialVariableMap (const class GALGAS_string & constinArgument0,
                                                      const class GALGAS_semanticContext & constinArgument1,
                                                      class GALGAS_bool inArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'variableMapWithConstants'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableMap function_variableMapWithConstants (const class GALGAS_semanticContext & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                 class GALGAS_semanticTemporariesStruct & ioArgument1,
                                 class GALGAS_operandIR & outArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTemporariesStruct struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mTemporaryIndex ;
  public : GALGAS_exceptionRoutinePriorityMap mAttribute_mExceptionSetupRoutinePriorityMap ;
  public : GALGAS_exceptionRoutinePriorityMap mAttribute_mExceptionLoopRoutinePriorityMap ;
  public : GALGAS_initRoutinePriorityMap mAttribute_mInitRoutinePriorityMap ;
  public : GALGAS_bootRoutinePriorityMap mAttribute_mBootRoutinePriorityMap ;
  public : GALGAS_subprogramInvocationGraph mAttribute_mSubprogramInvocationGraph ;


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
                                             const GALGAS_exceptionRoutinePriorityMap & in_mExceptionSetupRoutinePriorityMap,
                                             const GALGAS_exceptionRoutinePriorityMap & in_mExceptionLoopRoutinePriorityMap,
                                             const GALGAS_initRoutinePriorityMap & in_mInitRoutinePriorityMap,
                                             const GALGAS_bootRoutinePriorityMap & in_mBootRoutinePriorityMap,
                                             const GALGAS_subprogramInvocationGraph & in_mSubprogramInvocationGraph) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTemporariesStruct extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticTemporariesStruct constructor_new (const class GALGAS_uint & inOperand0,
                                                                    const class GALGAS_exceptionRoutinePriorityMap & inOperand1,
                                                                    const class GALGAS_exceptionRoutinePriorityMap & inOperand2,
                                                                    const class GALGAS_initRoutinePriorityMap & inOperand3,
                                                                    const class GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                    const class GALGAS_subprogramInvocationGraph & inOperand5
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

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionRoutinePriorityMap getter_mExceptionLoopRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionRoutinePriorityMap getter_mExceptionSetupRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRoutinePriorityMap getter_mInitRoutinePriorityMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subprogramInvocationGraph getter_mSubprogramInvocationGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTemporaryIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTemporariesStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'getNewTempObjectInMemory'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempObjectInMemory (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                       class GALGAS_semanticTemporariesStruct & ioArgument1,
                                       class GALGAS_objectInMemoryIR & outArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const class GALGAS_ast constinArgument0,
                                          const class GALGAS_string constinArgument1,
                                          const class GALGAS_location constinArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract category getter '@abstractDeclaration keyRepresentationForErrorSignaling'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling) (const class cPtr_abstractDeclaration * inObject,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                             categoryGetterSignature_abstractDeclaration_keyRepresentationForErrorSignaling inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryGetter_keyRepresentationForErrorSignaling (const class cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category getter '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*categoryGetterSignature_abstractDeclaration_location) (const class cPtr_abstractDeclaration * inObject,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_location (const int32_t inClassIndex,
                                   categoryGetterSignature_abstractDeclaration_location inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callCategoryGetter_location (const class cPtr_abstractDeclaration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractDeclaration enterInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph) (const class cPtr_abstractDeclaration * inObject,
                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclaration * inObject,
                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@procedureDeclarationListAST-element enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Routine 'checkMode'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMode (const class GALGAS_stringset constinArgument0,
                        const class GALGAS_stringset constinArgument1,
                        const class GALGAS_location constinArgument2,
                        class C_Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const class GALGAS_declarationListAST constinArgument0,
                                   const class GALGAS_ast constinArgument1,
                                   class GALGAS_staticStringMap & ioArgument2,
                                   class GALGAS_semanticContext & outArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@abstractDeclaration enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInContext) (const class cPtr_abstractDeclaration * inObject,
                                                                            const class GALGAS_procedureDeclarationListAST constinArgument0,
                                                                            class GALGAS_semanticContext & ioArgument1,
                                                                            class GALGAS_staticStringMap & ioArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInContext (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractDeclaration_enterInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInContext (const class cPtr_abstractDeclaration * inObject,
                                        const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
                                        GALGAS_semanticContext & io_ioContext,
                                        GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract category method '@abstractDeclaration initAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_initAnalysis) (const class cPtr_abstractDeclaration * inObject,
                                                                          class GALGAS_semanticContext & ioArgument0,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_initAnalysis (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractDeclaration_initAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_initAnalysis (const class cPtr_abstractDeclaration * inObject,
                                      GALGAS_semanticContext & io_ioContext,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@exceptionClauseListAST-element enterInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_exceptionClauseListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionDeclarationListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@globalVarDeclarationList-element enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initList-element enterInContext'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_initList_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@procedureDeclarationListAST-element enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'solveInferredType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy function_solveInferredType (const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                 const class GALGAS_location & constinArgument2,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'checkAssignmentCompatibility'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentCompatibility (const class GALGAS_operandIR constinArgument0,
                                           const class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                           const class GALGAS_location constinArgument2,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_string constinArgument0,
                               const class GALGAS_ast constinArgument1,
                               const class GALGAS_semanticContext constinArgument2,
                               const class GALGAS_location constinArgument3,
                               const class GALGAS_staticStringMap constinArgument4,
                               class GALGAS_intermediateCodeStruct & outArgument5,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@abstractDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_semanticAnalysis) (const class cPtr_abstractDeclaration * inObject,
                                                                              const class GALGAS_semanticContext constinArgument0,
                                                                              class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                              class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractDeclaration_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_abstractDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inContext,
                                          GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@bootList-element bootSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_bootSemanticAnalysis (const class GALGAS_bootList_2D_element inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category method '@exceptionClauseListAST-element exceptionSemanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_exceptionSemanticAnalysis (const class GALGAS_exceptionClauseListAST_2D_element inObject,
                                               const class GALGAS_semanticContext constin_inContext,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Category method '@functionDeclarationListAST-element functionSemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_functionSemanticAnalysis (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                              const class GALGAS_semanticContext constin_inContext,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@globalVarDeclarationList-element semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                      const class GALGAS_semanticContext constin_inContext,
                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@initList-element initSemanticAnalysis'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_initSemanticAnalysis (const class GALGAS_initList_2D_element inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                          class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@procedureDeclarationListAST-element procedureSemanticAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_procedureSemanticAnalysis (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                               const class GALGAS_semanticContext constin_inContext,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @intermediateCodeStruct struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_staticStringMap mAttribute_mStaticStringMap ;
  public : GALGAS_registerMapIR mAttribute_mRegisterMap ;
  public : GALGAS_globalVariableMapIR mAttribute_mGlobalVariableMap ;
  public : GALGAS_globalConstantMapIR mAttribute_mGlobalConstantMap ;
  public : GALGAS_procedureMapIR mAttribute_mProcedureMapIR ;
  public : GALGAS_functionMapIR mAttribute_mFunctionMapIR ;
  public : GALGAS_stringset mAttribute_mRequiredProcedureSet ;
  public : GALGAS_bootListIR mAttribute_mBootList ;
  public : GALGAS_initListIR mAttribute_mInitList ;
  public : GALGAS_instructionListIR mAttribute_mExceptionSetupInstructionListIR ;
  public : GALGAS_instructionListIR mAttribute_mExceptionLoopInstructionListIR ;


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
                                          const GALGAS_registerMapIR & in_mRegisterMap,
                                          const GALGAS_globalVariableMapIR & in_mGlobalVariableMap,
                                          const GALGAS_globalConstantMapIR & in_mGlobalConstantMap,
                                          const GALGAS_procedureMapIR & in_mProcedureMapIR,
                                          const GALGAS_functionMapIR & in_mFunctionMapIR,
                                          const GALGAS_stringset & in_mRequiredProcedureSet,
                                          const GALGAS_bootListIR & in_mBootList,
                                          const GALGAS_initListIR & in_mInitList,
                                          const GALGAS_instructionListIR & in_mExceptionSetupInstructionListIR,
                                          const GALGAS_instructionListIR & in_mExceptionLoopInstructionListIR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_intermediateCodeStruct extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_intermediateCodeStruct constructor_new (const class GALGAS_staticStringMap & inOperand0,
                                                                 const class GALGAS_registerMapIR & inOperand1,
                                                                 const class GALGAS_globalVariableMapIR & inOperand2,
                                                                 const class GALGAS_globalConstantMapIR & inOperand3,
                                                                 const class GALGAS_procedureMapIR & inOperand4,
                                                                 const class GALGAS_functionMapIR & inOperand5,
                                                                 const class GALGAS_stringset & inOperand6,
                                                                 const class GALGAS_bootListIR & inOperand7,
                                                                 const class GALGAS_initListIR & inOperand8,
                                                                 const class GALGAS_instructionListIR & inOperand9,
                                                                 const class GALGAS_instructionListIR & inOperand10
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

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mExceptionLoopInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mExceptionSetupInstructionListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMapIR getter_mFunctionMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMapIR getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVariableMapIR getter_mGlobalVariableMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initListIR getter_mInitList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureMapIR getter_mProcedureMapIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerMapIR getter_mRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRequiredProcedureSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_intermediateCodeStruct class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'procNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_procNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          class GALGAS_lstring inArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'funcNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_funcNameForInvocationGraph (class GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          class GALGAS_lstring inArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_initNameForInvocationGraph (class GALGAS_lbigint inArgument0,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'exceptionNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_exceptionNameForInvocationGraph (class GALGAS_string inArgument0,
                                                               class GALGAS_lbigint inArgument1,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'mangledNameForType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mangledNameForType (class GALGAS_string inArgument0,
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
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_literalCharacterArrayName (const class GALGAS_uint & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'staticStringTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'boolTypeName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForFunction (class GALGAS_string inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForProcedure'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForProcedure (class GALGAS_string inArgument0,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForGlobalVariable (class GALGAS_string inArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForRegister'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForRegister (class GALGAS_string inArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'noWarningIfUnusedAttribute'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_noWarningIfUnusedAttribute (class C_Compiler * inCompiler
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
//                                      Function 'nullWhenPanicDisabledAttribute'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_nullWhenPanicDisabledAttribute (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (class GALGAS_intermediateCodeStruct & ioArgument0,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (class GALGAS_intermediateCodeStruct & ioArgument0,
                                              class GALGAS_accessibleEntities & outArgument1,
                                              class GALGAS_bool & ioArgument2,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @accessibleEntities struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessibleEntities : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_stringset mAttribute_mAccessibleRegisterSet ;
  public : GALGAS_stringset mAttribute_mProcedureSet ;
  public : GALGAS_stringset mAttribute_mFunctionSet ;
  public : GALGAS_stringset mAttribute_mGlobalVariableSet ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_accessibleEntities constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_accessibleEntities (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_accessibleEntities (void) ;

//--------------------------------- Native constructor
  public : GALGAS_accessibleEntities (const GALGAS_stringset & in_mAccessibleRegisterSet,
                                      const GALGAS_stringset & in_mProcedureSet,
                                      const GALGAS_stringset & in_mFunctionSet,
                                      const GALGAS_stringset & in_mGlobalVariableSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessibleEntities extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_accessibleEntities constructor_new (const class GALGAS_stringset & inOperand0,
                                                             const class GALGAS_stringset & inOperand1,
                                                             const class GALGAS_stringset & inOperand2,
                                                             const class GALGAS_stringset & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessibleEntities & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mAccessibleRegisterSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mFunctionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mGlobalVariableSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mProcedureSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessibleEntities class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@functionMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_functionMapIR_2D_element inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@procedureMapIR-element enterAccessibleEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterAccessibleEntities (const class GALGAS_procedureMapIR_2D_element inObject,
                                             class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                             class C_Compiler * inCompiler
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
//                                             Function 'llvmTitleComment'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmTitleComment (class GALGAS_string inArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'asSeparatorLine'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_asTitleComment (class GALGAS_string inArgument0,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_location constinArgument2,
                             const class GALGAS_intermediateCodeStruct constinArgument3,
                             const class GALGAS_unifiedTypeMap constinArgument4,
                             const class GALGAS_lstring constinArgument5,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                             const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                             const class GALGAS_stringset constinArgument8,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateLLVMfile'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateLLVMfile (const class GALGAS_string constinArgument0,
                               const class GALGAS_string constinArgument1,
                               const class GALGAS_location constinArgument2,
                               const class GALGAS_intermediateCodeStruct constinArgument3,
                               const class GALGAS_unifiedTypeMap constinArgument4,
                               const class GALGAS_lstring constinArgument5,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument6,
                               const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                               const class GALGAS_stringset constinArgument8,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTarget'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTarget (const class GALGAS_string constinArgument0,
                             const class GALGAS_string constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'getTargetTextFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_getTargetTextFile (const class GALGAS_string & constinArgument0,
                                                const class GALGAS_string & constinArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionMapIR-element implementationCodeGeneration'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_implementationCodeGeneration (const class GALGAS_functionMapIR_2D_element inObject,
                                                  class GALGAS_string & io_ioLLVMcode,
                                                  const class GALGAS_generationContext constin_inGenerationContext,
                                                  class GALGAS_generationAdds & io_ioGenerationAdds,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalConstantMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const class GALGAS_globalConstantMapIR_2D_element inObject,
                                  class GALGAS_string & io_ioLLVMcode,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVM (const class GALGAS_globalVariableMapIR_2D_element inObject,
                                  class GALGAS_string & io_ioLLVMcode,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@initListIR generateLLVMinitCode'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateLLVMinitCode (const class GALGAS_initListIR inObject,
                                          class GALGAS_string & io_ioLLVMcode,
                                          const class GALGAS_procedureMapIR constin_inProcedureMapIR,
                                          const class GALGAS_generationContext constin_inGenerationContext,
                                          class GALGAS_generationAdds & io_ioGenerationAdds,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@instructionListIR instructionListLLVMCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_instructionListLLVMCode (const class GALGAS_instructionListIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             const class GALGAS_generationContext constin_inGenerationContext,
                                             class GALGAS_generationAdds & io_ioGenerationAdds,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@procedureMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_llvmCodeGeneration (const class GALGAS_procedureMapIR_2D_element inObject,
                                        class GALGAS_string & io_ioLLVMcode,
                                        class GALGAS_string & io_ioAssemblerCode,
                                        const class GALGAS_generationContext constin_inGenerationContext,
                                        class GALGAS_generationAdds & io_ioGenerationAdds,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category setter '@staticStringMap findOrAddStaticString'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_findOrAddStaticString (class GALGAS_staticStringMap & ioObject,
                                             class GALGAS_string in_inString,
                                             class GALGAS_uint & out_outIndex,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @generationAdds struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_stringset mAttribute_mIntrinsicsDeclarationSet ;
  public : GALGAS_staticStringMap mAttribute_mStaticStringMap ;


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
  public : GALGAS_generationAdds (const GALGAS_stringset & in_mIntrinsicsDeclarationSet,
                                  const GALGAS_staticStringMap & in_mStaticStringMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationAdds extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generationAdds constructor_new (const class GALGAS_stringset & inOperand0,
                                                         const class GALGAS_staticStringMap & inOperand1
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
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mIntrinsicsDeclarationSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;


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
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mExceptionCodeLLVMType ;
  public : GALGAS_string mAttribute_mExceptionLineLLVMType ;


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
  public : GALGAS_generationContext (const GALGAS_string & in_mExceptionCodeLLVMType,
                                     const GALGAS_string & in_mExceptionLineLLVMType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationContext extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generationContext constructor_new (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_string & inOperand1
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExceptionCodeLLVMType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExceptionLineLLVMType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_targetTemplates ;
extern const char * gWrapperFileContent_1_targetTemplates ;
extern const char * gWrapperFileContent_2_targetTemplates ;
extern const char * gWrapperFileContent_3_targetTemplates ;
extern const char * gWrapperFileContent_4_targetTemplates ;
extern const char * gWrapperFileContent_5_targetTemplates ;
extern const char * gWrapperFileContent_6_targetTemplates ;
extern const char * gWrapperFileContent_7_targetTemplates ;
extern const char * gWrapperFileContent_8_targetTemplates ;
extern const char * gWrapperFileContent_9_targetTemplates ;
extern const char * gWrapperFileContent_10_targetTemplates ;
extern const char * gWrapperFileContent_11_targetTemplates ;
extern const char * gWrapperFileContent_12_targetTemplates ;
extern const char * gWrapperFileContent_13_targetTemplates ;
extern const char * gWrapperFileContent_14_targetTemplates ;
extern const char * gWrapperFileContent_15_targetTemplates ;
extern const char * gWrapperFileContent_16_targetTemplates ;
extern const char * gWrapperFileContent_17_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_8_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_9_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_10_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_11_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_12_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_13_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_14_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_15_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_16_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_17_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'copyExecutableFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFile (const class GALGAS_string constinArgument0,
                                 const class GALGAS_string constinArgument1,
                                 const class GALGAS_string constinArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'copyExecutableFileWithSubstitutions'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFileWithSubstitutions (const class GALGAS_string constinArgument0,
                                                  const class GALGAS_string constinArgument1,
                                                  const class GALGAS_string constinArgument2,
                                                  const class GALGAS__32_stringlist constinArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'copyTextFile'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyTextFile (const class GALGAS_string constinArgument0,
                           const class GALGAS_string constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'importFilesAndCompile'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_importFilesAndCompile (const class GALGAS_lstring constinArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

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
//                            Abstract category method '@abstractDeclaration addExtension'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_addExtension) (const class cPtr_abstractDeclaration * inObject,
                                                                          class GALGAS_extensionDeclarationListAST & ioArgument0,
                                                                          class GALGAS_abstractDeclaration & outArgument1,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addExtension (const int32_t inClassIndex,
                                       categoryMethodSignature_abstractDeclaration_addExtension inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addExtension (const class cPtr_abstractDeclaration * inObject,
                                      GALGAS_extensionDeclarationListAST & io_ioExtensionDeclarationListAST,
                                      GALGAS_abstractDeclaration & out_outNewDeclaration,
                                      C_Compiler * inCompiler
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
//                                              @booleanDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_booleanDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanDeclaration * ptr (void) const { return (const cPtr_booleanDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanDeclaration (const cPtr_booleanDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanDeclaration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_booleanDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @booleanDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mBooleanTypeName ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;

//--- Constructor
  public : cPtr_booleanDeclaration (const GALGAS_lstring & in_mBooleanTypeName,
                                    const GALGAS_lstringlist & in_mAttributeList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mBooleanTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalIntegerDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalIntegerDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_literalIntegerDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntegerDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntegerDeclaration * ptr (void) const { return (const cPtr_literalIntegerDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntegerDeclaration (const cPtr_literalIntegerDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntegerDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalIntegerDeclaration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntegerDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntegerDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @literalIntegerDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalIntegerDeclaration : public cPtr_abstractDeclaration {
//--- Attributes

//--- Constructor
  public : cPtr_literalIntegerDeclaration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralStringTypeName (LOCATION_ARGS) const ;


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
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursiveImportEmbeddedTargetFiles'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportEmbeddedTargetFiles (class GALGAS_ast & ioArgument0,
                                                 class GALGAS_lstringlist inArgument1,
                                                 class GALGAS_stringset & ioArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'recursiveImportFileSystemTargetFiles'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFileSystemTargetFiles (class GALGAS_ast & ioArgument0,
                                                   const class GALGAS_string constinArgument1,
                                                   class GALGAS_lstringlist inArgument2,
                                                   class GALGAS_stringset & ioArgument3,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'embeddedSampleCode'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_embeddedSampleCode ;
extern const char * gWrapperFileContent_1_embeddedSampleCode ;
extern const char * gWrapperFileContent_2_embeddedSampleCode ;
extern const char * gWrapperFileContent_3_embeddedSampleCode ;
extern const char * gWrapperFileContent_4_embeddedSampleCode ;
extern const char * gWrapperFileContent_5_embeddedSampleCode ;
extern const char * gWrapperFileContent_6_embeddedSampleCode ;
extern const char * gWrapperFileContent_7_embeddedSampleCode ;
extern const char * gWrapperFileContent_8_embeddedSampleCode ;
extern const char * gWrapperFileContent_9_embeddedSampleCode ;
extern const char * gWrapperFileContent_10_embeddedSampleCode ;
extern const char * gWrapperFileContent_11_embeddedSampleCode ;
extern const char * gWrapperFileContent_12_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractExpressionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractExpressionIR : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractExpressionIR (void) ;

//---
  public : inline const class cPtr_abstractExpressionIR * ptr (void) const { return (const cPtr_abstractExpressionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExpressionIR (const cPtr_abstractExpressionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExpressionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExpressionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExpressionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExpressionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractExpressionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractExpressionIR : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractExpressionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @allocaConstantIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allocaConstantIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_allocaConstantIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allocaConstantIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_allocaConstantIR * ptr (void) const { return (const cPtr_allocaConstantIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_allocaConstantIR (const cPtr_allocaConstantIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allocaConstantIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allocaConstantIR constructor_new (const class GALGAS_string & inOperand0,
                                                           const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_allocaConstantIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLocalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allocaConstantIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaConstantIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @allocaConstantIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_allocaConstantIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mAttribute_mLocalVariableName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mVariableType ;

//--- Constructor
  public : cPtr_allocaConstantIR (const GALGAS_string & in_mLocalVariableName,
                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLocalVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
