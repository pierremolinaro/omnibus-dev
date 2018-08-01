#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis) (const class cPtr_abstractDecoratedDeclaration * inObject,
                                                                                        const class GALGAS_semanticContext constinArgument0,
                                                                                        class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                                        class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_semanticAnalysis (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_semanticAnalysis (const class cPtr_abstractDecoratedDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Abstract extension method '@abstractDecoratedDeclaration routineSemanticAnalysis'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDecoratedDeclaration_routineSemanticAnalysis) (const class cPtr_abstractDecoratedDeclaration * inObject,
                                                                                               const class GALGAS_semanticContext constinArgument0,
                                                                                               class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                                               class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_routineSemanticAnalysis (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDecoratedDeclaration_routineSemanticAnalysis inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_routineSemanticAnalysis (const class cPtr_abstractDecoratedDeclaration * inObject,
                                                  const GALGAS_semanticContext constin_inContext,
                                                  GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                  GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension method '@routineMapIR llvmCodeGeneration'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmCodeGeneration (const class GALGAS_routineMapIR inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_string & io_ioAssemblerCode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@routineMapIR-element llvmCodeGeneration'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_llvmCodeGeneration (const class GALGAS_routineMapIR_2D_element inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_string & io_ioAssemblerCode,
                                         const class GALGAS_generationContext constin_inGenerationContext,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension getter '@objectIR llvmName' (as function)                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectIR & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_literalCharacterArrayName (const class GALGAS_uint & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension getter '@objectIR llvmTypeName' (as function)                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_objectIR & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension getter '@objectIR type' (as function)                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_PLMType extensionGetter_type (const class GALGAS_objectIR & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_PLMType function_literalStringType (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension getter '@objectIR plmTypeDescriptionName' (as function)                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_plmTypeDescriptionName (const class GALGAS_objectIR & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension getter '@objectIR withType' (as function)                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_objectIR extensionGetter_withType (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_PLMType & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension getter '@objectIR name' (as function)                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_name (const class GALGAS_objectIR & inObject,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@globalConstantMapIR' map                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @globalConstantMapIR_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @generationListIR_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationListIR_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Extension setter '@instructionListIR appendNOP'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendNOP (class GALGAS_instructionListIR & ioObject,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @nopIR class                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Pointer class for @nopIR class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension setter '@instructionListIR appendExtend'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendExtend (class GALGAS_instructionListIR & ioObject,
                                   const class GALGAS_objectIR constin_inResult,
                                   const class GALGAS_objectIR constin_inSource,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @extendIR class                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Pointer class for @extendIR class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension setter '@instructionListIR appendTrunc'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendTrunc (class GALGAS_instructionListIR & ioObject,
                                  const class GALGAS_PLMType constin_inResultType,
                                  class GALGAS_objectIR & io_ioObject,
                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @truncIR class                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Pointer class for @truncIR class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getNewTempValue (const class GALGAS_PLMType constinArgument0,
                              class GALGAS_semanticTemporariesStruct & ioArgument1,
                              class GALGAS_objectIR & outArgument2,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension setter '@instructionListIR appendBoolToUInt'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendBoolToUInt (class GALGAS_instructionListIR & ioObject,
                                       const class GALGAS_objectIR constin_inUIntResult,
                                       const class GALGAS_objectIR constin_inBoolSource,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @boolToUIntIR class                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_boolToUIntIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_boolToUIntIR (void) ;

//---
  public : inline const class cPtr_boolToUIntIR * ptr (void) const { return (const cPtr_boolToUIntIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolToUIntIR (const cPtr_boolToUIntIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolToUIntIR extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boolToUIntIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                             const class GALGAS_objectIR & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolToUIntIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mBoolSource (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mUIntResult (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolToUIntIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Pointer class for @boolToUIntIR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_boolToUIntIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mUIntResult ;
  public : GALGAS_objectIR mProperty_mBoolSource ;

//--- Constructor
  public : cPtr_boolToUIntIR (const GALGAS_objectIR & in_mUIntResult,
                              const GALGAS_objectIR & in_mBoolSource
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mUIntResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mBoolSource (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension setter '@instructionListIR appendShiftLeft'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendShiftLeft (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_objectIR constin_inResult,
                                      const class GALGAS_objectIR constin_inSource,
                                      const class GALGAS_uint constin_inShiftAmount,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @leftShiftIR class                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Pointer class for @leftShiftIR class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLogicalShiftRight'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendLogicalShiftRight (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_objectIR & io_ioResult,
                                              const class GALGAS_uint constin_inShiftAmount,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @logicalRightShiftIR class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_logicalRightShiftIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_logicalRightShiftIR (void) ;

//---
  public : inline const class cPtr_logicalRightShiftIR * ptr (void) const { return (const cPtr_logicalRightShiftIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_logicalRightShiftIR (const cPtr_logicalRightShiftIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_logicalRightShiftIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_logicalRightShiftIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1,
                                                                    const class GALGAS_uint & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_logicalRightShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mShiftAmount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSource (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_logicalRightShiftIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @logicalRightShiftIR class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_logicalRightShiftIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_objectIR mProperty_mSource ;
  public : GALGAS_uint mProperty_mShiftAmount ;

//--- Constructor
  public : cPtr_logicalRightShiftIR (const GALGAS_objectIR & in_mResult,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadWhenReference'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendLoadWhenReference (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_objectIR & io_ioObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendBinaryOperation'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTarget,
                                            const class GALGAS_PLMType constin_inOperandType,
                                            const class GALGAS_location constin_inLocation,
                                            const class GALGAS_objectIR constin_inLeft,
                                            const class GALGAS_llvmBinaryOperation constin_inOperation,
                                            const class GALGAS_objectIR constin_inRight,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @binaryOperationIR class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @binaryOperationIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendShortCircuitAndOperation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendShortCircuitAndOperation (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_objectIR constin_inTargetOperand,
                                                     const class GALGAS_objectIR constin_inLeftOperand,
                                                     const class GALGAS_instructionListIR constin_inLeftInstructionList,
                                                     const class GALGAS_objectIR constin_inRightOperand,
                                                     const class GALGAS_instructionListIR constin_inRightInstructionList,
                                                     const class GALGAS_location constin_inLocation,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @shortCircuitAndOperationIR class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @shortCircuitAndOperationIR class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension setter '@instructionListIR appendLoadFromReference'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendLoadFromReference (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_objectIR constin_inTargetValue,
                                              const class GALGAS_string constin_inLLVMName,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @loadFromReferenceIR class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @loadFromReferenceIR class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendStoreToUniversalReference'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendStoreToUniversalReference (class GALGAS_instructionListIR & ioObject,
                                                      const class GALGAS_string constin_inLLVMVarName,
                                                      const class GALGAS_PLMType constin_inTargetVarType,
                                                      const class GALGAS_objectIR constin_inSourceValue,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @storeToUniversalReferenceIR class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMTargetVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_storeToUniversalReferenceIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @storeToUniversalReferenceIR class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_storeToUniversalReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMTargetVarName ;
  public : GALGAS_PLMType mProperty_mTargetVarType ;
  public : GALGAS_objectIR mProperty_mSourceValue ;

//--- Constructor
  public : cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                             const GALGAS_PLMType & in_mTargetVarType,
                                             const GALGAS_objectIR & in_mSourceValue
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension setter '@instructionListIR appendStoreTemporaryReference'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendStoreTemporaryReference (class GALGAS_instructionListIR & ioObject,
                                                    const class GALGAS_PLMType constin_inTargetVarType,
                                                    const class GALGAS_string constin_inLLVMName,
                                                    const class GALGAS_objectIR constin_inSourceValue,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @storeFromTemporaryReferenceIR class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @storeFromTemporaryReferenceIR class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension setter '@instructionListIR generateRelease'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_generateRelease (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_PLMType constin_inType,
                                      const class GALGAS_lstring constin_in_5F_plmName,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @releaseIR class                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_releaseIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_releaseIR (void) ;

//---
  public : inline const class cPtr_releaseIR * ptr (void) const { return (const cPtr_releaseIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_releaseIR (const cPtr_releaseIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_releaseIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_releaseIR constructor_new (const class GALGAS_PLMType & inOperand0,
                                                          const class GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_releaseIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPLMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_releaseIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Pointer class for @releaseIR class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_releaseIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_lstring mProperty_mPLMName ;

//--- Constructor
  public : cPtr_releaseIR (const GALGAS_PLMType & in_mType,
                           const GALGAS_lstring & in_mPLMName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPLMName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension setter '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (class GALGAS_instructionListIR & ioObject,
                                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                                      class GALGAS_string & out_outLLVMResultVarName,
                                                                      const class GALGAS_objectIR constin_inIndexIR,
                                                                      const class GALGAS_string constin_inAddressLLVMname,
                                                                      const class GALGAS_uint constin_inElementSize,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @computeSubscriptedVolatileRegisterAddress class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                                                                          const class GALGAS_string & inOperand2,
                                                                                          const class GALGAS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAddressLLVMname (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mElementSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMResultVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computeSubscriptedVolatileRegisterAddress class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @computeSubscriptedVolatileRegisterAddress class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_computeSubscriptedVolatileRegisterAddress : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMResultVarName ;
  public : GALGAS_objectIR mProperty_mIndexResult ;
  public : GALGAS_string mProperty_mAddressLLVMname ;
  public : GALGAS_uint mProperty_mElementSize ;

//--- Constructor
  public : cPtr_computeSubscriptedVolatileRegisterAddress (const GALGAS_string & in_mLLVMResultVarName,
                                                           const GALGAS_objectIR & in_mIndexResult,
                                                           const GALGAS_string & in_mAddressLLVMname,
                                                           const GALGAS_uint & in_mElementSize
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMResultVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mAddressLLVMname (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mElementSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension setter '@semanticTemporariesStruct newTempLLVMVar'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_newTempLLVMVar (class GALGAS_semanticTemporariesStruct & ioObject,
                                     class GALGAS_string & out_outTempLLVMVar,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension setter '@instructionListIR appendEnterRegisterAddress'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendEnterRegisterAddress (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_string & out_out_5F_llvmName,
                                                 const class GALGAS_bigint constin_inBaseAddress,
                                                 const class GALGAS_bigint constin_inAddressOffset,
                                                 const class GALGAS_string constin_inRegisterName,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enterRegisterAddressIR class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_enterRegisterAddressIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_enterRegisterAddressIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enterRegisterAddressIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enterRegisterAddressIR * ptr (void) const { return (const cPtr_enterRegisterAddressIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enterRegisterAddressIR (const cPtr_enterRegisterAddressIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enterRegisterAddressIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enterRegisterAddressIR constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_bigint & inOperand1,
                                                                       const class GALGAS_bigint & inOperand2,
                                                                       const class GALGAS_string & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enterRegisterAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAddressOffset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mBaseAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enterRegisterAddressIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @enterRegisterAddressIR class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enterRegisterAddressIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_bigint mProperty_mBaseAddress ;
  public : GALGAS_bigint mProperty_mAddressOffset ;
  public : GALGAS_string mProperty_mRegisterName ;

//--- Constructor
  public : cPtr_enterRegisterAddressIR (const GALGAS_string & in_mLLVMName,
                                        const GALGAS_bigint & in_mBaseAddress,
                                        const GALGAS_bigint & in_mAddressOffset,
                                        const GALGAS_string & in_mRegisterName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mBaseAddress (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bigint getter_mAddressOffset (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mRegisterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension setter '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (class GALGAS_instructionListIR & ioObject,
                                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                                 class GALGAS_string & out_out_5F_llvmName,
                                                                 const class GALGAS_string constin_inGroupName,
                                                                 const class GALGAS_uint constin_inGroupSize,
                                                                 const class GALGAS_objectIR constin_inIndexIR,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @enterRegisterGroupSubscriptedAddressIR class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_enterRegisterGroupSubscriptedAddressIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_enterRegisterGroupSubscriptedAddressIR (void) ;

//---
  public : inline const class cPtr_enterRegisterGroupSubscriptedAddressIR * ptr (void) const { return (const cPtr_enterRegisterGroupSubscriptedAddressIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enterRegisterGroupSubscriptedAddressIR (const cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enterRegisterGroupSubscriptedAddressIR extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enterRegisterGroupSubscriptedAddressIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_uint & inOperand2,
                                                                                       const class GALGAS_objectIR & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mGroupSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enterRegisterGroupSubscriptedAddressIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @enterRegisterGroupSubscriptedAddressIR class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_enterRegisterGroupSubscriptedAddressIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_string mProperty_mGroupName ;
  public : GALGAS_uint mProperty_mGroupSize ;
  public : GALGAS_objectIR mProperty_mIndexIR ;

//--- Constructor
  public : cPtr_enterRegisterGroupSubscriptedAddressIR (const GALGAS_string & in_mLLVMName,
                                                        const GALGAS_string & in_mGroupName,
                                                        const GALGAS_uint & in_mGroupSize,
                                                        const GALGAS_objectIR & in_mIndexIR
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGroupName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mGroupSize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndexIR (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension setter '@instructionListIR appendLoadIndirectVolatileRegister'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendLoadIndirectVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                         const class GALGAS_objectIR constin_inTargetValue,
                                                         const class GALGAS_string constin_inLLVMName,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @loadIndirectVolatileIR class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_loadIndirectVolatileIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_loadIndirectVolatileIR (void) ;

//---
  public : inline const class cPtr_loadIndirectVolatileIR * ptr (void) const { return (const cPtr_loadIndirectVolatileIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_loadIndirectVolatileIR (const cPtr_loadIndirectVolatileIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_loadIndirectVolatileIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_loadIndirectVolatileIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                       const class GALGAS_string & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_loadIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTargetValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loadIndirectVolatileIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @loadIndirectVolatileIR class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_loadIndirectVolatileIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTargetValue ;
  public : GALGAS_string mProperty_mLLVMName ;

//--- Constructor
  public : cPtr_loadIndirectVolatileIR (const GALGAS_objectIR & in_mTargetValue,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension setter '@instructionListIR appendStoreIndirectVolatileRegister'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendStoreIndirectVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_PLMType constin_inTargetVarType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_objectIR constin_inSourceValue,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @storeIndirectVolatileIR class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @storeIndirectVolatileIR class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension setter '@instructionListIR appendCopyFromReferences'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendCopyFromReferences (class GALGAS_instructionListIR & ioObject,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GALGAS_location constin_inErrorLocation,
                                               const class GALGAS_objectIR constin_inSourcePossibleReference,
                                               const class GALGAS_LValueRepresentation constin_inTargetReference,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @copyFromReferencesIR class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @copyFromReferencesIR class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_objectIR function_checkAssignmentCompatibility (const class GALGAS_objectIR & constinArgument0,
                                                             const class GALGAS_PLMType & constinArgument1,
                                                             const class GALGAS_location & constinArgument2,
                                                             const class GALGAS_bool & constinArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @LValueRepresentation struct                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_PLMType mProperty_type ;

  public : GALGAS_string mProperty_llvmName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_LValueRepresentation (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_LValueRepresentation (void) ;

//--------------------------------- Native constructor
  public : GALGAS_LValueRepresentation (const GALGAS_PLMType & in_type,
                                        const GALGAS_string & in_llvmName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_LValueRepresentation extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_LValueRepresentation constructor_new (const class GALGAS_PLMType & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_LValueRepresentation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_llvmName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_type (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_LValueRepresentation class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension setter '@instructionListIR referenceFromPossibleValue'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_referenceFromPossibleValue (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_allocaList & io_ioAllocaList,
                                                 class GALGAS_objectIR & io_ioObjectIR,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_llvmNameForLocalVariable (const class GALGAS_string & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension setter '@instructionListIR appendGetUniversalPropertyReference'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendGetUniversalPropertyReference (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_PLMType constin_inType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_string constin_inElementLLVMName,
                                                          const class GALGAS_uint constin_inPropertyIndex,
                                                          const class GALGAS_string constin_inPropertyName,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @getUniversalPropertyReferenceIR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_uint & inOperand3,
                                                                                const class GALGAS_string & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @getUniversalPropertyReferenceIR class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_string mProperty_mLLVMName ;
  public : GALGAS_string mProperty_mElementLLVMName ;
  public : GALGAS_uint mProperty_mPropertyIndex ;
  public : GALGAS_string mProperty_mPropertyName ;

//--- Constructor
  public : cPtr_getUniversalPropertyReferenceIR (const GALGAS_PLMType & in_mType,
                                                 const GALGAS_string & in_mLLVMName,
                                                 const GALGAS_string & in_mElementLLVMName,
                                                 const GALGAS_uint & in_mPropertyIndex,
                                                 const GALGAS_string & in_mPropertyName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementLLVMName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension setter '@instructionListIR appendGetUniversalArrayElementReference'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendGetUniversalArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                              const class GALGAS_PLMType constin_inType,
                                                              const class GALGAS_string constin_inLLVMName,
                                                              const class GALGAS_PLMType constin_inElementType,
                                                              const class GALGAS_string constin_inElementLLVMName,
                                                              const class GALGAS_objectIR constin_inIndexIR,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @getUniversalArrayElementReferenceIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @getUniversalArrayElementReferenceIR class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension setter '@instructionListIR appendGetArrayElementReference'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendGetArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GALGAS_objectIR constin_inArrayIR,
                                                     const class GALGAS_objectIR constin_inIndexIR,
                                                     class GALGAS_objectIR & out_outElementPtr,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @getArrayElementReferenceIR class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                                                           const class GALGAS_objectIR & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getArrayElementReferenceIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @getArrayElementReferenceIR class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_getArrayElementReferenceIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mArray ;
  public : GALGAS_objectIR mProperty_mIndex ;

//--- Constructor
  public : cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                            const GALGAS_objectIR & in_mArray,
                                            const GALGAS_objectIR & in_mIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mArray (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendSelectOperation'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendSelectOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTargetValue,
                                            const class GALGAS_objectIR constin_in_5F_if_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_then_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_else_5F_variable,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @selectInstructionIR class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @selectInstructionIR class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension setter '@instructionListIR testArrayIndex'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_testArrayIndex (class GALGAS_instructionListIR & ioObject,
                                     const class GALGAS_objectIR constin_inIndex,
                                     const class GALGAS_location constin_inErrorLocation,
                                     const class GALGAS_bigint constin_inSize,
                                     class GALGAS_bool & out_outGeneratePanicInstruction,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @testArrayIndexIR class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Pointer class for @testArrayIndexIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension setter '@instructionListIR appendUpperBoundCheck'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_appendUpperBoundCheck (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inSource,
                                            const class GALGAS_bigint constin_inUpperBoundPlusOne,
                                            const class GALGAS_uint constin_inPanicCode,
                                            const class GALGAS_location constin_inLocation,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @upperBoundCheckIR class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_upperBoundCheckIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Pointer class for @upperBoundCheckIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @sourceLocationIR class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Pointer class for @sourceLocationIR class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @accessibleEntities struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessibleEntities ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities) (const class cPtr_abstractInstructionIR * inObject,
                                                                                        class GALGAS_accessibleEntities & ioArgument0,
                                                                                        class GALGAS_uint & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractInstructionIR_enterAccessibleEntities inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterAccessibleEntities (const class cPtr_abstractInstructionIR * inObject,
                                                  GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@instructionListIR enterAccessibleEntities'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@abstractGenerationIR generateLLVMcode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractGenerationIR_generateLLVMcode) (const class cPtr_abstractGenerationIR * inObject,
                                                                                class GALGAS_string & ioArgument0,
                                                                                class GALGAS_generationAdds & ioArgument1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateLLVMcode (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractGenerationIR_generateLLVMcode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateLLVMcode (const class cPtr_abstractGenerationIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  GRAMMAR plm_grammar
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cGrammar_plm_5F_grammar : public cParser_plm_5F_syntax {
//------------------------------------- 'assignment_combined_with_operator' non terminal
//--- 'parse' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (GALGAS_infixOperator & outArgument0,
                                                                        GALGAS_location & outArgument1,
                                                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'control_register_lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_control_5F_register_5F_lvalue_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_control_5F_register_5F_lvalue_ (GALGAS_ast & ioArgument0,
                                                           GALGAS_controlRegisterLValueAST & outArgument1,
                                                           C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_boot' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_boot_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_boot_ (GALGAS_ast & ioArgument0,
                                                 const GALGAS_lstring inArgument1,
                                                 const GALGAS_lstringlist inArgument2,
                                                 GALGAS_bootAST & outArgument3,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_startup' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_startup_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_startup_ (GALGAS_ast & ioArgument0,
                                                    const GALGAS_lstring inArgument1,
                                                    const GALGAS_lstringlist inArgument2,
                                                    GALGAS_startupAST & outArgument3,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'driver_property' non terminal
//--- 'parse' label
  public : virtual void nt_driver_5F_property_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_driver_5F_property_ (GALGAS_ast & ioArgument0,
                                                GALGAS_driverPropertyListAST & ioArgument1,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public : virtual void nt_effective_5F_parameters_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_effective_5F_parameters_ (GALGAS_ast & ioArgument0,
                                                     GALGAS_effectiveArgumentListAST & outArgument1,
                                                     GALGAS_location & outArgument2,
                                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_ast & ioArgument0,
                                        GALGAS_expressionAST & outArgument1,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_access_5F_list_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_access_5F_list_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_addition_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_addition_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_or_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_comparison_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_comparison_ (GALGAS_ast & ioArgument0,
                                                      GALGAS_expressionAST & outArgument1,
                                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_equality_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_equality_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_expressionAST & outArgument1,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_if_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_if_ (GALGAS_ast & ioArgument0,
                                              GALGAS_ifExpressionAST & outArgument1,
                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_and_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_and_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_xor' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_logical_5F_xor_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_logical_5F_xor_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_expressionAST & outArgument1,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_product_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_product_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_expressionAST & outArgument1,
                                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public : virtual void nt_expression_5F_shift_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_5F_shift_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_expressionAST & outArgument1,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function' non terminal
//--- 'parse' label
  public : virtual void nt_function_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_ (GALGAS_ast & ioArgument0,
                                      GALGAS_functionDeclarationListAST & ioArgument1,
                                      C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public : virtual void nt_function_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_function_5F_header_ (GALGAS_ast & ioArgument0,
                                                GALGAS_mode & outArgument1,
                                                GALGAS_lstring & outArgument2,
                                                GALGAS_lstringlist & outArgument3,
                                                GALGAS_routineFormalArgumentListAST & outArgument4,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public : virtual void nt_guard_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guard_ (GALGAS_ast & ioArgument0,
                                   GALGAS_guardDeclarationListAST & ioArgument1,
                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public : virtual void nt_guarded_5F_command_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_guarded_5F_command_ (GALGAS_ast & ioArgument0,
                                                GALGAS_guardedCommandAST & outArgument1,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ast & ioArgument0,
                                               GALGAS_ifInstructionAST & outArgument1,
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
  public : virtual void nt_instruction_ (GALGAS_ast & ioArgument0,
                                         GALGAS_instructionListAST & ioArgument1,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_ast & ioArgument0,
                                             GALGAS_instructionListAST & outArgument1,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'isr' non terminal
//--- 'parse' label
  public : virtual void nt_isr_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_isr_ (GALGAS_ast & ioArgument0,
                                 const GALGAS_lstring inArgument1,
                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public : virtual void nt_lvalue_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_lvalue_ (GALGAS_ast & ioArgument0,
                                    GALGAS_LValueAST & outArgument1,
                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public : virtual void nt_mode_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                  C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_ast & ioArgument0,
                                     GALGAS_expressionAST & outArgument1,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                                          const GALGAS_bool inArgument2,
                                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                          GALGAS_structurePropertyListAST & ioArgument1,
                                                                          const GALGAS_bool inArgument2,
                                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_call_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_call_ (GALGAS_ast & ioArgument0,
                                               GALGAS_callInstructionAST & outArgument1,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_routineFormalArgumentListAST & outArgument1,
                                                              C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_input_formal_arguments' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                                       GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                       C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_registerDeclaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_registerDeclaration_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_controlRegisterNameListAST & ioArgument1,
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
  public : virtual void nt_staticArrayProperty_ (GALGAS_ast & ioArgument0,
                                                 GALGAS_staticListPropertyListAST & ioArgument1,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public : virtual void nt_staticArray_5F_exp_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_staticArray_5F_exp_ (GALGAS_ast & ioArgument0,
                                                GALGAS_extendStaticListElementListAST & ioArgument1,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_struct_5F_property_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                               const GALGAS_bool inArgument1,
                                                               GALGAS_structurePropertyListAST & ioArgument2,
                                                               const GALGAS_bool inArgument3,
                                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'structure_function' non terminal
//--- 'parse' label
  public : virtual void nt_structure_5F_function_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_structure_5F_function_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_functionDeclarationListAST & ioArgument1,
                                                   C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_ (GALGAS_ast & ioArgument0,
                                               GALGAS_systemRoutineDeclarationListAST & ioArgument1,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine_prefix' non terminal
//--- 'parse' label
  public : virtual void nt_system_5F_routine_5F_prefix_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_system_5F_routine_5F_prefix_ (GALGAS_bool & outArgument0,
                                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
  public : virtual void nt_type_5F_definition_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_type_5F_definition_ (GALGAS_ast & ioArgument0,
                                                GALGAS_lstring & outArgument1,
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

  public : virtual int32_t select_plm_5F_syntax_91 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_92 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_93 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_94 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_95 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_96 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_97 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_98 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_99 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_100 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_101 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_102 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_103 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_104 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_105 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_106 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_107 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_108 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_109 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_110 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_111 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_112 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_113 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_114 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_115 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_116 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_plm_5F_syntax_117 (C_Lexique_plm_5F_lexique *) ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
