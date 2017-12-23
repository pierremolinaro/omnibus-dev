#pragma once

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @forInstructionOnArrayIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionOnArrayIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forInstructionOnArrayIR (void) ;

//---
  public : inline const class cPtr_forInstructionOnArrayIR * ptr (void) const { return (const cPtr_forInstructionOnArrayIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionOnArrayIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forInstructionOnArrayIR constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        const class GALGAS_instructionListIR & inOperand3,
                                                                        const class GALGAS_objectIR & inOperand4,
                                                                        const class GALGAS_instructionListIR & inOperand5,
                                                                        const class GALGAS_PLMType & inOperand6,
                                                                        const class GALGAS_uint & inOperand7,
                                                                        const class GALGAS_stringset & inOperand8
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionOnArrayIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mEnumeratedValueName ;
  public : GALGAS_lstring mProperty_mIteratedObjectName ;
  public : GALGAS_objectIR mProperty_mIteratedObject ;
  public : GALGAS_instructionListIR mProperty_mWhileInstructionList ;
  public : GALGAS_objectIR mProperty_mWhileExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mDoInstructionList ;
  public : GALGAS_PLMType mProperty_mElementType ;
  public : GALGAS_uint mProperty_mArraySize ;
  public : GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public : cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                         const GALGAS_lstring & in_mIteratedObjectName,
                                         const GALGAS_objectIR & in_mIteratedObject,
                                         const GALGAS_instructionListIR & in_mWhileInstructionList,
                                         const GALGAS_objectIR & in_mWhileExpressionResult,
                                         const GALGAS_instructionListIR & in_mDoInstructionList,
                                         const GALGAS_PLMType & in_mElementType,
                                         const GALGAS_uint & in_mArraySize,
                                         const GALGAS_stringset & in_mInvokedFunctionSet
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratedValueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObjectName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mWhileExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mElementType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionIR (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionIR * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_PLMType & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                const class GALGAS_objectIR & inOperand4,
                                                                                const class GALGAS_objectIR & inOperand5,
                                                                                const class GALGAS_instructionListIR & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mLowerExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUnsigned (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mUpperExpressionResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mVarName ;
  public : GALGAS_PLMType mProperty_mType ;
  public : GALGAS_bool mProperty_mUnsigned ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_objectIR mProperty_mLowerExpressionResult ;
  public : GALGAS_objectIR mProperty_mUpperExpressionResult ;
  public : GALGAS_instructionListIR mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                 const GALGAS_PLMType & in_mType,
                                                 const GALGAS_bool & in_mUnsigned,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_objectIR & in_mLowerExpressionResult,
                                                 const GALGAS_objectIR & in_mUpperExpressionResult,
                                                 const GALGAS_instructionListIR & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_PLMType getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUnsigned (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mLowerExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mUpperExpressionResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@LValueAST analyzeLValue'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeLValue (const class GALGAS_LValueAST inObject,
                                    const class GALGAS_PLMType constin_inSelfType,
                                    const class GALGAS_bool constin_inIsReadAccess,
                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                    const class GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                    const class GALGAS_semanticContext constin_inContext,
                                    const class GALGAS_mode constin_inMode,
                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                    class GALGAS_allocaList & io_ioAllocaList,
                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                    class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeControlRegisterInLValue'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeControlRegisterInLValue (const class GALGAS_PLMType constinArgument0,
                                             const class GALGAS_routineAttributes constinArgument1,
                                             const class GALGAS_lstring constinArgument2,
                                             const class GALGAS_semanticContext constinArgument3,
                                             const class GALGAS_mode constinArgument4,
                                             class GALGAS_semanticTemporariesStruct & ioArgument5,
                                             class GALGAS_staticStringMap & ioArgument6,
                                             class GALGAS_universalValuedObjectMap & ioArgument7,
                                             class GALGAS_allocaList & ioArgument8,
                                             class GALGAS_instructionListIR & ioArgument9,
                                             const class GALGAS_lstring constinArgument10,
                                             const class GALGAS_controlRegisterMap constinArgument11,
                                             const class GALGAS_accessInAssignmentListAST constinArgument12,
                                             class GALGAS_LValueRepresentation & outArgument13,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAssignmentTarget (const class GALGAS_PLMType constinArgument0,
                                          const class GALGAS_routineAttributes constinArgument1,
                                          const class GALGAS_lstring constinArgument2,
                                          const class GALGAS_semanticContext constinArgument3,
                                          const class GALGAS_mode constinArgument4,
                                          class GALGAS_semanticTemporariesStruct & ioArgument5,
                                          class GALGAS_staticStringMap & ioArgument6,
                                          class GALGAS_universalValuedObjectMap & ioArgument7,
                                          class GALGAS_allocaList & ioArgument8,
                                          class GALGAS_instructionListIR & ioArgument9,
                                          const class GALGAS_location constinArgument10,
                                          const class GALGAS_accessInAssignmentListAST constinArgument11,
                                          class GALGAS_LValueRepresentation & outArgument12,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableInLValue (const class GALGAS_PLMType constinArgument0,
                                      const class GALGAS_bool constinArgument1,
                                      const class GALGAS_routineAttributes constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_semanticContext constinArgument4,
                                      const class GALGAS_mode constinArgument5,
                                      class GALGAS_semanticTemporariesStruct & ioArgument6,
                                      class GALGAS_staticStringMap & ioArgument7,
                                      class GALGAS_universalValuedObjectMap & ioArgument8,
                                      class GALGAS_allocaList & ioArgument9,
                                      class GALGAS_instructionListIR & ioArgument10,
                                      const class GALGAS_lstring constinArgument11,
                                      const class GALGAS_string constinArgument12,
                                      const class GALGAS_PLMType constinArgument13,
                                      const class GALGAS_accessInAssignmentListAST constinArgument14,
                                      class GALGAS_LValueRepresentation & outArgument15,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapForContext searchKey'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_searchKey (const class GALGAS_routineMapForContext inObject,
                                const class GALGAS_lstring constin_inRoutineName,
                                const class GALGAS_lstring constin_inArgumentSignature,
                                class GALGAS_lstring & out_outRoutineLLVMName,
                                class GALGAS_routineDescriptor & out_outDescriptor,
                                class GALGAS_location & out_outKeyLocation,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@routineMapForContext hasKey' (as function)                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_hasKey (const class GALGAS_routineMapForContext & inObject,
                                          const class GALGAS_lstring & constinArgument0,
                                          const class GALGAS_lstring & constinArgument1,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension setter '@universalValuedObjectMap insertDriver'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertDriver (class GALGAS_universalValuedObjectMap & ioObject,
                                   const class GALGAS_lstring constin_inDriverName,
                                   const class GALGAS_bool constin_inIsInstancied,
                                   const class GALGAS_PLMType constin_inDriverType,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMap insertRegisterGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertRegisterGroup (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inRegisterGroupName,
                                          const class GALGAS_controlRegisterMap constin_inControlRegisterMap,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMap insertGlobalConstant'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertGlobalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                           const class GALGAS_lstring constin_inConstantName,
                                           const class GALGAS_objectIR constin_inConstantObjectIR,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMap insertGlobalSyncInstance'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertGlobalSyncInstance (class GALGAS_universalValuedObjectMap & ioObject,
                                               const class GALGAS_lstring constin_inSyncInstanceName,
                                               const class GALGAS_PLMType constin_inType,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMap insertLocalConstant'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalConstantName,
                                          const class GALGAS_bool constin_inIsFormalInputArgument,
                                          const class GALGAS_PLMType constin_inType,
                                          const class GALGAS_lstring constin_inPLMConstantName,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMap insertUsedLocalConstant'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertUsedLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                              const class GALGAS_lstring constin_inLocalConstantName,
                                              const class GALGAS_PLMType constin_inType,
                                              const class GALGAS_lstring constin_inPLMConstantName,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension setter '@universalValuedObjectMap insertLocalVariable'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertLocalVariable (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalVariableName,
                                          const class GALGAS_PLMType constin_inType,
                                          const class GALGAS_lstring constin_inPLMName,
                                          const class GALGAS_valuedObjectState constin_inVariableInitialState,
                                          const class GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@universalValuedObjectMap searchValuedObject'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_searchValuedObject (const class GALGAS_universalValuedObjectMap inObject,
                                         const class GALGAS_lstring constin_inValuedObjectName,
                                         const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                         const class GALGAS_stringset constin_inInitializedDriverSet,
                                         class GALGAS_objectIR & out_outObjectIR,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension setter '@universalValuedObjectMap searchValuedObjectForReadAccess'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_searchValuedObjectForReadAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                      const class GALGAS_lstring constin_inValuedObjectName,
                                                      class GALGAS_objectIR & out_outObjectIR,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension setter '@universalValuedObjectMap searchValuedObjectForWriteAccess'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_searchValuedObjectForWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                       const class GALGAS_lstring constin_inValuedObjectName,
                                                       class GALGAS_objectIR & out_outObjectIR,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_searchValuedObjectForReadWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                           const class GALGAS_lstring constin_inValuedObjectName,
                                                           class GALGAS_objectIR & out_outObjectIR,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@universalValuedObjectMap searchValuedObjectType'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_searchValuedObjectType (const class GALGAS_universalValuedObjectMap inObject,
                                             const class GALGAS_PLMType constin_inSelfType,
                                             const class GALGAS_lstring constin_inValuedObjectName,
                                             const class GALGAS_accessInAssignmentListAST constin_inAccessList,
                                             class GALGAS_PLMType & out_outType,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension method '@universalValuedObjectMap checkLocalVariableFinalState'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_checkLocalVariableFinalState (const class GALGAS_universalValuedObjectMap inObject,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension setter '@universalValuedObjectMap openOverrideForSelectBlock'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_openOverrideForSelectBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension setter '@universalValuedObjectMap openOverrideForRepeatBlock'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_openOverrideForRepeatBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension setter '@universalValuedObjectMap closeOverride'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_closeOverride (class GALGAS_universalValuedObjectMap & ioObject,
                                    const class GALGAS_location constin_inErrorLocation,
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
//                             Extension getter '@unifiedTypeMap-proxy arc' (as function)                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_arc (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension getter '@PLMType arc' (as function)                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_arc (const class GALGAS_PLMType & inObject,
                                       class C_Compiler * inCompiler
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
//                                  Extension getter '@PLMType arcList' (as function)                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arcAssignmentList extensionGetter_arcList (const class GALGAS_PLMType & inObject,
                                                        const class GALGAS_uintlist & constinArgument0,
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
//                                           @standaloneRoutineCallIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_standaloneRoutineCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_standaloneRoutineCallIR (void) ;

//---
  public : inline const class cPtr_standaloneRoutineCallIR * ptr (void) const { return (const cPtr_standaloneRoutineCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_standaloneRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_standaloneRoutineCallIR constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_objectIR & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstring & inOperand3,
                                                                        const class GALGAS_calleeKindIR & inOperand4,
                                                                        const class GALGAS_procCallEffectiveParameterListIR & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const ;

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
 
} ; // End of GALGAS_standaloneRoutineCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @standaloneRoutineCallIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mProperty_mGlobalVariableName ;
  public : GALGAS_objectIR mProperty_mResult ;
  public : GALGAS_lstring mProperty_mFunctionMangledName ;
  public : GALGAS_lstring mProperty_mFunctionNameForGeneration ;
  public : GALGAS_calleeKindIR mProperty_mKind ;
  public : GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;

//--- Constructor
  public : cPtr_standaloneRoutineCallIR (const GALGAS_string & in_mGlobalVariableName,
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

