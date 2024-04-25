#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_guardImplementationRoutineIR (const class cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GALGAS_guardKindGenerationIR & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardImplementationRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                                  const class GALGAS_bool & inOperand1,
                                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                                  const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                                                  const class GALGAS_omnibusType & inOperand4,
                                                                                                                  const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                                                                  const class GALGAS_allocaList & inOperand6,
                                                                                                                  const class GALGAS_instructionListIR & inOperand7,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardImplementationRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                           const class GALGAS_omnibusType & inOperand4,
                                                                           const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                           const class GALGAS_allocaList & inOperand6,
                                                                           const class GALGAS_instructionListIR & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardImplementationRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                                         const class GALGAS_omnibusType & inOperand4,
                                                                                                         const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                                                         const class GALGAS_allocaList & inOperand6,
                                                                                                         const class GALGAS_instructionListIR & inOperand7,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public: GALGAS_allocaList mProperty_mAllocaList ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GALGAS_omnibusType & in_mReceiverType,
                                             const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                             const GALGAS_allocaList & in_mAllocaList,
                                             const GALGAS_instructionListIR & in_mInstructionGenerationList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardImplementationRoutineIR_2D_weak (const class GALGAS_guardImplementationRoutineIR & inSource) ;

  public: GALGAS_guardImplementationRoutineIR_2D_weak & operator = (const class GALGAS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardImplementationRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_formalPassingModeString (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_requiredActualPassingModeForSelector (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature typedString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_typedString (const class GALGAS_routineTypedSignature & inObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_mangledName (const class GALGAS_routineTypedSignature & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @effectiveArgumentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_effectiveArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;
  public: inline GALGAS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterKind (void) const {
    return mProperty_mEffectiveParameterKind ;
  }

  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterKind (const GALGAS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterKind = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_effectiveArgumentListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                      const GALGAS_lstring & in_mSelector) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_effectiveArgumentListAST_2D_element init_21__21_ (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_effectiveArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_effectiveArgumentListAST_2D_element class_func_new (const class GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_effectiveArgumentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRegularRoutineList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedRegularRoutineList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_receiverTypeName ;
  public: inline GALGAS_lstring readProperty_receiverTypeName (void) const {
    return mProperty_receiverTypeName ;
  }

  public: GALGAS_mode mProperty_mode ;
  public: inline GALGAS_mode readProperty_mode (void) const {
    return mProperty_mode ;
  }

  public: GALGAS_bool mProperty_isRequired ;
  public: inline GALGAS_bool readProperty_isRequired (void) const {
    return mProperty_isRequired ;
  }

  public: GALGAS_routineKind mProperty_routineKind ;
  public: inline GALGAS_routineKind readProperty_routineKind (void) const {
    return mProperty_routineKind ;
  }

  public: GALGAS_bool mProperty_warnIfUnused ;
  public: inline GALGAS_bool readProperty_warnIfUnused (void) const {
    return mProperty_warnIfUnused ;
  }

  public: GALGAS_bool mProperty_exportedRoutine ;
  public: inline GALGAS_bool readProperty_exportedRoutine (void) const {
    return mProperty_exportedRoutine ;
  }

  public: GALGAS_routineAttributes mProperty_routineAttributes ;
  public: inline GALGAS_routineAttributes readProperty_routineAttributes (void) const {
    return mProperty_routineAttributes ;
  }

  public: GALGAS_lstring mProperty_routineMangledLLVMName ;
  public: inline GALGAS_lstring readProperty_routineMangledLLVMName (void) const {
    return mProperty_routineMangledLLVMName ;
  }

  public: GALGAS_routineFormalArgumentListAST mProperty_formalArgumentList ;
  public: inline GALGAS_routineFormalArgumentListAST readProperty_formalArgumentList (void) const {
    return mProperty_formalArgumentList ;
  }

  public: GALGAS_bool mProperty_warningOnUnusedArgs ;
  public: inline GALGAS_bool readProperty_warningOnUnusedArgs (void) const {
    return mProperty_warningOnUnusedArgs ;
  }

  public: GALGAS_instructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfRoutineDeclaration ;
  public: inline GALGAS_location readProperty_mEndOfRoutineDeclaration (void) const {
    return mProperty_mEndOfRoutineDeclaration ;
  }

  public: GALGAS_lstring mProperty_returnTypeName ;
  public: inline GALGAS_lstring readProperty_returnTypeName (void) const {
    return mProperty_returnTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReceiverTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_receiverTypeName = inValue ;
  }

  public: inline void setter_setMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mode = inValue ;
  }

  public: inline void setter_setIsRequired (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isRequired = inValue ;
  }

  public: inline void setter_setRoutineKind (const GALGAS_routineKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineKind = inValue ;
  }

  public: inline void setter_setWarnIfUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnIfUnused = inValue ;
  }

  public: inline void setter_setExportedRoutine (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exportedRoutine = inValue ;
  }

  public: inline void setter_setRoutineAttributes (const GALGAS_routineAttributes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineAttributes = inValue ;
  }

  public: inline void setter_setRoutineMangledLLVMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineMangledLLVMName = inValue ;
  }

  public: inline void setter_setFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgumentList = inValue ;
  }

  public: inline void setter_setWarningOnUnusedArgs (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warningOnUnusedArgs = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineDeclaration (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineDeclaration = inValue ;
  }

  public: inline void setter_setReturnTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_returnTypeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_decoratedRegularRoutineList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedRegularRoutineList_2D_element (const GALGAS_lstring & in_receiverTypeName,
                                                         const GALGAS_mode & in_mode,
                                                         const GALGAS_bool & in_isRequired,
                                                         const GALGAS_routineKind & in_routineKind,
                                                         const GALGAS_bool & in_warnIfUnused,
                                                         const GALGAS_bool & in_exportedRoutine,
                                                         const GALGAS_routineAttributes & in_routineAttributes,
                                                         const GALGAS_lstring & in_routineMangledLLVMName,
                                                         const GALGAS_routineFormalArgumentListAST & in_formalArgumentList,
                                                         const GALGAS_bool & in_warningOnUnusedArgs,
                                                         const GALGAS_instructionListAST & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfRoutineDeclaration,
                                                         const GALGAS_lstring & in_returnTypeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedRegularRoutineList_2D_element init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const class GALGAS_lstring & inOperand0,
                                                                                                                                                                                                                                                                                       const class GALGAS_mode & inOperand1,
                                                                                                                                                                                                                                                                                       const class GALGAS_bool & inOperand2,
                                                                                                                                                                                                                                                                                       const class GALGAS_routineKind & inOperand3,
                                                                                                                                                                                                                                                                                       const class GALGAS_bool & inOperand4,
                                                                                                                                                                                                                                                                                       const class GALGAS_bool & inOperand5,
                                                                                                                                                                                                                                                                                       const class GALGAS_routineAttributes & inOperand6,
                                                                                                                                                                                                                                                                                       const class GALGAS_lstring & inOperand7,
                                                                                                                                                                                                                                                                                       const class GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                                                                                                                                                                                                                       const class GALGAS_bool & inOperand9,
                                                                                                                                                                                                                                                                                       const class GALGAS_instructionListAST & inOperand10,
                                                                                                                                                                                                                                                                                       const class GALGAS_location & inOperand11,
                                                                                                                                                                                                                                                                                       const class GALGAS_lstring & inOperand12,
                                                                                                                                                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                                                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRegularRoutineList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedRegularRoutineList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_mode & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_routineKind & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5,
                                                                                     const class GALGAS_routineAttributes & inOperand6,
                                                                                     const class GALGAS_lstring & inOperand7,
                                                                                     const class GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                     const class GALGAS_bool & inOperand9,
                                                                                     const class GALGAS_instructionListAST & inOperand10,
                                                                                     const class GALGAS_location & inOperand11,
                                                                                     const class GALGAS_lstring & inOperand12,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedRegularRoutineList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const class GALGAS_decoratedRegularRoutineList inObject,
                                              const class GALGAS_semanticContext constin_inContext,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList-element semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const class GALGAS_decoratedRegularRoutineList_2D_element inObject,
                                       const class GALGAS_semanticContext constin_inContext,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const class GALGAS_allocaList inObject,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_regularRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_regularRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_regularRoutineIR (const class cPtr_regularRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_bool readProperty_mExportedFunction (void) const ;
  public: void setProperty_mExportedFunction (const GALGAS_bool & inValue) ;

  public: class GALGAS_routineKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GALGAS_routineKind & inValue) ;

  public: class GALGAS_omnibusType readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_bool readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const ;
  public: void setProperty_mAppendFileAndLineArgumentForPanicLocation (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_regularRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                                  const class GALGAS_bool & inOperand1,
                                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                                  const class GALGAS_omnibusType & inOperand3,
                                                                                                                  const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                                                                  const class GALGAS_allocaList & inOperand5,
                                                                                                                  const class GALGAS_instructionListIR & inOperand6,
                                                                                                                  const class GALGAS_bool & inOperand7,
                                                                                                                  const class GALGAS_routineKind & inOperand8,
                                                                                                                  const class GALGAS_omnibusType & inOperand9,
                                                                                                                  const class GALGAS_bool & inOperand10,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_regularRoutineIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_regularRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_bool & inOperand1,
                                                               const class GALGAS_bool & inOperand2,
                                                               const class GALGAS_omnibusType & inOperand3,
                                                               const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                               const class GALGAS_allocaList & inOperand5,
                                                               const class GALGAS_instructionListIR & inOperand6,
                                                               const class GALGAS_bool & inOperand7,
                                                               const class GALGAS_routineKind & inOperand8,
                                                               const class GALGAS_omnibusType & inOperand9,
                                                               const class GALGAS_bool & inOperand10
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_regularRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_regularRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @regularRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_regularRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         const class GALGAS_omnibusType & inOperand3,
                                                                                                         const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                                                         const class GALGAS_allocaList & inOperand5,
                                                                                                         const class GALGAS_instructionListIR & inOperand6,
                                                                                                         const class GALGAS_bool & inOperand7,
                                                                                                         const class GALGAS_routineKind & inOperand8,
                                                                                                         const class GALGAS_omnibusType & inOperand9,
                                                                                                         const class GALGAS_bool & inOperand10,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_allocaList mProperty_mAllocaList ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public: GALGAS_bool mProperty_mExportedFunction ;
  public: GALGAS_routineKind mProperty_mKind ;
  public: GALGAS_omnibusType mProperty_mReturnType ;
  public: GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;


//--- Default constructor
  public: cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_regularRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                 const GALGAS_bool & in_isRequired,
                                 const GALGAS_bool & in_warnsIfUnused,
                                 const GALGAS_omnibusType & in_mReceiverType,
                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                 const GALGAS_allocaList & in_mAllocaList,
                                 const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                 const GALGAS_bool & in_mExportedFunction,
                                 const GALGAS_routineKind & in_mKind,
                                 const GALGAS_omnibusType & in_mReturnType,
                                 const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_regularRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_regularRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_regularRoutineIR_2D_weak (const class GALGAS_regularRoutineIR & inSource) ;

  public: GALGAS_regularRoutineIR_2D_weak & operator = (const class GALGAS_regularRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_regularRoutineIR bang_regularRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_regularRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_regularRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_regularRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_regularRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_mode & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode isSafe' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isSafe (const class GALGAS_mode & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForSystemRoutine' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const class GALGAS_mode & inObject,
                                                                                        const class GALGAS_string & constinArgument0,
                                                                                        const class GALGAS_string & constinArgument1,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_panicAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_panicAST_2D_weak (const class GALGAS_panicAST & inSource) ;

  public: GALGAS_panicAST_2D_weak & operator = (const class GALGAS_panicAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_panicAST bang_panicAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_panicAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedPanicRoutine : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedPanicRoutine (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedPanicRoutine (const class cPtr_decoratedPanicRoutine * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsSetup (void) const ;
  public: void setProperty_mIsSetup (const GALGAS_bool & inValue) ;

  public: class GALGAS_lbigint readProperty_mPriority (void) const ;
  public: void setProperty_mPriority (const GALGAS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedPanicRoutine init_21__21_ (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_lbigint & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedPanicRoutine extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedPanicRoutine class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lbigint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedPanicRoutine class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedPanicRoutine class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedPanicRoutine : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedPanicRoutine_init_21__21_ (const class GALGAS_bool & inOperand0,
                                                   const class GALGAS_lbigint & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsSetup ;
  public: GALGAS_lbigint mProperty_mPriority ;


//--- Default constructor
  public: cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                      const GALGAS_lbigint & in_mPriority
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedPanicRoutine_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedPanicRoutine_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedPanicRoutine_2D_weak (const class GALGAS_decoratedPanicRoutine & inSource) ;

  public: GALGAS_decoratedPanicRoutine_2D_weak & operator = (const class GALGAS_decoratedPanicRoutine & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedPanicRoutine bang_decoratedPanicRoutine_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedPanicRoutine_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedPanicRoutine_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedPanicRoutine_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bigint mProperty_mPriority ;
  public: inline GALGAS_bigint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPriority (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_panicSortedListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_panicSortedListIR_2D_element (const GALGAS_bigint & in_mPriority) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_panicSortedListIR_2D_element init_21_ (const class GALGAS_bigint & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicSortedListIR_2D_element class_func_new (const class GALGAS_bigint & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_panicSortedListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fileSpecificPanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_fileSpecificPanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_fileSpecificPanicRoutineIR (const class cPtr_fileSpecificPanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_inFilePath (void) const ;
  public: void setProperty_inFilePath (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fileSpecificPanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                const class GALGAS_string & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fileSpecificPanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fileSpecificPanicRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_bool & inOperand2,
                                                                         const class GALGAS_string & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fileSpecificPanicRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @fileSpecificPanicRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_fileSpecificPanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_bool & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_inFilePath ;


//--- Default constructor
  public: cPtr_fileSpecificPanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                           const GALGAS_bool & in_isRequired,
                                           const GALGAS_bool & in_warnsIfUnused,
                                           const GALGAS_string & in_inFilePath
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fileSpecificPanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak (const class GALGAS_fileSpecificPanicRoutineIR & inSource) ;

  public: GALGAS_fileSpecificPanicRoutineIR_2D_weak & operator = (const class GALGAS_fileSpecificPanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_fileSpecificPanicRoutineIR bang_fileSpecificPanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fileSpecificPanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fileSpecificPanicRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_fileSpecificPanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fileSpecificPanicRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_universalModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_universalModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_universalModePanicRoutineIR (const class cPtr_universalModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_universalModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_universalModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_universalModePanicRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_universalModePanicRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @universalModePanicRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_universalModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & arg_ioSectionList,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_universalModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_universalModePanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_universalModePanicRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_universalModePanicRoutineIR_2D_weak (const class GALGAS_universalModePanicRoutineIR & inSource) ;

  public: GALGAS_universalModePanicRoutineIR_2D_weak & operator = (const class GALGAS_universalModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_universalModePanicRoutineIR bang_universalModePanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_universalModePanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_universalModePanicRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_universalModePanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_universalModePanicRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sectionModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_sectionModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sectionModePanicRoutineIR (const class cPtr_sectionModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_panicSortedListIR readProperty_mPanicSetupListIR (void) const ;
  public: void setProperty_mPanicSetupListIR (const GALGAS_panicSortedListIR & inValue) ;

  public: class GALGAS_panicSortedListIR readProperty_mPanicLoopListIR (void) const ;
  public: void setProperty_mPanicLoopListIR (const GALGAS_panicSortedListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sectionModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_bool & inOperand2,
                                                                                                   const class GALGAS_panicSortedListIR & inOperand3,
                                                                                                   const class GALGAS_panicSortedListIR & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sectionModePanicRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_panicSortedListIR & inOperand3,
                                                                        const class GALGAS_panicSortedListIR & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sectionModePanicRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sectionModePanicRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sectionModePanicRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_bool & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          const class GALGAS_panicSortedListIR & inOperand3,
                                                                                          const class GALGAS_panicSortedListIR & inOperand4,
                                                                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: GALGAS_panicSortedListIR mProperty_mPanicLoopListIR ;


//--- Default constructor
  public: cPtr_sectionModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                          const GALGAS_bool & in_isRequired,
                                          const GALGAS_bool & in_warnsIfUnused,
                                          const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                          const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sectionModePanicRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sectionModePanicRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sectionModePanicRoutineIR_2D_weak (const class GALGAS_sectionModePanicRoutineIR & inSource) ;

  public: GALGAS_sectionModePanicRoutineIR_2D_weak & operator = (const class GALGAS_sectionModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sectionModePanicRoutineIR bang_sectionModePanicRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionModePanicRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sectionModePanicRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sectionModePanicRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sectionModePanicRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeConvertToBooleanAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeConvertToBooleanAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak (const class GALGAS_compileTimeConvertToBooleanAST & inSource) ;

  public: GALGAS_compileTimeConvertToBooleanAST_2D_weak & operator = (const class GALGAS_compileTimeConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeConvertToBooleanAST bang_compileTimeConvertToBooleanAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeConvertToBooleanAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeConvertToBooleanAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeConvertToBooleanAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeConvertToBooleanAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractLLVMInstruction mProperty_mInstruction ;
  public: inline GALGAS_abstractLLVMInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_abstractLLVMInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_llvmGenerationInstructionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_llvmGenerationInstructionList_2D_element (const GALGAS_abstractLLVMInstruction & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmGenerationInstructionList_2D_element init_21_ (const class GALGAS_abstractLLVMInstruction & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenerationInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmGenerationInstructionList_2D_element class_func_new (const class GALGAS_abstractLLVMInstruction & inOperand0,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmGenerationInstructionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmConvertToBooleanAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmConvertToBooleanAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmConvertToBooleanAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmConvertToBooleanAST_2D_weak (const class GALGAS_llvmConvertToBooleanAST & inSource) ;

  public: GALGAS_llvmConvertToBooleanAST_2D_weak & operator = (const class GALGAS_llvmConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmConvertToBooleanAST bang_llvmConvertToBooleanAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmConvertToBooleanAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmConvertToBooleanAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmConvertToBooleanAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmConvertToBooleanAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum implicitBooleanConversionResult
//--------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_compileTime,
    enum_llvmVariable
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_compileTime (class GALGAS_bool & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmVariable (class GALGAS_string & out_name) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_implicitBooleanConversionResult class_func_compileTime (const class GALGAS_bool & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_implicitBooleanConversionResult class_func_llvmVariable (const class GALGAS_string & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_compileTime (class GALGAS_bool & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmVariable (class GALGAS_string & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ getter_compileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ getter_llvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitBooleanConversionResult_2D_compileTime struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult_2D_compileTime : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_value ;
  public: inline GALGAS_bool readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult_2D_compileTime (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_implicitBooleanConversionResult_2D_compileTime (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_implicitBooleanConversionResult_2D_compileTime (const GALGAS_bool & in_value) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_implicitBooleanConversionResult_2D_compileTime init_21_ (const class GALGAS_bool & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult_2D_compileTime extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_implicitBooleanConversionResult_2D_compileTime class_func_new (const class GALGAS_bool & inOperand0,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult_2D_compileTime class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2D_compileTime ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: implicitBooleanConversionResult-compileTime? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_implicitBooleanConversionResult_2D_compileTime mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ (const GALGAS_implicitBooleanConversionResult_2D_compileTime & inValue) ;
  public: static GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_implicitBooleanConversionResult_2D_compileTime unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2D_compileTime_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitBooleanConversionResult_2D_llvmVariable struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult_2D_llvmVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_name ;
  public: inline GALGAS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult_2D_llvmVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_implicitBooleanConversionResult_2D_llvmVariable (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_implicitBooleanConversionResult_2D_llvmVariable (const GALGAS_string & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_implicitBooleanConversionResult_2D_llvmVariable init_21_ (const class GALGAS_string & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult_2D_llvmVariable extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_implicitBooleanConversionResult_2D_llvmVariable class_func_new (const class GALGAS_string & inOperand0,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult_2D_llvmVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2D_llvmVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: implicitBooleanConversionResult-llvmVariable? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_implicitBooleanConversionResult_2D_llvmVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ (const GALGAS_implicitBooleanConversionResult_2D_llvmVariable & inValue) ;
  public: static GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_implicitBooleanConversionResult_2D_llvmVariable unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2D_llvmVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@implicitBooleanConversionResult llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmName (const class GALGAS_implicitBooleanConversionResult & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const class GALGAS_objectIR constin_inReceiverOperand,
                                                       const class GALGAS_location constin_inErrorLocation,
                                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                       class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                       class GALGAS_allocaList & io_ioAllocaList,
                                                       class GALGAS_implicitBooleanConversionResult & out_outResult,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeImplicitConverterToBoolean (const class cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeImplicitConverterToBoolean init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_ctExpressionAST & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeImplicitConverterToBoolean class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_ctExpressionAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeImplicitConverterToBoolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeImplicitConverterToBoolean_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_ctExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR arg_inReceiverOperand,
           const class GALGAS_location arg_inErrorLocation,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                      const GALGAS_ctExpressionAST & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak (const class GALGAS_compileTimeImplicitConverterToBoolean & inSource) ;

  public: GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_compileTimeImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeImplicitConverterToBoolean bang_compileTimeImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmImplicitConverterToBoolean (const class cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmImplicitConverterToBoolean init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_omnibusType & inOperand1,
                                                                         const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmImplicitConverterToBoolean class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_omnibusType & inOperand1,
                                                                             const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmImplicitConverterToBoolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_llvmImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmImplicitConverterToBoolean_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_omnibusType & inOperand1,
                                                                const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR arg_inReceiverOperand,
           const class GALGAS_location arg_inErrorLocation,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                               const GALGAS_omnibusType & in_mReceiverType,
                                               const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak (const class GALGAS_llvmImplicitConverterToBoolean & inSource) ;

  public: GALGAS_llvmImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_llvmImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmImplicitConverterToBoolean bang_llvmImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const class GALGAS_implicitConversionToBooleanMap inObject,
                                                   const class GALGAS_objectIR constin_inReceiverOperand,
                                                   const class GALGAS_location constin_inErrorLocation,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_implicitBooleanConversionResult & out_outResult,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR omnibusTypeDescriptionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_omnibusTypeDescriptionName (const class GALGAS_objectIR & inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_expressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_expressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionAST_2D_weak (const class GALGAS_expressionAST & inSource) ;

  public: GALGAS_expressionAST_2D_weak & operator = (const class GALGAS_expressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionAST bang_expressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_expressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_expressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_expressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (class cPtr_expressionAST * inObject,
                                                               class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (class cPtr_expressionAST * inObject,
                                            const class GALGAS_omnibusType constin_inSelfType,
                                            const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                            const class GALGAS_omnibusType constin_inTargetType,
                                            const class GALGAS_semanticContext constin_inContext,
                                            const class GALGAS_mode constin_inMode,
                                            class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                            class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                            class GALGAS_allocaList & io_ioAllocaList,
                                            class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                            class GALGAS_objectIR & out_outResult,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @convertExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_convertExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_convertExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_convertExpressionAST_2D_weak (const class GALGAS_convertExpressionAST & inSource) ;

  public: GALGAS_convertExpressionAST_2D_weak & operator = (const class GALGAS_convertExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_convertExpressionAST bang_convertExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_convertExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_convertExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_convertExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_convertExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractInstructionIR_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractInstructionIR_2D_weak (const class GALGAS_abstractInstructionIR & inSource) ;

  public: GALGAS_abstractInstructionIR_2D_weak & operator = (const class GALGAS_abstractInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractInstructionIR bang_abstractInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extendExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extendExpressionAST_2D_weak (const class GALGAS_extendExpressionAST & inSource) ;

  public: GALGAS_extendExpressionAST_2D_weak & operator = (const class GALGAS_extendExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extendExpressionAST bang_extendExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncateExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncateExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncateExpressionAST_2D_weak (const class GALGAS_truncateExpressionAST & inSource) ;

  public: GALGAS_truncateExpressionAST_2D_weak & operator = (const class GALGAS_truncateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncateExpressionAST bang_truncateExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncateExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncateExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncateInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_truncateInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_truncateInstructionIR (const class cPtr_truncateInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_truncateInstructionIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                            const class GALGAS_objectIR & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateInstructionIR extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncateInstructionIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_objectIR & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @truncateInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_truncateInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncateInstructionIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                   const class GALGAS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_objectIR mProperty_mOperand ;


//--- Default constructor
  public: cPtr_truncateInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncateInstructionIR (const GALGAS_objectIR & in_mTarget,
                                      const GALGAS_objectIR & in_mOperand
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncateInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncateInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncateInstructionIR_2D_weak (const class GALGAS_truncateInstructionIR & inSource) ;

  public: GALGAS_truncateInstructionIR_2D_weak & operator = (const class GALGAS_truncateInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncateInstructionIR bang_truncateInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncateInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncateInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncateInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncateInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofControlRegisterAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addressofControlRegisterAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofControlRegisterAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofControlRegisterAST_2D_weak (const class GALGAS_addressofControlRegisterAST & inSource) ;

  public: GALGAS_addressofControlRegisterAST_2D_weak & operator = (const class GALGAS_addressofControlRegisterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofControlRegisterAST bang_addressofControlRegisterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofControlRegisterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addressofControlRegisterAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addressofControlRegisterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofControlRegisterAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addressofExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofExpressionAST_2D_weak (const class GALGAS_addressofExpressionAST & inSource) ;

  public: GALGAS_addressofExpressionAST_2D_weak & operator = (const class GALGAS_addressofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofExpressionAST bang_addressofExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addressofExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addressofExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addressofInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_addressofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_LValueRepresentation readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GALGAS_LValueRepresentation & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_addressofInstructionIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                             const class GALGAS_LValueRepresentation & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofInstructionIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addressofInstructionIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_LValueRepresentation & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @LValueRepresentation struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusType mProperty_type ;
  public: inline GALGAS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GALGAS_string mProperty_llvmName ;
  public: inline GALGAS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_LValueRepresentation (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_LValueRepresentation (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_LValueRepresentation (const GALGAS_omnibusType & in_type,
                                       const GALGAS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_LValueRepresentation init_21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                           const class GALGAS_string & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_LValueRepresentation extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_LValueRepresentation class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_LValueRepresentation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addressofInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addressofInstructionIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                    const class GALGAS_LValueRepresentation & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_LValueRepresentation mProperty_mLValue ;


//--- Default constructor
  public: cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                       const GALGAS_LValueRepresentation & in_mLValue
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addressofInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addressofInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addressofInstructionIR_2D_weak (const class GALGAS_addressofInstructionIR & inSource) ;

  public: GALGAS_addressofInstructionIR_2D_weak & operator = (const class GALGAS_addressofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addressofInstructionIR bang_addressofInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addressofInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addressofInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addressofInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addressofInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sizeofExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofExpressionAST_2D_weak (const class GALGAS_sizeofExpressionAST & inSource) ;

  public: GALGAS_sizeofExpressionAST_2D_weak & operator = (const class GALGAS_sizeofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofExpressionAST bang_sizeofExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sizeofExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sizeofExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sizeofTypeAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofTypeAST_2D_weak (const class GALGAS_sizeofTypeAST & inSource) ;

  public: GALGAS_sizeofTypeAST_2D_weak & operator = (const class GALGAS_sizeofTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofTypeAST bang_sizeofTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sizeofTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sizeofTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sizeofInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_sizeofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sizeofInstructionIR (const class cPtr_sizeofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GALGAS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sizeofInstructionIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                          const class GALGAS_omnibusType & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofInstructionIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sizeofInstructionIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_omnibusType & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sizeofInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sizeofInstructionIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                 const class GALGAS_omnibusType & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_omnibusType mProperty_mSourceType ;


//--- Default constructor
  public: cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                    const GALGAS_omnibusType & in_mSourceType
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sizeofInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sizeofInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sizeofInstructionIR_2D_weak (const class GALGAS_sizeofInstructionIR & inSource) ;

  public: GALGAS_sizeofInstructionIR_2D_weak & operator = (const class GALGAS_sizeofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sizeofInstructionIR bang_sizeofInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sizeofInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sizeofInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sizeofInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sizeofInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_primaryInExpressionAccessAST mProperty_mAccess ;
  public: inline GALGAS_primaryInExpressionAccessAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GALGAS_primaryInExpressionAccessAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & in_mAccess) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primaryInExpressionAccessListAST_2D_element init_21_ (const class GALGAS_primaryInExpressionAccessAST & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAccessListAST_2D_element class_func_new (const class GALGAS_primaryInExpressionAccessAST & inOperand0,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typedConstantCallAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typedConstantCallAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typedConstantCallAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typedConstantCallAST_2D_weak (const class GALGAS_typedConstantCallAST & inSource) ;

  public: GALGAS_typedConstantCallAST_2D_weak & operator = (const class GALGAS_typedConstantCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typedConstantCallAST bang_typedConstantCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typedConstantCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typedConstantCallAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typedConstantCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typedConstantCallAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionAST_2D_weak (const class GALGAS_ifExpressionAST & inSource) ;

  public: GALGAS_ifExpressionAST_2D_weak & operator = (const class GALGAS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionAST bang_ifExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanShortCircuitAndOperatorExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak (const class GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & operator = (const class GALGAS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_booleanShortCircuitAndOperatorExpressionAST bang_booleanShortCircuitAndOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceFieldListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerSliceFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSliceWidth ;
  public: inline GALGAS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mExpressionLocation ;
  public: inline GALGAS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_integerSliceFieldListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & in_mSliceWidth,
                                                      const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_location & in_mExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_integerSliceFieldListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_expressionAST & inOperand1,
                                                                              const class GALGAS_location & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerSliceFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerSliceFieldListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_expressionAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerSliceFieldListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerSliceExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerSliceExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerSliceExpressionAST_2D_weak (const class GALGAS_integerSliceExpressionAST & inSource) ;

  public: GALGAS_integerSliceExpressionAST_2D_weak & operator = (const class GALGAS_integerSliceExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerSliceExpressionAST bang_integerSliceExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerSliceExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerSliceExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_integerSliceExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerSliceExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntegerInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalIntegerInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalIntegerInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalIntegerInExpressionAST_2D_weak (const class GALGAS_literalIntegerInExpressionAST & inSource) ;

  public: GALGAS_literalIntegerInExpressionAST_2D_weak & operator = (const class GALGAS_literalIntegerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalIntegerInExpressionAST bang_literalIntegerInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalIntegerInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalIntegerInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalIntegerInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalIntegerInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringInExpressionAST_2D_weak (const class GALGAS_literalStringInExpressionAST & inSource) ;

  public: GALGAS_literalStringInExpressionAST_2D_weak & operator = (const class GALGAS_literalStringInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringInExpressionAST bang_literalStringInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBooleanInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBooleanInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBooleanInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBooleanInExpressionAST_2D_weak (const class GALGAS_literalBooleanInExpressionAST & inSource) ;

  public: GALGAS_literalBooleanInExpressionAST_2D_weak & operator = (const class GALGAS_literalBooleanInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBooleanInExpressionAST bang_literalBooleanInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBooleanInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalBooleanInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalBooleanInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBooleanInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_registerInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerInExpressionAST_2D_weak (const class GALGAS_registerInExpressionAST & inSource) ;

  public: GALGAS_registerInExpressionAST_2D_weak & operator = (const class GALGAS_registerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerInExpressionAST bang_registerInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_registerInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIntegerFieldListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerIntegerFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFieldName ;
  public: inline GALGAS_lstring readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mExpressionLocation ;
  public: inline GALGAS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_registerIntegerFieldListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & in_mFieldName,
                                                         const GALGAS_expressionAST & in_mExpression,
                                                         const GALGAS_location & in_mExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_registerIntegerFieldListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_expressionAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerIntegerFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerIntegerFieldListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_expressionAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerIntegerFieldListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerConstantExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerConstantExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_registerConstantExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_registerConstantExpressionAST_2D_weak (const class GALGAS_registerConstantExpressionAST & inSource) ;

  public: GALGAS_registerConstantExpressionAST_2D_weak & operator = (const class GALGAS_registerConstantExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_registerConstantExpressionAST bang_registerConstantExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerConstantExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerConstantExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_registerConstantExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerConstantExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2D_arrayAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_arrayAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_expressionAST mProperty_index ;
  public: inline GALGAS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GALGAS_location mProperty_endOfIndex ;
  public: inline GALGAS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GALGAS_bool mProperty_checkIndexExpression ;
  public: inline GALGAS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_arrayAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primaryInExpressionAccessAST_2D_arrayAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_arrayAccess (const GALGAS_expressionAST & in_index,
                                                              const GALGAS_location & in_endOfIndex,
                                                              const GALGAS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primaryInExpressionAccessAST_2D_arrayAccess init_21__21__21_ (const class GALGAS_expressionAST & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_arrayAccess extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAccessAST_2D_arrayAccess class_func_new (const class GALGAS_expressionAST & inOperand0,
                                                                                          const class GALGAS_location & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_arrayAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_arrayAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST-arrayAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_primaryInExpressionAccessAST_2D_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_arrayAccess & inValue) ;
  public: static GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_primaryInExpressionAccessAST_2D_arrayAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2D_funcCall struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_funcCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_methodName ;
  public: inline GALGAS_lstring readProperty_methodName (void) const {
    return mProperty_methodName ;
  }

  public: GALGAS_effectiveArgumentListAST mProperty_arguments ;
  public: inline GALGAS_effectiveArgumentListAST readProperty_arguments (void) const {
    return mProperty_arguments ;
  }

  public: GALGAS_location mProperty_endOfArguments ;
  public: inline GALGAS_location readProperty_endOfArguments (void) const {
    return mProperty_endOfArguments ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_funcCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_methodName = inValue ;
  }

  public: inline void setter_setArguments (const GALGAS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arguments = inValue ;
  }

  public: inline void setter_setEndOfArguments (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfArguments = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primaryInExpressionAccessAST_2D_funcCall (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_funcCall (const GALGAS_lstring & in_methodName,
                                                           const GALGAS_effectiveArgumentListAST & in_arguments,
                                                           const GALGAS_location & in_endOfArguments) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primaryInExpressionAccessAST_2D_funcCall init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_funcCall extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAccessAST_2D_funcCall class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_effectiveArgumentListAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_funcCall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST-funcCall? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_primaryInExpressionAccessAST_2D_funcCall mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_funcCall & inValue) ;
  public: static GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_primaryInExpressionAccessAST_2D_funcCall unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_funcCall_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2D_integerSlice struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_integerSlice : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lbigint mProperty_low ;
  public: inline GALGAS_lbigint readProperty_low (void) const {
    return mProperty_low ;
  }

  public: GALGAS_lbigint mProperty_high ;
  public: inline GALGAS_lbigint readProperty_high (void) const {
    return mProperty_high ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_integerSlice (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLow (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_low = inValue ;
  }

  public: inline void setter_setHigh (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_high = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primaryInExpressionAccessAST_2D_integerSlice (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_integerSlice (const GALGAS_lbigint & in_low,
                                                               const GALGAS_lbigint & in_high) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primaryInExpressionAccessAST_2D_integerSlice init_21__21_ (const class GALGAS_lbigint & inOperand0,
                                                                                   const class GALGAS_lbigint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_integerSlice extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAccessAST_2D_integerSlice class_func_new (const class GALGAS_lbigint & inOperand0,
                                                                                           const class GALGAS_lbigint & inOperand1,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_integerSlice class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST-integerSlice? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_primaryInExpressionAccessAST_2D_integerSlice mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_integerSlice & inValue) ;
  public: static GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_primaryInExpressionAccessAST_2D_integerSlice unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_integerSlice_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2D_property struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_name ;
  public: inline GALGAS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primaryInExpressionAccessAST_2D_property (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_property (const GALGAS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primaryInExpressionAccessAST_2D_property init_21_ (const class GALGAS_lstring & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_property extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAccessAST_2D_property class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_property class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST-property? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAccessAST_2D_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_primaryInExpressionAccessAST_2D_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAccessAST_2D_property_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_primaryInExpressionAccessAST_2D_property_3F_ (const GALGAS_primaryInExpressionAccessAST_2D_property & inValue) ;
  public: static GALGAS_primaryInExpressionAccessAST_2D_property_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_primaryInExpressionAccessAST_2D_property unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAccessAST_2D_property_3F_ extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST_2D_property_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2D_property_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primaryInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_primaryInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_primaryInExpressionAST_2D_weak (const class GALGAS_primaryInExpressionAST & inSource) ;

  public: GALGAS_primaryInExpressionAST_2D_weak & operator = (const class GALGAS_primaryInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_primaryInExpressionAST bang_primaryInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primaryInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primaryInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_primaryInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primaryInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneFunctionInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_standaloneFunctionInExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak (const class GALGAS_standaloneFunctionInExpressionAST & inSource) ;

  public: GALGAS_standaloneFunctionInExpressionAST_2D_weak & operator = (const class GALGAS_standaloneFunctionInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standaloneFunctionInExpressionAST bang_standaloneFunctionInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneFunctionInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_standaloneFunctionInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_standaloneFunctionInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standaloneFunctionInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallEffectiveParameterListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionCallEffectiveParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_expressionAST & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionCallEffectiveParameterListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallEffectiveParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionCallEffectiveParameterListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_expressionAST & inOperand1,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionCallEffectiveParameterListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorCallAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorCallAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constructorCallAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constructorCallAST_2D_weak (const class GALGAS_constructorCallAST & inSource) ;

  public: GALGAS_constructorCallAST_2D_weak & operator = (const class GALGAS_constructorCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constructorCallAST bang_constructorCallAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorCallAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorCallAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_constructorCallAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorCallAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimeInfixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_compileTimeInfixOperatorEnumeration & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixOperatorAST_2D_weak (const class GALGAS_compileTimeInfixOperatorAST & inSource) ;

  public: GALGAS_compileTimeInfixOperatorAST_2D_weak & operator = (const class GALGAS_compileTimeInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixOperatorAST bang_compileTimeInfixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeInfixOperatorAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixOperatorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixOperatorUsage (const class cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeInfixOperatorUsage init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_ctExpressionAST & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeInfixOperatorUsage class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_ctExpressionAST & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeInfixOperatorUsage_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_ctExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_objectIR arg_inRightOperand,
           class GALGAS_bigint & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_objectIR arg_inRightOperand,
           const class GALGAS_omnibusType arg_inResultType,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                              const GALGAS_lstring & in_mRightOperandName,
                                              const GALGAS_ctExpressionAST & in_mExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak (const class GALGAS_compileTimeInfixOperatorUsage & inSource) ;

  public: GALGAS_compileTimeInfixOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimeInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixOperatorUsage bang_compileTimeInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeInfixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage (const class cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mEqualOperatorUsage (void) const ;
  public: void setProperty_mEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & inValue) ;

  public: class GALGAS_compileTimeInfixOperatorUsage readProperty_mLessThanOperatorUsage (void) const ;
  public: void setProperty_mLessThanOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage init_21__21_ (const class GALGAS_compileTimeInfixOperatorUsage & inOperand0,
                                                                            const class GALGAS_compileTimeInfixOperatorUsage & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeInfixInfEqualOperatorUsage class_func_new (const class GALGAS_compileTimeInfixOperatorUsage & inOperand0,
                                                                                    const class GALGAS_compileTimeInfixOperatorUsage & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixInfEqualOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixInfEqualOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const class GALGAS_compileTimeInfixOperatorUsage & inOperand0,
                                                                   const class GALGAS_compileTimeInfixOperatorUsage & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_objectIR arg_inRightOperand,
           const class GALGAS_omnibusType arg_inResultType,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public: GALGAS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;


//--- Default constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                      const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak (const class GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

  public: GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeInfixInfEqualOperatorUsage bang_compileTimeInfixInfEqualOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @genericFormalParameterList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_genericFormalParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_genericFormalParameter mProperty_mParameter ;
  public: inline GALGAS_genericFormalParameter readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameter (const GALGAS_genericFormalParameter & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_genericFormalParameterList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_genericFormalParameterList_2D_element (const GALGAS_genericFormalParameter & in_mParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_genericFormalParameterList_2D_element init_21_ (const class GALGAS_genericFormalParameter & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_genericFormalParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_genericFormalParameterList_2D_element class_func_new (const class GALGAS_genericFormalParameter & inOperand0,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_genericFormalParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_genericFormalParameterList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInfixOperatorAST_2D_weak (const class GALGAS_llvmInfixOperatorAST & inSource) ;

  public: GALGAS_llvmInfixOperatorAST_2D_weak & operator = (const class GALGAS_llvmInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInfixOperatorAST bang_llvmInfixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmInfixOperatorAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmInfixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInfixOperatorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInfixOperatorUsage (const class cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mInfixMangledFunctionName (void) const ;
  public: void setProperty_mInfixMangledFunctionName (const GALGAS_string & inValue) ;

  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmInfixOperatorUsage init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_llvmGenerationInstructionList & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmInfixOperatorUsage class_func_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_llvmGenerationInstructionList & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmInfixOperatorUsage_init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_lstring & inOperand2,
                                                            const class GALGAS_llvmGenerationInstructionList & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_objectIR arg_inRightOperand,
           const class GALGAS_omnibusType arg_inResultType,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mInfixMangledFunctionName ;
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInfixOperatorUsage (const GALGAS_string & in_mInfixMangledFunctionName,
                                       const GALGAS_lstring & in_mLeftOperandName,
                                       const GALGAS_lstring & in_mRightOperandName,
                                       const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInfixOperatorUsage_2D_weak (const class GALGAS_llvmInfixOperatorUsage & inSource) ;

  public: GALGAS_llvmInfixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInfixOperatorUsage bang_llvmInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmInfixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmInlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmInlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmInlineInfixOperatorUsage (const class cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmInlineInfixOperatorUsage init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmInlineInfixOperatorUsage class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmInlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInlineInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_llvmInlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmInlineInfixOperatorUsage_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_objectIR arg_inRightOperand,
           const class GALGAS_omnibusType arg_inResultType,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLeftOperandName ;
  public: GALGAS_lstring mProperty_mRightOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInlineInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                             const GALGAS_lstring & in_mRightOperandName,
                                             const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmInlineInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak (const class GALGAS_llvmInlineInfixOperatorUsage & inSource) ;

  public: GALGAS_llvmInlineInfixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmInlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmInlineInfixOperatorUsage bang_llvmInlineInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmInlineInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmInlineInfixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmInlineInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_infixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_infixOperatorRoutineIR (const class cPtr_infixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mTargetVarName (void) const ;
  public: void setProperty_mTargetVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mSourceVarName (void) const ;
  public: void setProperty_mSourceVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_infixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                                    const class GALGAS_omnibusType & inOperand3,
                                                                                                                    const class GALGAS_string & inOperand4,
                                                                                                                    const class GALGAS_omnibusType & inOperand5,
                                                                                                                    const class GALGAS_string & inOperand6,
                                                                                                                    const class GALGAS_omnibusType & inOperand7,
                                                                                                                    const class GALGAS_stringlist & inOperand8,
                                                                                                                    const class GALGAS_allocaList & inOperand9,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_infixOperatorRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_omnibusType & inOperand3,
                                                                     const class GALGAS_string & inOperand4,
                                                                     const class GALGAS_omnibusType & inOperand5,
                                                                     const class GALGAS_string & inOperand6,
                                                                     const class GALGAS_omnibusType & inOperand7,
                                                                     const class GALGAS_stringlist & inOperand8,
                                                                     const class GALGAS_allocaList & inOperand9
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_infixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_infixOperatorRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @infixOperatorRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_infixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                           const class GALGAS_bool & inOperand1,
                                                                                                           const class GALGAS_bool & inOperand2,
                                                                                                           const class GALGAS_omnibusType & inOperand3,
                                                                                                           const class GALGAS_string & inOperand4,
                                                                                                           const class GALGAS_omnibusType & inOperand5,
                                                                                                           const class GALGAS_string & inOperand6,
                                                                                                           const class GALGAS_omnibusType & inOperand7,
                                                                                                           const class GALGAS_stringlist & inOperand8,
                                                                                                           const class GALGAS_allocaList & inOperand9,
                                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetVarName ;
  public: GALGAS_omnibusType mProperty_mSourceType ;
  public: GALGAS_string mProperty_mSourceVarName ;
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_infixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_infixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                       const GALGAS_bool & in_isRequired,
                                       const GALGAS_bool & in_warnsIfUnused,
                                       const GALGAS_omnibusType & in_mTargetType,
                                       const GALGAS_string & in_mTargetVarName,
                                       const GALGAS_omnibusType & in_mSourceType,
                                       const GALGAS_string & in_mSourceVarName,
                                       const GALGAS_omnibusType & in_mResultType,
                                       const GALGAS_stringlist & in_mGeneratedInstructions,
                                       const GALGAS_allocaList & in_mAllocaList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_infixOperatorRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_infixOperatorRoutineIR_2D_weak (const class GALGAS_infixOperatorRoutineIR & inSource) ;

  public: GALGAS_infixOperatorRoutineIR_2D_weak & operator = (const class GALGAS_infixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_infixOperatorRoutineIR bang_infixOperatorRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_infixOperatorRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_infixOperatorRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_infixOperatorRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_infixOperatorRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const class GALGAS_objectIR constin_inLeftOperand,
                                       const class GALGAS_location constin_inOperatorLocation,
                                       const class GALGAS_objectIR constin_inRightOperand,
                                       const class GALGAS_omnibusType constin_inResultType,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_allocaList & io_ioAllocaList,
                                       class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       class GALGAS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const class GALGAS_infixOperatorMap inObject,
                                                const class GALGAS_objectIR constin_inLeftOperand,
                                                const class GALGAS_omnibusInfixOperator constin_inInfixOperator,
                                                const class GALGAS_location constin_inOperatorLocation,
                                                const class GALGAS_objectIR constin_inRightOperand,
                                                class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GALGAS_allocaList & io_ioAllocaList,
                                                class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                class GALGAS_objectIR & out_outResultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_infixOperatorMapKey (const class GALGAS_omnibusType & constinArgument0,
                                                   const class GALGAS_omnibusInfixOperator & constinArgument1,
                                                   const class GALGAS_location & constinArgument2,
                                                   const class GALGAS_omnibusType & constinArgument3,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_type (const class GALGAS_objectIR & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfixOperatorUsage (const class cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inlineInfixOperatorUsage init_21_ (const class GALGAS_string & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfixOperatorUsage class_func_new (const class GALGAS_string & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfixOperatorUsage_init_21_ (const class GALGAS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inLeftOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_objectIR arg_inRightOperand,
           const class GALGAS_omnibusType arg_inResultType,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMOperation ;


//--- Default constructor
  public: cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GALGAS_string & in_mLLVMOperation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfixOperatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfixOperatorUsage_2D_weak (const class GALGAS_inlineInfixOperatorUsage & inSource) ;

  public: GALGAS_inlineInfixOperatorUsage_2D_weak & operator = (const class GALGAS_inlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfixOperatorUsage bang_inlineInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusInfixOperator string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_omnibusInfixOperator & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusInfixOperatorExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusInfixOperatorExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_omnibusInfixOperatorExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_omnibusInfixOperatorExpressionAST_2D_weak (const class GALGAS_omnibusInfixOperatorExpressionAST & inSource) ;

  public: GALGAS_omnibusInfixOperatorExpressionAST_2D_weak & operator = (const class GALGAS_omnibusInfixOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_omnibusInfixOperatorExpressionAST bang_omnibusInfixOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusInfixOperatorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_omnibusInfixOperatorExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_omnibusInfixOperatorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusInfixOperatorExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperator extensionGetter_prefixOperator (const class GALGAS_compileTimePrefixOperatorEnumeration & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimePrefixOperatorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compiletimePrefixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compiletimePrefixOperatorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compiletimePrefixOperatorAST_2D_weak (const class GALGAS_compiletimePrefixOperatorAST & inSource) ;

  public: GALGAS_compiletimePrefixOperatorAST_2D_weak & operator = (const class GALGAS_compiletimePrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compiletimePrefixOperatorAST bang_compiletimePrefixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compiletimePrefixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compiletimePrefixOperatorAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compiletimePrefixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compiletimePrefixOperatorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimePrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimePrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimePrefixOperatorUsage (const class cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GALGAS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimePrefixOperatorUsage init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_ctExpressionAST & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimePrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimePrefixOperatorUsage class_func_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_ctExpressionAST & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimePrefixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimePrefixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimePrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimePrefixOperatorUsage_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_ctExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inReceiverOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_omnibusType arg_inResultType,
           const class GALGAS_bool arg_inDoNotGeneratePanicCode,
           const class GALGAS_bool arg_inSafeMode,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mPrefixOperatorLocation ;
  public: GALGAS_lstring mProperty_mReceiverOperandName ;
  public: GALGAS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimePrefixOperatorUsage (const GALGAS_location & in_mPrefixOperatorLocation,
                                               const GALGAS_lstring & in_mReceiverOperandName,
                                               const GALGAS_ctExpressionAST & in_mExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimePrefixOperatorUsage_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak (const class GALGAS_compileTimePrefixOperatorUsage & inSource) ;

  public: GALGAS_compileTimePrefixOperatorUsage_2D_weak & operator = (const class GALGAS_compileTimePrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimePrefixOperatorUsage bang_compileTimePrefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimePrefixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimePrefixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimePrefixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimePrefixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_string (const class GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperator extensionGetter_prefixOperator (const class GALGAS_llvmPrefixOperatorEnumeration & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmPrefixOperatorAST_2D_weak (const class GALGAS_llvmPrefixOperatorAST & inSource) ;

  public: GALGAS_llvmPrefixOperatorAST_2D_weak & operator = (const class GALGAS_llvmPrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmPrefixOperatorAST bang_llvmPrefixOperatorAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmPrefixOperatorAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmPrefixOperatorAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmPrefixOperatorUsage (const class cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mPrefixMangledFunctionName (void) const ;
  public: void setProperty_mPrefixMangledFunctionName (const GALGAS_string & inValue) ;

  public: class GALGAS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmPrefixOperatorUsage init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmPrefixOperatorUsage class_func_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmPrefixOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmPrefixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorUsage : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmPrefixOperatorUsage_init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                         const class GALGAS_lstring & inOperand1,
                                                         const class GALGAS_llvmGenerationInstructionList & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR arg_inReceiverOperand,
           const class GALGAS_location arg_inOperatorLocation,
           const class GALGAS_omnibusType arg_inResultType,
           const class GALGAS_bool arg_inDoNotGeneratePanicCode,
           const class GALGAS_bool arg_inSafeMode,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mPrefixMangledFunctionName ;
  public: GALGAS_lstring mProperty_mReceiverOperandName ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorUsage (const GALGAS_string & in_mPrefixMangledFunctionName,
                                        const GALGAS_lstring & in_mReceiverOperandName,
                                        const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorUsage_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmPrefixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmPrefixOperatorUsage_2D_weak (const class GALGAS_llvmPrefixOperatorUsage & inSource) ;

  public: GALGAS_llvmPrefixOperatorUsage_2D_weak & operator = (const class GALGAS_llvmPrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmPrefixOperatorUsage bang_llvmPrefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmPrefixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmPrefixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmPrefixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_prefixOperatorRoutineIR (const class cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mReceiverVarName (void) const ;
  public: void setProperty_mReceiverVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_prefixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                             const class GALGAS_bool & inOperand1,
                                                                                                             const class GALGAS_bool & inOperand2,
                                                                                                             const class GALGAS_omnibusType & inOperand3,
                                                                                                             const class GALGAS_string & inOperand4,
                                                                                                             const class GALGAS_omnibusType & inOperand5,
                                                                                                             const class GALGAS_stringlist & inOperand6,
                                                                                                             const class GALGAS_allocaList & inOperand7,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_omnibusType & inOperand3,
                                                                      const class GALGAS_string & inOperand4,
                                                                      const class GALGAS_omnibusType & inOperand5,
                                                                      const class GALGAS_stringlist & inOperand6,
                                                                      const class GALGAS_allocaList & inOperand7
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_omnibusType & inOperand3,
                                                                                                    const class GALGAS_string & inOperand4,
                                                                                                    const class GALGAS_omnibusType & inOperand5,
                                                                                                    const class GALGAS_stringlist & inOperand6,
                                                                                                    const class GALGAS_allocaList & inOperand7,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mReceiverVarName ;
  public: GALGAS_omnibusType mProperty_mResultType ;
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                        const GALGAS_bool & in_isRequired,
                                        const GALGAS_bool & in_warnsIfUnused,
                                        const GALGAS_omnibusType & in_mReceiverType,
                                        const GALGAS_string & in_mReceiverVarName,
                                        const GALGAS_omnibusType & in_mResultType,
                                        const GALGAS_stringlist & in_mGeneratedInstructions,
                                        const GALGAS_allocaList & in_mAllocaList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefixOperatorRoutineIR_2D_weak (const class GALGAS_prefixOperatorRoutineIR & inSource) ;

  public: GALGAS_prefixOperatorRoutineIR_2D_weak & operator = (const class GALGAS_prefixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefixOperatorRoutineIR bang_prefixOperatorRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_prefixOperatorRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_prefixOperatorUsage * inObject,
                                       const class GALGAS_objectIR constin_inReceiverOperand,
                                       const class GALGAS_location constin_inOperatorLocation,
                                       const class GALGAS_omnibusType constin_inResultType,
                                       const class GALGAS_bool constin_inDoNotGeneratePanicCode,
                                       const class GALGAS_bool constin_inSafeMode,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                       class GALGAS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const class GALGAS_prefixOperatorMap inObject,
                                                 const class GALGAS_objectIR constin_inReceiverOperand,
                                                 const class GALGAS_prefixOperator constin_inPrefixOperator,
                                                 const class GALGAS_location constin_inOperatorLocation,
                                                 const class GALGAS_bool constin_inSafeMode,
                                                 const class GALGAS_bool constin_inDoNotGeneratePanicCode,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                 class GALGAS_objectIR & out_outResultValue,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_prefixOperatorMapKey (const class GALGAS_omnibusType & constinArgument0,
                                                    const class GALGAS_prefixOperator & constinArgument1,
                                                    const class GALGAS_location & constinArgument2,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorExpressionAST_2D_weak : public GALGAS_expressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefixOperatorExpressionAST_2D_weak (const class GALGAS_prefixOperatorExpressionAST & inSource) ;

  public: GALGAS_prefixOperatorExpressionAST_2D_weak & operator = (const class GALGAS_prefixOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefixOperatorExpressionAST bang_prefixOperatorExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_prefixOperatorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_instructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_instructionAST_2D_weak (const class GALGAS_instructionAST & inSource) ;

  public: GALGAS_instructionAST_2D_weak & operator = (const class GALGAS_instructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_instructionAST bang_instructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (class cPtr_instructionAST * inObject,
                                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (class cPtr_instructionAST * inObject,
                                                      const class GALGAS_omnibusType constin_inSelfType,
                                                      const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      const class GALGAS_mode constin_inMode,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                      class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                      class GALGAS_allocaList & io_ioAllocaList,
                                                      class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const class GALGAS_instructionListAST inObject,
                                                   const class GALGAS_omnibusType constin_inSelfType,
                                                   const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                   class GALGAS_location in_inEndOfInstructionList,
                                                   const class GALGAS_semanticContext constin_inContext,
                                                   const class GALGAS_mode constin_inMode,
                                                   class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                   class GALGAS_allocaList & io_ioAllocaList,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_location constin_inSourceLocation,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                  const class GALGAS_location constin_inErrorLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GALGAS_universalValuedObjectMap & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const class GALGAS_instructionListAST inObject,
                                                    const class GALGAS_omnibusType constin_inSelfType,
                                                    const class GALGAS_routineAttributes constin_inRoutineAttributes,
                                                    const class GALGAS_semanticContext constin_inContext,
                                                    const class GALGAS_mode constin_inMode,
                                                    class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GALGAS_allocaList & io_ioAllocaList,
                                                    class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (class cPtr_abstractInstructionIR * inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_checkInstructionAST_2D_weak : public GALGAS_instructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_checkInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_checkInstructionAST_2D_weak (const class GALGAS_checkInstructionAST & inSource) ;

  public: GALGAS_checkInstructionAST_2D_weak & operator = (const class GALGAS_checkInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_checkInstructionAST bang_checkInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_checkInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_checkInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_checkInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_checkInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST_2D_weak ;

