#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionSE class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionSE : public GALGAS_instructionSE {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionSE (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionSE * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionSE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionSE (const cPtr_forLowerUpperBoundInstructionSE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionSE extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionSE constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_expressionSE & inOperand3,
                                                                                const class GALGAS_location & inOperand4,
                                                                                const class GALGAS_expressionSE & inOperand5,
                                                                                const class GALGAS_location & inOperand6,
                                                                                const class GALGAS_instructionListSE & inOperand7,
                                                                                const class GALGAS_location & inOperand8
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionSE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionSE getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionSE getter_mUpperBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionSE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionSE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionSE class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionSE : public cPtr_instructionSE {
//--- Attributes
  public : GALGAS_lstring mProperty_mVarName ;
  public : GALGAS_lstring mProperty_mTypeName ;
  public : GALGAS_expressionSE mProperty_mLowerBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  public : GALGAS_expressionSE mProperty_mUpperBoundExpression ;
  public : GALGAS_location mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  public : GALGAS_instructionListSE mProperty_mDoInstructionList ;
  public : GALGAS_location mProperty_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionSE (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mVarName,
                                                 const GALGAS_lstring & in_mTypeName,
                                                 const GALGAS_expressionSE & in_mLowerBoundExpression,
                                                 const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                 const GALGAS_expressionSE & in_mUpperBoundExpression,
                                                 const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                 const GALGAS_instructionListSE & in_mDoInstructionList,
                                                 const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionSE getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionSE getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListSE getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Abstract extension method '@assignmentTargetAST analyzeTargetForRoutineCall'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_analyzeTargetForRoutineCall) (const class cPtr_assignmentTargetAST * inObject,
                                                                                          const class GALGAS_PLMType constinArgument0,
                                                                                          const class GALGAS_targetAccessKind constinArgument1,
                                                                                          const class GALGAS_bool constinArgument2,
                                                                                          const class GALGAS_bool constinArgument3,
                                                                                          const class GALGAS_lstring constinArgument4,
                                                                                          const class GALGAS_semanticContext constinArgument5,
                                                                                          const class GALGAS_mode constinArgument6,
                                                                                          class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                          class GALGAS_staticStringMap & ioArgument8,
                                                                                          class GALGAS_unifiedSymbolMapEx & ioArgument9,
                                                                                          class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument10,
                                                                                          class GALGAS_allocaList & ioArgument11,
                                                                                          class GALGAS_instructionListIR & ioArgument12,
                                                                                          class GALGAS_objectIR & outArgument13,
                                                                                          class GALGAS_string & outArgument14,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeTargetForRoutineCall (const int32_t inClassIndex,
                                                       extensionMethodSignature_assignmentTargetAST_analyzeTargetForRoutineCall inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeTargetForRoutineCall (const class cPtr_assignmentTargetAST * inObject,
                                                      const GALGAS_PLMType constin_inSelfType,
                                                      const GALGAS_targetAccessKind constin_inSelfAccessKind,
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
                                                      GALGAS_objectIR & out_outCurrentObject,
                                                      GALGAS_string & out_outGlobalVariableReceiverName,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@assignmentTargetAST noteInstructionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph) (const class cPtr_assignmentTargetAST * inObject,
                                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                                 extensionMethodSignature_assignmentTargetAST_noteInstructionTypesInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (const class cPtr_assignmentTargetAST * inObject,
                                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract extension method '@assignmentTargetAST analyzeAssignmentTarget'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_assignmentTargetAST_analyzeAssignmentTarget) (const class cPtr_assignmentTargetAST * inObject,
                                                                                      const class GALGAS_PLMType constinArgument0,
                                                                                      const class GALGAS_targetAccessKind constinArgument1,
                                                                                      const class GALGAS_bool constinArgument2,
                                                                                      const class GALGAS_bool constinArgument3,
                                                                                      const class GALGAS_lstring constinArgument4,
                                                                                      const class GALGAS_semanticContext constinArgument5,
                                                                                      const class GALGAS_mode constinArgument6,
                                                                                      class GALGAS_semanticTemporariesStruct & ioArgument7,
                                                                                      class GALGAS_staticStringMap & ioArgument8,
                                                                                      class GALGAS_unifiedSymbolMapEx & ioArgument9,
                                                                                      class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument10,
                                                                                      class GALGAS_allocaList & ioArgument11,
                                                                                      class GALGAS_instructionListIR & ioArgument12,
                                                                                      class GALGAS_objectIR & outArgument13,
                                                                                      class GALGAS_string & outArgument14,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_analyzeAssignmentTarget (const int32_t inClassIndex,
                                                   extensionMethodSignature_assignmentTargetAST_analyzeAssignmentTarget inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_analyzeAssignmentTarget (const class cPtr_assignmentTargetAST * inObject,
                                                  const GALGAS_PLMType constin_inSelfType,
                                                  const GALGAS_targetAccessKind constin_inSelfAccessKind,
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
                                                  GALGAS_objectIR & out_outCurrentObject,
                                                  GALGAS_string & out_outGlobalVariableReceiverName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_lstring constinArgument1,
                                                                                                 const class GALGAS_lstring constinArgument2,
                                                                                                 const class GALGAS_routineDescriptor constinArgument3,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRoutine (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRoutine (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        const GALGAS_lstring constin_inLLVMInvocationRoutineName,
                                        const GALGAS_routineDescriptor constin_inDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertProperty'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                  const class GALGAS_bool constinArgument1,
                                                                                                  const class GALGAS_objectIR constinArgument2,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertProperty (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertProperty (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inPropertyName,
                                         const GALGAS_bool constin_inIsPublic,
                                         const GALGAS_objectIR constin_inObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@universalPropertyAndRoutineMapForContext insertModule'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                const class GALGAS_lstring constinArgument0,
                                                                                                const class GALGAS_PLMType constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                  const class GALGAS_lstring constinArgument0,
                                                                                                  const class GALGAS_bool constinArgument1,
                                                                                                  const class GALGAS_bool constinArgument2,
                                                                                                  const class GALGAS_objectIR constinArgument3,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inRegisterName,
                                         const GALGAS_bool constin_inReadable,
                                         const GALGAS_bool constin_inWritable,
                                         const GALGAS_objectIR constin_inRegisterObjectIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalConstant'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                        const class GALGAS_objectIR constinArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalConstant'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                       const class GALGAS_lstring constinArgument0,
                                                                                                       const class GALGAS_objectIR constinArgument1,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_objectIR constin_inConstantObjectIR,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalVariable'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                        const class GALGAS_objectIR constinArgument1,
                                                                                                        const class GALGAS_bool constinArgument2,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_objectIR constin_inObjectIR,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalVariable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                       const class GALGAS_lstring constinArgument0,
                                                                                                       const class GALGAS_objectIR constinArgument1,
                                                                                                       const class GALGAS_valuedObjectState constinArgument2,
                                                                                                       const class GALGAS_bool constinArgument3,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalVariable (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalVariable inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalVariable (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalVariableName,
                                              const GALGAS_objectIR constin_inObjectIR,
                                              const GALGAS_valuedObjectState constin_inVariableInitialState,
                                              const GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadAccess'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                   const class GALGAS_lstring constinArgument0,
                                                                                                                   class GALGAS_objectIR & outArgument1,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadAccess (const int32_t inClassIndex,
                                                           extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                          const GALGAS_lstring constin_inValuedObjectName,
                                                          GALGAS_objectIR & out_outObjectIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForWriteAccess'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                    const class GALGAS_lstring constinArgument0,
                                                                                                                    class GALGAS_objectIR & outArgument1,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForWriteAccess (const int32_t inClassIndex,
                                                            extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForWriteAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                           const GALGAS_lstring constin_inValuedObjectName,
                                                           GALGAS_objectIR & out_outObjectIR,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Extension setter '@universalPropertyAndRoutineMapForContext searchValuedObjectForReadWriteAccess'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                                        const class GALGAS_lstring constinArgument0,
                                                                                                                        class GALGAS_objectIR & outArgument1,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_searchValuedObjectForReadWriteAccess (const int32_t inClassIndex,
                                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_searchValuedObjectForReadWriteAccess inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_searchValuedObjectForReadWriteAccess (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                               const GALGAS_lstring constin_inValuedObjectName,
                                                               GALGAS_objectIR & out_outObjectIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@universalPropertyAndRoutineMapForContext searchRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine) (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                                 const class GALGAS_lstring constinArgument1,
                                                                                                 class GALGAS_lstring & outArgument2,
                                                                                                 class GALGAS_routineDescriptor & outArgument3,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_searchRoutine (const int32_t inClassIndex,
                                         extensionMethodSignature_universalPropertyAndRoutineMapForContext_searchRoutine inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_searchRoutine (const class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        GALGAS_lstring & out_outLLVMInvocationRoutineName,
                                        GALGAS_routineDescriptor & out_outDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForSelectBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForSelectBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForSelectBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForSelectBlock (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension setter '@universalPropertyAndRoutineMapForContext openOverrideForRepeatBlock'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_openOverrideForRepeatBlock (const int32_t inClassIndex,
                                                      extensionSetterSignature_universalPropertyAndRoutineMapForContext_openOverrideForRepeatBlock inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_openOverrideForRepeatBlock (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext closeOverride'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride) (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                                 const class GALGAS_location constinArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_closeOverride (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_closeOverride inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_closeOverride (class cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_location constin_inErrorLocation,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@unifiedTypeMap-proxy equatable' (as function)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_equatable (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
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
//                          Extension method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const class GALGAS_routineMapIR_2D_element inObject,
                                              class GALGAS_accessibleEntities & io_ioAccessibleEntities,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixObjectObjectOperatorDescription : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_infixObjectObjectOperatorDescription (void) ;

//---
  public : inline const class cPtr_infixObjectObjectOperatorDescription * ptr (void) const { return (const cPtr_infixObjectObjectOperatorDescription *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixObjectObjectOperatorDescription extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixObjectObjectOperatorDescription constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixObjectObjectOperatorDescription class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixObjectObjectOperatorDescription : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                      COMMA_LOCATION_ARGS) ;

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
//                         Extension method '@globalVarDeclarationList-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

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
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const class GALGAS_semanticContext constinArgument0,
                                       class GALGAS_unifiedSymbolMapEx & outArgument1,
                                       class GALGAS_universalPropertyAndRoutineMapForContext & outArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const class GALGAS_globalVariableMapIR_2D_element inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

#endif
