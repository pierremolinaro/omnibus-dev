#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList routineSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_routineSemanticAnalysis (const class GGS_decoratedRegularRoutineList inObject,
                                              const class GGS_semanticContext constin_inContext,
                                              class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@decoratedRegularRoutineList.element semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_semanticAnalysis (const class GGS_decoratedRegularRoutineList_2E_element inObject,
                                       const class GGS_semanticContext constin_inContext,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@allocaList generateAllocaList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAllocaList (const class GGS_allocaList inObject,
                                         class GGS_string & io_ioLLVMcode,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_regularRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_regularRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_regularRoutineIR (const class cPtr_regularRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) ;

  public: class GGS_bool readProperty_mExportedFunction (void) const ;
  public: void setProperty_mExportedFunction (const GGS_bool & inValue) ;

  public: class GGS_routineKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_routineKind & inValue) ;

  public: class GGS_omnibusType readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GGS_omnibusType & inValue) ;

  public: class GGS_bool readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const ;
  public: void setProperty_mAppendFileAndLineArgumentForPanicLocation (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_regularRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_bool & inOperand2,
                                                                                                               const class GGS_omnibusType & inOperand3,
                                                                                                               const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                               const class GGS_allocaList & inOperand5,
                                                                                                               const class GGS_instructionListIR & inOperand6,
                                                                                                               const class GGS_bool & inOperand7,
                                                                                                               const class GGS_routineKind & inOperand8,
                                                                                                               const class GGS_omnibusType & inOperand9,
                                                                                                               const class GGS_bool & inOperand10,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularRoutineIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                            const class GGS_bool & inOperand1,
                                                            const class GGS_bool & inOperand2,
                                                            const class GGS_omnibusType & inOperand3,
                                                            const class GGS_routineFormalArgumentListIR & inOperand4,
                                                            const class GGS_allocaList & inOperand5,
                                                            const class GGS_instructionListIR & inOperand6,
                                                            const class GGS_bool & inOperand7,
                                                            const class GGS_routineKind & inOperand8,
                                                            const class GGS_omnibusType & inOperand9,
                                                            const class GGS_bool & inOperand10
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_regularRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_regularRoutineIR class


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
  public: void regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_bool & inOperand2,
                                                                                                         const class GGS_omnibusType & inOperand3,
                                                                                                         const class GGS_routineFormalArgumentListIR & inOperand4,
                                                                                                         const class GGS_allocaList & inOperand5,
                                                                                                         const class GGS_instructionListIR & inOperand6,
                                                                                                         const class GGS_bool & inOperand7,
                                                                                                         const class GGS_routineKind & inOperand8,
                                                                                                         const class GGS_omnibusType & inOperand9,
                                                                                                         const class GGS_bool & inOperand10,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_allocaList mProperty_mAllocaList ;
  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;
  public: GGS_bool mProperty_mExportedFunction ;
  public: GGS_routineKind mProperty_mKind ;
  public: GGS_omnibusType mProperty_mReturnType ;
  public: GGS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;


//--- Default constructor
  public: cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_regularRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                 const GGS_bool & in_isRequired,
                                 const GGS_bool & in_warnsIfUnused,
                                 const GGS_omnibusType & in_mReceiverType,
                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                 const GGS_allocaList & in_mAllocaList,
                                 const GGS_instructionListIR & in_mInstructionGenerationList,
                                 const GGS_bool & in_mExportedFunction,
                                 const GGS_routineKind & in_mKind,
                                 const GGS_omnibusType & in_mReturnType,
                                 const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation
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
// Phase 1: @regularRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_regularRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_regularRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_regularRoutineIR_2E_weak (const class GGS_regularRoutineIR & inSource) ;

  public: GGS_regularRoutineIR_2E_weak & operator = (const class GGS_regularRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_regularRoutineIR bang_regularRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_regularRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_regularRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_regularRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_regularRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_mode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode isSafe' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isSafe (const class GGS_mode & inObject,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForSystemRoutine' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const class GGS_mode & inObject,
                                                                                     const class GGS_string & constinArgument0,
                                                                                     const class GGS_string & constinArgument1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_panicAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_panicAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_panicAST_2E_weak (const class GGS_panicAST & inSource) ;

  public: GGS_panicAST_2E_weak & operator = (const class GGS_panicAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_panicAST bang_panicAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicAST_2E_weak extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_panicAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedPanicRoutine : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedPanicRoutine (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedPanicRoutine (const class cPtr_decoratedPanicRoutine * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsSetup (void) const ;
  public: void setProperty_mIsSetup (const GGS_bool & inValue) ;

  public: class GGS_lbigint readProperty_mPriority (void) const ;
  public: void setProperty_mPriority (const GGS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedPanicRoutine init_21__21_ (const class GGS_bool & inOperand0,
                                                         const class GGS_lbigint & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedPanicRoutine extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedPanicRoutine class_func_new (const class GGS_bool & inOperand0,
                                                                 const class GGS_lbigint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedPanicRoutine class


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
  public: void decoratedPanicRoutine_init_21__21_ (const class GGS_bool & inOperand0,
                                                   const class GGS_lbigint & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsSetup ;
  public: GGS_lbigint mProperty_mPriority ;


//--- Default constructor
  public: cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedPanicRoutine (const GGS_bool & in_mIsSetup,
                                      const GGS_lbigint & in_mPriority
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
// Phase 1: @decoratedPanicRoutine_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedPanicRoutine_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedPanicRoutine_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedPanicRoutine_2E_weak (const class GGS_decoratedPanicRoutine & inSource) ;

  public: GGS_decoratedPanicRoutine_2E_weak & operator = (const class GGS_decoratedPanicRoutine & inSource) ;

//--------------------------------- Bang operator
  public: GGS_decoratedPanicRoutine bang_decoratedPanicRoutine_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedPanicRoutine_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedPanicRoutine_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedPanicRoutine_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_decoratedPanicRoutine_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_panicSortedListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mPriority ;
  public: inline GGS_bigint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_panicSortedListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPriority (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_panicSortedListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_panicSortedListIR_2E_element (const GGS_bigint & in_mPriority) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicSortedListIR_2E_element init_21_ (const class GGS_bigint & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicSortedListIR_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicSortedListIR_2E_element class_func_new (const class GGS_bigint & inOperand0,
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
 
} ; // End of GGS_panicSortedListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_fileSpecificPanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_fileSpecificPanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_fileSpecificPanicRoutineIR (const class cPtr_fileSpecificPanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_inFilePath (void) const ;
  public: void setProperty_inFilePath (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fileSpecificPanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_string & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fileSpecificPanicRoutineIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fileSpecificPanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_bool & inOperand1,
                                                                      const class GGS_bool & inOperand2,
                                                                      const class GGS_string & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fileSpecificPanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fileSpecificPanicRoutineIR class


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
  public: void fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_inFilePath ;


//--- Default constructor
  public: cPtr_fileSpecificPanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_fileSpecificPanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                           const GGS_bool & in_isRequired,
                                           const GGS_bool & in_warnsIfUnused,
                                           const GGS_string & in_inFilePath
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
// Phase 1: @fileSpecificPanicRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_fileSpecificPanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_fileSpecificPanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_fileSpecificPanicRoutineIR_2E_weak (const class GGS_fileSpecificPanicRoutineIR & inSource) ;

  public: GGS_fileSpecificPanicRoutineIR_2E_weak & operator = (const class GGS_fileSpecificPanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_fileSpecificPanicRoutineIR bang_fileSpecificPanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fileSpecificPanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fileSpecificPanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fileSpecificPanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fileSpecificPanicRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_universalModePanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_universalModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_universalModePanicRoutineIR (const class cPtr_universalModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_universalModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_universalModePanicRoutineIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_universalModePanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_universalModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_universalModePanicRoutineIR class


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
  public: void universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_universalModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_universalModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused
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
// Phase 1: @universalModePanicRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_universalModePanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_universalModePanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_universalModePanicRoutineIR_2E_weak (const class GGS_universalModePanicRoutineIR & inSource) ;

  public: GGS_universalModePanicRoutineIR_2E_weak & operator = (const class GGS_universalModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_universalModePanicRoutineIR bang_universalModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_universalModePanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_universalModePanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_universalModePanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_universalModePanicRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sectionModePanicRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_sectionModePanicRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sectionModePanicRoutineIR (const class cPtr_sectionModePanicRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_panicSortedListIR readProperty_mPanicSetupListIR (void) const ;
  public: void setProperty_mPanicSetupListIR (const GGS_panicSortedListIR & inValue) ;

  public: class GGS_panicSortedListIR readProperty_mPanicLoopListIR (void) const ;
  public: void setProperty_mPanicLoopListIR (const GGS_panicSortedListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sectionModePanicRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_bool & inOperand2,
                                                                                                const class GGS_panicSortedListIR & inOperand3,
                                                                                                const class GGS_panicSortedListIR & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionModePanicRoutineIR extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionModePanicRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     const class GGS_panicSortedListIR & inOperand3,
                                                                     const class GGS_panicSortedListIR & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sectionModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sectionModePanicRoutineIR class


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
  public: void sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          const class GGS_panicSortedListIR & inOperand3,
                                                                                          const class GGS_panicSortedListIR & inOperand4,
                                                                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: GGS_panicSortedListIR mProperty_mPanicLoopListIR ;


//--- Default constructor
  public: cPtr_sectionModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sectionModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                          const GGS_bool & in_isRequired,
                                          const GGS_bool & in_warnsIfUnused,
                                          const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                          const GGS_panicSortedListIR & in_mPanicLoopListIR
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
// Phase 1: @sectionModePanicRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sectionModePanicRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sectionModePanicRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sectionModePanicRoutineIR_2E_weak (const class GGS_sectionModePanicRoutineIR & inSource) ;

  public: GGS_sectionModePanicRoutineIR_2E_weak & operator = (const class GGS_sectionModePanicRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_sectionModePanicRoutineIR bang_sectionModePanicRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sectionModePanicRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sectionModePanicRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sectionModePanicRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sectionModePanicRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeConvertToBooleanAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

  public: GGS_compileTimeConvertToBooleanAST_2E_weak & operator = (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeConvertToBooleanAST bang_compileTimeConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeConvertToBooleanAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractLLVMInstruction mProperty_mInstruction ;
  public: inline GGS_abstractLLVMInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractLLVMInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_llvmGenerationInstructionList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionList_2E_element (const GGS_abstractLLVMInstruction & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionList_2E_element init_21_ (const class GGS_abstractLLVMInstruction & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstructionList_2E_element class_func_new (const class GGS_abstractLLVMInstruction & inOperand0,
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
 
} ; // End of GGS_llvmGenerationInstructionList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmConvertToBooleanAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmConvertToBooleanAST_2E_weak (const class GGS_llvmConvertToBooleanAST & inSource) ;

  public: GGS_llvmConvertToBooleanAST_2E_weak & operator = (const class GGS_llvmConvertToBooleanAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmConvertToBooleanAST bang_llvmConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmConvertToBooleanAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum implicitBooleanConversionResult
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult (void) ;

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
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_compileTime (class GGS_bool & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmVariable (class GGS_string & out_name) const ;

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
  public: static GGS_implicitBooleanConversionResult extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult class_func_compileTime (const class GGS_bool & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_implicitBooleanConversionResult class_func_llvmVariable (const class GGS_string & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractCompileTime (class GGS_bool & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmVariable (class GGS_string & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ getter_getCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ getter_getLlvmVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_implicitBooleanConversionResult class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitBooleanConversionResult_2E_compileTime struct
//
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_value ;
  public: inline GGS_bool readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_implicitBooleanConversionResult_2E_compileTime (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_bool & in_value) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_compileTime init_21_ (const class GGS_bool & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_compileTime extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult_2E_compileTime class_func_new (const class GGS_bool & inOperand0,
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
 
} ; // End of GGS_implicitBooleanConversionResult_2E_compileTime class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: implicitBooleanConversionResult.compileTime? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_compileTime mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (const GGS_implicitBooleanConversionResult_2E_compileTime & inValue) ;
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_compileTime unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_implicitBooleanConversionResult_2E_compileTime_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @implicitBooleanConversionResult_2E_llvmVariable struct
//
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_implicitBooleanConversionResult_2E_llvmVariable (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_string & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable init_21_ (const class GGS_string & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult_2E_llvmVariable class_func_new (const class GGS_string & inOperand0,
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
 
} ; // End of GGS_implicitBooleanConversionResult_2E_llvmVariable class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: implicitBooleanConversionResult.llvmVariable? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_llvmVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inValue) ;
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_llvmVariable unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@implicitBooleanConversionResult llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmName (const class GGS_implicitBooleanConversionResult & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const class GGS_objectIR constin_inReceiverOperand,
                                                       const class GGS_location constin_inErrorLocation,
                                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                       class GGS_allocaList & io_ioAllocaList,
                                                       class GGS_implicitBooleanConversionResult & out_outResult,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeImplicitConverterToBoolean (const class cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeImplicitConverterToBoolean init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_ctExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeImplicitConverterToBoolean class_func_new (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_ctExpressionAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeImplicitConverterToBoolean class


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
  public: void compileTimeImplicitConverterToBoolean_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_ctExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                                      const GGS_ctExpressionAST & in_mExpression
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
// Phase 1: @compileTimeImplicitConverterToBoolean_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak & operator = (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeImplicitConverterToBoolean bang_compileTimeImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeImplicitConverterToBoolean_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmImplicitConverterToBoolean (const class cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmImplicitConverterToBoolean init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_omnibusType & inOperand1,
                                                                      const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmImplicitConverterToBoolean class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_omnibusType & inOperand1,
                                                                          const class GGS_llvmGenerationInstructionList & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmImplicitConverterToBoolean class


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
  public: void llvmImplicitConverterToBoolean_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                               const GGS_omnibusType & in_mReceiverType,
                                               const GGS_llvmGenerationInstructionList & in_mInstructionList
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
// Phase 1: @llvmImplicitConverterToBoolean_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

  public: GGS_llvmImplicitConverterToBoolean_2E_weak & operator = (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmImplicitConverterToBoolean bang_llvmImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmImplicitConverterToBoolean_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const class GGS_implicitConversionToBooleanMap inObject,
                                                   const class GGS_objectIR constin_inReceiverOperand,
                                                   const class GGS_location constin_inErrorLocation,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_implicitBooleanConversionResult & out_outResult,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR omnibusTypeDescriptionName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_omnibusTypeDescriptionName (const class GGS_objectIR & inObject,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_expressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_expressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_expressionAST_2E_weak (const class GGS_expressionAST & inSource) ;

  public: GGS_expressionAST_2E_weak & operator = (const class GGS_expressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_expressionAST bang_expressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_expressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_expressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_expressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (class cPtr_expressionAST * inObject,
                                                               class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (class cPtr_expressionAST * inObject,
                                            const class GGS_omnibusType constin_inSelfType,
                                            const class GGS_routineAttributes constin_inRoutineAttributes,
                                            const class GGS_omnibusType constin_inTargetType,
                                            const class GGS_semanticContext constin_inContext,
                                            const class GGS_mode constin_inMode,
                                            class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                            class GGS_staticEntityMap & io_ioStaticEntityMap,
                                            class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                            class GGS_allocaList & io_ioAllocaList,
                                            class GGS_instructionListIR & io_ioInstructionGenerationList,
                                            class GGS_objectIR & out_outResult,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @convertExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_convertExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_convertExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_convertExpressionAST_2E_weak (const class GGS_convertExpressionAST & inSource) ;

  public: GGS_convertExpressionAST_2E_weak & operator = (const class GGS_convertExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_convertExpressionAST bang_convertExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_convertExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_convertExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractInstructionIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInstructionIR_2E_weak (const class GGS_abstractInstructionIR & inSource) ;

  public: GGS_abstractInstructionIR_2E_weak & operator = (const class GGS_abstractInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_abstractInstructionIR bang_abstractInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extendExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extendExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extendExpressionAST_2E_weak (const class GGS_extendExpressionAST & inSource) ;

  public: GGS_extendExpressionAST_2E_weak & operator = (const class GGS_extendExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_extendExpressionAST bang_extendExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extendExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_extendExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_truncateExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncateExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncateExpressionAST_2E_weak (const class GGS_truncateExpressionAST & inSource) ;

  public: GGS_truncateExpressionAST_2E_weak & operator = (const class GGS_truncateExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_truncateExpressionAST bang_truncateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_truncateExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncateInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_truncateInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_truncateInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_truncateInstructionIR (const class cPtr_truncateInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mOperand (void) const ;
  public: void setProperty_mOperand (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_truncateInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                         const class GGS_objectIR & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateInstructionIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                 const class GGS_objectIR & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_truncateInstructionIR class


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
  public: void truncateInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_objectIR mProperty_mOperand ;


//--- Default constructor
  public: cPtr_truncateInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncateInstructionIR (const GGS_objectIR & in_mTarget,
                                      const GGS_objectIR & in_mOperand
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
// Phase 1: @truncateInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_truncateInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncateInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncateInstructionIR_2E_weak (const class GGS_truncateInstructionIR & inSource) ;

  public: GGS_truncateInstructionIR_2E_weak & operator = (const class GGS_truncateInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_truncateInstructionIR bang_truncateInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncateInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_truncateInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofControlRegisterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_addressofControlRegisterAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofControlRegisterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofControlRegisterAST_2E_weak (const class GGS_addressofControlRegisterAST & inSource) ;

  public: GGS_addressofControlRegisterAST_2E_weak & operator = (const class GGS_addressofControlRegisterAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_addressofControlRegisterAST bang_addressofControlRegisterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofControlRegisterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofControlRegisterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofControlRegisterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_addressofControlRegisterAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_addressofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofExpressionAST_2E_weak (const class GGS_addressofExpressionAST & inSource) ;

  public: GGS_addressofExpressionAST_2E_weak & operator = (const class GGS_addressofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_addressofExpressionAST bang_addressofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_addressofExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addressofInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_LValueRepresentation readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GGS_LValueRepresentation & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addressofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                          const class GGS_LValueRepresentation & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofInstructionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_LValueRepresentation & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_addressofInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @LValueRepresentation struct
//
//--------------------------------------------------------------------------------------------------

class GGS_LValueRepresentation : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueRepresentation (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_LValueRepresentation (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueRepresentation (const GGS_omnibusType & in_type,
                                    const GGS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueRepresentation init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueRepresentation extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_LValueRepresentation class_func_new (const class GGS_omnibusType & inOperand0,
                                                                const class GGS_string & inOperand1,
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
 
} ; // End of GGS_LValueRepresentation class


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
  public: void addressofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                    const class GGS_LValueRepresentation & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_LValueRepresentation mProperty_mLValue ;


//--- Default constructor
  public: cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                       const GGS_LValueRepresentation & in_mLValue
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
// Phase 1: @addressofInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofInstructionIR_2E_weak (const class GGS_addressofInstructionIR & inSource) ;

  public: GGS_addressofInstructionIR_2E_weak & operator = (const class GGS_addressofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_addressofInstructionIR bang_addressofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_addressofInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sizeofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofExpressionAST_2E_weak (const class GGS_sizeofExpressionAST & inSource) ;

  public: GGS_sizeofExpressionAST_2E_weak & operator = (const class GGS_sizeofExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_sizeofExpressionAST bang_sizeofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sizeofExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofTypeAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sizeofTypeAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofTypeAST_2E_weak (const class GGS_sizeofTypeAST & inSource) ;

  public: GGS_sizeofTypeAST_2E_weak & operator = (const class GGS_sizeofTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_sizeofTypeAST bang_sizeofTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sizeofTypeAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sizeofInstructionIR (const class cPtr_sizeofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sizeofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                       const class GGS_omnibusType & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofInstructionIR class_func_new (const class GGS_objectIR & inOperand0,
                                                               const class GGS_omnibusType & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sizeofInstructionIR class


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
  public: void sizeofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                 const class GGS_omnibusType & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_omnibusType mProperty_mSourceType ;


//--- Default constructor
  public: cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofInstructionIR (const GGS_objectIR & in_mTarget,
                                    const GGS_omnibusType & in_mSourceType
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
// Phase 1: @sizeofInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofInstructionIR_2E_weak (const class GGS_sizeofInstructionIR & inSource) ;

  public: GGS_sizeofInstructionIR_2E_weak & operator = (const class GGS_sizeofInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_sizeofInstructionIR bang_sizeofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sizeofInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_primaryInExpressionAccessAST mProperty_mAccess ;
  public: inline GGS_primaryInExpressionAccessAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GGS_primaryInExpressionAccessAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primaryInExpressionAccessListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessAST & in_mAccess) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessListAST_2E_element init_21_ (const class GGS_primaryInExpressionAccessAST & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessListAST_2E_element class_func_new (const class GGS_primaryInExpressionAccessAST & inOperand0,
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
 
} ; // End of GGS_primaryInExpressionAccessListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typedConstantCallAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_typedConstantCallAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typedConstantCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typedConstantCallAST_2E_weak (const class GGS_typedConstantCallAST & inSource) ;

  public: GGS_typedConstantCallAST_2E_weak & operator = (const class GGS_typedConstantCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_typedConstantCallAST bang_typedConstantCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typedConstantCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typedConstantCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typedConstantCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typedConstantCallAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifExpressionAST_2E_weak (const class GGS_ifExpressionAST & inSource) ;

  public: GGS_ifExpressionAST_2E_weak & operator = (const class GGS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_ifExpressionAST bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_ifExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanShortCircuitAndOperatorExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak (const class GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

  public: GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & operator = (const class GGS_booleanShortCircuitAndOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_booleanShortCircuitAndOperatorExpressionAST bang_booleanShortCircuitAndOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_booleanShortCircuitAndOperatorExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceFieldListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceFieldListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mExpressionLocation ;
  public: inline GGS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_integerSliceFieldListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_integerSliceFieldListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_integerSliceFieldListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                   const GGS_expressionAST & in_mExpression,
                                                   const GGS_location & in_mExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerSliceFieldListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_expressionAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceFieldListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerSliceFieldListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                               const class GGS_expressionAST & inOperand1,
                                                                               const class GGS_location & inOperand2,
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
 
} ; // End of GGS_integerSliceFieldListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerSliceExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_integerSliceExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerSliceExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerSliceExpressionAST_2E_weak (const class GGS_integerSliceExpressionAST & inSource) ;

  public: GGS_integerSliceExpressionAST_2E_weak & operator = (const class GGS_integerSliceExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_integerSliceExpressionAST bang_integerSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerSliceExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerSliceExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerSliceExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_integerSliceExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntegerInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_literalIntegerInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalIntegerInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalIntegerInExpressionAST_2E_weak (const class GGS_literalIntegerInExpressionAST & inSource) ;

  public: GGS_literalIntegerInExpressionAST_2E_weak & operator = (const class GGS_literalIntegerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_literalIntegerInExpressionAST bang_literalIntegerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntegerInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalIntegerInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntegerInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_literalIntegerInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_literalStringInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringInExpressionAST_2E_weak (const class GGS_literalStringInExpressionAST & inSource) ;

  public: GGS_literalStringInExpressionAST_2E_weak & operator = (const class GGS_literalStringInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_literalStringInExpressionAST bang_literalStringInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_literalStringInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBooleanInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_literalBooleanInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalBooleanInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalBooleanInExpressionAST_2E_weak (const class GGS_literalBooleanInExpressionAST & inSource) ;

  public: GGS_literalBooleanInExpressionAST_2E_weak & operator = (const class GGS_literalBooleanInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_literalBooleanInExpressionAST bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBooleanInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalBooleanInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBooleanInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_literalBooleanInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_registerInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_registerInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerInExpressionAST_2E_weak (const class GGS_registerInExpressionAST & inSource) ;

  public: GGS_registerInExpressionAST_2E_weak & operator = (const class GGS_registerInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_registerInExpressionAST bang_registerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerIntegerFieldListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_registerIntegerFieldListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFieldName ;
  public: inline GGS_lstring readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mExpressionLocation ;
  public: inline GGS_location readProperty_mExpressionLocation (void) const {
    return mProperty_mExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerIntegerFieldListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMExpressionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_registerIntegerFieldListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerIntegerFieldListAST_2E_element (const GGS_lstring & in_mFieldName,
                                                      const GGS_expressionAST & in_mExpression,
                                                      const GGS_location & in_mExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerIntegerFieldListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_expressionAST & inOperand1,
                                                                              const class GGS_location & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerIntegerFieldListAST_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerIntegerFieldListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_expressionAST & inOperand1,
                                                                                  const class GGS_location & inOperand2,
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
 
} ; // End of GGS_registerIntegerFieldListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerConstantExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_registerConstantExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_registerConstantExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerConstantExpressionAST_2E_weak (const class GGS_registerConstantExpressionAST & inSource) ;

  public: GGS_registerConstantExpressionAST_2E_weak & operator = (const class GGS_registerConstantExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_registerConstantExpressionAST bang_registerConstantExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerConstantExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerConstantExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerConstantExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_registerConstantExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2E_arrayAccess struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_index ;
  public: inline GGS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GGS_location mProperty_endOfIndex ;
  public: inline GGS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GGS_bool mProperty_checkIndexExpression ;
  public: inline GGS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primaryInExpressionAccessAST_2E_arrayAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                                           const GGS_location & in_endOfIndex,
                                                           const GGS_bool & in_checkIndexExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_arrayAccess class_func_new (const class GGS_expressionAST & inOperand0,
                                                                                       const class GGS_location & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
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
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_arrayAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST.arrayAccess? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inValue) ;
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_arrayAccess unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2E_funcCall struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_methodName ;
  public: inline GGS_lstring readProperty_methodName (void) const {
    return mProperty_methodName ;
  }

  public: GGS_effectiveArgumentListAST mProperty_arguments ;
  public: inline GGS_effectiveArgumentListAST readProperty_arguments (void) const {
    return mProperty_arguments ;
  }

  public: GGS_location mProperty_endOfArguments ;
  public: inline GGS_location readProperty_endOfArguments (void) const {
    return mProperty_endOfArguments ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_methodName = inValue ;
  }

  public: inline void setter_setArguments (const GGS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arguments = inValue ;
  }

  public: inline void setter_setEndOfArguments (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfArguments = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primaryInExpressionAccessAST_2E_funcCall (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_lstring & in_methodName,
                                                        const GGS_effectiveArgumentListAST & in_arguments,
                                                        const GGS_location & in_endOfArguments) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_effectiveArgumentListAST & inOperand1,
                                                                                const class GGS_location & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_funcCall class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_effectiveArgumentListAST & inOperand1,
                                                                                    const class GGS_location & inOperand2,
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
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_funcCall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST.funcCall? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_funcCall mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (const GGS_primaryInExpressionAccessAST_2E_funcCall & inValue) ;
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_funcCall unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2E_integerSlice struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_low ;
  public: inline GGS_lbigint readProperty_low (void) const {
    return mProperty_low ;
  }

  public: GGS_lbigint mProperty_high ;
  public: inline GGS_lbigint readProperty_high (void) const {
    return mProperty_high ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLow (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_low = inValue ;
  }

  public: inline void setter_setHigh (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_high = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primaryInExpressionAccessAST_2E_integerSlice (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_lbigint & in_low,
                                                            const GGS_lbigint & in_high) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice init_21__21_ (const class GGS_lbigint & inOperand0,
                                                                                const class GGS_lbigint & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_integerSlice class_func_new (const class GGS_lbigint & inOperand0,
                                                                                        const class GGS_lbigint & inOperand1,
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
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_integerSlice class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST.integerSlice? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_integerSlice mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inValue) ;
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_integerSlice unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAccessAST_2E_property struct
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_primaryInExpressionAccessAST_2E_property (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (const GGS_lstring & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_property init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_property extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST_2E_property class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_property class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: primaryInExpressionAccessAST.property? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (const GGS_primaryInExpressionAccessAST_2E_property & inValue) ;
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_property unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_primaryInExpressionAccessAST_2E_property_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primaryInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primaryInExpressionAST_2E_weak (const class GGS_primaryInExpressionAST & inSource) ;

  public: GGS_primaryInExpressionAST_2E_weak & operator = (const class GGS_primaryInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_primaryInExpressionAST bang_primaryInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primaryInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_primaryInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneFunctionInExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_standaloneFunctionInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

  public: GGS_standaloneFunctionInExpressionAST_2E_weak & operator = (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_standaloneFunctionInExpressionAST bang_standaloneFunctionInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standaloneFunctionInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneFunctionInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneFunctionInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_standaloneFunctionInExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallEffectiveParameterListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_functionCallEffectiveParameterListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionCallEffectiveParameterListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_functionCallEffectiveParameterListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_lstring & in_mSelector,
                                                                const GGS_expressionAST & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallEffectiveParameterListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_expressionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionCallEffectiveParameterListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionCallEffectiveParameterListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_expressionAST & inOperand1,
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
 
} ; // End of GGS_functionCallEffectiveParameterListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorCallAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorCallAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_constructorCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_constructorCallAST_2E_weak (const class GGS_constructorCallAST & inSource) ;

  public: GGS_constructorCallAST_2E_weak & operator = (const class GGS_constructorCallAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_constructorCallAST bang_constructorCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constructorCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorCallAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimeInfixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimeInfixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixOperatorAST_2E_weak (const class GGS_compileTimeInfixOperatorAST & inSource) ;

  public: GGS_compileTimeInfixOperatorAST_2E_weak & operator = (const class GGS_compileTimeInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixOperatorAST bang_compileTimeInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeInfixOperatorAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeInfixOperatorUsage (const class cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeInfixOperatorUsage init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_ctExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorUsage class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_ctExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeInfixOperatorUsage class


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
  public: void compileTimeInfixOperatorUsage_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_ctExpressionAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_objectIR arg_inRightOperand,
           class GGS_bigint & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
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
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                              const GGS_lstring & in_mRightOperandName,
                                              const GGS_ctExpressionAST & in_mExpression
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
// Phase 1: @compileTimeInfixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixOperatorUsage_2E_weak (const class GGS_compileTimeInfixOperatorUsage & inSource) ;

  public: GGS_compileTimeInfixOperatorUsage_2E_weak & operator = (const class GGS_compileTimeInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixOperatorUsage bang_compileTimeInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeInfixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixInfEqualOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixInfEqualOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeInfixInfEqualOperatorUsage (const class cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_compileTimeInfixOperatorUsage readProperty_mEqualOperatorUsage (void) const ;
  public: void setProperty_mEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) ;

  public: class GGS_compileTimeInfixOperatorUsage readProperty_mLessThanOperatorUsage (void) const ;
  public: void setProperty_mLessThanOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeInfixInfEqualOperatorUsage init_21__21_ (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                         const class GGS_compileTimeInfixOperatorUsage & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixInfEqualOperatorUsage extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixInfEqualOperatorUsage class_func_new (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                                 const class GGS_compileTimeInfixOperatorUsage & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeInfixInfEqualOperatorUsage class


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
  public: void compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const class GGS_compileTimeInfixOperatorUsage & inOperand0,
                                                                   const class GGS_compileTimeInfixOperatorUsage & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public: GGS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;


//--- Default constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeInfixInfEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                      const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
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
// Phase 1: @compileTimeInfixInfEqualOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak (const class GGS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

  public: GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & operator = (const class GGS_compileTimeInfixInfEqualOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeInfixInfEqualOperatorUsage bang_compileTimeInfixInfEqualOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeInfixInfEqualOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @genericFormalParameterList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_genericFormalParameter mProperty_mParameter ;
  public: inline GGS_genericFormalParameter readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameter (const GGS_genericFormalParameter & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_genericFormalParameterList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericFormalParameterList_2E_element (const GGS_genericFormalParameter & in_mParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericFormalParameterList_2E_element init_21_ (const class GGS_genericFormalParameter & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericFormalParameterList_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericFormalParameterList_2E_element class_func_new (const class GGS_genericFormalParameter & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameterList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_genericFormalParameterList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericFormalParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInfixOperatorAST_2E_weak (const class GGS_llvmInfixOperatorAST & inSource) ;

  public: GGS_llvmInfixOperatorAST_2E_weak & operator = (const class GGS_llvmInfixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmInfixOperatorAST bang_llvmInfixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInfixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmInfixOperatorAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInfixOperatorUsage class_func_new (const class GGS_string & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_llvmGenerationInstructionList & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmInfixOperatorUsage class


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
  public: void llvmInfixOperatorUsage_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_lstring & inOperand2,
                                                            const class GGS_llvmGenerationInstructionList & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension method generateCode
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
                                       const GGS_llvmGenerationInstructionList & in_mInstructionList
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
// Phase 1: @llvmInfixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInfixOperatorUsage_2E_weak (const class GGS_llvmInfixOperatorUsage & inSource) ;

  public: GGS_llvmInfixOperatorUsage_2E_weak & operator = (const class GGS_llvmInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmInfixOperatorUsage bang_llvmInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmInfixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmInlineInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmInlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmInlineInfixOperatorUsage (const class cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLeftOperandName (void) const ;
  public: void setProperty_mLeftOperandName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mRightOperandName (void) const ;
  public: void setProperty_mRightOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmInlineInfixOperatorUsage init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInlineInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInlineInfixOperatorUsage class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstring & inOperand1,
                                                                        const class GGS_llvmGenerationInstructionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmInlineInfixOperatorUsage class


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
  public: void llvmInlineInfixOperatorUsage_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_llvmGenerationInstructionList & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_lstring mProperty_mLeftOperandName ;
  public: GGS_lstring mProperty_mRightOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmInlineInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                             const GGS_lstring & in_mRightOperandName,
                                             const GGS_llvmGenerationInstructionList & in_mInstructionList
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
// Phase 1: @llvmInlineInfixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmInlineInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmInlineInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmInlineInfixOperatorUsage_2E_weak (const class GGS_llvmInlineInfixOperatorUsage & inSource) ;

  public: GGS_llvmInlineInfixOperatorUsage_2E_weak & operator = (const class GGS_llvmInlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmInlineInfixOperatorUsage bang_llvmInlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmInlineInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmInlineInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmInlineInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmInlineInfixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_infixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_infixOperatorRoutineIR (const class cPtr_infixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mTargetVarName (void) const ;
  public: void setProperty_mTargetVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mSourceVarName (void) const ;
  public: void setProperty_mSourceVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GGS_omnibusType & inValue) ;

  public: class GGS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_infixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                                 const class GGS_bool & inOperand1,
                                                                                                                 const class GGS_bool & inOperand2,
                                                                                                                 const class GGS_omnibusType & inOperand3,
                                                                                                                 const class GGS_string & inOperand4,
                                                                                                                 const class GGS_omnibusType & inOperand5,
                                                                                                                 const class GGS_string & inOperand6,
                                                                                                                 const class GGS_omnibusType & inOperand7,
                                                                                                                 const class GGS_stringlist & inOperand8,
                                                                                                                 const class GGS_allocaList & inOperand9,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorRoutineIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_omnibusType & inOperand3,
                                                                  const class GGS_string & inOperand4,
                                                                  const class GGS_omnibusType & inOperand5,
                                                                  const class GGS_string & inOperand6,
                                                                  const class GGS_omnibusType & inOperand7,
                                                                  const class GGS_stringlist & inOperand8,
                                                                  const class GGS_allocaList & inOperand9
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_infixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_infixOperatorRoutineIR class


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
  public: void infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                           const class GGS_bool & inOperand1,
                                                                                                           const class GGS_bool & inOperand2,
                                                                                                           const class GGS_omnibusType & inOperand3,
                                                                                                           const class GGS_string & inOperand4,
                                                                                                           const class GGS_omnibusType & inOperand5,
                                                                                                           const class GGS_string & inOperand6,
                                                                                                           const class GGS_omnibusType & inOperand7,
                                                                                                           const class GGS_stringlist & inOperand8,
                                                                                                           const class GGS_allocaList & inOperand9,
                                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mTargetType ;
  public: GGS_string mProperty_mTargetVarName ;
  public: GGS_omnibusType mProperty_mSourceType ;
  public: GGS_string mProperty_mSourceVarName ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_stringlist mProperty_mGeneratedInstructions ;
  public: GGS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_infixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_infixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                       const GGS_bool & in_isRequired,
                                       const GGS_bool & in_warnsIfUnused,
                                       const GGS_omnibusType & in_mTargetType,
                                       const GGS_string & in_mTargetVarName,
                                       const GGS_omnibusType & in_mSourceType,
                                       const GGS_string & in_mSourceVarName,
                                       const GGS_omnibusType & in_mResultType,
                                       const GGS_stringlist & in_mGeneratedInstructions,
                                       const GGS_allocaList & in_mAllocaList
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
// Phase 1: @infixOperatorRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_infixOperatorRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_infixOperatorRoutineIR_2E_weak (const class GGS_infixOperatorRoutineIR & inSource) ;

  public: GGS_infixOperatorRoutineIR_2E_weak & operator = (const class GGS_infixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_infixOperatorRoutineIR bang_infixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_infixOperatorRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_infixOperatorRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_infixOperatorRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const class GGS_objectIR constin_inLeftOperand,
                                       const class GGS_location constin_inOperatorLocation,
                                       const class GGS_objectIR constin_inRightOperand,
                                       const class GGS_omnibusType constin_inResultType,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_allocaList & io_ioAllocaList,
                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                       class GGS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const class GGS_infixOperatorMap inObject,
                                                const class GGS_objectIR constin_inLeftOperand,
                                                const class GGS_omnibusInfixOperator constin_inInfixOperator,
                                                const class GGS_location constin_inOperatorLocation,
                                                const class GGS_objectIR constin_inRightOperand,
                                                class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GGS_allocaList & io_ioAllocaList,
                                                class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                class GGS_objectIR & out_outResultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_infixOperatorMapKey (const class GGS_omnibusType & constinArgument0,
                                                const class GGS_omnibusInfixOperator & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                const class GGS_omnibusType & constinArgument3,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_type (const class GGS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inlineInfixOperatorUsage (const class cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inlineInfixOperatorUsage init_21_ (const class GGS_string & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfixOperatorUsage class_func_new (const class GGS_string & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inlineInfixOperatorUsage class


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
  public: void inlineInfixOperatorUsage_init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method generateCode
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
  public: GGS_string mProperty_mLLVMOperation ;


//--- Default constructor
  public: cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation
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
// Phase 1: @inlineInfixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inlineInfixOperatorUsage_2E_weak (const class GGS_inlineInfixOperatorUsage & inSource) ;

  public: GGS_inlineInfixOperatorUsage_2E_weak & operator = (const class GGS_inlineInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_inlineInfixOperatorUsage bang_inlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_inlineInfixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusInfixOperator string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_omnibusInfixOperator & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusInfixOperatorExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak (const class GGS_omnibusInfixOperatorExpressionAST & inSource) ;

  public: GGS_omnibusInfixOperatorExpressionAST_2E_weak & operator = (const class GGS_omnibusInfixOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_omnibusInfixOperatorExpressionAST bang_omnibusInfixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusInfixOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusInfixOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusInfixOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_omnibusInfixOperatorExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@compileTimePrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_compileTimePrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimePrefixOperatorAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compiletimePrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compiletimePrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compiletimePrefixOperatorAST_2E_weak (const class GGS_compiletimePrefixOperatorAST & inSource) ;

  public: GGS_compiletimePrefixOperatorAST_2E_weak & operator = (const class GGS_compiletimePrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compiletimePrefixOperatorAST bang_compiletimePrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compiletimePrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compiletimePrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimePrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compiletimePrefixOperatorAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimePrefixOperatorUsage (const class cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mPrefixOperatorLocation (void) const ;
  public: void setProperty_mPrefixOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimePrefixOperatorUsage init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_ctExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimePrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorUsage class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_ctExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimePrefixOperatorUsage class


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
  public: void compileTimePrefixOperatorUsage_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_ctExpressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mPrefixOperatorLocation ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimePrefixOperatorUsage (const GGS_location & in_mPrefixOperatorLocation,
                                               const GGS_lstring & in_mReceiverOperandName,
                                               const GGS_ctExpressionAST & in_mExpression
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
// Phase 1: @compileTimePrefixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimePrefixOperatorUsage_2E_weak (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

  public: GGS_compileTimePrefixOperatorUsage_2E_weak & operator = (const class GGS_compileTimePrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimePrefixOperatorUsage bang_compileTimePrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimePrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimePrefixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@llvmPrefixOperatorEnumeration prefixOperator' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperator extensionGetter_prefixOperator (const class GGS_llvmPrefixOperatorEnumeration & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorAST_2E_weak (const class GGS_llvmPrefixOperatorAST & inSource) ;

  public: GGS_llvmPrefixOperatorAST_2E_weak & operator = (const class GGS_llvmPrefixOperatorAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorAST bang_llvmPrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmPrefixOperatorAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmPrefixOperatorUsage (const class cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mPrefixMangledFunctionName (void) const ;
  public: void setProperty_mPrefixMangledFunctionName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mReceiverOperandName (void) const ;
  public: void setProperty_mReceiverOperandName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmPrefixOperatorUsage init_21__21__21_ (const class GGS_string & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_llvmGenerationInstructionList & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorUsage extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorUsage class_func_new (const class GGS_string & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_llvmGenerationInstructionList & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmPrefixOperatorUsage class


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
  public: void llvmPrefixOperatorUsage_init_21__21__21_ (const class GGS_string & inOperand0,
                                                         const class GGS_lstring & inOperand1,
                                                         const class GGS_llvmGenerationInstructionList & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mPrefixMangledFunctionName ;
  public: GGS_lstring mProperty_mReceiverOperandName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmPrefixOperatorUsage (const GGS_string & in_mPrefixMangledFunctionName,
                                        const GGS_lstring & in_mReceiverOperandName,
                                        const GGS_llvmGenerationInstructionList & in_mInstructionList
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
// Phase 1: @llvmPrefixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmPrefixOperatorUsage_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmPrefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmPrefixOperatorUsage_2E_weak (const class GGS_llvmPrefixOperatorUsage & inSource) ;

  public: GGS_llvmPrefixOperatorUsage_2E_weak & operator = (const class GGS_llvmPrefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_llvmPrefixOperatorUsage bang_llvmPrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmPrefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmPrefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmPrefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_llvmPrefixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorRoutineIR (const class cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mReceiverVarName (void) const ;
  public: void setProperty_mReceiverVarName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mResultType (void) const ;
  public: void setProperty_mResultType (const GGS_omnibusType & inValue) ;

  public: class GGS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) ;

  public: class GGS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GGS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_bool & inOperand1,
                                                                                                          const class GGS_bool & inOperand2,
                                                                                                          const class GGS_omnibusType & inOperand3,
                                                                                                          const class GGS_string & inOperand4,
                                                                                                          const class GGS_omnibusType & inOperand5,
                                                                                                          const class GGS_stringlist & inOperand6,
                                                                                                          const class GGS_allocaList & inOperand7,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorRoutineIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   const class GGS_omnibusType & inOperand3,
                                                                   const class GGS_string & inOperand4,
                                                                   const class GGS_omnibusType & inOperand5,
                                                                   const class GGS_stringlist & inOperand6,
                                                                   const class GGS_allocaList & inOperand7
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prefixOperatorRoutineIR class


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
  public: void prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_omnibusType & inOperand3,
                                                                                                    const class GGS_string & inOperand4,
                                                                                                    const class GGS_omnibusType & inOperand5,
                                                                                                    const class GGS_stringlist & inOperand6,
                                                                                                    const class GGS_allocaList & inOperand7,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_string mProperty_mReceiverVarName ;
  public: GGS_omnibusType mProperty_mResultType ;
  public: GGS_stringlist mProperty_mGeneratedInstructions ;
  public: GGS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                        const GGS_bool & in_isRequired,
                                        const GGS_bool & in_warnsIfUnused,
                                        const GGS_omnibusType & in_mReceiverType,
                                        const GGS_string & in_mReceiverVarName,
                                        const GGS_omnibusType & in_mResultType,
                                        const GGS_stringlist & in_mGeneratedInstructions,
                                        const GGS_allocaList & in_mAllocaList
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
// Phase 1: @prefixOperatorRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorRoutineIR_2E_weak (const class GGS_prefixOperatorRoutineIR & inSource) ;

  public: GGS_prefixOperatorRoutineIR_2E_weak & operator = (const class GGS_prefixOperatorRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_prefixOperatorRoutineIR bang_prefixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prefixOperatorRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@prefixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_prefixOperatorUsage * inObject,
                                       const class GGS_objectIR constin_inReceiverOperand,
                                       const class GGS_location constin_inOperatorLocation,
                                       const class GGS_omnibusType constin_inResultType,
                                       const class GGS_bool constin_inDoNotGeneratePanicCode,
                                       const class GGS_bool constin_inSafeMode,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                       class GGS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@prefixOperatorMap generatePrefixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generatePrefixOperatorCode (const class GGS_prefixOperatorMap inObject,
                                                 const class GGS_objectIR constin_inReceiverOperand,
                                                 const class GGS_prefixOperator constin_inPrefixOperator,
                                                 const class GGS_location constin_inOperatorLocation,
                                                 const class GGS_bool constin_inSafeMode,
                                                 const class GGS_bool constin_inDoNotGeneratePanicCode,
                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                 class GGS_objectIR & out_outResultValue,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_prefixOperatorMapKey (const class GGS_omnibusType & constinArgument0,
                                                 const class GGS_prefixOperator & constinArgument1,
                                                 const class GGS_location & constinArgument2,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorExpressionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorExpressionAST_2E_weak (const class GGS_prefixOperatorExpressionAST & inSource) ;

  public: GGS_prefixOperatorExpressionAST_2E_weak & operator = (const class GGS_prefixOperatorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_prefixOperatorExpressionAST bang_prefixOperatorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prefixOperatorExpressionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_instructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_instructionAST_2E_weak (const class GGS_instructionAST & inSource) ;

  public: GGS_instructionAST_2E_weak & operator = (const class GGS_instructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_instructionAST bang_instructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (class cPtr_instructionAST * inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (class cPtr_instructionAST * inObject,
                                                      const class GGS_omnibusType constin_inSelfType,
                                                      const class GGS_routineAttributes constin_inRoutineAttributes,
                                                      const class GGS_semanticContext constin_inContext,
                                                      const class GGS_mode constin_inMode,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                      class GGS_allocaList & io_ioAllocaList,
                                                      class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const class GGS_instructionListAST inObject,
                                                   const class GGS_omnibusType constin_inSelfType,
                                                   const class GGS_routineAttributes constin_inRoutineAttributes,
                                                   class GGS_location in_inEndOfInstructionList,
                                                   const class GGS_semanticContext constin_inContext,
                                                   const class GGS_mode constin_inMode,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (class GGS_instructionListIR & ioObject,
                                              const class GGS_location constin_inSourceLocation,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GGS_universalValuedObjectMap & ioObject,
                                  const class GGS_location constin_inErrorLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_universalValuedObjectMap & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const class GGS_instructionListAST inObject,
                                                    const class GGS_omnibusType constin_inSelfType,
                                                    const class GGS_routineAttributes constin_inRoutineAttributes,
                                                    const class GGS_semanticContext constin_inContext,
                                                    const class GGS_mode constin_inMode,
                                                    class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GGS_allocaList & io_ioAllocaList,
                                                    class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const class GGS_instructionListIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (class cPtr_abstractInstructionIR * inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @checkInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_checkInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_checkInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_checkInstructionAST_2E_weak (const class GGS_checkInstructionAST & inSource) ;

  public: GGS_checkInstructionAST_2E_weak & operator = (const class GGS_checkInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_checkInstructionAST bang_checkInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_checkInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_checkInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionAST_2E_weak (const class GGS_assertInstructionAST & inSource) ;

  public: GGS_assertInstructionAST_2E_weak & operator = (const class GGS_assertInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_assertInstructionAST bang_assertInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assertInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assertInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assertInstructionIR (const class cPtr_assertInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mAssertInstructionLocation (void) const ;
  public: void setProperty_mAssertInstructionLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListIR readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionValue (void) const ;
  public: void setProperty_mExpressionValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assertInstructionIR init_21__21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_instructionListIR & inOperand1,
                                                           const class GGS_objectIR & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionIR class_func_new (const class GGS_location & inOperand0,
                                                               const class GGS_instructionListIR & inOperand1,
                                                               const class GGS_objectIR & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assertInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assertInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assertInstructionIR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_instructionListIR & inOperand1,
                                                     const class GGS_objectIR & inOperand2,
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
  public: GGS_location mProperty_mAssertInstructionLocation ;
  public: GGS_instructionListIR mProperty_mInstructionList ;
  public: GGS_objectIR mProperty_mExpressionValue ;


//--- Default constructor
  public: cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assertInstructionIR (const GGS_location & in_mAssertInstructionLocation,
                                    const GGS_instructionListIR & in_mInstructionList,
                                    const GGS_objectIR & in_mExpressionValue
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
// Phase 1: @assertInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assertInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assertInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assertInstructionIR_2E_weak (const class GGS_assertInstructionIR & inSource) ;

  public: GGS_assertInstructionIR_2E_weak & operator = (const class GGS_assertInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_assertInstructionIR bang_assertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assertInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assertInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assertInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assertInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentInstructionAST_2E_weak (const class GGS_assignmentInstructionAST & inSource) ;

  public: GGS_assignmentInstructionAST_2E_weak & operator = (const class GGS_assignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_assignmentInstructionAST bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_assignmentInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator struct
//
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusInfixOperator mProperty_infixOperator ;
  public: inline GGS_omnibusInfixOperator readProperty_infixOperator (void) const {
    return mProperty_infixOperator ;
  }

  public: GGS_location mProperty_operatorLocation ;
  public: inline GGS_location readProperty_operatorLocation (void) const {
    return mProperty_operatorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInfixOperator (const GGS_omnibusInfixOperator & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_infixOperator = inValue ;
  }

  public: inline void setter_setOperatorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_operatorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator (const GGS_omnibusInfixOperator & in_infixOperator,
                                                                               const GGS_location & in_operatorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator init_21__21_ (const class GGS_omnibusInfixOperator & inOperand0,
                                                                                                   const class GGS_location & inOperand1,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator class_func_new (const class GGS_omnibusInfixOperator & inOperand0,
                                                                                                           const class GGS_location & inOperand1,
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
 
} ; // End of GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: controlRegisterAssignmentOperatorKind.assignmentWithOperator? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ (const GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator & inValue) ;
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentOperatorKind_2E_assignmentWithOperator_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterAssignmentInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

  public: GGS_controlRegisterAssignmentInstructionAST_2E_weak & operator = (const class GGS_controlRegisterAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_controlRegisterAssignmentInstructionAST bang_controlRegisterAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_controlRegisterAssignmentInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceAssignmentListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GGS_sliceTargetAST mProperty_mSliceKind ;
  public: inline GGS_sliceTargetAST readProperty_mSliceKind (void) const {
    return mProperty_mSliceKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceAssignmentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMSliceKind (const GGS_sliceTargetAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sliceAssignmentListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceAssignmentListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                 const GGS_sliceTargetAST & in_mSliceKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_sliceTargetAST & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_sliceTargetAST & inOperand1,
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
 
} ; // End of GGS_sliceAssignmentListAST_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceAssignmentInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sliceAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sliceAssignmentInstructionAST_2E_weak (const class GGS_sliceAssignmentInstructionAST & inSource) ;

  public: GGS_sliceAssignmentInstructionAST_2E_weak & operator = (const class GGS_sliceAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_sliceAssignmentInstructionAST bang_sliceAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sliceAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sliceAssignmentInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2E_lValue struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_LValueAST mProperty_target ;
  public: inline GGS_LValueAST readProperty_target (void) const {
    return mProperty_target ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GGS_LValueAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sliceTargetAST_2E_lValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_lValue (const GGS_LValueAST & in_target) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_lValue init_21_ (const class GGS_LValueAST & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_lValue extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_lValue class_func_new (const class GGS_LValueAST & inOperand0,
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
 
} ; // End of GGS_sliceTargetAST_2E_lValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST.lValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_lValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_sliceTargetAST_2E_lValue_3F_ (const GGS_sliceTargetAST_2E_lValue & inValue) ;
  public: static GGS_sliceTargetAST_2E_lValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_lValue unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_sliceTargetAST_2E_lValue_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sliceTargetAST_2E_lValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2E_letDeclaration struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_letName ;
  public: inline GGS_lstring readProperty_letName (void) const {
    return mProperty_letName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_letName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sliceTargetAST_2E_letDeclaration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (const GGS_lstring & in_letName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_letDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_letDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_letDeclaration class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_sliceTargetAST_2E_letDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST.letDeclaration? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_letDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (const GGS_sliceTargetAST_2E_letDeclaration & inValue) ;
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_letDeclaration unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sliceTargetAST_2E_letDeclaration_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceTargetAST_2E_varDeclaration struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_varName ;
  public: inline GGS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sliceTargetAST_2E_varDeclaration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (const GGS_lstring & in_varName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_varDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_varDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST_2E_varDeclaration class_func_new (const class GGS_lstring & inOperand0,
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
 
} ; // End of GGS_sliceTargetAST_2E_varDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: sliceTargetAST.varDeclaration? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_varDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (const GGS_sliceTargetAST_2E_varDeclaration & inValue) ;
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_varDeclaration unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_sliceTargetAST_2E_varDeclaration_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionAST_2E_weak (const class GGS_bitbandInstructionAST & inSource) ;

  public: GGS_bitbandInstructionAST_2E_weak & operator = (const class GGS_bitbandInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionAST bang_bitbandInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitbandInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bitbandInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitbandInstructionIR (const class cPtr_bitbandInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mRegisterAddressLLVMname (void) const ;
  public: void setProperty_mRegisterAddressLLVMname (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mBitExpressionOperand (void) const ;
  public: void setProperty_mBitExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSourceExpressionOperand (void) const ;
  public: void setProperty_mSourceExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBaseAddress (void) const ;
  public: void setProperty_mBitbandRegisterBaseAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterRelocationAddress (void) const ;
  public: void setProperty_mBitbandRegisterRelocationAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterOffsetMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterOffsetMultiplier (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBitMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterBitMultiplier (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitbandInstructionIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_objectIR & inOperand1,
                                                                            const class GGS_objectIR & inOperand2,
                                                                            const class GGS_bigint & inOperand3,
                                                                            const class GGS_bigint & inOperand4,
                                                                            const class GGS_bigint & inOperand5,
                                                                            const class GGS_bigint & inOperand6,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionIR class_func_new (const class GGS_string & inOperand0,
                                                                const class GGS_objectIR & inOperand1,
                                                                const class GGS_objectIR & inOperand2,
                                                                const class GGS_bigint & inOperand3,
                                                                const class GGS_bigint & inOperand4,
                                                                const class GGS_bigint & inOperand5,
                                                                const class GGS_bigint & inOperand6
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitbandInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bitbandInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_bitbandInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      const class GGS_objectIR & inOperand2,
                                                                      const class GGS_bigint & inOperand3,
                                                                      const class GGS_bigint & inOperand4,
                                                                      const class GGS_bigint & inOperand5,
                                                                      const class GGS_bigint & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mRegisterAddressLLVMname ;
  public: GGS_objectIR mProperty_mBitExpressionOperand ;
  public: GGS_objectIR mProperty_mSourceExpressionOperand ;
  public: GGS_bigint mProperty_mBitbandRegisterBaseAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterRelocationAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: GGS_bigint mProperty_mBitbandRegisterBitMultiplier ;


//--- Default constructor
  public: cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitbandInstructionIR (const GGS_string & in_mRegisterAddressLLVMname,
                                     const GGS_objectIR & in_mBitExpressionOperand,
                                     const GGS_objectIR & in_mSourceExpressionOperand,
                                     const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                     const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                     const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                     const GGS_bigint & in_mBitbandRegisterBitMultiplier
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
// Phase 1: @bitbandInstructionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionIR_2E_weak (const class GGS_bitbandInstructionIR & inSource) ;

  public: GGS_bitbandInstructionIR_2E_weak & operator = (const class GGS_bitbandInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionIR bang_bitbandInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_bitbandInstructionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInstructionWithAssignmentAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varInstructionWithAssignmentAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varInstructionWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varInstructionWithAssignmentAST_2E_weak (const class GGS_varInstructionWithAssignmentAST & inSource) ;

  public: GGS_varInstructionWithAssignmentAST_2E_weak & operator = (const class GGS_varInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_varInstructionWithAssignmentAST bang_varInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInstructionWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInstructionWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInstructionWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_varInstructionWithAssignmentAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varDeclarationInstructionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varDeclarationInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varDeclarationInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varDeclarationInstructionAST_2E_weak (const class GGS_varDeclarationInstructionAST & inSource) ;

  public: GGS_varDeclarationInstructionAST_2E_weak & operator = (const class GGS_varDeclarationInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_varDeclarationInstructionAST bang_varDeclarationInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varDeclarationInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varDeclarationInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varDeclarationInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_varDeclarationInstructionAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @letInstructionWithAssignmentAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_letInstructionWithAssignmentAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_letInstructionWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_letInstructionWithAssignmentAST_2E_weak (const class GGS_letInstructionWithAssignmentAST & inSource) ;

  public: GGS_letInstructionWithAssignmentAST_2E_weak & operator = (const class GGS_letInstructionWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_letInstructionWithAssignmentAST bang_letInstructionWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_letInstructionWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_letInstructionWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_letInstructionWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_letInstructionWithAssignmentAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_instructionNOP : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_instructionNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_instructionNOP (const class cPtr_instructionNOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionNOP init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionNOP extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionNOP class_func_new (const class GGS_location & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_instructionNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @instructionNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_instructionNOP : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void instructionNOP_init_21_ (const class GGS_location & inOperand0,
                                        Compiler * inCompiler) ;


//--- Extension method instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_instructionNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_instructionNOP (const GGS_location & in_mInstructionLocation
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

