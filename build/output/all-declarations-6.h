#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertLocalConstant'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_insertLocalConstant) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_PLMType constinArgument1,
                                                                                                 const class GALGAS_lstring constinArgument2,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalValuedObjectMapForContext_insertLocalConstant inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (class cPtr_universalValuedObjectMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_PLMType constin_inType,
                                              const GALGAS_lstring constin_inPLMConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertGlobalVariable'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalVariable) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                  const class GALGAS_PLMType constinArgument1,
                                                                                                  const class GALGAS_bool constinArgument2,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (class cPtr_universalValuedObjectMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_PLMType constin_inType,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertLocalVariable'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_insertLocalVariable) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_PLMType constinArgument1,
                                                                                                 const class GALGAS_lstring constinArgument2,
                                                                                                 const class GALGAS_valuedObjectState constinArgument3,
                                                                                                 const class GALGAS_bool constinArgument4,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalVariable (const int32_t inClassIndex,
                                               extensionSetterSignature_universalValuedObjectMapForContext_insertLocalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalVariable (class cPtr_universalValuedObjectMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalVariableName,
                                              const GALGAS_PLMType constin_inType,
                                              const GALGAS_lstring constin_inPLMName,
                                              const GALGAS_valuedObjectState constin_inVariableInitialState,
                                              const GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@universalValuedObjectMapForContext searchValuedObject'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObject) (const class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                const class GALGAS_lstring constinArgument0,
                                                                                                class GALGAS_objectIR & outArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchValuedObject (const int32_t inClassIndex,
                                              extensionMethodSignature_universalValuedObjectMapForContext_searchValuedObject inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchValuedObject (const class cPtr_universalValuedObjectMapForContext * inObject,
                                             const GALGAS_lstring constin_inValuedObjectName,
                                             GALGAS_objectIR & out_outObjectIR,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalValuedObjectMapForContext searchValuedObjectForReadAccess'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadAccess) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                                             class GALGAS_objectIR & outArgument1,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadAccess (const int32_t inClassIndex,
                                                           extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadAccess (class cPtr_universalValuedObjectMapForContext * inObject,
                                                          const GALGAS_lstring constin_inValuedObjectName,
                                                          GALGAS_objectIR & out_outObjectIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalValuedObjectMapForContext searchValuedObjectForWriteAccess'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                              const class GALGAS_lstring constinArgument0,
                                                                                                              class GALGAS_objectIR & outArgument1,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForWriteAccess (const int32_t inClassIndex,
                                                            extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForWriteAccess (class cPtr_universalValuedObjectMapForContext * inObject,
                                                           const GALGAS_lstring constin_inValuedObjectName,
                                                           GALGAS_objectIR & out_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Extension setter '@universalValuedObjectMapForContext searchValuedObjectForReadWriteAccess'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                                  class GALGAS_objectIR & outArgument1,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadWriteAccess (const int32_t inClassIndex,
                                                                extensionSetterSignature_universalValuedObjectMapForContext_searchValuedObjectForReadWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadWriteAccess (class cPtr_universalValuedObjectMapForContext * inObject,
                                                               const GALGAS_lstring constin_inValuedObjectName,
                                                               GALGAS_objectIR & out_outObjectIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalValuedObjectMapForContext openOverrideForSelectBlock'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForSelectBlock) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForSelectBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForSelectBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForSelectBlock (class cPtr_universalValuedObjectMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalValuedObjectMapForContext openOverrideForRepeatBlock'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForRepeatBlock) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForRepeatBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalValuedObjectMapForContext_openOverrideForRepeatBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForRepeatBlock (class cPtr_universalValuedObjectMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMapForContext closeOverride'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalValuedObjectMapForContext_closeOverride) (class cPtr_universalValuedObjectMapForContext * inObject,
                                                                                           const class GALGAS_location constinArgument0,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeOverride (const int32_t inClassIndex,
                                         extensionSetterSignature_universalValuedObjectMapForContext_closeOverride inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeOverride (class cPtr_universalValuedObjectMapForContext * inObject,
                                        const GALGAS_location constin_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension getter '@PLMType constructorMap' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorMap extensionGetter_constructorMap (const class GALGAS_PLMType & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@PLMType equatable' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_equatable (const class GALGAS_PLMType & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@unifiedTypeMap-proxy instanciable' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_instanciable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@PLMType instanciable' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_instanciable (const class GALGAS_PLMType & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@unifiedTypeMap-proxy copyable' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_copyable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@PLMType copyable' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_copyable (const class GALGAS_PLMType & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension getter '@PLMType classConstantMap' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constantMap extensionGetter_classConstantMap (const class GALGAS_PLMType & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'staticIntegerTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@PLMType descriptionForHTMLFile' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_descriptionForHTMLFile (const class GALGAS_PLMType & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension setter '@semanticTemporariesStruct newTempLLVMVar'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_newTempLLVMVar (class GALGAS_semanticTemporariesStruct & ioObject,
                                     class GALGAS_string & out_outTempLLVMVar,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation) (const class cPtr_binaryOperationIR * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          const class GALGAS_bigint constinArgument1,
                                                                                          class GALGAS_string & ioArgument2,
                                                                                          const class GALGAS_generationContext constinArgument3,
                                                                                          class GALGAS_generationAdds & ioArgument4,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForOverflowOperation (const class cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) (const class cPtr_binaryOperationIR * inObject,
                                                                                                     const class GALGAS_string constinArgument0,
                                                                                                     const class GALGAS_bigint constinArgument1,
                                                                                                     class GALGAS_string & ioArgument2,
                                                                                                     const class GALGAS_generationContext constinArgument3,
                                                                                                     class GALGAS_generationAdds & ioArgument4,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const class cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @staticRoutineCallIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticRoutineCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_staticRoutineCallIR (void) ;

//---
  public : inline const class cPtr_staticRoutineCallIR * ptr (void) const { return (const cPtr_staticRoutineCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_staticRoutineCallIR (const cPtr_staticRoutineCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticRoutineCallIR constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_calleeKindIR & inOperand4,
                                                                    const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_calleeKindIR getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticRoutineCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticRoutineCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @staticRoutineCallIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_staticRoutineCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_lstring mProperty_mFunctionMangledName ;
  public : GALGAS_lstring mProperty_mFunctionNameForGeneration ;
  public : GALGAS_calleeKindIR mProperty_mKind ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_staticRoutineCallIR (const GALGAS_string & in_mGlobalVariableName,
                                     const GALGAS_objectIR & in_mResult,
                                     const GALGAS_lstring & in_mFunctionMangledName,
                                     const GALGAS_lstring & in_mFunctionNameForGeneration,
                                     const GALGAS_calleeKindIR & in_mKind,
                                     const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionMangledName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionNameForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_calleeKindIR getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @indirectRoutineCallIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_indirectRoutineCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_indirectRoutineCallIR (void) ;

//---
  public : inline const class cPtr_indirectRoutineCallIR * ptr (void) const { return (const cPtr_indirectRoutineCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_indirectRoutineCallIR (const cPtr_indirectRoutineCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_indirectRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_indirectRoutineCallIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                      const class GALGAS_PLMType & inOperand1,
                                                                      const class GALGAS_objectIR & inOperand2,
                                                                      const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_indirectRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mFunctionPointer (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mFunctionType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_indirectRoutineCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indirectRoutineCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @indirectRoutineCallIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_indirectRoutineCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mFunctionPointer ;
  public : GALGAS_PLMType mProperty_mFunctionType ;
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_indirectRoutineCallIR (const GALGAS_objectIR & in_mFunctionPointer,
                                       const GALGAS_PLMType & in_mFunctionType,
                                       const GALGAS_objectIR & in_mResult,
                                       const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mFunctionPointer (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mFunctionType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR getter_mArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@PLMType generateCopyRoutine'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateCopyRoutine (const class GALGAS_PLMType inObject,
                                          class GALGAS_string & io_ioLLVMCode,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_routineMapIR_2D_element inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

