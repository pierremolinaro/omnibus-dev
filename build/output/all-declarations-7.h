#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const class GALGAS_LValueOperandAST inObject,
                                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentPassingModeAST matchingFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_matchingFormalArgument (const class GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_mangledName (const class GALGAS_effectiveArgumentListAST & inObject,
                                                  const class GALGAS_string & constinArgument0,
                                                  const class GALGAS_lstring & constinArgument1,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmName (const class GALGAS_objectIR & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_literalCharacterArrayName (const class GALGAS_uint & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmTypeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmTypeName (const class GALGAS_objectIR & inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType function_literalStringType (class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR withType' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectIR extensionGetter_withType (const class GALGAS_objectIR & inObject,
                                                const class GALGAS_omnibusType & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR name' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_name (const class GALGAS_objectIR & inObject,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR isStatic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isStatic (const class GALGAS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GALGAS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GALGAS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & in_mRoutine) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineListIR_2D_element init_21_ (const class GALGAS_abstractRoutineIR & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineListIR_2D_element class_func_new (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const class GALGAS_routineListIR inObject,
                                            class GALGAS_string & io_ioLLVMcode,
                                            const class GALGAS_generationContext constin_inGenerationContext,
                                            class GALGAS_generationAdds & io_ioGenerationAdds,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (class cPtr_abstractRoutineIR * inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             const class GALGAS_generationContext constin_inGenerationContext,
                                             class GALGAS_generationAdds & io_ioGenerationAdds,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (class GALGAS_instructionListIR & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nopIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_nopIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_nopIR (const class cPtr_nopIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nopIR init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nopIR extractObject (const GALGAS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nopIR class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nopIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nopIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @nopIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_nopIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nopIR_init (Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_nopIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_nopIR (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nopIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nopIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nopIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nopIR_2D_weak (const class GALGAS_nopIR & inSource) ;

  public: GALGAS_nopIR_2D_weak & operator = (const class GALGAS_nopIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nopIR bang_nopIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nopIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nopIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nopIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nopIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nopIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendInstructionAsFreeString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendInstructionAsFreeString (class GALGAS_instructionListIR & ioObject,
                                                    const class GALGAS_string constin_inString,
                                                    const class GALGAS_stringset constin_inInvokedFunctionSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeStringIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_freeStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_freeStringIR (const class cPtr_freeStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mString (void) const ;
  public: void setProperty_mString (const GALGAS_string & inValue) ;

  public: class GALGAS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GALGAS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_freeStringIR init_21__21_ (const class GALGAS_string & inOperand0,
                                                   const class GALGAS_stringset & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeStringIR extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeStringIR class_func_new (const class GALGAS_string & inOperand0,
                                                           const class GALGAS_stringset & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeStringIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @freeStringIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_freeStringIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void freeStringIR_init_21__21_ (const class GALGAS_string & inOperand0,
                                          const class GALGAS_stringset & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mString ;
  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_freeStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeStringIR (const GALGAS_string & in_mString,
                             const GALGAS_stringset & in_mInvokedFunctionSet
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeStringIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeStringIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_freeStringIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_freeStringIR_2D_weak (const class GALGAS_freeStringIR & inSource) ;

  public: GALGAS_freeStringIR_2D_weak & operator = (const class GALGAS_freeStringIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_freeStringIR bang_freeStringIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeStringIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeStringIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeStringIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeStringIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeStringIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendExtend'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendExtend (class GALGAS_instructionListIR & ioObject,
                                   const class GALGAS_objectIR constin_inResult,
                                   const class GALGAS_objectIR constin_inSource,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_extendIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extendIR (const class cPtr_extendIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extendIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                               const class GALGAS_objectIR & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendIR extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                       const class GALGAS_objectIR & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extendIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extendIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extendIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                      const class GALGAS_objectIR & inOperand1,
                                      Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_extendIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extendIR (const GALGAS_objectIR & in_mResult,
                         const GALGAS_objectIR & in_mSource
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extendIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extendIR_2D_weak (const class GALGAS_extendIR & inSource) ;

  public: GALGAS_extendIR_2D_weak & operator = (const class GALGAS_extendIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extendIR bang_extendIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (class GALGAS_instructionListIR & ioObject,
                                  const class GALGAS_omnibusType constin_inResultType,
                                  class GALGAS_objectIR & io_ioObject,
                                  class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_truncIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_truncIR (const class cPtr_truncIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_truncIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                              const class GALGAS_objectIR & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncIR extractObject (const GALGAS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @truncIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_truncIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                     const class GALGAS_objectIR & inOperand1,
                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncIR (const GALGAS_objectIR & in_mResult,
                        const GALGAS_objectIR & in_mSource
                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'getNewTempValue?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_getNewTempValue_3F__26__21_ (const class GALGAS_omnibusType constinArgument0,
                                          class GALGAS_semanticTemporariesStruct & ioArgument1,
                                          class GALGAS_objectIR & outArgument2,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @truncIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_truncIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_truncIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_truncIR_2D_weak (const class GALGAS_truncIR & inSource) ;

  public: GALGAS_truncIR_2D_weak & operator = (const class GALGAS_truncIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_truncIR bang_truncIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_truncIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_truncIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_truncIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_truncIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (class GALGAS_instructionListIR & ioObject,
                                       const class GALGAS_objectIR constin_inUIntResult,
                                       const class GALGAS_objectIR constin_inBoolSource,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolToUIntIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_boolToUIntIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolToUIntIR (const class cPtr_boolToUIntIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mUIntResult (void) const ;
  public: void setProperty_mUIntResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mBoolSource (void) const ;
  public: void setProperty_mBoolSource (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolToUIntIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                   const class GALGAS_objectIR & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolToUIntIR extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolToUIntIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                           const class GALGAS_objectIR & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolToUIntIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolToUIntIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolToUIntIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolToUIntIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolToUIntIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                          const class GALGAS_objectIR & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mUIntResult ;
  public: GALGAS_objectIR mProperty_mBoolSource ;


//--- Default constructor
  public: cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolToUIntIR (const GALGAS_objectIR & in_mUIntResult,
                             const GALGAS_objectIR & in_mBoolSource
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolToUIntIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolToUIntIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolToUIntIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolToUIntIR_2D_weak (const class GALGAS_boolToUIntIR & inSource) ;

  public: GALGAS_boolToUIntIR_2D_weak & operator = (const class GALGAS_boolToUIntIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolToUIntIR bang_boolToUIntIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolToUIntIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolToUIntIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolToUIntIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolToUIntIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolToUIntIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_objectIR constin_inResult,
                                      const class GALGAS_objectIR constin_inSource,
                                      const class GALGAS_uint constin_inShiftAmount,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_leftShiftIR (const class cPtr_leftShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_leftShiftIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftIR extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                          const class GALGAS_objectIR & inOperand1,
                                                          const class GALGAS_uint & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @leftShiftIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                             const class GALGAS_objectIR & inOperand1,
                                             const class GALGAS_uint & inOperand2,
                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;
  public: GALGAS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftIR (const GALGAS_objectIR & in_mResult,
                            const GALGAS_objectIR & in_mSource,
                            const GALGAS_uint & in_mShiftAmount
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_leftShiftIR_2D_weak (const class GALGAS_leftShiftIR & inSource) ;

  public: GALGAS_leftShiftIR_2D_weak & operator = (const class GALGAS_leftShiftIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_leftShiftIR bang_leftShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_objectIR & io_ioResult,
                                              const class GALGAS_uint constin_inShiftAmount,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logicalRightShiftIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_logicalRightShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_logicalRightShiftIR (const class cPtr_logicalRightShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_logicalRightShiftIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                              const class GALGAS_objectIR & inOperand1,
                                                              const class GALGAS_uint & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalRightShiftIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_logicalRightShiftIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_objectIR & inOperand1,
                                                                  const class GALGAS_uint & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_logicalRightShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logicalRightShiftIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @logicalRightShiftIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_logicalRightShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logicalRightShiftIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_objectIR mProperty_mSource ;
  public: GALGAS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logicalRightShiftIR (const GALGAS_objectIR & in_mResult,
                                    const GALGAS_objectIR & in_mSource,
                                    const GALGAS_uint & in_mShiftAmount
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadWhenReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadWhenReference (class GALGAS_instructionListIR & ioObject,
                                              class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                              class GALGAS_objectIR & io_ioObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @logicalRightShiftIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_logicalRightShiftIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_logicalRightShiftIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_logicalRightShiftIR_2D_weak (const class GALGAS_logicalRightShiftIR & inSource) ;

  public: GALGAS_logicalRightShiftIR_2D_weak & operator = (const class GALGAS_logicalRightShiftIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_logicalRightShiftIR bang_logicalRightShiftIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_logicalRightShiftIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_logicalRightShiftIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_logicalRightShiftIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_logicalRightShiftIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTarget,
                                            const class GALGAS_omnibusType constin_inOperandType,
                                            const class GALGAS_location constin_inLocation,
                                            const class GALGAS_objectIR constin_inLeft,
                                            const class GALGAS_llvmBinaryOperation constin_inOperation,
                                            const class GALGAS_objectIR constin_inRight,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperationIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_binaryOperationIR (const class cPtr_binaryOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mOperandType (void) const ;
  public: void setProperty_mOperandType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_objectIR readProperty_mLeft (void) const ;
  public: void setProperty_mLeft (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_llvmBinaryOperation readProperty_mOperation (void) const ;
  public: void setProperty_mOperation (const GALGAS_llvmBinaryOperation & inValue) ;

  public: class GALGAS_objectIR readProperty_mRight (void) const ;
  public: void setProperty_mRight (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_binaryOperationIR init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                        const class GALGAS_omnibusType & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        const class GALGAS_llvmBinaryOperation & inOperand3,
                                                                        const class GALGAS_objectIR & inOperand4,
                                                                        const class GALGAS_location & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperationIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperationIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                const class GALGAS_omnibusType & inOperand1,
                                                                const class GALGAS_objectIR & inOperand2,
                                                                const class GALGAS_llvmBinaryOperation & inOperand3,
                                                                const class GALGAS_objectIR & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @binaryOperationIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_binaryOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binaryOperationIR_init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                               const class GALGAS_omnibusType & inOperand1,
                                                               const class GALGAS_objectIR & inOperand2,
                                                               const class GALGAS_llvmBinaryOperation & inOperand3,
                                                               const class GALGAS_objectIR & inOperand4,
                                                               const class GALGAS_location & inOperand5,
                                                               Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterCodeForDivisionWithZeroDivisorPanic
  public: virtual void method_enterCodeForDivisionWithZeroDivisorPanic (const class GALGAS_string arg_inOperation,
           const class GALGAS_bigint arg_inPanicCode,
           class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterCodeForOverflowOperation
  public: virtual void method_enterCodeForOverflowOperation (const class GALGAS_string arg_inOperation,
           const class GALGAS_bigint arg_inPanicCode,
           class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_omnibusType mProperty_mOperandType ;
  public: GALGAS_objectIR mProperty_mLeft ;
  public: GALGAS_llvmBinaryOperation mProperty_mOperation ;
  public: GALGAS_objectIR mProperty_mRight ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                  const GALGAS_omnibusType & in_mOperandType,
                                  const GALGAS_objectIR & in_mLeft,
                                  const GALGAS_llvmBinaryOperation & in_mOperation,
                                  const GALGAS_objectIR & in_mRight,
                                  const GALGAS_location & in_mLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperationIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperationIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperationIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binaryOperationIR_2D_weak (const class GALGAS_binaryOperationIR & inSource) ;

  public: GALGAS_binaryOperationIR_2D_weak & operator = (const class GALGAS_binaryOperationIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binaryOperationIR bang_binaryOperationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperationIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperationIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperationIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperationIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShortCircuitAndOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (class GALGAS_instructionListIR & ioObject,
                                                     const class GALGAS_objectIR constin_inTargetOperand,
                                                     const class GALGAS_string constin_inLeftOperandLLVMName,
                                                     const class GALGAS_instructionListIR constin_inLeftInstructionList,
                                                     const class GALGAS_string constin_inRightOperandLLVMName,
                                                     const class GALGAS_instructionListIR constin_inRightInstructionList,
                                                     const class GALGAS_location constin_inLocation,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @shortCircuitAndOperationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_shortCircuitAndOperationIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_shortCircuitAndOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_shortCircuitAndOperationIR (const class cPtr_shortCircuitAndOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTargetOperand (void) const ;
  public: void setProperty_mTargetOperand (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mLeftOperandLLVMName (void) const ;
  public: void setProperty_mLeftOperandLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mLeftInstructionList (void) const ;
  public: void setProperty_mLeftInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_string readProperty_mRightOperandLLVMName (void) const ;
  public: void setProperty_mRightOperandLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mRightInstructionList (void) const ;
  public: void setProperty_mRightInstructionList (const GALGAS_instructionListIR & inValue) ;

  public: class GALGAS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_shortCircuitAndOperationIR init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_instructionListIR & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 const class GALGAS_instructionListIR & inOperand4,
                                                                                 const class GALGAS_location & inOperand5,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_shortCircuitAndOperationIR extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_shortCircuitAndOperationIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_instructionListIR & inOperand2,
                                                                         const class GALGAS_string & inOperand3,
                                                                         const class GALGAS_instructionListIR & inOperand4,
                                                                         const class GALGAS_location & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_shortCircuitAndOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_shortCircuitAndOperationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @shortCircuitAndOperationIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_shortCircuitAndOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_instructionListIR & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_instructionListIR & inOperand4,
                                                                        const class GALGAS_location & inOperand5,
                                                                        Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTargetOperand ;
  public: GALGAS_string mProperty_mLeftOperandLLVMName ;
  public: GALGAS_instructionListIR mProperty_mLeftInstructionList ;
  public: GALGAS_string mProperty_mRightOperandLLVMName ;
  public: GALGAS_instructionListIR mProperty_mRightInstructionList ;
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_shortCircuitAndOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_shortCircuitAndOperationIR (const GALGAS_objectIR & in_mTargetOperand,
                                           const GALGAS_string & in_mLeftOperandLLVMName,
                                           const GALGAS_instructionListIR & in_mLeftInstructionList,
                                           const GALGAS_string & in_mRightOperandLLVMName,
                                           const GALGAS_instructionListIR & in_mRightInstructionList,
                                           const GALGAS_location & in_mLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @shortCircuitAndOperationIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_shortCircuitAndOperationIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_shortCircuitAndOperationIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_shortCircuitAndOperationIR_2D_weak (const class GALGAS_shortCircuitAndOperationIR & inSource) ;

  public: GALGAS_shortCircuitAndOperationIR_2D_weak & operator = (const class GALGAS_shortCircuitAndOperationIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_shortCircuitAndOperationIR bang_shortCircuitAndOperationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_shortCircuitAndOperationIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_shortCircuitAndOperationIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_shortCircuitAndOperationIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_shortCircuitAndOperationIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadFromReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (class GALGAS_instructionListIR & ioObject,
                                              const class GALGAS_objectIR constin_inTargetValue,
                                              const class GALGAS_string constin_inLLVMName,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadFromReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_loadFromReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_loadFromReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_loadFromReferenceIR (const class cPtr_loadFromReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_loadFromReferenceIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                          const class GALGAS_string & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_loadFromReferenceIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_loadFromReferenceIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_string & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_loadFromReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_loadFromReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @loadFromReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_loadFromReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadFromReferenceIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                 const class GALGAS_string & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTargetValue ;
  public: GALGAS_string mProperty_mLLVMName ;


//--- Default constructor
  public: cPtr_loadFromReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loadFromReferenceIR (const GALGAS_objectIR & in_mTargetValue,
                                    const GALGAS_string & in_mLLVMName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadFromReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_loadFromReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_loadFromReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_loadFromReferenceIR_2D_weak (const class GALGAS_loadFromReferenceIR & inSource) ;

  public: GALGAS_loadFromReferenceIR_2D_weak & operator = (const class GALGAS_loadFromReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_loadFromReferenceIR bang_loadFromReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_loadFromReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_loadFromReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_loadFromReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_loadFromReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadFromReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreToUniversalReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreToUniversalReference (class GALGAS_instructionListIR & ioObject,
                                                      const class GALGAS_string constin_inLLVMVarName,
                                                      const class GALGAS_omnibusType constin_inTargetVarType,
                                                      const class GALGAS_objectIR constin_inSourceValue,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeToUniversalReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeToUniversalReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_storeToUniversalReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_storeToUniversalReferenceIR (const class cPtr_storeToUniversalReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMTargetVarName (void) const ;
  public: void setProperty_mLLVMTargetVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_storeToUniversalReferenceIR init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      const class GALGAS_objectIR & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeToUniversalReferenceIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeToUniversalReferenceIR class_func_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_omnibusType & inOperand1,
                                                                          const class GALGAS_objectIR & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeToUniversalReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeToUniversalReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeToUniversalReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeToUniversalReferenceIR_init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_omnibusType & inOperand1,
                                                             const class GALGAS_objectIR & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMTargetVarName ;
  public: GALGAS_omnibusType mProperty_mTargetVarType ;
  public: GALGAS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeToUniversalReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                            const GALGAS_omnibusType & in_mTargetVarType,
                                            const GALGAS_objectIR & in_mSourceValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeToUniversalReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeToUniversalReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeToUniversalReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeToUniversalReferenceIR_2D_weak (const class GALGAS_storeToUniversalReferenceIR & inSource) ;

  public: GALGAS_storeToUniversalReferenceIR_2D_weak & operator = (const class GALGAS_storeToUniversalReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeToUniversalReferenceIR bang_storeToUniversalReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeToUniversalReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeToUniversalReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeToUniversalReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeToUniversalReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreTemporaryReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (class GALGAS_instructionListIR & ioObject,
                                                    const class GALGAS_omnibusType constin_inTargetVarType,
                                                    const class GALGAS_string constin_inLLVMName,
                                                    const class GALGAS_objectIR constin_inSourceValue,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeFromTemporaryReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeFromTemporaryReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_storeFromTemporaryReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_storeFromTemporaryReferenceIR (const class cPtr_storeFromTemporaryReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mLLVMTargetVarName (void) const ;
  public: void setProperty_mLLVMTargetVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_storeFromTemporaryReferenceIR init_21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_objectIR & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeFromTemporaryReferenceIR extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeFromTemporaryReferenceIR class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_objectIR & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeFromTemporaryReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeFromTemporaryReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeFromTemporaryReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeFromTemporaryReferenceIR_init_21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               const class GALGAS_objectIR & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetVarType ;
  public: GALGAS_string mProperty_mLLVMTargetVarName ;
  public: GALGAS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeFromTemporaryReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeFromTemporaryReferenceIR (const GALGAS_omnibusType & in_mTargetVarType,
                                              const GALGAS_string & in_mLLVMTargetVarName,
                                              const GALGAS_objectIR & in_mSourceValue
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeFromTemporaryReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeFromTemporaryReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak (const class GALGAS_storeFromTemporaryReferenceIR & inSource) ;

  public: GALGAS_storeFromTemporaryReferenceIR_2D_weak & operator = (const class GALGAS_storeFromTemporaryReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeFromTemporaryReferenceIR bang_storeFromTemporaryReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeFromTemporaryReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeFromTemporaryReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeFromTemporaryReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeFromTemporaryReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_standaloneRoutineCallIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_standaloneRoutineCallIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_standaloneRoutineCallIR (const class cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_lstring readProperty_mFunctionMangledName (void) const ;
  public: void setProperty_mFunctionMangledName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_string readProperty_mFunctionNameForGeneration (void) const ;
  public: void setProperty_mFunctionNameForGeneration (const GALGAS_string & inValue) ;

  public: class GALGAS_procCallEffectiveParameterListIR readProperty_mArgumentList (void) const ;
  public: void setProperty_mArgumentList (const GALGAS_procCallEffectiveParameterListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_standaloneRoutineCallIR init_21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_procCallEffectiveParameterListIR & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneRoutineCallIR extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_standaloneRoutineCallIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standaloneRoutineCallIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @standaloneRoutineCallIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standaloneRoutineCallIR_init_21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                             const class GALGAS_lstring & inOperand1,
                                                             const class GALGAS_string & inOperand2,
                                                             const class GALGAS_procCallEffectiveParameterListIR & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mResult ;
  public: GALGAS_lstring mProperty_mFunctionMangledName ;
  public: GALGAS_string mProperty_mFunctionNameForGeneration ;
  public: GALGAS_procCallEffectiveParameterListIR mProperty_mArgumentList ;


//--- Default constructor
  public: cPtr_standaloneRoutineCallIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                        const GALGAS_lstring & in_mFunctionMangledName,
                                        const GALGAS_string & in_mFunctionNameForGeneration,
                                        const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @standaloneRoutineCallIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_standaloneRoutineCallIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_standaloneRoutineCallIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_standaloneRoutineCallIR_2D_weak (const class GALGAS_standaloneRoutineCallIR & inSource) ;

  public: GALGAS_standaloneRoutineCallIR_2D_weak & operator = (const class GALGAS_standaloneRoutineCallIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_standaloneRoutineCallIR bang_standaloneRoutineCallIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_standaloneRoutineCallIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_standaloneRoutineCallIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_standaloneRoutineCallIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_standaloneRoutineCallIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (class GALGAS_instructionListIR & ioObject,
                                      const class GALGAS_omnibusType constin_inType,
                                      const class GALGAS_lstring constin_in_5F_omnibusName,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @releaseIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_releaseIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_releaseIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_releaseIR (const class cPtr_releaseIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_lstring readProperty_mOmnibusName (void) const ;
  public: void setProperty_mOmnibusName (const GALGAS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_releaseIR init_21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                const class GALGAS_lstring & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_releaseIR extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_releaseIR class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                        const class GALGAS_lstring & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_releaseIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_releaseIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @releaseIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_releaseIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void releaseIR_init_21__21_ (const class GALGAS_omnibusType & inOperand0,
                                       const class GALGAS_lstring & inOperand1,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_lstring mProperty_mOmnibusName ;


//--- Default constructor
  public: cPtr_releaseIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_releaseIR (const GALGAS_omnibusType & in_mType,
                          const GALGAS_lstring & in_mOmnibusName
                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @releaseIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_releaseIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_releaseIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_releaseIR_2D_weak (const class GALGAS_releaseIR & inSource) ;

  public: GALGAS_releaseIR_2D_weak & operator = (const class GALGAS_releaseIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_releaseIR bang_releaseIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_releaseIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_releaseIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_releaseIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_releaseIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendComputeSubscriptedVolatileRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (class GALGAS_instructionListIR & ioObject,
                                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                                      class GALGAS_string & out_outLLVMResultVarName,
                                                                      const class GALGAS_objectIR constin_inIndexIR,
                                                                      const class GALGAS_string constin_inAddressLLVMname,
                                                                      const class GALGAS_uint constin_inElementSize,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computeSubscriptedVolatileRegisterAddress reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computeSubscriptedVolatileRegisterAddress : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_computeSubscriptedVolatileRegisterAddress (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_computeSubscriptedVolatileRegisterAddress (const class cPtr_computeSubscriptedVolatileRegisterAddress * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMResultVarName (void) const ;
  public: void setProperty_mLLVMResultVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mIndexResult (void) const ;
  public: void setProperty_mIndexResult (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mAddressLLVMname (void) const ;
  public: void setProperty_mAddressLLVMname (const GALGAS_string & inValue) ;

  public: class GALGAS_uint readProperty_mElementSize (void) const ;
  public: void setProperty_mElementSize (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_computeSubscriptedVolatileRegisterAddress init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_objectIR & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_uint & inOperand3,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computeSubscriptedVolatileRegisterAddress extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computeSubscriptedVolatileRegisterAddress class_func_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_objectIR & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_uint & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computeSubscriptedVolatileRegisterAddress class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeSubscriptedVolatileRegisterAddress class
//
//--------------------------------------------------------------------------------------------------

class cPtr_computeSubscriptedVolatileRegisterAddress : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void computeSubscriptedVolatileRegisterAddress_init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_objectIR & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_uint & inOperand3,
                                                                               Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMResultVarName ;
  public: GALGAS_objectIR mProperty_mIndexResult ;
  public: GALGAS_string mProperty_mAddressLLVMname ;
  public: GALGAS_uint mProperty_mElementSize ;


//--- Default constructor
  public: cPtr_computeSubscriptedVolatileRegisterAddress (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_computeSubscriptedVolatileRegisterAddress (const GALGAS_string & in_mLLVMResultVarName,
                                                          const GALGAS_objectIR & in_mIndexResult,
                                                          const GALGAS_string & in_mAddressLLVMname,
                                                          const GALGAS_uint & in_mElementSize
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@semanticTemporariesStruct newTempLLVMVar'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_newTempLLVMVar (class GALGAS_semanticTemporariesStruct & ioObject,
                                     class GALGAS_string & out_outTempLLVMVar,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computeSubscriptedVolatileRegisterAddress_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak (const class GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) ;

  public: GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & operator = (const class GALGAS_computeSubscriptedVolatileRegisterAddress & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_computeSubscriptedVolatileRegisterAddress bang_computeSubscriptedVolatileRegisterAddress_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendEnterRegisterAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterAddress (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_string & out_out_5F_llvmName,
                                                 const class GALGAS_bigint constin_inBaseAddress,
                                                 const class GALGAS_bigint constin_inAddressOffset,
                                                 const class GALGAS_string constin_inRegisterName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterAddressIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enterRegisterAddressIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_enterRegisterAddressIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enterRegisterAddressIR (const class cPtr_enterRegisterAddressIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_bigint readProperty_mBaseAddress (void) const ;
  public: void setProperty_mBaseAddress (const GALGAS_bigint & inValue) ;

  public: class GALGAS_bigint readProperty_mAddressOffset (void) const ;
  public: void setProperty_mAddressOffset (const GALGAS_bigint & inValue) ;

  public: class GALGAS_string readProperty_mRegisterName (void) const ;
  public: void setProperty_mRegisterName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enterRegisterAddressIR init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_bigint & inOperand1,
                                                                     const class GALGAS_bigint & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enterRegisterAddressIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enterRegisterAddressIR class_func_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_bigint & inOperand1,
                                                                     const class GALGAS_bigint & inOperand2,
                                                                     const class GALGAS_string & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enterRegisterAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enterRegisterAddressIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enterRegisterAddressIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enterRegisterAddressIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enterRegisterAddressIR_init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_bigint & inOperand1,
                                                            const class GALGAS_bigint & inOperand2,
                                                            const class GALGAS_string & inOperand3,
                                                            Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMName ;
  public: GALGAS_bigint mProperty_mBaseAddress ;
  public: GALGAS_bigint mProperty_mAddressOffset ;
  public: GALGAS_string mProperty_mRegisterName ;


//--- Default constructor
  public: cPtr_enterRegisterAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enterRegisterAddressIR (const GALGAS_string & in_mLLVMName,
                                       const GALGAS_bigint & in_mBaseAddress,
                                       const GALGAS_bigint & in_mAddressOffset,
                                       const GALGAS_string & in_mRegisterName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterAddressIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enterRegisterAddressIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enterRegisterAddressIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enterRegisterAddressIR_2D_weak (const class GALGAS_enterRegisterAddressIR & inSource) ;

  public: GALGAS_enterRegisterAddressIR_2D_weak & operator = (const class GALGAS_enterRegisterAddressIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enterRegisterAddressIR bang_enterRegisterAddressIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enterRegisterAddressIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enterRegisterAddressIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enterRegisterAddressIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enterRegisterAddressIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterAddressIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (class GALGAS_instructionListIR & ioObject,
                                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                                 class GALGAS_string & out_out_5F_llvmName,
                                                                 const class GALGAS_string constin_inGroupName,
                                                                 const class GALGAS_uint constin_inGroupSize,
                                                                 const class GALGAS_objectIR constin_inIndexIR,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterGroupSubscriptedAddressIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enterRegisterGroupSubscriptedAddressIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_enterRegisterGroupSubscriptedAddressIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enterRegisterGroupSubscriptedAddressIR (const class cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_string readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GALGAS_string & inValue) ;

  public: class GALGAS_uint readProperty_mGroupSize (void) const ;
  public: void setProperty_mGroupSize (const GALGAS_uint & inValue) ;

  public: class GALGAS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enterRegisterGroupSubscriptedAddressIR init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2,
                                                                                     const class GALGAS_objectIR & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enterRegisterGroupSubscriptedAddressIR extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enterRegisterGroupSubscriptedAddressIR class_func_new (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2,
                                                                                     const class GALGAS_objectIR & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enterRegisterGroupSubscriptedAddressIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enterRegisterGroupSubscriptedAddressIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enterRegisterGroupSubscriptedAddressIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_uint & inOperand2,
                                                                            const class GALGAS_objectIR & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMName ;
  public: GALGAS_string mProperty_mGroupName ;
  public: GALGAS_uint mProperty_mGroupSize ;
  public: GALGAS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (const GALGAS_string & in_mLLVMName,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_uint & in_mGroupSize,
                                                       const GALGAS_objectIR & in_mIndexIR
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enterRegisterGroupSubscriptedAddressIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak (const class GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

  public: GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & operator = (const class GALGAS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enterRegisterGroupSubscriptedAddressIR bang_enterRegisterGroupSubscriptedAddressIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadIndirectVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                         const class GALGAS_objectIR constin_inTargetValue,
                                                         const class GALGAS_string constin_inLLVMName,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadIndirectVolatileIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_loadIndirectVolatileIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_loadIndirectVolatileIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_loadIndirectVolatileIR (const class cPtr_loadIndirectVolatileIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_loadIndirectVolatileIR init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                             const class GALGAS_string & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_loadIndirectVolatileIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_loadIndirectVolatileIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_loadIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_loadIndirectVolatileIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @loadIndirectVolatileIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_loadIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loadIndirectVolatileIR_init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                    const class GALGAS_string & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTargetValue ;
  public: GALGAS_string mProperty_mLLVMName ;


//--- Default constructor
  public: cPtr_loadIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loadIndirectVolatileIR (const GALGAS_objectIR & in_mTargetValue,
                                       const GALGAS_string & in_mLLVMName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @loadIndirectVolatileIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_loadIndirectVolatileIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_loadIndirectVolatileIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_loadIndirectVolatileIR_2D_weak (const class GALGAS_loadIndirectVolatileIR & inSource) ;

  public: GALGAS_loadIndirectVolatileIR_2D_weak & operator = (const class GALGAS_loadIndirectVolatileIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_loadIndirectVolatileIR bang_loadIndirectVolatileIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_loadIndirectVolatileIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_loadIndirectVolatileIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_loadIndirectVolatileIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_loadIndirectVolatileIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loadIndirectVolatileIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_omnibusType constin_inTargetVarType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_objectIR constin_inSourceValue,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeIndirectVolatileIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeIndirectVolatileIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_storeIndirectVolatileIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_storeIndirectVolatileIR (const class cPtr_storeIndirectVolatileIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_storeIndirectVolatileIR init_21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeIndirectVolatileIR extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeIndirectVolatileIR class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_objectIR & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeIndirectVolatileIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeIndirectVolatileIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeIndirectVolatileIR_init_21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                         const class GALGAS_string & inOperand1,
                                                         const class GALGAS_objectIR & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetVarType ;
  public: GALGAS_string mProperty_mLLVMName ;
  public: GALGAS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeIndirectVolatileIR (const GALGAS_omnibusType & in_mTargetVarType,
                                        const GALGAS_string & in_mLLVMName,
                                        const GALGAS_objectIR & in_mSourceValue
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeIndirectVolatileIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeIndirectVolatileIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeIndirectVolatileIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeIndirectVolatileIR_2D_weak (const class GALGAS_storeIndirectVolatileIR & inSource) ;

  public: GALGAS_storeIndirectVolatileIR_2D_weak & operator = (const class GALGAS_storeIndirectVolatileIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeIndirectVolatileIR bang_storeIndirectVolatileIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeIndirectVolatileIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeIndirectVolatileIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeIndirectVolatileIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeIndirectVolatileIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendCopyFromReferences'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (class GALGAS_instructionListIR & ioObject,
                                               const class GALGAS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                               class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GALGAS_location constin_inErrorLocation,
                                               const class GALGAS_objectIR constin_inSourcePossibleReference,
                                               const class GALGAS_LValueRepresentation constin_inTargetReference,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @copyFromReferencesIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_copyFromReferencesIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_copyFromReferencesIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_copyFromReferencesIR (const class cPtr_copyFromReferencesIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_LValueRepresentation readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_LValueRepresentation & inValue) ;

  public: class GALGAS_string readProperty_mSourceLLVMName (void) const ;
  public: void setProperty_mSourceLLVMName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_copyFromReferencesIR init_21__21_ (const class GALGAS_LValueRepresentation & inOperand0,
                                                           const class GALGAS_string & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_copyFromReferencesIR extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_copyFromReferencesIR class_func_new (const class GALGAS_LValueRepresentation & inOperand0,
                                                                   const class GALGAS_string & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_copyFromReferencesIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @copyFromReferencesIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_copyFromReferencesIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void copyFromReferencesIR_init_21__21_ (const class GALGAS_LValueRepresentation & inOperand0,
                                                  const class GALGAS_string & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_LValueRepresentation mProperty_mTarget ;
  public: GALGAS_string mProperty_mSourceLLVMName ;


//--- Default constructor
  public: cPtr_copyFromReferencesIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_copyFromReferencesIR (const GALGAS_LValueRepresentation & in_mTarget,
                                     const GALGAS_string & in_mSourceLLVMName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_objectIR function_checkAssignmentCompatibility (const class GALGAS_assignmentOperatorMap & constinArgument0,
                                                             const class GALGAS_objectIR & constinArgument1,
                                                             const class GALGAS_omnibusType & constinArgument2,
                                                             const class GALGAS_location & constinArgument3,
                                                             const class GALGAS_bool & constinArgument4,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @copyFromReferencesIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_copyFromReferencesIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_copyFromReferencesIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_copyFromReferencesIR_2D_weak (const class GALGAS_copyFromReferencesIR & inSource) ;

  public: GALGAS_copyFromReferencesIR_2D_weak & operator = (const class GALGAS_copyFromReferencesIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_copyFromReferencesIR bang_copyFromReferencesIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_copyFromReferencesIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_copyFromReferencesIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_copyFromReferencesIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_copyFromReferencesIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR referenceFromPossibleValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_referenceFromPossibleValue (class GALGAS_instructionListIR & ioObject,
                                                 class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                 class GALGAS_allocaList & io_ioAllocaList,
                                                 class GALGAS_objectIR & io_ioObjectIR,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForLocalVariable (const class GALGAS_string & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (class GALGAS_instructionListIR & ioObject,
                                                          const class GALGAS_omnibusType constin_inType,
                                                          const class GALGAS_string constin_inLLVMName,
                                                          const class GALGAS_string constin_inElementLLVMName,
                                                          const class GALGAS_uint constin_inPropertyIndex,
                                                          const class GALGAS_string constin_inPropertyName,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalPropertyReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getUniversalPropertyReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalPropertyReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_getUniversalPropertyReferenceIR (const class cPtr_getUniversalPropertyReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GALGAS_uint & inValue) ;

  public: class GALGAS_string readProperty_mPropertyName (void) const ;
  public: void setProperty_mPropertyName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getUniversalPropertyReferenceIR init_21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_uint & inOperand3,
                                                                                  const class GALGAS_string & inOperand4,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalPropertyReferenceIR extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getUniversalPropertyReferenceIR class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_uint & inOperand3,
                                                                              const class GALGAS_string & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getUniversalPropertyReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalPropertyReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalPropertyReferenceIR_init_21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_uint & inOperand3,
                                                                         const class GALGAS_string & inOperand4,
                                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_string mProperty_mLLVMName ;
  public: GALGAS_string mProperty_mElementLLVMName ;
  public: GALGAS_uint mProperty_mPropertyIndex ;
  public: GALGAS_string mProperty_mPropertyName ;


//--- Default constructor
  public: cPtr_getUniversalPropertyReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalPropertyReferenceIR (const GALGAS_omnibusType & in_mType,
                                                const GALGAS_string & in_mLLVMName,
                                                const GALGAS_string & in_mElementLLVMName,
                                                const GALGAS_uint & in_mPropertyIndex,
                                                const GALGAS_string & in_mPropertyName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalPropertyReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getUniversalPropertyReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak (const class GALGAS_getUniversalPropertyReferenceIR & inSource) ;

  public: GALGAS_getUniversalPropertyReferenceIR_2D_weak & operator = (const class GALGAS_getUniversalPropertyReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getUniversalPropertyReferenceIR bang_getUniversalPropertyReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalPropertyReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getUniversalPropertyReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getUniversalPropertyReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getUniversalPropertyReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                              const class GALGAS_omnibusType constin_inType,
                                                              const class GALGAS_string constin_inLLVMName,
                                                              const class GALGAS_omnibusType constin_inElementType,
                                                              const class GALGAS_string constin_inElementLLVMName,
                                                              const class GALGAS_objectIR constin_inIndexIR,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalArrayElementReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getUniversalArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_getUniversalArrayElementReferenceIR (const class cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getUniversalArrayElementReferenceIR init_21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_omnibusType & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_objectIR & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getUniversalArrayElementReferenceIR class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_omnibusType & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_objectIR & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getUniversalArrayElementReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getUniversalArrayElementReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_omnibusType & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_objectIR & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_string mProperty_mLLVMName ;
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_string mProperty_mElementLLVMName ;
  public: GALGAS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_getUniversalArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalArrayElementReferenceIR (const GALGAS_omnibusType & in_mType,
                                                    const GALGAS_string & in_mLLVMName,
                                                    const GALGAS_omnibusType & in_mElementType,
                                                    const GALGAS_string & in_mElementLLVMName,
                                                    const GALGAS_objectIR & in_mIndexIR
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getUniversalArrayElementReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getUniversalArrayElementReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak (const class GALGAS_getUniversalArrayElementReferenceIR & inSource) ;

  public: GALGAS_getUniversalArrayElementReferenceIR_2D_weak & operator = (const class GALGAS_getUniversalArrayElementReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getUniversalArrayElementReferenceIR bang_getUniversalArrayElementReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getUniversalArrayElementReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getUniversalArrayElementReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getUniversalArrayElementReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getUniversalArrayElementReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (class GALGAS_instructionListIR & ioObject,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GALGAS_objectIR constin_inReceiverIR,
                                                     const class GALGAS_string constin_inLLVMGetterName,
                                                     const class GALGAS_omnibusType constin_inResultType,
                                                     class GALGAS_objectIR & out_outResultValueIR,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getComputedPropertyValueIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getComputedPropertyValueIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_getComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_getComputedPropertyValueIR (const class cPtr_getComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mLLVMGetterName (void) const ;
  public: void setProperty_mLLVMGetterName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mResultValueIR (void) const ;
  public: void setProperty_mResultValueIR (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getComputedPropertyValueIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_objectIR & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getComputedPropertyValueIR extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getComputedPropertyValueIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_objectIR & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getComputedPropertyValueIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getComputedPropertyValueIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_getComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getComputedPropertyValueIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                            const class GALGAS_string & inOperand1,
                                                            const class GALGAS_objectIR & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mReceiverIR ;
  public: GALGAS_string mProperty_mLLVMGetterName ;
  public: GALGAS_objectIR mProperty_mResultValueIR ;


//--- Default constructor
  public: cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                           const GALGAS_string & in_mLLVMGetterName,
                                           const GALGAS_objectIR & in_mResultValueIR
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getComputedPropertyValueIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getComputedPropertyValueIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getComputedPropertyValueIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getComputedPropertyValueIR_2D_weak (const class GALGAS_getComputedPropertyValueIR & inSource) ;

  public: GALGAS_getComputedPropertyValueIR_2D_weak & operator = (const class GALGAS_getComputedPropertyValueIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getComputedPropertyValueIR bang_getComputedPropertyValueIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getComputedPropertyValueIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getComputedPropertyValueIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getComputedPropertyValueIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getComputedPropertyValueIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (class GALGAS_instructionListIR & ioObject,
                                                       const class GALGAS_objectIR constin_inReceiverIR,
                                                       const class GALGAS_string constin_inLLVMSetterName,
                                                       const class GALGAS_objectIR constin_inValueIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeComputedPropertyValueIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeComputedPropertyValueIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_storeComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_storeComputedPropertyValueIR (const class cPtr_storeComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_mLLVMSetterName (void) const ;
  public: void setProperty_mLLVMSetterName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_mValueIR (void) const ;
  public: void setProperty_mValueIR (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_storeComputedPropertyValueIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_objectIR & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeComputedPropertyValueIR extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeComputedPropertyValueIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_objectIR & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeComputedPropertyValueIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @storeComputedPropertyValueIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_storeComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeComputedPropertyValueIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                              const class GALGAS_string & inOperand1,
                                                              const class GALGAS_objectIR & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mReceiverIR ;
  public: GALGAS_string mProperty_mLLVMSetterName ;
  public: GALGAS_objectIR mProperty_mValueIR ;


//--- Default constructor
  public: cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeComputedPropertyValueIR (const GALGAS_objectIR & in_mReceiverIR,
                                             const GALGAS_string & in_mLLVMSetterName,
                                             const GALGAS_objectIR & in_mValueIR
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @storeComputedPropertyValueIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_storeComputedPropertyValueIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_storeComputedPropertyValueIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_storeComputedPropertyValueIR_2D_weak (const class GALGAS_storeComputedPropertyValueIR & inSource) ;

  public: GALGAS_storeComputedPropertyValueIR_2D_weak & operator = (const class GALGAS_storeComputedPropertyValueIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_storeComputedPropertyValueIR bang_storeComputedPropertyValueIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_storeComputedPropertyValueIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_storeComputedPropertyValueIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_storeComputedPropertyValueIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_storeComputedPropertyValueIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetArrayElementReference (class GALGAS_instructionListIR & ioObject,
                                                     class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GALGAS_objectIR constin_inArrayIR,
                                                     const class GALGAS_omnibusType constin_inElementType,
                                                     const class GALGAS_objectIR constin_inIndexIR,
                                                     class GALGAS_objectIR & out_outElementPtr,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getArrayElementReferenceIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getArrayElementReferenceIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_getArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_getArrayElementReferenceIR (const class cPtr_getArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mArray (void) const ;
  public: void setProperty_mArray (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_mIndex (void) const ;
  public: void setProperty_mIndex (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getArrayElementReferenceIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1,
                                                                     const class GALGAS_objectIR & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getArrayElementReferenceIR extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getArrayElementReferenceIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                         const class GALGAS_objectIR & inOperand1,
                                                                         const class GALGAS_objectIR & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getArrayElementReferenceIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getArrayElementReferenceIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_getArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getArrayElementReferenceIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                            const class GALGAS_objectIR & inOperand1,
                                                            const class GALGAS_objectIR & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTarget ;
  public: GALGAS_objectIR mProperty_mArray ;
  public: GALGAS_objectIR mProperty_mIndex ;


//--- Default constructor
  public: cPtr_getArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getArrayElementReferenceIR (const GALGAS_objectIR & in_mTarget,
                                           const GALGAS_objectIR & in_mArray,
                                           const GALGAS_objectIR & in_mIndex
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getArrayElementReferenceIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getArrayElementReferenceIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getArrayElementReferenceIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getArrayElementReferenceIR_2D_weak (const class GALGAS_getArrayElementReferenceIR & inSource) ;

  public: GALGAS_getArrayElementReferenceIR_2D_weak & operator = (const class GALGAS_getArrayElementReferenceIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getArrayElementReferenceIR bang_getArrayElementReferenceIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getArrayElementReferenceIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getArrayElementReferenceIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getArrayElementReferenceIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getArrayElementReferenceIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getArrayElementReferenceIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (class GALGAS_instructionListIR & ioObject,
                                            const class GALGAS_objectIR constin_inTargetValue,
                                            const class GALGAS_string constin_in_5F_if_5F_variableLLVMName,
                                            const class GALGAS_objectIR constin_in_5F_then_5F_variable,
                                            const class GALGAS_objectIR constin_in_5F_else_5F_variable,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_selectInstructionIR (const class cPtr_selectInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mTargetValue (void) const ;
  public: void setProperty_mTargetValue (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_string readProperty_m_5F_if_5F_variableLLVMName (void) const ;
  public: void setProperty_m_5F_if_5F_variableLLVMName (const GALGAS_string & inValue) ;

  public: class GALGAS_objectIR readProperty_m_5F_then_5F_variable (void) const ;
  public: void setProperty_m_5F_then_5F_variable (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_objectIR readProperty_m_5F_else_5F_variable (void) const ;
  public: void setProperty_m_5F_else_5F_variable (const GALGAS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_selectInstructionIR init_21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  const class GALGAS_objectIR & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_selectInstructionIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS_objectIR & inOperand2,
                                                                  const class GALGAS_objectIR & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_selectInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selectInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_selectInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selectInstructionIR_init_21__21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                         const class GALGAS_string & inOperand1,
                                                         const class GALGAS_objectIR & inOperand2,
                                                         const class GALGAS_objectIR & inOperand3,
                                                         Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mTargetValue ;
  public: GALGAS_string mProperty_m_5F_if_5F_variableLLVMName ;
  public: GALGAS_objectIR mProperty_m_5F_then_5F_variable ;
  public: GALGAS_objectIR mProperty_m_5F_else_5F_variable ;


//--- Default constructor
  public: cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selectInstructionIR (const GALGAS_objectIR & in_mTargetValue,
                                    const GALGAS_string & in_m_5F_if_5F_variableLLVMName,
                                    const GALGAS_objectIR & in_m_5F_then_5F_variable,
                                    const GALGAS_objectIR & in_m_5F_else_5F_variable
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selectInstructionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selectInstructionIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selectInstructionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selectInstructionIR_2D_weak (const class GALGAS_selectInstructionIR & inSource) ;

  public: GALGAS_selectInstructionIR_2D_weak & operator = (const class GALGAS_selectInstructionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selectInstructionIR bang_selectInstructionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selectInstructionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_selectInstructionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_selectInstructionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selectInstructionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (class GALGAS_instructionListIR & ioObject,
                                     const class GALGAS_objectIR constin_inIndex,
                                     const class GALGAS_location constin_inErrorLocation,
                                     const class GALGAS_bigint constin_inSize,
                                     class GALGAS_bool & out_outGeneratePanicInstruction,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testArrayIndexIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testArrayIndexIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_testArrayIndexIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_testArrayIndexIR (const class cPtr_testArrayIndexIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_objectIR readProperty_mIndex (void) const ;
  public: void setProperty_mIndex (const GALGAS_objectIR & inValue) ;

  public: class GALGAS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GALGAS_location & inValue) ;

  public: class GALGAS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GALGAS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_testArrayIndexIR init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                           const class GALGAS_location & inOperand1,
                                                           const class GALGAS_bigint & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testArrayIndexIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testArrayIndexIR class_func_new (const class GALGAS_objectIR & inOperand0,
                                                               const class GALGAS_location & inOperand1,
                                                               const class GALGAS_bigint & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testArrayIndexIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testArrayIndexIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testArrayIndexIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_testArrayIndexIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testArrayIndexIR_init_21__21__21_ (const class GALGAS_objectIR & inOperand0,
                                                  const class GALGAS_location & inOperand1,
                                                  const class GALGAS_bigint & inOperand2,
                                                  Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_objectIR mProperty_mIndex ;
  public: GALGAS_location mProperty_mErrorLocation ;
  public: GALGAS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testArrayIndexIR (const GALGAS_objectIR & in_mIndex,
                                 const GALGAS_location & in_mErrorLocation,
                                 const GALGAS_bigint & in_mSize
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testArrayIndexIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testArrayIndexIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testArrayIndexIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testArrayIndexIR_2D_weak (const class GALGAS_testArrayIndexIR & inSource) ;

  public: GALGAS_testArrayIndexIR_2D_weak & operator = (const class GALGAS_testArrayIndexIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testArrayIndexIR bang_testArrayIndexIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testArrayIndexIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testArrayIndexIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testArrayIndexIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testArrayIndexIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sourceLocationIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sourceLocationIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_sourceLocationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sourceLocationIR (const class cPtr_sourceLocationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mSourceLocation (void) const ;
  public: void setProperty_mSourceLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sourceLocationIR init_21_ (const class GALGAS_location & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sourceLocationIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sourceLocationIR class_func_new (const class GALGAS_location & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sourceLocationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sourceLocationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sourceLocationIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sourceLocationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sourceLocationIR_init_21_ (const class GALGAS_location & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mSourceLocation ;


//--- Default constructor
  public: cPtr_sourceLocationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sourceLocationIR (const GALGAS_location & in_mSourceLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sourceLocationIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sourceLocationIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sourceLocationIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sourceLocationIR_2D_weak (const class GALGAS_sourceLocationIR & inSource) ;

  public: GALGAS_sourceLocationIR_2D_weak & operator = (const class GALGAS_sourceLocationIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sourceLocationIR bang_sourceLocationIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sourceLocationIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sourceLocationIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sourceLocationIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sourceLocationIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sourceLocationIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (class GALGAS_instructionListIR & ioObject,
                                        const class GALGAS_string constin_inComment,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeCommentIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeCommentIR : public GALGAS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GALGAS_freeCommentIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_freeCommentIR (const class cPtr_freeCommentIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mComment (void) const ;
  public: void setProperty_mComment (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_freeCommentIR init_21_ (const class GALGAS_string & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeCommentIR extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeCommentIR class_func_new (const class GALGAS_string & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeCommentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeCommentIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @freeCommentIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_freeCommentIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void freeCommentIR_init_21_ (const class GALGAS_string & inOperand0,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mComment ;


//--- Default constructor
  public: cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_freeCommentIR (const GALGAS_string & in_mComment
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @freeCommentIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_freeCommentIR_2D_weak : public GALGAS_abstractInstructionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_freeCommentIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_freeCommentIR_2D_weak (const class GALGAS_freeCommentIR & inSource) ;

  public: GALGAS_freeCommentIR_2D_weak & operator = (const class GALGAS_freeCommentIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_freeCommentIR bang_freeCommentIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_freeCommentIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_freeCommentIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_freeCommentIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_freeCommentIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_freeCommentIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterAccessibleEntities (const class GALGAS_instructionListIR inObject,
                                              class GALGAS_stringset & io_ioInvokedRoutineSet,
                                              class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractInstructionIR * inObject,
                                                  class GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  class GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAccessibilityIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineAccessibilityIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineAccessibilityIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineAccessibilityIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractRoutineIR & in_mRoutine,
                                                 const class GALGAS_stringset & in_mAccessibleRoutineSet
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineAccessibilityIR init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineAccessibilityIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineAccessibilityIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineAccessibilityIR class_func_listWithValue (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                               const class GALGAS_stringset & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineAccessibilityIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractRoutineIR & inOperand0,
                                                     const class GALGAS_stringset & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAccessibilityIR add_operation (const GALGAS_routineAccessibilityIR & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractRoutineIR constinArgument0,
                                               class GALGAS_stringset constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                      class GALGAS_stringset constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractRoutineIR & outArgument0,
                                                 class GALGAS_stringset & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractRoutineIR & outArgument0,
                                                class GALGAS_stringset & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractRoutineIR & outArgument0,
                                                      class GALGAS_stringset & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessibleRoutineSetAtIndex (class GALGAS_stringset constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractRoutineIR & outArgument0,
                                              class GALGAS_stringset & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractRoutineIR & outArgument0,
                                             class GALGAS_stringset & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mAccessibleRoutineSetAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractRoutineIR getter_mRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineAccessibilityIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_routineAccessibilityIR_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineAccessibilityIR ;
 
} ; // End of GALGAS_routineAccessibilityIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineAccessibilityIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineAccessibilityIR (const GALGAS_routineAccessibilityIR & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
  public: class GALGAS_stringset current_mAccessibleRoutineSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineAccessibilityIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAccessibilityIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineAccessibilityIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GALGAS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

  public: GALGAS_stringset mProperty_mAccessibleRoutineSet ;
  public: inline GALGAS_stringset readProperty_mAccessibleRoutineSet (void) const {
    return mProperty_mAccessibleRoutineSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineAccessibilityIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GALGAS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

  public: inline void setter_setMAccessibleRoutineSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessibleRoutineSet = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineAccessibilityIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                    const GALGAS_stringset & in_mAccessibleRoutineSet) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineAccessibilityIR_2D_element init_21__21_ (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                        const class GALGAS_stringset & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineAccessibilityIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineAccessibilityIR_2D_element class_func_new (const class GALGAS_abstractRoutineIR & inOperand0,
                                                                                const class GALGAS_stringset & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineAccessibilityIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineAccessibilityIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionListListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_instructionListListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_instructionListListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_instructionListIR & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instructionListListIR init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListListIR extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionListListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_instructionListListIR class_func_listWithValue (const class GALGAS_instructionListIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instructionListIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instructionListListIR add_operation (const GALGAS_instructionListListIR & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_instructionListIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instructionListIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instructionListIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instructionListIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_instructionListIR constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_instructionListIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_instructionListIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_instructionListListIR_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_instructionListListIR ;
 
} ; // End of GALGAS_instructionListListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_instructionListListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_instructionListListIR (const GALGAS_instructionListListIR & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instructionListListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionListListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_instructionListIR mProperty_mInstructionList ;
  public: inline GALGAS_instructionListIR readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_instructionListListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GALGAS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_instructionListListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_instructionListListIR_2D_element (const GALGAS_instructionListIR & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instructionListListIR_2D_element init_21_ (const class GALGAS_instructionListIR & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionListListIR_2D_element class_func_new (const class GALGAS_instructionListIR & inOperand0,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instructionListListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionListListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_ctExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctExpressionAST_2D_weak (const class GALGAS_ctExpressionAST & inSource) ;

  public: GALGAS_ctExpressionAST_2D_weak & operator = (const class GALGAS_ctExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctExpressionAST bang_ctExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctInfixExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctInfixExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctInfixExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctInfixExpressionAST_2D_weak (const class GALGAS_ctInfixExpressionAST & inSource) ;

  public: GALGAS_ctInfixExpressionAST_2D_weak & operator = (const class GALGAS_ctInfixExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctInfixExpressionAST bang_ctInfixExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctInfixExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctInfixExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctInfixExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctInfixExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctPrefixExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctPrefixExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctPrefixExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctPrefixExpressionAST_2D_weak (const class GALGAS_ctPrefixExpressionAST & inSource) ;

  public: GALGAS_ctPrefixExpressionAST_2D_weak & operator = (const class GALGAS_ctPrefixExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctPrefixExpressionAST bang_ctPrefixExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctPrefixExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctPrefixExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctPrefixExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctPrefixExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctTrueExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctTrueExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctTrueExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctTrueExpressionAST_2D_weak (const class GALGAS_ctTrueExpressionAST & inSource) ;

  public: GALGAS_ctTrueExpressionAST_2D_weak & operator = (const class GALGAS_ctTrueExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctTrueExpressionAST bang_ctTrueExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctTrueExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctTrueExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctTrueExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctTrueExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctFalseExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctFalseExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctFalseExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctFalseExpressionAST_2D_weak (const class GALGAS_ctFalseExpressionAST & inSource) ;

  public: GALGAS_ctFalseExpressionAST_2D_weak & operator = (const class GALGAS_ctFalseExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctFalseExpressionAST bang_ctFalseExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctFalseExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctFalseExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctFalseExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctFalseExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctIntExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctIntExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctIntExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctIntExpressionAST_2D_weak (const class GALGAS_ctIntExpressionAST & inSource) ;

  public: GALGAS_ctIntExpressionAST_2D_weak & operator = (const class GALGAS_ctIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctIntExpressionAST bang_ctIntExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctIntExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctIntExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctIdentifierExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctIdentifierExpressionAST_2D_weak : public GALGAS_ctExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ctIdentifierExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ctIdentifierExpressionAST_2D_weak (const class GALGAS_ctIdentifierExpressionAST & inSource) ;

  public: GALGAS_ctIdentifierExpressionAST_2D_weak & operator = (const class GALGAS_ctIdentifierExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ctIdentifierExpressionAST bang_ctIdentifierExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctIdentifierExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctIdentifierExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctIdentifierExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctIdentifierExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctCheckMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ctCheckMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ctCheckMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_ctCheckMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_ctCheckMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_ctCheckMap (const GALGAS_ctCheckMap & inSource) ;
  public: GALGAS_ctCheckMap & operator = (const GALGAS_ctCheckMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ctCheckMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctCheckMap extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctCheckMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_ctCheckMap class_func_mapWithMapToOverride (const class GALGAS_ctCheckMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ctCheckMap add_operation (const GALGAS_ctCheckMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ctCheckMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_ctCheckMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ctCheckMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ctCheckMap ;
 
} ; // End of GALGAS_ctCheckMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ctCheckMap : public cGenericAbstractEnumerator {
  public: cEnumerator_ctCheckMap (const GALGAS_ctCheckMap & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ctCheckMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ctCheckMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ctCheckMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_ctCheckMap (const GALGAS_ctCheckMap_2D_element & inValue
                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_ctCheckMap (const GALGAS_lstring & inKey
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctCheckMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctCheckMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ctCheckMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ctCheckMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ctCheckMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ctCheckMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctCheckMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctCheckMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctCheckMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctCheckMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (class cPtr_ctExpressionAST * inObject,
                                                     const class GALGAS_ctCheckMap constin_inMap,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ctMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ctMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_ctMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_ctMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_ctMap (const GALGAS_ctMap & inSource) ;
  public: GALGAS_ctMap & operator = (const GALGAS_ctMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ctMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctMap extractObject (const GALGAS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_ctMap class_func_mapWithMapToOverride (const class GALGAS_ctMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bigint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ctMap add_operation (const GALGAS_ctMap & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bigint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_bigint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bigint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ctMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bigint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_ctMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                  const GALGAS_string & inKey
                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ctMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ctMap ;
 
} ; // End of GALGAS_ctMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ctMap : public cGenericAbstractEnumerator {
  public: cEnumerator_ctMap (const GALGAS_ctMap & inEnumeratedObject,
                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ctMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ctMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_ctMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bigint mProperty_mValue ;

//--- Constructors
  public: cMapElement_ctMap (const GALGAS_ctMap_2D_element & inValue
                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_ctMap (const GALGAS_lstring & inKey,
                             const GALGAS_bigint & in_mValue
                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ctMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ctMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bigint mProperty_mValue ;
  public: inline GALGAS_bigint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ctMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ctMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ctMap_2D_element (const GALGAS_lstring & in_lkey,
                                   const GALGAS_bigint & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ctMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                       const class GALGAS_bigint & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ctMap_2D_element extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ctMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_bigint & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ctMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ctMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ctExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (class cPtr_ctExpressionAST * inObject,
                                                       const class GALGAS_ctMap constin_inMap,
                                                       class GALGAS_bigint & out_outValue,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                      Phase 1: @llvmStringDefinitionElement enum                                     *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmStringDefinitionElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_llvmStringDefinitionElement (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_variable,
    kEnum_string
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmStringDefinitionElement extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmStringDefinitionElement class_func_string (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_llvmStringDefinitionElement class_func_variable (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmStringDefinitionElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_string (class GALGAS_lstring & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_variable (class GALGAS_lstring & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVariable (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_string (class GALGAS_lstring & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_variable (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmStringDefinitionElement class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @llvmStringDefinitionElement enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_llvmStringDefinitionElement_variable : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_llvmStringDefinitionElement_variable (const GALGAS_lstring inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_llvmStringDefinitionElement_variable (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_llvmStringDefinitionElement_string : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_llvmStringDefinitionElement_string (const GALGAS_lstring inAssociatedValue0
                                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_llvmStringDefinitionElement_string (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmStringDefinition_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmStringDefinition_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_llvmStringDefinitionElement mProperty_mElement ;
  public: inline GALGAS_llvmStringDefinitionElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_llvmStringDefinition_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_llvmStringDefinitionElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_llvmStringDefinition_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_llvmStringDefinition_2D_element (const GALGAS_llvmStringDefinitionElement & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmStringDefinition_2D_element init_21_ (const class GALGAS_llvmStringDefinitionElement & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmStringDefinition_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmStringDefinition_2D_element class_func_new (const class GALGAS_llvmStringDefinitionElement & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmStringDefinition_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmStringDefinition_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenericType_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmGenericType_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmGenericType_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmGenericType_2D_weak (const class GALGAS_llvmGenericType & inSource) ;

  public: GALGAS_llvmGenericType_2D_weak & operator = (const class GALGAS_llvmGenericType & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmGenericType bang_llvmGenericType_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenericType_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmGenericType_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmGenericType_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmGenericType_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const class GALGAS_genericFormalParameterList inObject,
                                                    class GALGAS_ctCheckMap & io_ioMap,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const class GALGAS_llvmStringDefinition inObject,
                                                 const class GALGAS_ctCheckMap constin_inMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmAssignmentOperatorDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak (const class GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) ;

  public: GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & operator = (const class GALGAS_llvmAssignmentOperatorDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmAssignmentOperatorDeclarationAST bang_llvmAssignmentOperatorDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractAssignmentOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_abstractAssignmentOperatorUsage * inObject,
                                       class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GALGAS_instructionListIR & io_ioInstructionListIR,
                                       class GALGAS_allocaList & io_ioAllocaList,
                                       const class GALGAS_omnibusType constin_inTargetType,
                                       const class GALGAS_string constin_inTargetLLVMName,
                                       const class GALGAS_objectIR constin_inSourcePossibleReference,
                                       const class GALGAS_location constin_inErrorLocation,
                                       const class GALGAS_bool constin_inTargetIsInitialized,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmAssignmentOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_llvmAssignmentOperatorUsage (const class cPtr_llvmAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_lstring readProperty_mTargetVarName (void) const ;
  public: void setProperty_mTargetVarName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_genericFormalParameterList readProperty_mTargetGenericFormalParameterList (void) const ;
  public: void setProperty_mTargetGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) ;

  public: class GALGAS_omnibusType readProperty_mSourceTpe (void) const ;
  public: void setProperty_mSourceTpe (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_lstring readProperty_mSourceVarName (void) const ;
  public: void setProperty_mSourceVarName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_genericFormalParameterList readProperty_mSourceGenericFormalParameterList (void) const ;
  public: void setProperty_mSourceGenericFormalParameterList (const GALGAS_genericFormalParameterList & inValue) ;

  public: class GALGAS_ctExpressionAST readProperty_mWhereClause (void) const ;
  public: void setProperty_mWhereClause (const GALGAS_ctExpressionAST & inValue) ;

  public: class GALGAS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GALGAS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmAssignmentOperatorUsage init_21__21__21__21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_genericFormalParameterList & inOperand2,
                                                                                          const class GALGAS_omnibusType & inOperand3,
                                                                                          const class GALGAS_lstring & inOperand4,
                                                                                          const class GALGAS_genericFormalParameterList & inOperand5,
                                                                                          const class GALGAS_ctExpressionAST & inOperand6,
                                                                                          const class GALGAS_llvmGenerationInstructionList & inOperand7,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmAssignmentOperatorUsage class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_genericFormalParameterList & inOperand2,
                                                                          const class GALGAS_omnibusType & inOperand3,
                                                                          const class GALGAS_lstring & inOperand4,
                                                                          const class GALGAS_genericFormalParameterList & inOperand5,
                                                                          const class GALGAS_ctExpressionAST & inOperand6,
                                                                          const class GALGAS_llvmGenerationInstructionList & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmAssignmentOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmAssignmentOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_llvmAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmAssignmentOperatorUsage_init_21__21__21__21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_genericFormalParameterList & inOperand2,
                                                                                 const class GALGAS_omnibusType & inOperand3,
                                                                                 const class GALGAS_lstring & inOperand4,
                                                                                 const class GALGAS_genericFormalParameterList & inOperand5,
                                                                                 const class GALGAS_ctExpressionAST & inOperand6,
                                                                                 const class GALGAS_llvmGenerationInstructionList & inOperand7,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionListIR,
           class GALGAS_allocaList & arg_ioAllocaList,
           const class GALGAS_omnibusType arg_inTargetType,
           const class GALGAS_string arg_inTargetLLVMName,
           const class GALGAS_objectIR arg_inSourcePossibleReference,
           const class GALGAS_location arg_inErrorLocation,
           const class GALGAS_bool arg_inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;
  public: GALGAS_lstring mProperty_mTargetVarName ;
  public: GALGAS_genericFormalParameterList mProperty_mTargetGenericFormalParameterList ;
  public: GALGAS_omnibusType mProperty_mSourceTpe ;
  public: GALGAS_lstring mProperty_mSourceVarName ;
  public: GALGAS_genericFormalParameterList mProperty_mSourceGenericFormalParameterList ;
  public: GALGAS_ctExpressionAST mProperty_mWhereClause ;
  public: GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmAssignmentOperatorUsage (const GALGAS_omnibusType & in_mTargetType,
                                            const GALGAS_lstring & in_mTargetVarName,
                                            const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                            const GALGAS_omnibusType & in_mSourceTpe,
                                            const GALGAS_lstring & in_mSourceVarName,
                                            const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                            const GALGAS_ctExpressionAST & in_mWhereClause,
                                            const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmAssignmentOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmAssignmentOperatorUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak (const class GALGAS_llvmAssignmentOperatorUsage & inSource) ;

  public: GALGAS_llvmAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_llvmAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmAssignmentOperatorUsage bang_llvmAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmAssignmentOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmAssignmentOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendAssignmentIR'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendAssignmentIR (class GALGAS_instructionListIR & ioObject,
                                         class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                         const class GALGAS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                         class GALGAS_allocaList & io_ioAllocaList,
                                         const class GALGAS_omnibusType constin_inTargetType,
                                         const class GALGAS_string constin_inTargetLLVMName,
                                         const class GALGAS_objectIR constin_inSourcePossibleReference,
                                         const class GALGAS_location constin_inErrorLocation,
                                         const class GALGAS_bool constin_inTargetIsInitialized,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'assignmentOperatorKey'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_assignmentOperatorKey (const class GALGAS_omnibusType & constinArgument0,
                                                     const class GALGAS_location & constinArgument1,
                                                     const class GALGAS_omnibusType & constinArgument2,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_assignmentRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentRoutineIR (const class cPtr_assignmentRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mTargetVarName (void) const ;
  public: void setProperty_mTargetVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mSourceVarName (void) const ;
  public: void setProperty_mSourceVarName (const GALGAS_string & inValue) ;

  public: class GALGAS_stringlist readProperty_mGeneratedInstructions (void) const ;
  public: void setProperty_mGeneratedInstructions (const GALGAS_stringlist & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assignmentRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                             const class GALGAS_bool & inOperand1,
                                                                                                             const class GALGAS_bool & inOperand2,
                                                                                                             const class GALGAS_omnibusType & inOperand3,
                                                                                                             const class GALGAS_string & inOperand4,
                                                                                                             const class GALGAS_omnibusType & inOperand5,
                                                                                                             const class GALGAS_string & inOperand6,
                                                                                                             const class GALGAS_stringlist & inOperand7,
                                                                                                             const class GALGAS_allocaList & inOperand8,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentRoutineIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_omnibusType & inOperand3,
                                                                  const class GALGAS_string & inOperand4,
                                                                  const class GALGAS_omnibusType & inOperand5,
                                                                  const class GALGAS_string & inOperand6,
                                                                  const class GALGAS_stringlist & inOperand7,
                                                                  const class GALGAS_allocaList & inOperand8
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_omnibusType & inOperand3,
                                                                                                    const class GALGAS_string & inOperand4,
                                                                                                    const class GALGAS_omnibusType & inOperand5,
                                                                                                    const class GALGAS_string & inOperand6,
                                                                                                    const class GALGAS_stringlist & inOperand7,
                                                                                                    const class GALGAS_allocaList & inOperand8,
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
  public: GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public: GALGAS_allocaList mProperty_mAllocaList ;


//--- Default constructor
  public: cPtr_assignmentRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                    const GALGAS_bool & in_isRequired,
                                    const GALGAS_bool & in_warnsIfUnused,
                                    const GALGAS_omnibusType & in_mTargetType,
                                    const GALGAS_string & in_mTargetVarName,
                                    const GALGAS_omnibusType & in_mSourceType,
                                    const GALGAS_string & in_mSourceVarName,
                                    const GALGAS_stringlist & in_mGeneratedInstructions,
                                    const GALGAS_allocaList & in_mAllocaList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentRoutineIR_2D_weak (const class GALGAS_assignmentRoutineIR & inSource) ;

  public: GALGAS_assignmentRoutineIR_2D_weak & operator = (const class GALGAS_assignmentRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentRoutineIR bang_assignmentRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleAssignmentCopyRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_simpleAssignmentCopyRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_simpleAssignmentCopyRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_simpleAssignmentCopyRoutineIR (const class cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mTargetType (void) const ;
  public: void setProperty_mTargetType (const GALGAS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_simpleAssignmentCopyRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_bool & inOperand2,
                                                                                                   const class GALGAS_omnibusType & inOperand3,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleAssignmentCopyRoutineIR extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_simpleAssignmentCopyRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_omnibusType & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_simpleAssignmentCopyRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @simpleAssignmentCopyRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_simpleAssignmentCopyRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void simpleAssignmentCopyRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_bool & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          const class GALGAS_omnibusType & inOperand3,
                                                                                          Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mTargetType ;


//--- Default constructor
  public: cPtr_simpleAssignmentCopyRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_simpleAssignmentCopyRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_omnibusType & in_mTargetType
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleAssignmentCopyRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_simpleAssignmentCopyRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak (const class GALGAS_simpleAssignmentCopyRoutineIR & inSource) ;

  public: GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & operator = (const class GALGAS_simpleAssignmentCopyRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_simpleAssignmentCopyRoutineIR bang_simpleAssignmentCopyRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleAssignmentCopyRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_simpleAssignmentCopyRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_simpleAssignmentCopyRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleCopyAssignmentOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_simpleCopyAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_simpleCopyAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_simpleCopyAssignmentOperatorUsage (const class cPtr_simpleCopyAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_simpleCopyAssignmentOperatorUsage init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleCopyAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_simpleCopyAssignmentOperatorUsage class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_simpleCopyAssignmentOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @simpleCopyAssignmentOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_simpleCopyAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void simpleCopyAssignmentOperatorUsage_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionListIR,
           class GALGAS_allocaList & arg_ioAllocaList,
           const class GALGAS_omnibusType arg_inTargetType,
           const class GALGAS_string arg_inTargetLLVMName,
           const class GALGAS_objectIR arg_inSourcePossibleReference,
           const class GALGAS_location arg_inErrorLocation,
           const class GALGAS_bool arg_inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_simpleCopyAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_simpleCopyAssignmentOperatorUsage (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @simpleCopyAssignmentOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak (const class GALGAS_simpleCopyAssignmentOperatorUsage & inSource) ;

  public: GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_simpleCopyAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_simpleCopyAssignmentOperatorUsage bang_simpleCopyAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleCopyAssignmentOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstructionElementList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstructionElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_llvmGenerationInstructionElement mProperty_mElement ;
  public: inline GALGAS_llvmGenerationInstructionElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_llvmGenerationInstructionElementList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_llvmGenerationInstructionElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_llvmGenerationInstructionElementList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_llvmGenerationInstructionElementList_2D_element (const GALGAS_llvmGenerationInstructionElement & in_mElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_llvmGenerationInstructionElementList_2D_element init_21_ (const class GALGAS_llvmGenerationInstructionElement & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenerationInstructionElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmGenerationInstructionElementList_2D_element class_func_new (const class GALGAS_llvmGenerationInstructionElement & inOperand0,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmGenerationInstructionElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmGenerationInstructionElementList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLLVMInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractLLVMInstruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractLLVMInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractLLVMInstruction_2D_weak (const class GALGAS_abstractLLVMInstruction & inSource) ;

  public: GALGAS_abstractLLVMInstruction_2D_weak & operator = (const class GALGAS_abstractLLVMInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractLLVMInstruction bang_abstractLLVMInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLLVMInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractLLVMInstruction_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractLLVMInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractLLVMInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2D_weak ;

