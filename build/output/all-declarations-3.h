#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

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
//                                       Function 'llvmNameForSectionInterrupt'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionInterrupt (const class GALGAS_string & constinArgument0,
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
//                          Extension method '@guardDeclarationListAST guardSemanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_guardSemanticAnalysis (const class GALGAS_guardDeclarationListAST inObject,
                                            class GALGAS_PLMType in_inReceiverType,
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

void routine_guardSemanticAnalysis (const class GALGAS_PLMType constinArgument0,
                                    const class GALGAS_lstring constinArgument1,
                                    const class GALGAS_routineFormalArgumentListAST constinArgument2,
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
//                                       Class for element of '@guardMapIR' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_guardMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_PLMType mProperty_mReceiverType ;
  public : GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_bool mProperty_mWarnIfUnused ;

//--- Constructor
  public : cMapElement_guardMapIR (const GALGAS_lstring & inKey,
                                   const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                   const GALGAS_PLMType & in_mReceiverType,
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

  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;

  public : GALGAS_PLMType mProperty_mReceiverType ;

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
                                         const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                         const GALGAS_PLMType & in_mReceiverType,
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
                                                                      const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                      const class GALGAS_PLMType & inOperand2,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mReceiverType (LOCATION_ARGS) const ;

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
                                          class GALGAS_sectionIRlist & io_ioSectionList,
                                          const class GALGAS_generationContext constin_inGenerationContext,
                                          class GALGAS_generationAdds & io_ioGenerationAdds,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

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
//                   Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph) (const class cPtr_expressionAST * inObject,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_noteExpressionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (const class cPtr_expressionAST * inObject,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension method '@expressionAST analyzeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_expressionAST_analyzeExpression) (const class cPtr_expressionAST * inObject,
                                                                          const class GALGAS_PLMType constinArgument0,
                                                                          const class GALGAS_routineAttributes constinArgument1,
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          const class GALGAS_PLMType constinArgument3,
                                                                          const class GALGAS_semanticContext constinArgument4,
                                                                          const class GALGAS_mode constinArgument5,
                                                                          class GALGAS_semanticTemporariesStruct & ioArgument6,
                                                                          class GALGAS_staticEntityMap & ioArgument7,
                                                                          class GALGAS_universalValuedObjectMap & ioArgument8,
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
                                            const GALGAS_PLMType constin_inSelfType,
                                            const GALGAS_routineAttributes constin_inRoutineAttributes,
                                            const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType constin_inTargetType,
                                            const GALGAS_semanticContext constin_inContext,
                                            const GALGAS_mode constin_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & io_ioUniversalMap,
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
                                                                                class GALGAS_staticEntityMap & ioArgument2,
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
                                                  GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                  GALGAS_objectIR & out_outResult,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_PLMType function_voidType (class C_Compiler * inCompiler
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
//                                            @truncateInstructionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_truncateInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @truncateInstructionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @LValueRepresentation enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_LValueRepresentation (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_volatileAbsoluteReference,
    kEnum_volatileIndirectReference,
    kEnum_universalReference
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
  public : static GALGAS_LValueRepresentation extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_LValueRepresentation constructor_universalReference (const class GALGAS_PLMType & inOperand0,
                                                                                    const class GALGAS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_LValueRepresentation constructor_volatileAbsoluteReference (const class GALGAS_PLMType & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_LValueRepresentation constructor_volatileIndirectReference (const class GALGAS_PLMType & inOperand0,
                                                                                           const class GALGAS_string & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_LValueRepresentation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_universalReference (class GALGAS_PLMType & outArgument0,
                                                            class GALGAS_string & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_volatileAbsoluteReference (class GALGAS_PLMType & outArgument0,
                                                                   class GALGAS_uint & outArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_volatileIndirectReference (class GALGAS_PLMType & outArgument0,
                                                                   class GALGAS_string & outArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUniversalReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVolatileAbsoluteReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVolatileIndirectReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_LValueRepresentation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @LValueRepresentation enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                 const GALGAS_uint & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                 const GALGAS_string & inAssociatedValue1
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_LValueRepresentation_universalReference : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_LValueRepresentation_universalReference (const GALGAS_PLMType & inAssociatedValue0,
                                                                          const GALGAS_string & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_LValueRepresentation_universalReference (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @functionCallEffectiveParameterListAST_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallEffectiveParameterListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;

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
  public : GALGAS_PLMType mProperty_mResultType ;
  public : GALGAS_infixOperatorDescription mProperty_mOperation ;

//--- Constructor
  public : cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                         const GALGAS_PLMType & in_mResultType,
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

  public : GALGAS_PLMType mProperty_mResultType ;

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
                                               const GALGAS_PLMType & in_mResultType,
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
                                                                            const class GALGAS_PLMType & inOperand1,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @integerSliceFieldListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG ~ GALGAS_integerSliceFieldListAST_2D_element (void) ;

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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerSliceFieldListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;

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
//                       Abstract extension method '@instructionAST instructionSemanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_instructionAST_instructionSemanticAnalysis) (const class cPtr_instructionAST * inObject,
                                                                                     const class GALGAS_PLMType constinArgument0,
                                                                                     const class GALGAS_routineAttributes constinArgument1,
                                                                                     const class GALGAS_lstring constinArgument2,
                                                                                     const class GALGAS_semanticContext constinArgument3,
                                                                                     const class GALGAS_mode constinArgument4,
                                                                                     class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                                     class GALGAS_staticEntityMap & ioArgument6,
                                                                                     class GALGAS_universalValuedObjectMap & ioArgument7,
                                                                                     class GALGAS_allocaList & ioArgument8,
                                                                                     class GALGAS_instructionListIR & ioArgument9,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_instructionSemanticAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_instructionAST_instructionSemanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_instructionSemanticAnalysis (const class cPtr_instructionAST * inObject,
                                                      const GALGAS_PLMType constin_inSelfType,
                                                      const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                      const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constin_inContext,
                                                      const GALGAS_mode constin_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      GALGAS_universalValuedObjectMap & io_ioUniversalMap,
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
                                                   const class GALGAS_PLMType constin_inSelfType,
                                                   const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                   const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                   class GALGAS_location in_inEndOfInstructionList,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_mode constin_inCurrentMode,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
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
//                              Extension setter '@universalValuedObjectMap closeBranch'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_closeBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                  const class GALGAS_location constin_inErrorLocation,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension setter '@universalValuedObjectMap openBranch'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_openBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@instructionListAST analyzeRoutineInstructionList'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                    const class GALGAS_PLMType constin_inSelfType,
                                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                    const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                    const class GALGAS_semanticContext constin_inContext,
                                                    const class GALGAS_mode constin_inCurrentMode,
                                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GALGAS_allocaList & io_ioAllocaList,
                                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
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
//                                             @assertInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mExpressionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @assertInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mExpressionValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @sliceAssignmentListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sliceAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mSliceWidth ;

  public : GALGAS_sliceTargetAST mProperty_mSliceKind ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_sliceAssignmentListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_sliceAssignmentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & in_mSliceWidth,
                                                     const GALGAS_sliceTargetAST & in_mSliceKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sliceAssignmentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sliceAssignmentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_sliceTargetAST & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sliceAssignmentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sliceTargetAST getter_mSliceKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSliceWidth (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sliceAssignmentListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bitbandInstructionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bitbandInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_bitbandInstructionIR (void) ;

//---
  public : inline const class cPtr_bitbandInstructionIR * ptr (void) const { return (const cPtr_bitbandInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bitbandInstructionIR (const cPtr_bitbandInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bitbandInstructionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bitbandInstructionIR constructor_new (const class GALGAS_bigint & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1,
                                                                     const class GALGAS_objectIR & inOperand2,
                                                                     const class GALGAS_bigint & inOperand3,
                                                                     const class GALGAS_bigint & inOperand4,
                                                                     const class GALGAS_bigint & inOperand5,
                                                                     const class GALGAS_bigint & inOperand6
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bitbandInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mBitExpressionOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBitbandRegisterBaseAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBitbandRegisterBitMultiplier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBitbandRegisterOffsetMultiplier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBitbandRegisterRelocationAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceExpressionOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitbandInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @bitbandInstructionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_bitbandInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_bigint mProperty_mRegisterAddress ;
  public : GALGAS_objectIR mProperty_mBitExpressionOperand ;
  public : GALGAS_objectIR mProperty_mSourceExpressionOperand ;
  public : GALGAS_bigint mProperty_mBitbandRegisterBaseAddress ;
  public : GALGAS_bigint mProperty_mBitbandRegisterRelocationAddress ;
  public : GALGAS_bigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public : GALGAS_bigint mProperty_mBitbandRegisterBitMultiplier ;

//--- Constructor
  public : cPtr_bitbandInstructionIR (const GALGAS_bigint & in_mRegisterAddress,
                                      const GALGAS_objectIR & in_mBitExpressionOperand,
                                      const GALGAS_objectIR & in_mSourceExpressionOperand,
                                      const GALGAS_bigint & in_mBitbandRegisterBaseAddress,
                                      const GALGAS_bigint & in_mBitbandRegisterRelocationAddress,
                                      const GALGAS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                      const GALGAS_bigint & in_mBitbandRegisterBitMultiplier
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mBitExpressionOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceExpressionOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mBitbandRegisterBaseAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mBitbandRegisterRelocationAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mBitbandRegisterOffsetMultiplier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mBitbandRegisterBitMultiplier (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
//                                               @ifInstructionIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_ifInstructionIR (void) ;

//---
  public : inline const class cPtr_ifInstructionIR * ptr (void) const { return (const cPtr_ifInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionIR extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                const class GALGAS_location & inOperand1,
                                                                const class GALGAS_instructionListIR & inOperand2,
                                                                const class GALGAS_instructionListIR & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mElseInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTestVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mThenInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifInstructionIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTestVariable ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_instructionListIR mProperty_mThenInstructionGenerationList ;
  public : GALGAS_instructionListIR mProperty_mElseInstructionGenerationList ;

//--- Constructor
  public : cPtr_ifInstructionIR (const GALGAS_objectIR & in_mTestVariable,
                                 const GALGAS_location & in_mLocation,
                                 const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                 const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTestVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mThenInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mElseInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
    kEnum_booleanGuard,
    kEnum_sync,
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
                                                                         const class GALGAS_instructionListIR & inOperand4,
                                                                         const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommandIR constructor_booleanGuard (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_instructionListIR & inOperand1,
                                                                          const class GALGAS_objectIR & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommandIR constructor_sync (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_instructionListIR & inOperand2,
                                                                  const class GALGAS_procCallEffectiveParameterListIR & inOperand3
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
                                                     class GALGAS_instructionListIR & outArgument4,
                                                     class GALGAS_procCallEffectiveParameterListIR & outArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_booleanGuard (class GALGAS_bool & outArgument0,
                                                      class GALGAS_instructionListIR & outArgument1,
                                                      class GALGAS_objectIR & outArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_sync (class GALGAS_bool & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_instructionListIR & outArgument2,
                                              class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSync (LOCATION_ARGS) const ;


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

class cEnumAssociatedValues_guardedCommandIR_sync : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;
  public : const GALGAS_instructionListIR mAssociatedValue2 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandIR_sync (const GALGAS_bool & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1,
                                                        const GALGAS_instructionListIR & inAssociatedValue2,
                                                        const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandIR_sync (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommandIR_boolAndSync : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_instructionListIR mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;
  public : const GALGAS_string mAssociatedValue3 ;
  public : const GALGAS_instructionListIR mAssociatedValue4 ;
  public : const GALGAS_procCallEffectiveParameterListIR mAssociatedValue5 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommandIR_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                               const GALGAS_instructionListIR & inAssociatedValue1,
                                                               const GALGAS_objectIR & inAssociatedValue2,
                                                               const GALGAS_string & inAssociatedValue3,
                                                               const GALGAS_instructionListIR & inAssociatedValue4,
                                                               const GALGAS_procCallEffectiveParameterListIR & inAssociatedValue5
                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommandIR_boolAndSync (void) {}
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
//                                              @whileInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_whileInstructionIR (void) ;

//---
  public : inline const class cPtr_whileInstructionIR * ptr (void) const { return (const cPtr_whileInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_whileInstructionIR constructor_new (const class GALGAS_uint & inOperand0,
                                                                   const class GALGAS_instructionListIR & inOperand1,
                                                                   const class GALGAS_objectIR & inOperand2,
                                                                   const class GALGAS_instructionListIR & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mTestInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_while_5F_Expression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @whileInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_uint mProperty_mLabelIndex ;
  public : GALGAS_instructionListIR mProperty_mTestInstructionGenerationList ;
  public : GALGAS_objectIR mProperty_m_5F_while_5F_Expression ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                    const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                    const GALGAS_objectIR & in_m_5F_while_5F_Expression,
                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLabelIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mTestInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_while_5F_Expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnStringIR class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionOnStringIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forInstructionOnStringIR (void) ;

//---
  public : inline const class cPtr_forInstructionOnStringIR * ptr (void) const { return (const cPtr_forInstructionOnStringIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionOnStringIR (const cPtr_forInstructionOnStringIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionOnStringIR extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionOnStringIR constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_objectIR & inOperand2,
                                                                         const class GALGAS_instructionListIR & inOperand3,
                                                                         const class GALGAS_objectIR & inOperand4,
                                                                         const class GALGAS_instructionListIR & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionOnStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnStringIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnStringIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @forInstructionOnStringIR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionOnStringIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mVarName ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_objectIR mProperty_mIteratedObject ;
  public : GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public : GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mDoInstructionList ;

//--- Constructor
  public : cPtr_forInstructionOnStringIR (const GALGAS_string & in_mVarName,
                                          const GALGAS_location & in_mLocation,
                                          const GALGAS_objectIR & in_mIteratedObject,
                                          const GALGAS_instructionListIR & in_mWhileInstructionList,
                                          const GALGAS_objectIR & in_mWhileExpressionResult,
                                          const GALGAS_instructionListIR & in_mDoInstructionList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @accessInAssignmentListAST_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_accessInAssignmentAST mProperty_mAccess ;

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
                                                  const class GALGAS_PLMType & in_mParameterType
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
                                                                                     const class GALGAS_PLMType & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procEffectiveParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_PLMType & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterList add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveArgumentPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_PLMType constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_PLMType & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_PLMType & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_PLMType & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_PLMType & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_PLMType & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mParameterTypeAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_PLMType current_mParameterType (LOCATION_ARGS) const ;
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

  public : GALGAS_PLMType mProperty_mParameterType ;

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
                                                         const GALGAS_PLMType & in_mParameterType) ;

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
                                                                                      const class GALGAS_PLMType & inOperand2
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

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mParameterType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelector (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procEffectiveParameterList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;

