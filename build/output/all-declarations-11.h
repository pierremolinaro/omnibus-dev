#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const class GGS_semanticContext constinArgument0,
                                                                                 const class GGS_routineFormalArgumentListAST constinArgument1,
                                                                                 class GGS_universalValuedObjectMap & ioArgument2,
                                                                                 class GGS_routineFormalArgumentListIR & ioArgument3,
                                                                                 const class GGS_bool constinArgument4,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_routineSignature (const class GGS_effectiveArgumentListAST & inObject,
                                                    const class GGS_location & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_panicAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_convertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_convertInstructionIR (const class cPtr_convertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_convertInstructionIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                            const class GGS_objectIR & inOperand1,
                                                            const class GGS_location & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertInstructionIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_convertInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                const class GGS_objectIR & inOperand1,
                                                                const class GGS_location & inOperand2,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @convertInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void convertInstructionIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                      const class GGS_objectIR & inOperand1,
                                                      const class GGS_location & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_objectIR mProperty_mOperand ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_convertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_convertInstructionIR (const GGS_objectIR & in_mTarget,
                                     const GGS_objectIR & in_mOperand,
                                     const GGS_location & in_mLocation,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_convertInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_convertInstructionIR_2E_weak (const class GGS_convertInstructionIR & inSource) ;

  public: GGS_convertInstructionIR_2E_weak & operator = (const class GGS_convertInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_convertInstructionIR_2E_weak init_nil (void) {
    GGS_convertInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_convertInstructionIR bang_convertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_convertInstructionIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_convertInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (class cPtr_primaryInExpressionAST * inObject,
                                                         const class GGS_omnibusType constin_inSelfType,
                                                         const class GGS_routineAttributes constin_inRoutineAttributes,
                                                         const class GGS_omnibusType constin_inOptionalTargetType,
                                                         const class GGS_semanticContext constin_inContext,
                                                         const class GGS_mode constin_inMode,
                                                         class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                         class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                         class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                         class GGS_allocaList & io_ioAllocaList,
                                                         class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                         class GGS_objectIR & out_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression?self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?&result'
//
//--------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                 const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                 const class GGS_omnibusType constinArgument2,
                                                                                                                                                                                                                 const class GGS_semanticContext constinArgument3,
                                                                                                                                                                                                                 const class GGS_mode constinArgument4,
                                                                                                                                                                                                                 class GGS_semanticTemporariesStruct & ioArgument5,
                                                                                                                                                                                                                 class GGS_staticEntityMap & ioArgument6,
                                                                                                                                                                                                                 class GGS_universalValuedObjectMap & ioArgument7,
                                                                                                                                                                                                                 class GGS_allocaList & ioArgument8,
                                                                                                                                                                                                                 class GGS_instructionListIR & ioArgument9,
                                                                                                                                                                                                                 const class GGS_primaryInExpressionAccessListAST constinArgument10,
                                                                                                                                                                                                                 class GGS_objectIR & ioArgument11,
                                                                                                                                                                                                                 class Compiler * inCompiler
                                                                                                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (class cPtr_primaryInExpressionAST * inObject,
                                                           const class GGS_omnibusType constin_inSelfType,
                                                           const class GGS_routineAttributes constin_inRoutineAttributes,
                                                           const class GGS_omnibusType constin_inOptionalTargetType,
                                                           const class GGS_semanticContext constin_inContext,
                                                           const class GGS_mode constin_inMode,
                                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                           class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                           class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                           class GGS_allocaList & io_ioAllocaList,
                                                           class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                           class GGS_objectIR & out_outResult,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression&????self?routineAttributes?optionalTargetType?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (class GGS_objectIR & ioArgument0,
                                                                                                                                                                                                                const class GGS_expressionAST constinArgument1,
                                                                                                                                                                                                                const class GGS_location constinArgument2,
                                                                                                                                                                                                                const class GGS_bool constinArgument3,
                                                                                                                                                                                                                const class GGS_omnibusType constinArgument4,
                                                                                                                                                                                                                const class GGS_routineAttributes constinArgument5,
                                                                                                                                                                                                                const class GGS_omnibusType constinArgument6,
                                                                                                                                                                                                                const class GGS_semanticContext constinArgument7,
                                                                                                                                                                                                                const class GGS_mode constinArgument8,
                                                                                                                                                                                                                class GGS_semanticTemporariesStruct & ioArgument9,
                                                                                                                                                                                                                class GGS_staticEntityMap & ioArgument10,
                                                                                                                                                                                                                class GGS_universalValuedObjectMap & ioArgument11,
                                                                                                                                                                                                                class GGS_allocaList & ioArgument12,
                                                                                                                                                                                                                class GGS_instructionListIR & ioArgument13,
                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression?&?self?context?mode?routineAttributes&temporary&staticEntityMap&variableMap&alloca?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (const class GGS_lstring constinArgument0,
                                                                                                                                                                      class GGS_objectIR & ioArgument1,
                                                                                                                                                                      const class GGS_omnibusType constinArgument2,
                                                                                                                                                                      const class GGS_semanticContext constinArgument3,
                                                                                                                                                                      const class GGS_mode constinArgument4,
                                                                                                                                                                      const class GGS_routineAttributes constinArgument5,
                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument6,
                                                                                                                                                                      class GGS_staticEntityMap & ioArgument7,
                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument8,
                                                                                                                                                                      class GGS_allocaList & ioArgument9,
                                                                                                                                                                      const class GGS_effectiveArgumentListAST constinArgument10,
                                                                                                                                                                      class GGS_instructionListIR & ioArgument11,
                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression?context&??&temporary&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (const class GGS_semanticContext constinArgument0,
                                                                                                                  class GGS_objectIR & ioArgument1,
                                                                                                                  const class GGS_lstring constinArgument2,
                                                                                                                  const class GGS_mode constinArgument3,
                                                                                                                  class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                  class GGS_allocaList & ioArgument5,
                                                                                                                  class GGS_instructionListIR & ioArgument6,
                                                                                                                  class Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression?context&??&temporary&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (const class GGS_semanticContext constinArgument0,
                                                                                               class GGS_objectIR & ioArgument1,
                                                                                               const class GGS_lbigint constinArgument2,
                                                                                               const class GGS_lbigint constinArgument3,
                                                                                               class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                               class GGS_instructionListIR & ioArgument5,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const class GGS_objectIR constin_inLeftOperand,
                               const class GGS_objectIR constin_inRightOperand,
                               class GGS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const class GGS_LValueAST inObject,
                                                const class GGS_omnibusType constin_inSelfType,
                                                const class GGS_routineAttributes constin_inRoutineAttributes,
                                                const class GGS_semanticContext constin_inContext,
                                                const class GGS_mode constin_inMode,
                                                class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                class GGS_allocaList & io_ioAllocaList,
                                                class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                class GGS_instructionListListIR & io_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                class GGS_LValueRepresentation & out_outInternalRepresentation,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                      const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                      const class GGS_semanticContext constinArgument2,
                                                                                                                                                                                                                      const class GGS_mode constinArgument3,
                                                                                                                                                                                                                      class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                                                                      class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                                                                      class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                                                                      class GGS_allocaList & ioArgument7,
                                                                                                                                                                                                                      class GGS_instructionListIR & ioArgument8,
                                                                                                                                                                                                                      class GGS_instructionListListIR & ioArgument9,
                                                                                                                                                                                                                      const class GGS_LValueOperandAST constinArgument10,
                                                                                                                                                                                                                      class GGS_LValueRepresentation & outArgument11,
                                                                                                                                                                                                                      class Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const class GGS_omnibusType constinArgument0,
                                                                                                                                                                                                                                                                const class GGS_routineAttributes constinArgument1,
                                                                                                                                                                                                                                                                const class GGS_semanticContext constinArgument2,
                                                                                                                                                                                                                                                                const class GGS_mode constinArgument3,
                                                                                                                                                                                                                                                                class GGS_semanticTemporariesStruct & ioArgument4,
                                                                                                                                                                                                                                                                class GGS_staticEntityMap & ioArgument5,
                                                                                                                                                                                                                                                                class GGS_universalValuedObjectMap & ioArgument6,
                                                                                                                                                                                                                                                                class GGS_allocaList & ioArgument7,
                                                                                                                                                                                                                                                                class GGS_instructionListIR & ioArgument8,
                                                                                                                                                                                                                                                                class GGS_instructionListListIR & ioArgument9,
                                                                                                                                                                                                                                                                const class GGS_lstring constinArgument10,
                                                                                                                                                                                                                                                                const class GGS_string constinArgument11,
                                                                                                                                                                                                                                                                const class GGS_omnibusType constinArgument12,
                                                                                                                                                                                                                                                                const class GGS_LValueOperandAST constinArgument13,
                                                                                                                                                                                                                                                                class GGS_LValueRepresentation & outArgument14,
                                                                                                                                                                                                                                                                class Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_LOCATION_ARGS) ;

