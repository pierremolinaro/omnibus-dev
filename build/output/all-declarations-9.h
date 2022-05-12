#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterFormalArguments (const class GALGAS_semanticContext constinArgument0,
                                   const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                   class GALGAS_universalValuedObjectMap & ioArgument2,
                                   class GALGAS_routineFormalArgumentListIR & ioArgument3,
                                   const class GALGAS_bool constinArgument4,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST routineSignature' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_effectiveArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph) (const class cPtr_panicAST * inObject,
                                                                              class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @convertInstructionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_convertInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_convertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_convertInstructionIR (const class cPtr_convertInstructionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;

  public: class GALGAS_objectIR readProperty_mOperand (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_convertInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_convertInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1,
                                                                    const class GALGAS_location & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_convertInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @convertInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_objectIR mProperty_mOperand ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                     const GALGAS_objectIR & in_mOperand,
                                     const GALGAS_location & in_mLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @convertInstructionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_convertInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_convertInstructionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_convertInstructionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_convertInstructionIR_2D_weak (const class GALGAS_convertInstructionIR & inSource) ;

  public: GALGAS_convertInstructionIR_2D_weak & operator = (const class GALGAS_convertInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_convertInstructionIR bang_convertInstructionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_convertInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_convertInstructionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_convertInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertInstructionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) (const class cPtr_primaryInExpressionAST * inObject,
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

void enterExtensionMethod_analyzePrimaryExpressionNoSelf (const int32_t inClassIndex,
                                                          extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_omnibusType constin_inSelfType,
                                                         const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const GALGAS_omnibusType constin_inOptionalTargetType,
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
//Routine 'procAnalyzeAccesListInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression (const class GALGAS_omnibusType constinArgument0,
                                               const class GALGAS_routineAttributes constinArgument1,
                                               const class GALGAS_omnibusType constinArgument2,
                                               const class GALGAS_semanticContext constinArgument3,
                                               const class GALGAS_mode constinArgument4,
                                               class GALGAS_semanticTemporariesStruct & ioArgument5,
                                               class GALGAS_staticEntityMap & ioArgument6,
                                               class GALGAS_universalValuedObjectMap & ioArgument7,
                                               class GALGAS_allocaList & ioArgument8,
                                               class GALGAS_instructionListIR & ioArgument9,
                                               const class GALGAS_primaryInExpressionAccessListAST constinArgument10,
                                               class GALGAS_objectIR & ioArgument11,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) (const class cPtr_primaryInExpressionAST * inObject,
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

void enterExtensionMethod_analyzePrimaryExpressionWithSelf (const int32_t inClassIndex,
                                                            extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_omnibusType constin_inSelfType,
                                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const GALGAS_omnibusType constin_inOptionalTargetType,
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
//Routine 'handleArrayAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression (class GALGAS_objectIR & ioArgument0,
                                            const class GALGAS_expressionAST constinArgument1,
                                            const class GALGAS_location constinArgument2,
                                            const class GALGAS_bool constinArgument3,
                                            const class GALGAS_omnibusType constinArgument4,
                                            const class GALGAS_routineAttributes constinArgument5,
                                            const class GALGAS_omnibusType constinArgument6,
                                            const class GALGAS_semanticContext constinArgument7,
                                            const class GALGAS_mode constinArgument8,
                                            class GALGAS_semanticTemporariesStruct & ioArgument9,
                                            class GALGAS_staticEntityMap & ioArgument10,
                                            class GALGAS_universalValuedObjectMap & ioArgument11,
                                            class GALGAS_allocaList & ioArgument12,
                                            class GALGAS_instructionListIR & ioArgument13,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression (const class GALGAS_lstring constinArgument0,
                                             class GALGAS_objectIR & ioArgument1,
                                             const class GALGAS_omnibusType constinArgument2,
                                             const class GALGAS_semanticContext constinArgument3,
                                             const class GALGAS_mode constinArgument4,
                                             const class GALGAS_routineAttributes constinArgument5,
                                             class GALGAS_semanticTemporariesStruct & ioArgument6,
                                             class GALGAS_staticEntityMap & ioArgument7,
                                             class GALGAS_universalValuedObjectMap & ioArgument8,
                                             class GALGAS_allocaList & ioArgument9,
                                             const class GALGAS_effectiveArgumentListAST constinArgument10,
                                             class GALGAS_instructionListIR & ioArgument11,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression (const class GALGAS_semanticContext constinArgument0,
                                               class GALGAS_objectIR & ioArgument1,
                                               const class GALGAS_lstring constinArgument2,
                                               const class GALGAS_mode constinArgument3,
                                               class GALGAS_semanticTemporariesStruct & ioArgument4,
                                               class GALGAS_allocaList & ioArgument5,
                                               class GALGAS_instructionListIR & ioArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression (const class GALGAS_semanticContext constinArgument0,
                                      class GALGAS_objectIR & ioArgument1,
                                      const class GALGAS_lbigint constinArgument2,
                                      const class GALGAS_lbigint constinArgument3,
                                      class GALGAS_semanticTemporariesStruct & ioArgument4,
                                      class GALGAS_instructionListIR & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_compileTimeInfixOperatorUsage_eval) (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                                                                             const class GALGAS_objectIR constinArgument0,
                                                                             const class GALGAS_objectIR constinArgument1,
                                                                             class GALGAS_bigint & outArgument2,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_eval (const int32_t inClassIndex,
                                extensionMethodSignature_compileTimeInfixOperatorUsage_eval inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GALGAS_objectIR constin_inLeftOperand,
                               const GALGAS_objectIR constin_inRightOperand,
                               GALGAS_bigint & out_outResult,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const class GALGAS_LValueAST inObject,
                                                const class GALGAS_omnibusType constin_inSelfType,
                                                const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                const class GALGAS_semanticContext constin_inContext,
                                                const class GALGAS_mode constin_inMode,
                                                class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                class GALGAS_allocaList & io_ioAllocaList,
                                                class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                class GALGAS_instructionListListIR & io_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment (const class GALGAS_omnibusType constinArgument0,
                                            const class GALGAS_routineAttributes constinArgument1,
                                            const class GALGAS_semanticContext constinArgument2,
                                            const class GALGAS_mode constinArgument3,
                                            class GALGAS_semanticTemporariesStruct & ioArgument4,
                                            class GALGAS_staticEntityMap & ioArgument5,
                                            class GALGAS_universalValuedObjectMap & ioArgument6,
                                            class GALGAS_allocaList & ioArgument7,
                                            class GALGAS_instructionListIR & ioArgument8,
                                            class GALGAS_instructionListListIR & ioArgument9,
                                            const class GALGAS_LValueOperandAST constinArgument10,
                                            class GALGAS_LValueRepresentation & outArgument11,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment (const class GALGAS_omnibusType constinArgument0,
                                                  const class GALGAS_routineAttributes constinArgument1,
                                                  const class GALGAS_semanticContext constinArgument2,
                                                  const class GALGAS_mode constinArgument3,
                                                  class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                  class GALGAS_staticEntityMap & ioArgument5,
                                                  class GALGAS_universalValuedObjectMap & ioArgument6,
                                                  class GALGAS_allocaList & ioArgument7,
                                                  class GALGAS_instructionListIR & ioArgument8,
                                                  class GALGAS_instructionListListIR & ioArgument9,
                                                  const class GALGAS_lstring constinArgument10,
                                                  const class GALGAS_string constinArgument11,
                                                  const class GALGAS_omnibusType constinArgument12,
                                                  const class GALGAS_LValueOperandAST constinArgument13,
                                                  class GALGAS_LValueRepresentation & outArgument14,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

