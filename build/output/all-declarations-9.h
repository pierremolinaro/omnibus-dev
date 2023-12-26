#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_effectiveArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_panicAST * inObject,
                                                     class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @convertInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_convertInstructionIR extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_convertInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @convertInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & ioInvokedRoutineSet,
           class GALGAS_uint & ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @convertInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_convertInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_convertInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_convertInstructionIR_2D_weak (const class GALGAS_convertInstructionIR & inSource) ;

  public: GALGAS_convertInstructionIR_2D_weak & operator = (const class GALGAS_convertInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_convertInstructionIR bang_convertInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_convertInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_convertInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (class cPtr_primaryInExpressionAST * inObject,
                                                         const class GALGAS_omnibusType constin_inSelfType,
                                                         const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const class GALGAS_omnibusType constin_inOptionalTargetType,
                                                         const class GALGAS_semanticContext constin_inContext,
                                                         const class GALGAS_mode constin_inMode,
                                                         class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                         class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                         class GALGAS_allocaList & io_ioAllocaList,
                                                         class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         class GALGAS_objectIR & out_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression?self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?&result'
//
//--------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (class cPtr_primaryInExpressionAST * inObject,
                                                           const class GALGAS_omnibusType constin_inSelfType,
                                                           const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const class GALGAS_omnibusType constin_inOptionalTargetType,
                                                           const class GALGAS_semanticContext constin_inContext,
                                                           const class GALGAS_mode constin_inMode,
                                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                           class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                           class GALGAS_allocaList & io_ioAllocaList,
                                                           class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           class GALGAS_objectIR & out_outResult,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression&????self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (class GALGAS_objectIR & ioArgument0,
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
                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression?&?self?context?mode?routineAttributes&temporary&staticEntityMap&variableMap&alloca?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (const class GALGAS_lstring constinArgument0,
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
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression?context&??&temporary&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (const class GALGAS_semanticContext constinArgument0,
                                                                                                                  class GALGAS_objectIR & ioArgument1,
                                                                                                                  const class GALGAS_lstring constinArgument2,
                                                                                                                  const class GALGAS_mode constinArgument3,
                                                                                                                  class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                                                                  class GALGAS_allocaList & ioArgument5,
                                                                                                                  class GALGAS_instructionListIR & ioArgument6,
                                                                                                                  class Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression?context&??&temporary&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (const class GALGAS_semanticContext constinArgument0,
                                                                                               class GALGAS_objectIR & ioArgument1,
                                                                                               const class GALGAS_lbigint constinArgument2,
                                                                                               const class GALGAS_lbigint constinArgument3,
                                                                                               class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                                               class GALGAS_instructionListIR & ioArgument5,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const class GALGAS_objectIR constin_inLeftOperand,
                               const class GALGAS_objectIR constin_inRightOperand,
                               class GALGAS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//--------------------------------------------------------------------------------------------------

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
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GALGAS_omnibusType constinArgument0,
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
                                                                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_passingModeForActualSelector (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                                  const class GALGAS_lstring & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValue'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValue (const class GALGAS_LValueAST inObject,
                                    const class GALGAS_omnibusType constin_inSelfType,
                                    const class GALGAS_bool constin_inIsAddressOf,
                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                    const class GALGAS_semanticContext constin_inContext,
                                    const class GALGAS_mode constin_inMode,
                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                    class GALGAS_allocaList & io_ioAllocaList,
                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                    class GALGAS_LValueRepresentation & out_outInternalRepresentation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_mutatingAttribute (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const class GALGAS_omnibusType constinArgument0,
                                                                                                                                                                      const class GALGAS_routineAttributes constinArgument1,
                                                                                                                                                                      const class GALGAS_semanticContext constinArgument2,
                                                                                                                                                                      const class GALGAS_mode constinArgument3,
                                                                                                                                                                      class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                      class GALGAS_staticEntityMap & ioArgument5,
                                                                                                                                                                      class GALGAS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                      class GALGAS_allocaList & ioArgument7,
                                                                                                                                                                      class GALGAS_instructionListIR & ioArgument8,
                                                                                                                                                                      const class GALGAS_LValueOperandAST constinArgument9,
                                                                                                                                                                      class GALGAS_LValueRepresentation & outArgument10,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GALGAS_omnibusType constinArgument0,
                                                                                                                                                                                                                              const class GALGAS_bool constinArgument1,
                                                                                                                                                                                                                              const class GALGAS_routineAttributes constinArgument2,
                                                                                                                                                                                                                              const class GALGAS_semanticContext constinArgument3,
                                                                                                                                                                                                                              const class GALGAS_mode constinArgument4,
                                                                                                                                                                                                                              class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                                                                                                                                                                              class GALGAS_staticEntityMap & ioArgument6,
                                                                                                                                                                                                                              class GALGAS_universalValuedObjectMap & ioArgument7,
                                                                                                                                                                                                                              class GALGAS_allocaList & ioArgument8,
                                                                                                                                                                                                                              class GALGAS_instructionListIR & ioArgument9,
                                                                                                                                                                                                                              const class GALGAS_lstring constinArgument10,
                                                                                                                                                                                                                              const class GALGAS_string constinArgument11,
                                                                                                                                                                                                                              const class GALGAS_omnibusType constinArgument12,
                                                                                                                                                                                                                              const class GALGAS_LValueOperandAST constinArgument13,
                                                                                                                                                                                                                              class GALGAS_LValueRepresentation & outArgument14,
                                                                                                                                                                                                                              class Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_LOCATION_ARGS) ;

