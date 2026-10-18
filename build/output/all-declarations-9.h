#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeToUniversalReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeToUniversalReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeToUniversalReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeToUniversalReferenceIR_2E_weak (const class GGS_storeToUniversalReferenceIR & inSource) ;

  public: GGS_storeToUniversalReferenceIR_2E_weak & operator = (const class GGS_storeToUniversalReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeToUniversalReferenceIR_2E_weak init_nil (void) {
    GGS_storeToUniversalReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeToUniversalReferenceIR bang_storeToUniversalReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeToUniversalReferenceIR unwrappedValue (void) const ;

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
  public: static GGS_storeToUniversalReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeToUniversalReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeToUniversalReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticTypePrecedenceGraph noteUINTType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_noteUINTType (class GGS_semanticTypePrecedenceGraph & ioObject,
                                   const class GGS_uint constin_inBitSize,
                                   const class GGS_location constin_inErrorLocation,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (class cPtr_abstractDeclarationAST * inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeDeclarationBarrierAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeDeclarationBarrierAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeDeclarationBarrierAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeDeclarationBarrierAST_2E_weak (const class GGS_compileTimeDeclarationBarrierAST & inSource) ;

  public: GGS_compileTimeDeclarationBarrierAST_2E_weak & operator = (const class GGS_compileTimeDeclarationBarrierAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeDeclarationBarrierAST_2E_weak init_nil (void) {
    GGS_compileTimeDeclarationBarrierAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeDeclarationBarrierAST bang_compileTimeDeclarationBarrierAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeDeclarationBarrierAST unwrappedValue (void) const ;

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
  public: static GGS_compileTimeDeclarationBarrierAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeDeclarationBarrierAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeDeclarationBarrierAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak & operator = (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_controlRegisterAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_controlRegisterAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_controlRegisterAssignmentInstructionAST bang_controlRegisterAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_controlRegisterAssignmentInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_controlRegisterAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_controlRegisterAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmInfixOperatorUsage (const class cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mInfixMangledFunctionName (void) const ;
  public: void setProperty_mInfixMangledFunctionName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmInfixOperatorUsage init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_llvmGenerationInstructionList & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmInfixOperatorUsage_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_lstring & inOperand2,
                                                            const class GGS_llvmGenerationInstructionList & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension proc generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_objectIR arg_inRightOperand,
           const class GGS_omnibusType arg_inResultType,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mInfixMangledFunctionName ;
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInfixOperatorUsage (const GGS_string & in_mInfixMangledFunctionName,
                                       const GGS_lstring & in_mLeftOperandName,
                                       const GGS_lstring & in_mRightOperandName,
                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInfixOperatorUsage_2E_weak (const class GGS_llvmInfixOperatorUsage & inSource) ;

  public: GGS_llvmInfixOperatorUsage_2E_weak & operator = (const class GGS_llvmInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_llvmInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmInfixOperatorUsage bang_llvmInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_llvmInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@omnibusType checkIsCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (class cPtr_omnibusType * inObject,
                                                 const class GGS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@omnibusType checkIsNotCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (class cPtr_omnibusType * inObject,
                                                    const class GGS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@omnibusType generateRetain'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (class cPtr_omnibusType * inObject,
                                         const class GGS_string constin_inOmnibusName,
                                         class GGS_string & io_ioLLVMcode,
                                         class GGS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

class GGS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                         const class GGS_uintlist constin_inPropertyIndexPath,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@omnibusType generateInsulate'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (class cPtr_omnibusType * inObject,
                                           const class GGS_string constin_inOmnibusName,
                                           class GGS_string & io_ioLLVMcode,
                                           class GGS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@omnibusType generateRelease'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (class cPtr_omnibusType * inObject,
                                          const class GGS_string constin_inOmnibusName,
                                          class GGS_string & io_ioLLVMcode,
                                          class GGS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

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
//Extension proc '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
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
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForGlobalSyncInstance (const class GGS_string & constinArgument0,
                                                         class Compiler * inCompiler
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
//Extension proc '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const class GGS_universalValuedObjectMap inObject,
                                   const class GGS_lstring constin_inValuedObjectName,
                                   class GGS_valuedObject & out_outEntity,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GGS_universalValuedObjectMap & ioObject,
                                 const class GGS_lstring constin_inValuedObjectName,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
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
// Phase 1: @boolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolImplicitConverterToBoolean (const class cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolImplicitConverterToBoolean init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_boolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension proc generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolImplicitConverterToBoolean_2E_weak (const class GGS_boolImplicitConverterToBoolean & inSource) ;

  public: GGS_boolImplicitConverterToBoolean_2E_weak & operator = (const class GGS_boolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_boolImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolImplicitConverterToBoolean bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_boolImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedControlRegisterArrayGroupDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedControlRegisterArrayGroupDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedControlRegisterArrayGroupDeclaration (const class cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GGS_lstring & inValue) ;

  public: class GGS_lbigintlist readProperty_mBaseAddresses (void) const ;
  public: void setProperty_mBaseAddresses (const GGS_lbigintlist & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lbigintlist & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedControlRegisterArrayGroupDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lbigintlist & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGroupName ;
  public: GGS_lbigintlist mProperty_mBaseAddresses ;


//--- Default constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (const GGS_lstring & in_mGroupName,
                                                              const GGS_lbigintlist & in_mBaseAddresses,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (const class GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & operator = (const class GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak init_nil (void) {
    GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedControlRegisterArrayGroupDeclaration bang_decoratedControlRegisterArrayGroupDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedControlRegisterArrayGroupDeclaration unwrappedValue (void) const ;

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
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@controlRegisterGroupArrayList generateLLVMcode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const class GGS_controlRegisterGroupArrayList inObject,
                                       class GGS_string & io_ioLLVMcode,
                                       const class GGS_uint constin_inPointerSize,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_registerGroupAddressArrayLLVMname (const class GGS_string & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const class GGS_objectIR constin_inLeftOperand,
                               const class GGS_objectIR constin_inRightOperand,
                               class GGS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

