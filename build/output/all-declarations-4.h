#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @globalTaskVariableList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalTaskVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTaskName ;

  public : GALGAS_string mProperty_mTaskTypeName ;

  public : GALGAS_objectIR mProperty_mInitialValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & in_mTaskName,
                                                     const GALGAS_string & in_mTaskTypeName,
                                                     const GALGAS_objectIR & in_mInitialValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalTaskVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalTaskVariableList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_objectIR & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalTaskVariableList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract extension method '@abstractDeclarationAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInContext) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                const class GALGAS_functionDeclarationListAST constinArgument0,
                                                                                class GALGAS_semanticContext & ioArgument1,
                                                                                class GALGAS_declarationDecorationList & ioArgument2,
                                                                                class GALGAS_subprogramInvocationGraph & ioArgument3,
                                                                                class GALGAS_staticListInitializationMap & ioArgument4,
                                                                                class GALGAS_staticStringMap & ioArgument5,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterInContext (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterInContext (const class cPtr_abstractDeclarationAST * inObject,
                                         const GALGAS_functionDeclarationListAST constin_inProcedureListAST,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @propertyMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_propertyAccessKind mProperty_mAccess ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_propertyAccessKind & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_propertyAccessKind & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyAccessKind getter_mAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @constructorMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_constructorSignature mProperty_mSignature ;

  public : GALGAS_constructorValue mProperty_mInitValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_constructorSignature & in_mSignature,
                                             const GALGAS_constructorValue & in_mInitValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_constructorSignature & inOperand1,
                                                                          const class GALGAS_constructorValue & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorValue getter_mInitValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @propertyAccessKind enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_propertyAccessKind_constantProperty : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyAccessKind_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyAccessKind_constantProperty (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_propertyAccessKind_indexed : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyAccessKind_indexed (const GALGAS_PLMType & inAssociatedValue0,
                                                             const GALGAS_uint & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyAccessKind_indexed (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod : public cEnumAssociatedValues {
  public : const GALGAS_routineDescriptor mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod (const GALGAS_routineDescriptor & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@propertyMap addFunction'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addFunction (class GALGAS_propertyMap & ioObject,
                                  const class GALGAS_string constin_inReceiverTypeName,
                                  const class GALGAS_string constin_inMethodName,
                                  const class GALGAS_unifiedTypeMap_2D_proxy constin_inResultType,
                                  class GALGAS_subprogramInvocationGraph & io_ioSubprogramInvocationGraph,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @constructorValue enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_constructorValue_simple : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_simple (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_constructorValue_structure : public cEnumAssociatedValues {
  public : const GALGAS_sortedOperandIRList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_structure (const GALGAS_sortedOperandIRList & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_structure (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_constructorValue_arrayValue : public cEnumAssociatedValues {
  public : const GALGAS_PLMType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_arrayValue (const GALGAS_PLMType & inAssociatedValue0,
                                                              const GALGAS_uint & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_arrayValue (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @constructorSignature_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mSelector ;

  public : GALGAS_PLMType mProperty_mType ;

  public : GALGAS_uint mProperty_mFieldIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorSignature_2D_element (const GALGAS_string & in_mSelector,
                                                   const GALGAS_PLMType & in_mType,
                                                   const GALGAS_uint & in_mFieldIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorSignature_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_PLMType & inOperand1,
                                                                                const class GALGAS_uint & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorSignature_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis) (const class cPtr_abstractDecoratedDeclaration * inObject,
                                                                                        const class GALGAS_semanticContext constinArgument0,
                                                                                        class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                                        class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_semanticAnalysis (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_semanticAnalysis (const class cPtr_abstractDecoratedDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapIR llvmCodeGeneration'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const class GALGAS_routineMapIR inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_string & io_ioAssemblerCode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_llvmCodeGeneration (const class GALGAS_routineMapIR_2D_element inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_string & io_ioAssemblerCode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
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
//                               Extension getter '@objectIR llvmTypeName' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_objectIR & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@objectIR type' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_PLMType extensionGetter_type (const class GALGAS_objectIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_PLMType function_literalStringType (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@objectIR plmTypeName' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_plmTypeName (const class GALGAS_objectIR & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@objectIR withType' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_objectIR extensionGetter_withType (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_PLMType & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@objectIR name' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_name (const class GALGAS_objectIR & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@globalVariableMapIR' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_globalVariableMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_bool mProperty_mGenerateVolatile ;
  public : GALGAS_objectIR mProperty_mInitialValue ;

//--- Constructor
  public : cMapElement_globalVariableMapIR (const GALGAS_lstring & inKey,
                                            const GALGAS_PLMType & in_mType,
                                            const GALGAS_bool & in_mGenerateVolatile,
                                            const GALGAS_objectIR & in_mInitialValue
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
//                                       @globalVariableMapIR_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalVariableMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_PLMType mProperty_mType ;

  public : GALGAS_bool mProperty_mGenerateVolatile ;

  public : GALGAS_objectIR mProperty_mInitialValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalVariableMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_globalVariableMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_PLMType & in_mType,
                                                  const GALGAS_bool & in_mGenerateVolatile,
                                                  const GALGAS_objectIR & in_mInitialValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVariableMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalVariableMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_PLMType & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_objectIR & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalVariableMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateVolatile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalVariableMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@globalConstantMapIR' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_globalConstantMapIR : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mType ;
  public : GALGAS_objectIR mProperty_mSourceExpression ;

//--- Constructor
  public : cMapElement_globalConstantMapIR (const GALGAS_lstring & inKey,
                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                            const GALGAS_objectIR & in_mSourceExpression
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
//                                       @globalConstantMapIR_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mType ;

  public : GALGAS_objectIR mProperty_mSourceExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalConstantMapIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_globalConstantMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const GALGAS_objectIR & in_mSourceExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                               const class GALGAS_objectIR & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalConstantMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalConstantMapIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @generationListIR_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_generationListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractGenerationIR mProperty_mGeneration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_generationListIR_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_generationListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generationListIR_2D_element (const GALGAS_abstractGenerationIR & in_mGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generationListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_generationListIR_2D_element constructor_new (const class GALGAS_abstractGenerationIR & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generationListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGenerationIR getter_mGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generationListIR_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationListIR_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@instructionListIR appendNOP'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendNOP (class GALGAS_instructionListIR & ioObject,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @nopIR class                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nopIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_nopIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nopIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_nopIR * ptr (void) const { return (const cPtr_nopIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_nopIR (const cPtr_nopIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nopIR extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nopIR constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nopIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nopIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Pointer class for @nopIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_nopIR : public cPtr_abstractInstructionIR {
//--- Attributes

//--- Constructor
  public : cPtr_nopIR (LOCATION_ARGS) ;

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
//                                 Extension setter '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendExtend (class GALGAS_instructionListIR & ioObject,
                                   const class GALGAS_objectIR constin_inResult,
                                   const class GALGAS_objectIR constin_inSource,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @extendIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_extendIR (void) ;

//---
  public : inline const class cPtr_extendIR * ptr (void) const { return (const cPtr_extendIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extendIR (const cPtr_extendIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendIR extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                         const class GALGAS_objectIR & inOperand1
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @extendIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_extendIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_objectIR mProperty_mSource ;

//--- Constructor
  public : cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                          const GALGAS_objectIR & in_mSource
                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@instructionListIR appendTrunc'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendTrunc (class GALGAS_instructionListIR & ioObject,
                                  const class GALGAS_objectIR constin_inResult,
                                  const class GALGAS_objectIR constin_inSource,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @truncIR class                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_truncIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_truncIR (void) ;

//---
  public : inline const class cPtr_truncIR * ptr (void) const { return (const cPtr_truncIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_truncIR (const cPtr_truncIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_truncIR extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_truncIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                        const class GALGAS_objectIR & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_truncIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_truncIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Pointer class for @truncIR class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_truncIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_objectIR mProperty_mSource ;

//--- Constructor
  public : cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                         const GALGAS_objectIR & in_mSource
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@instructionListIR appendShiftLeft'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendShiftLeft (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_objectIR constin_inResult,
                                      const class GALGAS_objectIR constin_inSource,
                                      const class GALGAS_uint constin_inShiftAmount,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @leftShiftIR class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_leftShiftIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_leftShiftIR (void) ;

//---
  public : inline const class cPtr_leftShiftIR * ptr (void) const { return (const cPtr_leftShiftIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_leftShiftIR (const cPtr_leftShiftIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_leftShiftIR extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_leftShiftIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                            const class GALGAS_objectIR & inOperand1,
                                                            const class GALGAS_uint & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mShiftAmount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @leftShiftIR class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_leftShiftIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_objectIR mProperty_mSource ;
  public : GALGAS_uint mProperty_mShiftAmount ;

//--- Constructor
  public : cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                             const GALGAS_objectIR & in_mSource,
                             const GALGAS_uint & in_mShiftAmount
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mShiftAmount (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendBinaryOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTarget,
                                            const class GALGAS_PLMType constin_inOperandType,
                                            const class GALGAS_location constin_inLocation,
                                            const class GALGAS_objectIR constin_inLeft,
                                            const class GALGAS_llvmBinaryOperation constin_inOperation,
                                            const class GALGAS_objectIR constin_inRight,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @binaryOperationIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_binaryOperationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_binaryOperationIR (void) ;

//---
  public : inline const class cPtr_binaryOperationIR * ptr (void) const { return (const cPtr_binaryOperationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_binaryOperationIR extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_binaryOperationIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_PLMType & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  const class GALGAS_llvmBinaryOperation & inOperand3,
                                                                  const class GALGAS_objectIR & inOperand4,
                                                                  const class GALGAS_location & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_binaryOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mLeft (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mOperandType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_llvmBinaryOperation getter_mOperation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mRight (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binaryOperationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @binaryOperationIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_binaryOperationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_PLMType mProperty_mOperandType ;
  public : GALGAS_objectIR mProperty_mLeft ;
  public : GALGAS_llvmBinaryOperation mProperty_mOperation ;
  public : GALGAS_objectIR mProperty_mRight ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                   const GALGAS_PLMType & in_mOperandType,
                                   const GALGAS_objectIR & in_mLeft,
                                   const GALGAS_llvmBinaryOperation & in_mOperation,
                                   const GALGAS_objectIR & in_mRight,
                                   const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mOperandType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mLeft (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_llvmBinaryOperation getter_mOperation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mRight (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendShortCircuitAndOperation (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_objectIR constin_inTargetOperand,
                                                     const class GALGAS_objectIR constin_inLeftOperand,
                                                     const class GALGAS_instructionListIR constin_inLeftInstructionList,
                                                     const class GALGAS_objectIR constin_inRightOperand,
                                                     const class GALGAS_instructionListIR constin_inRightInstructionList,
                                                     const class GALGAS_location constin_inLocation,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @shortCircuitAndOperationIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_shortCircuitAndOperationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_shortCircuitAndOperationIR (void) ;

//---
  public : inline const class cPtr_shortCircuitAndOperationIR * ptr (void) const { return (const cPtr_shortCircuitAndOperationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_shortCircuitAndOperationIR (const cPtr_shortCircuitAndOperationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_shortCircuitAndOperationIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_shortCircuitAndOperationIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                           const class GALGAS_objectIR & inOperand1,
                                                                           const class GALGAS_instructionListIR & inOperand2,
                                                                           const class GALGAS_objectIR & inOperand3,
                                                                           const class GALGAS_instructionListIR & inOperand4,
                                                                           const class GALGAS_location & inOperand5
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_shortCircuitAndOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mLeftInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mRightInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mRightOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_shortCircuitAndOperationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @shortCircuitAndOperationIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_shortCircuitAndOperationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetOperand ;
  public : GALGAS_objectIR mProperty_mLeftOperand ;
  public : GALGAS_instructionListIR mProperty_mLeftInstructionList ;
  public : GALGAS_objectIR mProperty_mRightOperand ;
  public : GALGAS_instructionListIR mProperty_mRightInstructionList ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_shortCircuitAndOperationIR (const GALGAS_objectIR & in_mTargetOperand,
                                            const GALGAS_objectIR & in_mLeftOperand,
                                            const GALGAS_instructionListIR & in_mLeftInstructionList,
                                            const GALGAS_objectIR & in_mRightOperand,
                                            const GALGAS_instructionListIR & in_mRightInstructionList,
                                            const GALGAS_location & in_mLocation
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTargetOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mLeftOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mLeftInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mRightOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mRightInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension setter '@instructionListIR appendLoadVolatileRegisterWithSubscript'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegisterWithSubscript (class GALGAS_instructionListIR & ioObject,
                                                              const class GALGAS_objectIR constin_inTarget,
                                                              const class GALGAS_objectIR constin_inIndexResult,
                                                              const class GALGAS_bigint constin_inAddress,
                                                              const class GALGAS_bigint constin_inElementArraySize,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @loadRegisterWithSubscriptIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_loadRegisterWithSubscriptIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_loadRegisterWithSubscriptIR (void) ;

//---
  public : inline const class cPtr_loadRegisterWithSubscriptIR * ptr (void) const { return (const cPtr_loadRegisterWithSubscriptIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_loadRegisterWithSubscriptIR (const cPtr_loadRegisterWithSubscriptIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_loadRegisterWithSubscriptIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_loadRegisterWithSubscriptIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                            const class GALGAS_objectIR & inOperand1,
                                                                            const class GALGAS_bigint & inOperand2,
                                                                            const class GALGAS_bigint & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_loadRegisterWithSubscriptIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mElementArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loadRegisterWithSubscriptIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @loadRegisterWithSubscriptIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_loadRegisterWithSubscriptIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mIndexResult ;
  public : GALGAS_bigint mProperty_mRegisterAddress ;
  public : GALGAS_bigint mProperty_mElementArraySize ;

//--- Constructor
  public : cPtr_loadRegisterWithSubscriptIR (const GALGAS_objectIR & in_mTarget,
                                             const GALGAS_objectIR & in_mIndexResult,
                                             const GALGAS_bigint & in_mRegisterAddress,
                                             const GALGAS_bigint & in_mElementArraySize
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mElementArraySize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@instructionListIR appendComputeVolatileRegisterAddressWithSubscript'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (class GALGAS_instructionListIR & ioObject,
                                                                        const class GALGAS_objectIR constin_inTarget,
                                                                        const class GALGAS_objectIR constin_inIndexResult,
                                                                        const class GALGAS_bigint constin_inAddress,
                                                                        const class GALGAS_bigint constin_inElementArraySize,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @ComputeRegisterAddressWithSubscriptIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ComputeRegisterAddressWithSubscriptIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_ComputeRegisterAddressWithSubscriptIR (void) ;

//---
  public : inline const class cPtr_ComputeRegisterAddressWithSubscriptIR * ptr (void) const { return (const cPtr_ComputeRegisterAddressWithSubscriptIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ComputeRegisterAddressWithSubscriptIR (const cPtr_ComputeRegisterAddressWithSubscriptIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ComputeRegisterAddressWithSubscriptIR extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ComputeRegisterAddressWithSubscriptIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                                      const class GALGAS_objectIR & inOperand1,
                                                                                      const class GALGAS_bigint & inOperand2,
                                                                                      const class GALGAS_bigint & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ComputeRegisterAddressWithSubscriptIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mElementArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ComputeRegisterAddressWithSubscriptIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @ComputeRegisterAddressWithSubscriptIR class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ComputeRegisterAddressWithSubscriptIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mIndexResult ;
  public : GALGAS_bigint mProperty_mRegisterAddress ;
  public : GALGAS_bigint mProperty_mElementArraySize ;

//--- Constructor
  public : cPtr_ComputeRegisterAddressWithSubscriptIR (const GALGAS_objectIR & in_mTarget,
                                                       const GALGAS_objectIR & in_mIndexResult,
                                                       const GALGAS_bigint & in_mRegisterAddress,
                                                       const GALGAS_bigint & in_mElementArraySize
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mElementArraySize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendLoadVolatileRegister'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                 const class GALGAS_objectIR constin_inTargetValue,
                                                 const class GALGAS_bigint constin_inAddress,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @loadRegisterIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_loadRegisterIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_loadRegisterIR (void) ;

//---
  public : inline const class cPtr_loadRegisterIR * ptr (void) const { return (const cPtr_loadRegisterIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_loadRegisterIR (const cPtr_loadRegisterIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_loadRegisterIR extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_loadRegisterIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                               const class GALGAS_bigint & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_loadRegisterIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loadRegisterIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadRegisterIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @loadRegisterIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_loadRegisterIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetValue ;
  public : GALGAS_bigint mProperty_mRegisterAddress ;

//--- Constructor
  public : cPtr_loadRegisterIR (const GALGAS_objectIR & in_mTargetValue,
                                const GALGAS_bigint & in_mRegisterAddress
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mRegisterAddress (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadFromReference'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadFromReference (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_objectIR constin_inTargetValue,
                                              const class GALGAS_string constin_inLLVMName,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @loadFromReferenceIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_loadFromReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_loadFromReferenceIR (void) ;

//---
  public : inline const class cPtr_loadFromReferenceIR * ptr (void) const { return (const cPtr_loadFromReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_loadFromReferenceIR (const cPtr_loadFromReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_loadFromReferenceIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_loadFromReferenceIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_loadFromReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loadFromReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @loadFromReferenceIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_loadFromReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetValue ;
  public : GALGAS_string mProperty_mLLVMName ;

//--- Constructor
  public : cPtr_loadFromReferenceIR (const GALGAS_objectIR & in_mTargetValue,
                                     const GALGAS_string & in_mLLVMName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension setter '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (class GALGAS_instructionListIR & ioObject,
                                                                      const class GALGAS_string constin_inLLVMResultVarName,
                                                                      const class GALGAS_objectIR constin_inIndexIR,
                                                                      const class GALGAS_bigint constin_inAddress,
                                                                      const class GALGAS_uint constin_inElementSize,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @computeSubscriptedVolatileRegisterAddress class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_computeSubscriptedVolatileRegisterAddress : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_computeSubscriptedVolatileRegisterAddress (void) ;

//---
  public : inline const class cPtr_computeSubscriptedVolatileRegisterAddress * ptr (void) const { return (const cPtr_computeSubscriptedVolatileRegisterAddress *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computeSubscriptedVolatileRegisterAddress (const cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computeSubscriptedVolatileRegisterAddress extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computeSubscriptedVolatileRegisterAddress constructor_new (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_objectIR & inOperand1,
                                                                                          const class GALGAS_bigint & inOperand2,
                                                                                          const class GALGAS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mElementSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMResultVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mRegisterBaseAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computeSubscriptedVolatileRegisterAddress class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @computeSubscriptedVolatileRegisterAddress class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_computeSubscriptedVolatileRegisterAddress : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMResultVarName ;
  public : GALGAS_objectIR mProperty_mIndexResult ;
  public : GALGAS_bigint mProperty_mRegisterBaseAddress ;
  public : GALGAS_uint mProperty_mElementSize ;

//--- Constructor
  public : cPtr_computeSubscriptedVolatileRegisterAddress (const GALGAS_string & in_mLLVMResultVarName,
                                                           const GALGAS_objectIR & in_mIndexResult,
                                                           const GALGAS_bigint & in_mRegisterBaseAddress,
                                                           const GALGAS_uint & in_mElementSize
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMResultVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mRegisterBaseAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mElementSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendNoteGlobalVariableAccess'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendNoteGlobalVariableAccess (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_string constin_inGlobalVarName,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @noteGlobalVariableAccessIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_noteGlobalVariableAccessIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_noteGlobalVariableAccessIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_noteGlobalVariableAccessIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_noteGlobalVariableAccessIR * ptr (void) const { return (const cPtr_noteGlobalVariableAccessIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_noteGlobalVariableAccessIR (const cPtr_noteGlobalVariableAccessIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_noteGlobalVariableAccessIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_noteGlobalVariableAccessIR constructor_new (const class GALGAS_string & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_noteGlobalVariableAccessIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_noteGlobalVariableAccessIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_noteGlobalVariableAccessIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @noteGlobalVariableAccessIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_noteGlobalVariableAccessIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mGlobalVarName ;

//--- Constructor
  public : cPtr_noteGlobalVariableAccessIR (const GALGAS_string & in_mGlobalVarName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGlobalVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendStoreToUniversalReference'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreToUniversalReference (class GALGAS_instructionListIR & ioObject,
                                                      const class GALGAS_string constin_inLLVMVarName,
                                                      const class GALGAS_PLMType constin_inTargetVarType,
                                                      const class GALGAS_objectIR constin_inSourceValue,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @storeToUniversalReferenceIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storeToUniversalReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeToUniversalReferenceIR (void) ;

//---
  public : inline const class cPtr_storeToUniversalReferenceIR * ptr (void) const { return (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeToUniversalReferenceIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeToUniversalReferenceIR constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_PLMType & inOperand1,
                                                                            const class GALGAS_objectIR & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeToUniversalReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @storeToUniversalReferenceIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_storeToUniversalReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMVarName ;
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMVarName,
                                             const GALGAS_PLMType & in_mTargetVarType,
                                             const GALGAS_objectIR & in_mSourceValue
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@instructionListIR appendStoreIndirectVolatileRegister'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreIndirectVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_PLMType constin_inTargetVarType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_objectIR constin_inSourceValue,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @storeIndirectVolatileIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storeIndirectVolatileIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeIndirectVolatileIR (void) ;

//---
  public : inline const class cPtr_storeIndirectVolatileIR * ptr (void) const { return (const cPtr_storeIndirectVolatileIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeIndirectVolatileIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeIndirectVolatileIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeIndirectVolatileIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @storeIndirectVolatileIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_storeIndirectVolatileIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeIndirectVolatileIR (const GALGAS_PLMType & in_mTargetVarType,
                                         const GALGAS_string & in_mLLVMName,
                                         const GALGAS_objectIR & in_mSourceValue
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendStoreVolatileRegister'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                  const class GALGAS_PLMType constin_inTargetVarType,
                                                  const class GALGAS_bigint constin_inAddress,
                                                  const class GALGAS_objectIR constin_inSourceValue,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @storeVolatileIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storeVolatileIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeVolatileIR (void) ;

//---
  public : inline const class cPtr_storeVolatileIR * ptr (void) const { return (const cPtr_storeVolatileIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeVolatileIR (const cPtr_storeVolatileIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeVolatileIR extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeVolatileIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                const class GALGAS_bigint & inOperand1,
                                                                const class GALGAS_objectIR & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeVolatileIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeVolatileIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @storeVolatileIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_storeVolatileIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_bigint mProperty_mAddress ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeVolatileIR (const GALGAS_PLMType & in_mTargetVarType,
                                 const GALGAS_bigint & in_mAddress,
                                 const GALGAS_objectIR & in_mSourceValue
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendStoreLocalVariable'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreLocalVariable (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_string constin_inLocalVarName,
                                               const class GALGAS_PLMType constin_inTargetVarType,
                                               const class GALGAS_objectIR constin_inSourceValue,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @storeLocalVariableIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storeLocalVariableIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeLocalVariableIR (void) ;

//---
  public : inline const class cPtr_storeLocalVariableIR * ptr (void) const { return (const cPtr_storeLocalVariableIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeLocalVariableIR (const cPtr_storeLocalVariableIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeLocalVariableIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeLocalVariableIR constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_PLMType & inOperand1,
                                                                     const class GALGAS_objectIR & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeLocalVariableIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLocalVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeLocalVariableIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeLocalVariableIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @storeLocalVariableIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_storeLocalVariableIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLocalVarName ;
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeLocalVariableIR (const GALGAS_string & in_mLocalVarName,
                                      const GALGAS_PLMType & in_mTargetVarType,
                                      const GALGAS_objectIR & in_mSourceValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLocalVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension setter '@instructionListIR appendStoreTemporaryReference'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendStoreTemporaryReference (class GALGAS_instructionListIR & ioObject,
                                                    const class GALGAS_PLMType constin_inTargetVarType,
                                                    const class GALGAS_string constin_inLLVMName,
                                                    const class GALGAS_objectIR constin_inSourceValue,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @storeFromTemporaryReferenceIR class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_storeFromTemporaryReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_storeFromTemporaryReferenceIR (void) ;

//---
  public : inline const class cPtr_storeFromTemporaryReferenceIR * ptr (void) const { return (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_storeFromTemporaryReferenceIR extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_storeFromTemporaryReferenceIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_objectIR & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeFromTemporaryReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @storeFromTemporaryReferenceIR class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_storeFromTemporaryReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeFromTemporaryReferenceIR (const GALGAS_PLMType & in_mTargetVarType,
                                               const GALGAS_string & in_mLLVMName,
                                               const GALGAS_objectIR & in_mSourceValue
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadWhenReference'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendLoadWhenReference (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              const class GALGAS_objectIR constin_inSource,
                                              class GALGAS_objectIR & out_outResultingValue,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempValue (const class GALGAS_PLMType constinArgument0,
                              class GALGAS_semanticTemporariesStruct & ioArgument1,
                              class GALGAS_objectIR & outArgument2,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendCopyFromReferences'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendCopyFromReferences (class GALGAS_instructionListIR & ioObject,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GALGAS_location constin_inErrorLocation,
                                               const class GALGAS_objectIR constin_inSourcePossibleReference,
                                               const class GALGAS_LValueRepresentation constin_inTargetReference,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @copyFromReferencesIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_copyFromReferencesIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_copyFromReferencesIR (void) ;

//---
  public : inline const class cPtr_copyFromReferencesIR * ptr (void) const { return (const cPtr_copyFromReferencesIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_copyFromReferencesIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_copyFromReferencesIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_copyFromReferencesIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @copyFromReferencesIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_copyFromReferencesIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_string mProperty_mTargetLLVMName ;
  public : GALGAS_string mProperty_mSourceLLVMName ;

//--- Constructor
  public : cPtr_copyFromReferencesIR (const GALGAS_PLMType & in_mType,
                                      const GALGAS_string & in_mTargetLLVMName,
                                      const GALGAS_string & in_mSourceLLVMName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTargetLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSourceLLVMName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_objectIR function_checkAssignmentCompatibility (const class GALGAS_objectIR & constinArgument0,
                                                             const class GALGAS_PLMType & constinArgument1,
                                                             const class GALGAS_location & constinArgument2,
                                                             const class GALGAS_bool & constinArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@instructionListIR referenceFromPossibleValue'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_referenceFromPossibleValue (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_allocaList & io_ioAllocaList,
                                                 class GALGAS_objectIR & io_ioObjectIR,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@instructionListIR appendGetUniversalPropertyReference'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetUniversalPropertyReference (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_PLMType constin_inType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_PLMType constin_inElementType,
                                                          const class GALGAS_string constin_inElementLLVMName,
                                                          const class GALGAS_uint constin_inPropertyIndex,
                                                          const class GALGAS_string constin_inPropertyName,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @getUniversalPropertyReferenceIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getUniversalPropertyReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getUniversalPropertyReferenceIR (void) ;

//---
  public : inline const class cPtr_getUniversalPropertyReferenceIR * ptr (void) const { return (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getUniversalPropertyReferenceIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getUniversalPropertyReferenceIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_PLMType & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_uint & inOperand4,
                                                                                const class GALGAS_string & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @getUniversalPropertyReferenceIR class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_PLMType mProperty_mElementType ;
  public : GALGAS_string mProperty_mElementLLVMName ;
  public : GALGAS_uint mProperty_mPropertyIndex ;
  public : GALGAS_string mProperty_mPropertyName ;

//--- Constructor
  public : cPtr_getUniversalPropertyReferenceIR (const GALGAS_PLMType & in_mType,
                                                 const GALGAS_string & in_mLLVMName,
                                                 const GALGAS_PLMType & in_mElementType,
                                                 const GALGAS_string & in_mElementLLVMName,
                                                 const GALGAS_uint & in_mPropertyIndex,
                                                 const GALGAS_string & in_mPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension setter '@instructionListIR appendGetUniversalArrayElementReference'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetUniversalArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                              const class GALGAS_PLMType constin_inType,
                                                              const class GALGAS_string constin_inLLVMName,
                                                              const class GALGAS_PLMType constin_inElementType,
                                                              const class GALGAS_string constin_inElementLLVMName,
                                                              const class GALGAS_objectIR constin_inIndexIR,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @getUniversalArrayElementReferenceIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getUniversalArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getUniversalArrayElementReferenceIR (void) ;

//---
  public : inline const class cPtr_getUniversalArrayElementReferenceIR * ptr (void) const { return (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getUniversalArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getUniversalArrayElementReferenceIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_PLMType & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_objectIR & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalArrayElementReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @getUniversalArrayElementReferenceIR class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_PLMType mProperty_mElementType ;
  public : GALGAS_string mProperty_mElementLLVMName ;
  public : GALGAS_objectIR mProperty_mIndexIR ;

//--- Constructor
  public : cPtr_getUniversalArrayElementReferenceIR (const GALGAS_PLMType & in_mType,
                                                     const GALGAS_string & in_mLLVMName,
                                                     const GALGAS_PLMType & in_mElementType,
                                                     const GALGAS_string & in_mElementLLVMName,
                                                     const GALGAS_objectIR & in_mIndexIR
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendGetArrayElementReference'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendGetArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_objectIR constin_inTarget,
                                                     const class GALGAS_objectIR constin_inSource,
                                                     const class GALGAS_string constin_inElementIndex,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @getArrayElementReferenceIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_getArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_getArrayElementReferenceIR (void) ;

//---
  public : inline const class cPtr_getArrayElementReferenceIR * ptr (void) const { return (const cPtr_getArrayElementReferenceIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getArrayElementReferenceIR (const cPtr_getArrayElementReferenceIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getArrayElementReferenceIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                           const class GALGAS_objectIR & inOperand1,
                                                                           const class GALGAS_string & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getArrayElementReferenceIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @getArrayElementReferenceIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_getArrayElementReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mSource ;
  public : GALGAS_string mProperty_mElementIndex ;

//--- Constructor
  public : cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                            const GALGAS_objectIR & in_mSource,
                                            const GALGAS_string & in_mElementIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendSelectOperation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendSelectOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTargetValue,
                                            const class GALGAS_objectIR constin_in_5F_if_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_then_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_else_5F_variable,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @selectInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selectInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_selectInstructionIR (void) ;

//---
  public : inline const class cPtr_selectInstructionIR * ptr (void) const { return (const cPtr_selectInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1,
                                                                    const class GALGAS_objectIR & inOperand2,
                                                                    const class GALGAS_objectIR & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_else_5F_variable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_if_5F_variable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_m_5F_then_5F_variable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @selectInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selectInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetValue ;
  public : GALGAS_objectIR mProperty_m_5F_if_5F_variable ;
  public : GALGAS_objectIR mProperty_m_5F_then_5F_variable ;
  public : GALGAS_objectIR mProperty_m_5F_else_5F_variable ;

//--- Constructor
  public : cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                     const GALGAS_objectIR & in_m_5F_if_5F_variable,
                                     const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                     const GALGAS_objectIR & in_m_5F_else_5F_variable
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_if_5F_variable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_then_5F_variable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_m_5F_else_5F_variable (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@instructionListIR testArrayIndex'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_testArrayIndex (class GALGAS_instructionListIR & ioObject,
                                     const class GALGAS_objectIR constin_inIndex,
                                     const class GALGAS_location constin_inErrorLocation,
                                     const class GALGAS_bigint constin_inSize,
                                     class GALGAS_bool & out_outGeneratePanicInstruction,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @testArrayIndexIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_testArrayIndexIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_testArrayIndexIR (void) ;

//---
  public : inline const class cPtr_testArrayIndexIR * ptr (void) const { return (const cPtr_testArrayIndexIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_testArrayIndexIR (const cPtr_testArrayIndexIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_testArrayIndexIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_testArrayIndexIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                 const class GALGAS_location & inOperand1,
                                                                 const class GALGAS_bigint & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_testArrayIndexIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testArrayIndexIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @testArrayIndexIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_testArrayIndexIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mIndex ;
  public : GALGAS_location mProperty_mErrorLocation ;
  public : GALGAS_bigint mProperty_mSize ;

//--- Constructor
  public : cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                  const GALGAS_location & in_mErrorLocation,
                                  const GALGAS_bigint & in_mSize
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendUpperBoundCheck'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_appendUpperBoundCheck (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inSource,
                                            const class GALGAS_bigint constin_inUpperBoundPlusOne,
                                            const class GALGAS_uint constin_inPanicCode,
                                            const class GALGAS_location constin_inLocation,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @upperBoundCheckIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_upperBoundCheckIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_upperBoundCheckIR (void) ;

//---
  public : inline const class cPtr_upperBoundCheckIR * ptr (void) const { return (const cPtr_upperBoundCheckIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_upperBoundCheckIR (const cPtr_upperBoundCheckIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_upperBoundCheckIR extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_upperBoundCheckIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_bigint & inOperand1,
                                                                  const class GALGAS_uint & inOperand2,
                                                                  const class GALGAS_location & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_upperBoundCheckIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPanicCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mUpperBoundPlusOne (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_upperBoundCheckIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_upperBoundCheckIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @upperBoundCheckIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_upperBoundCheckIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mSource ;
  public : GALGAS_bigint mProperty_mUpperBoundPlusOne ;
  public : GALGAS_uint mProperty_mPanicCode ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_upperBoundCheckIR (const GALGAS_objectIR & in_mSource,
                                   const GALGAS_bigint & in_mUpperBoundPlusOne,
                                   const GALGAS_uint & in_mPanicCode,
                                   const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mUpperBoundPlusOne (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPanicCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sourceLocationIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sourceLocationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_sourceLocationIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sourceLocationIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sourceLocationIR * ptr (void) const { return (const cPtr_sourceLocationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sourceLocationIR (const cPtr_sourceLocationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sourceLocationIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sourceLocationIR constructor_new (const class GALGAS_location & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sourceLocationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSourceLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sourceLocationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @sourceLocationIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sourceLocationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mProperty_mSourceLocation ;

//--- Constructor
  public : cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSourceLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @accessibleEntities struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessibleEntities : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_stringset mProperty_mRoutineSet ;

  public : GALGAS_stringset mProperty_mGuardSet ;

  public : GALGAS_stringset mProperty_mSectionSet ;

  public : GALGAS_stringset mProperty_mGlobalVariableSet ;

  public : GALGAS_stringset mProperty_mTaskVariableSet ;

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
  public : GALGAS_accessibleEntities (const GALGAS_stringset & in_mRoutineSet,
                                      const GALGAS_stringset & in_mGuardSet,
                                      const GALGAS_stringset & in_mSectionSet,
                                      const GALGAS_stringset & in_mGlobalVariableSet,
                                      const GALGAS_stringset & in_mTaskVariableSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessibleEntities extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessibleEntities constructor_new (const class GALGAS_stringset & inOperand0,
                                                                   const class GALGAS_stringset & inOperand1,
                                                                   const class GALGAS_stringset & inOperand2,
                                                                   const class GALGAS_stringset & inOperand3,
                                                                   const class GALGAS_stringset & inOperand4
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
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mGlobalVariableSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mGuardSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRoutineSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSectionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mTaskVariableSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessibleEntities class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessibleEntities ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract extension method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                        class GALGAS_accessibleEntities & ioArgument0,
                                                                                        class GALGAS_uint & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@instructionListIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract extension method '@abstractGenerationIR generateLLVMcode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_abstractGenerationIR_generateLLVMcode) (const class cPtr_abstractGenerationIR * inObject,
                                                                                class GALGAS_string & ioArgument0,
                                                                                class GALGAS_generationAdds & ioArgument1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateLLVMcode (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractGenerationIR_generateLLVMcode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateLLVMcode (const class cPtr_abstractGenerationIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @orderedTypeList sorted list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedTypeList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_orderedTypeList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedTypeList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orderedTypeList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_orderedTypeList constructor_sortedListWithValue (const class GALGAS_PLMType & inOperand0,
                                                                                const class GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_orderedTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_PLMType & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_PLMType & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_PLMType & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_orderedTypeList ;
 
} ; // End of GALGAS_orderedTypeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_orderedTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_orderedTypeList (const GALGAS_orderedTypeList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_PLMType current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_orderedTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedTypeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @orderedTypeList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_PLMType mProperty_mType ;

  public : GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_orderedTypeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_orderedTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_orderedTypeList_2D_element (const GALGAS_PLMType & in_mType,
                                              const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orderedTypeList_2D_element constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orderedTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orderedTypeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedTypeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plm_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plm_5F_grammar : public cParser_plm_5F_syntax {
//------------------------------------- 'assignment_operator' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_operator_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_operator_ (GALGAS_infixOperator & outArgument0,
                                                    GALGAS_location & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_init' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_init_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_init_ (GALGAS_initList & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_type' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_type_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_type_ (const GALGAS_lstring inArgument0,
                                                 GALGAS_abstractDeclarationAST & outArgument1,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_effectiveArgumentListAST & outArgument0,
                                                     GALGAS_location & outArgument1,
                                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_access_5F_list_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_access_5F_list_ (GALGAS_primaryInExpressionAccessListAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_addition_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_addition_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_or_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_expressionAST & outArgument0,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_comparison_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_comparison_ (GALGAS_expressionAST & outArgument0,
                                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_equality_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_equality_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_if_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_if_ (GALGAS_ifExpressionAST & outArgument0,
                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_and_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_xor_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_product_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_product_ (GALGAS_expressionAST & outArgument0,
                                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_shift_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_shift_ (GALGAS_expressionAST & outArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function' non terminal
//--- 'parse' label
  public : virtual void nt_function_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_ (GALGAS_functionDeclarationListAST & ioArgument0,
                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_header_ (GALGAS_mode & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                GALGAS_lstringlist & outArgument2,
                                                GALGAS_routineFormalArgumentListAST & outArgument3,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public : virtual void nt_guard_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guard_ (GALGAS_guardDeclarationListAST & ioArgument0,
                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public : virtual void nt_guarded_5F_command_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guarded_5F_command_ (GALGAS_guardedCommandAST & outArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ifInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public : virtual void nt_import_5F_file_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_import_5F_file_ (GALGAS_lstringlist & ioArgument0,
                                            C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instructionListAST & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_instructionListAST & outArgument0,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'isr' non terminal
//--- 'parse' label
  public : virtual void nt_isr_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_ (GALGAS_isrDeclarationListAST & ioArgument0,
                                 const GALGAS_lstring inArgument1,
                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_ (GALGAS_LValueAST & outArgument0,
                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public : virtual void nt_mode_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                  C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'module_property' non terminal
//--- 'parse' label
  public : virtual void nt_module_5F_property_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_module_5F_property_ (GALGAS_modulePropertyListAST & ioArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_expressionAST & outArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_call_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_call_ (GALGAS_callInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_routineFormalArgumentListAST & outArgument0,
                                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'property_in_extension' non terminal
//--- 'parse' label
  public : virtual void nt_property_5F_in_5F_extension_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_property_5F_in_5F_extension_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_registerDeclaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_registerDeclaration_ (GALGAS_controlRegisterList & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                             GALGAS_lstringlist & outArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & ioArgument0,
                                                   GALGAS_lstringlist & outArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_ast & ioArgument0,
                                                     GALGAS_lstringlist & outArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'staticArrayProperty' non terminal
//--- 'parse' label
  public : virtual void nt_staticArrayProperty_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArrayProperty_ (GALGAS_staticListPropertyListAST & ioArgument0,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public : virtual void nt_staticArray_5F_exp_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArray_5F_exp_ (GALGAS_extendStaticListElementListAST & ioArgument0,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_struct_5F_property_5F_declaration_ (const GALGAS_bool inArgument0,
                                                               GALGAS_structurePropertyListAST & ioArgument1,
                                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_ (GALGAS_systemRoutineDeclarationListAST & ioArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'taskBody' non terminal
//--- 'parse' label
  public : virtual void nt_taskBody_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_taskBody_ (GALGAS_structurePropertyListAST & ioArgument0,
                                      GALGAS_functionDeclarationListAST & ioArgument1,
                                      GALGAS_taskSetupListAST & ioArgument2,
                                      GALGAS_syncInstructionBranchListAST & ioArgument3,
                                      C_Lexique_plm_5F_lexique * inCompiler) ;

  public : virtual int32_t select_plm_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_11 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_12 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_13 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_14 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_15 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_16 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_17 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_18 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_19 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_20 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_21 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_22 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_23 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_24 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_25 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_26 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_27 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_28 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_29 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_30 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_31 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_32 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_33 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_34 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_35 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_36 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_37 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_38 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_39 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_40 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_41 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_42 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_43 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_44 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_45 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_46 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_47 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_48 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_49 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_50 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_51 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_52 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_53 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_54 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_55 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_56 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_57 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_58 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_59 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_60 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_61 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_62 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_63 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_64 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_65 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_66 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_67 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_68 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_69 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_70 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_71 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_72 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_73 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_74 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_75 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_76 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_77 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_78 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_79 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_80 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_81 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_82 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_83 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_84 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_85 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_86 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_87 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_88 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_89 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_90 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
