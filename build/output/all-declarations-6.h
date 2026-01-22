#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntBitWiseAndOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseAndOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak (const class GGS_compileTimeIntBitWiseAndOperator & inSource) ;

  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak & operator = (const class GGS_compileTimeIntBitWiseAndOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntBitWiseAndOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntBitWiseAndOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntBitWiseAndOperator bang_compileTimeIntBitWiseAndOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntBitWiseAndOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntBitWiseAndOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntBitWiseAndOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntBitWiseAndOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntShiftLeftOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftLeftOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftLeftOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntShiftLeftOperator (const class cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntShiftLeftOperator init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntShiftLeftOperator extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftLeftOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntShiftLeftOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntShiftLeftOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntShiftLeftOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntShiftLeftOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntShiftLeftOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftLeftOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftLeftOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntShiftLeftOperator_2E_weak (const class GGS_compileTimeIntShiftLeftOperator & inSource) ;

  public: GGS_compileTimeIntShiftLeftOperator_2E_weak & operator = (const class GGS_compileTimeIntShiftLeftOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntShiftLeftOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntShiftLeftOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntShiftLeftOperator bang_compileTimeIntShiftLeftOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntShiftLeftOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntShiftLeftOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntShiftLeftOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftLeftOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntShiftRightOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftRightOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftRightOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntShiftRightOperator (const class cPtr_compileTimeIntShiftRightOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntShiftRightOperator init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntShiftRightOperator extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftRightOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntShiftRightOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntShiftRightOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntShiftRightOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntShiftRightOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntShiftRightOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftRightOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftRightOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntShiftRightOperator_2E_weak (const class GGS_compileTimeIntShiftRightOperator & inSource) ;

  public: GGS_compileTimeIntShiftRightOperator_2E_weak & operator = (const class GGS_compileTimeIntShiftRightOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntShiftRightOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntShiftRightOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntShiftRightOperator bang_compileTimeIntShiftRightOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntShiftRightOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntShiftRightOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntShiftRightOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftRightOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntLessThanOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLessThanOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLessThanOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntLessThanOperator (const class cPtr_compileTimeIntLessThanOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntLessThanOperator init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntLessThanOperator extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLessThanOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntLessThanOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntLessThanOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntLessThanOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntLessThanOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntLessThanOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLessThanOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLessThanOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntLessThanOperator_2E_weak (const class GGS_compileTimeIntLessThanOperator & inSource) ;

  public: GGS_compileTimeIntLessThanOperator_2E_weak & operator = (const class GGS_compileTimeIntLessThanOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntLessThanOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntLessThanOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntLessThanOperator bang_compileTimeIntLessThanOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntLessThanOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntLessThanOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntLessThanOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLessThanOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntLowerOrEqualOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLowerOrEqualOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLowerOrEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntLowerOrEqualOperator (const class cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntLowerOrEqualOperator init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntLowerOrEqualOperator extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLowerOrEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntLowerOrEqualOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntLowerOrEqualOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntLowerOrEqualOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntLowerOrEqualOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntLowerOrEqualOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLowerOrEqualOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak (const class GGS_compileTimeIntLowerOrEqualOperator & inSource) ;

  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak & operator = (const class GGS_compileTimeIntLowerOrEqualOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntLowerOrEqualOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntLowerOrEqualOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntLowerOrEqualOperator bang_compileTimeIntLowerOrEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntLowerOrEqualOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntLowerOrEqualOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntLowerOrEqualOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLowerOrEqualOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntXorOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntXorOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntXorOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntXorOperator (const class cPtr_compileTimeIntXorOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntXorOperator init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntXorOperator extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntXorOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntXorOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntXorOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntXorOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntXorOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntXorOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntXorOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntXorOperator_2E_weak (const class GGS_compileTimeIntXorOperator & inSource) ;

  public: GGS_compileTimeIntXorOperator_2E_weak & operator = (const class GGS_compileTimeIntXorOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntXorOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntXorOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntXorOperator bang_compileTimeIntXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntXorOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntXorOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntXorOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntXorOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntBitWiseOrOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseOrOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseOrOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntBitWiseOrOperator (const class cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntBitWiseOrOperator init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntBitWiseOrOperator extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntBitWiseOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntBitWiseOrOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntBitWiseOrOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntBitWiseOrOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntBitWiseOrOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntBitWiseOrOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseOrOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak (const class GGS_compileTimeIntBitWiseOrOperator & inSource) ;

  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak & operator = (const class GGS_compileTimeIntBitWiseOrOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntBitWiseOrOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntBitWiseOrOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntBitWiseOrOperator bang_compileTimeIntBitWiseOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntBitWiseOrOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntBitWiseOrOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntBitWiseOrOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntBitWiseOrOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntMinusOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntMinusOperator : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntMinusOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntMinusOperator (const class cPtr_compileTimeIntMinusOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntMinusOperator init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntMinusOperator extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntMinusOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntMinusOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntMinusOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntMinusOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntMinusOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntMinusOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntMinusOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntMinusOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntMinusOperator_2E_weak (const class GGS_compileTimeIntMinusOperator & inSource) ;

  public: GGS_compileTimeIntMinusOperator_2E_weak & operator = (const class GGS_compileTimeIntMinusOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntMinusOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntMinusOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntMinusOperator bang_compileTimeIntMinusOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntMinusOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntMinusOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntMinusOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntMinusOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeIntComplementOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntComplementOperator : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntComplementOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntComplementOperator (const class cPtr_compileTimeIntComplementOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntComplementOperator init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntComplementOperator extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntComplementOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeIntComplementOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntComplementOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntComplementOperator_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compileTimeIntComplementOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeIntComplementOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntComplementOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntComplementOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntComplementOperator_2E_weak (const class GGS_compileTimeIntComplementOperator & inSource) ;

  public: GGS_compileTimeIntComplementOperator_2E_weak & operator = (const class GGS_compileTimeIntComplementOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeIntComplementOperator_2E_weak init_nil (void) {
    GGS_compileTimeIntComplementOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeIntComplementOperator bang_compileTimeIntComplementOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeIntComplementOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeIntComplementOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntComplementOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntComplementOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (class GGS_instructionListIR & ioObject,
                                                       const class GGS_objectIR constin_inReceiverIR,
                                                       const class GGS_string constin_inLLVMSetterName,
                                                       const class GGS_objectIR constin_inValueIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeComputedPropertyValueIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeComputedPropertyValueIR (const class cPtr_storeComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMSetterName (void) const ;
  public: void setProperty_mLLVMSetterName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mValueIR (void) const ;
  public: void setProperty_mValueIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeComputedPropertyValueIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_objectIR & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeComputedPropertyValueIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeComputedPropertyValueIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                              const class GGS_string & inOperand1,
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
  public: GGS_objectIR mProperty_mReceiverIR ;
  public: GGS_string mProperty_mLLVMSetterName ;
  public: GGS_objectIR mProperty_mValueIR ;


//--- Default constructor
  public: cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                             const GGS_string & in_mLLVMSetterName,
                                             const GGS_objectIR & in_mValueIR,
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
// Phase 1: @storeComputedPropertyValueIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeComputedPropertyValueIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeComputedPropertyValueIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeComputedPropertyValueIR_2E_weak (const class GGS_storeComputedPropertyValueIR & inSource) ;

  public: GGS_storeComputedPropertyValueIR_2E_weak & operator = (const class GGS_storeComputedPropertyValueIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeComputedPropertyValueIR_2E_weak init_nil (void) {
    GGS_storeComputedPropertyValueIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeComputedPropertyValueIR bang_storeComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeComputedPropertyValueIR unwrappedValue (void) const ;

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
  public: static GGS_storeComputedPropertyValueIR_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeComputedPropertyValueIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeComputedPropertyValueIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (class GGS_instructionListIR & ioObject,
                                      const class GGS_objectIR constin_inResult,
                                      const class GGS_objectIR constin_inSource,
                                      const class GGS_uint constin_inShiftAmount,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @leftShiftIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_leftShiftIR (const class cPtr_leftShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

  public: class GGS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_leftShiftIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   const class GGS_uint & inOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_leftShiftIR extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @leftShiftIR class
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                             const class GGS_objectIR & inOperand1,
                                             const class GGS_uint & inOperand2,
                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;
  public: GGS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftIR (const GGS_objectIR & in_mResult,
                            const GGS_objectIR & in_mSource,
                            const GGS_uint & in_mShiftAmount,
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
// Phase 1: @leftShiftIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_leftShiftIR_2E_weak (const class GGS_leftShiftIR & inSource) ;

  public: GGS_leftShiftIR_2E_weak & operator = (const class GGS_leftShiftIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_leftShiftIR_2E_weak init_nil (void) {
    GGS_leftShiftIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_leftShiftIR bang_leftShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_leftShiftIR unwrappedValue (void) const ;

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
  public: static GGS_leftShiftIR_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_leftShiftIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLogicalShiftRight'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLogicalShiftRight (class GGS_instructionListIR & ioObject,
                                              class GGS_objectIR & io_ioResult,
                                              const class GGS_uint constin_inShiftAmount,
                                              class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logicalRightShiftIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_logicalRightShiftIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_logicalRightShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logicalRightShiftIR (const class cPtr_logicalRightShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

  public: class GGS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logicalRightShiftIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                           const class GGS_objectIR & inOperand1,
                                                           const class GGS_uint & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logicalRightShiftIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logicalRightShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logicalRightShiftIR class
//--------------------------------------------------------------------------------------------------

class cPtr_logicalRightShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logicalRightShiftIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                     const class GGS_objectIR & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;
  public: GGS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_logicalRightShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logicalRightShiftIR (const GGS_objectIR & in_mResult,
                                    const GGS_objectIR & in_mSource,
                                    const GGS_uint & in_mShiftAmount,
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
// Phase 1: @logicalRightShiftIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_logicalRightShiftIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logicalRightShiftIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logicalRightShiftIR_2E_weak (const class GGS_logicalRightShiftIR & inSource) ;

  public: GGS_logicalRightShiftIR_2E_weak & operator = (const class GGS_logicalRightShiftIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logicalRightShiftIR_2E_weak init_nil (void) {
    GGS_logicalRightShiftIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logicalRightShiftIR bang_logicalRightShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_logicalRightShiftIR unwrappedValue (void) const ;

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
  public: static GGS_logicalRightShiftIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logicalRightShiftIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logicalRightShiftIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logicalRightShiftIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBooleanInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_literalBooleanInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalBooleanInExpressionAST (const class cPtr_literalBooleanInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalBooleanInExpressionAST init_21_ (const class GGS_bool & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBooleanInExpressionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBooleanInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalBooleanInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBooleanInExpressionAST_init_21_ (const class GGS_bool & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension method addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBooleanInExpressionAST (const GGS_bool & in_mValue,
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
// Phase 1: @literalBooleanInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBooleanInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalBooleanInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalBooleanInExpressionAST_2E_weak (const class GGS_literalBooleanInExpressionAST & inSource) ;

  public: GGS_literalBooleanInExpressionAST_2E_weak & operator = (const class GGS_literalBooleanInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalBooleanInExpressionAST_2E_weak init_nil (void) {
    GGS_literalBooleanInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalBooleanInExpressionAST bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalBooleanInExpressionAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_formalPassingModeString (const class GGS_procFormalArgumentPassingMode & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@procFormalArgumentPassingMode requiredActualPassingModeForSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_requiredActualPassingModeForSelector (const class GGS_procFormalArgumentPassingMode & inObject,
                                                                       const class GGS_string & constinArgument0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature typedString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_typedString (const class GGS_routineTypedSignature & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineTypedSignature mangledName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_mangledName (const class GGS_routineTypedSignature & inObject,
                                               const class GGS_string & constinArgument0,
                                               const class GGS_lstring & constinArgument1,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineFormalArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring extensionGetter_routineSignature (const class GGS_routineFormalArgumentListAST & inObject,
                                                    const class GGS_location & constinArgument0,
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
// Phase 1: @guardedCommandAST_2E_boolAndSync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_expressionAST mProperty_expression ;
  public: inline GGS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GGS_bool mProperty_warnsOnStaticExpression ;
  public: inline GGS_bool readProperty_warnsOnStaticExpression (void) const {
    return mProperty_warnsOnStaticExpression ;
  }

  public: GGS_location mProperty_endOfExpression ;
  public: inline GGS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

  public: GGS_lbool mProperty_usesSelf ;
  public: inline GGS_lbool readProperty_usesSelf (void) const {
    return mProperty_usesSelf ;
  }

  public: GGS_lstringlist mProperty_nameList ;
  public: inline GGS_lstringlist readProperty_nameList (void) const {
    return mProperty_nameList ;
  }

  public: GGS_effectiveArgumentListAST mProperty_effectiveParameterListAST ;
  public: inline GGS_effectiveArgumentListAST readProperty_effectiveParameterListAST (void) const {
    return mProperty_effectiveParameterListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setWarnsOnStaticExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_warnsOnStaticExpression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

  public: inline void setter_setUsesSelf (const GGS_lbool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usesSelf = inValue ;
  }

  public: inline void setter_setNameList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nameList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListAST (const GGS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (const GGS_bool & in_isExitCommand,
                                                const GGS_expressionAST & in_expression,
                                                const GGS_bool & in_warnsOnStaticExpression,
                                                const GGS_location & in_endOfExpression,
                                                const GGS_lbool & in_usesSelf,
                                                const GGS_lstringlist & in_nameList,
                                                const GGS_effectiveArgumentListAST & in_effectiveParameterListAST) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandAST_2E_boolAndSync (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandAST_2E_boolAndSync & operator = (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandAST_2E_boolAndSync init_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                        const class GGS_expressionAST & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_location & inOperand3,
                                                                                        const class GGS_lbool & inOperand4,
                                                                                        const class GGS_lstringlist & inOperand5,
                                                                                        const class GGS_effectiveArgumentListAST & inOperand6,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolAndSync extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandAST.boolAndSync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandAST_2E_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolAndSync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandAST_2E_boolAndSync_3F_ (const GGS_guardedCommandAST_2E_boolAndSync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandAST_2E_boolAndSync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandAST_2E_boolAndSync unwrappedValue (void) const {
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
  public: static GGS_guardedCommandAST_2E_boolAndSync_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandAST_2E_boolean struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolean : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_expressionAST mProperty_expression ;
  public: inline GGS_expressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GGS_location mProperty_endOfExpression ;
  public: inline GGS_location readProperty_endOfExpression (void) const {
    return mProperty_endOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolean (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandAST_2E_boolean (const GGS_bool & in_isExitCommand,
                                            const GGS_expressionAST & in_expression,
                                            const GGS_location & in_endOfExpression) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandAST_2E_boolean (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandAST_2E_boolean & operator = (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandAST_2E_boolean init_21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_expressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandAST_2E_boolean extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandAST.boolean? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandAST_2E_boolean_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandAST_2E_boolean mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandAST_2E_boolean_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandAST_2E_boolean_3F_ (const GGS_guardedCommandAST_2E_boolean & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandAST_2E_boolean_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandAST_2E_boolean unwrappedValue (void) const {
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
  public: static GGS_guardedCommandAST_2E_boolean_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandAST_2E_boolean_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncInstructionAST_2E_weak (const class GGS_syncInstructionAST & inSource) ;

  public: GGS_syncInstructionAST_2E_weak & operator = (const class GGS_syncInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncInstructionAST_2E_weak init_nil (void) {
    GGS_syncInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionAST bang_syncInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_syncInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum guardedCommandIR
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_guardedCommandIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_booleanGuard,
    enum_sync,
    enum_boolAndSync
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_booleanGuard (class GGS_bool & out_isExitCommand,
                                                                     class GGS_instructionListIR & out_instructionGenerationList,
                                                                     class GGS_string & out_boolGuardBoolLLVMName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_sync (class GGS_bool & out_isExitCommand,
                                                             class GGS_string & out_guardMangledName,
                                                             class GGS_instructionListIR & out_guardInstructionGenerationList,
                                                             class GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolAndSync (class GGS_bool & out_isExitCommand,
                                                                    class GGS_instructionListIR & out_boolExpInstructionGenerationList,
                                                                    class GGS_string & out_boolGuardBoolLLVMName,
                                                                    class GGS_string & out_guardMangledName,
                                                                    class GGS_instructionListIR & out_guardInstructionGenerationList,
                                                                    class GGS_procCallEffectiveParameterListIR & out_effectiveParameterListIR) const ;

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
  public: static GGS_guardedCommandIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIR class_func_boolAndSync (const class GGS_bool & inOperand0,
                                                                    const class GGS_instructionListIR & inOperand1,
                                                                    const class GGS_string & inOperand2,
                                                                    const class GGS_string & inOperand3,
                                                                    const class GGS_instructionListIR & inOperand4,
                                                                    const class GGS_procCallEffectiveParameterListIR & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_guardedCommandIR class_func_booleanGuard (const class GGS_bool & inOperand0,
                                                                     const class GGS_instructionListIR & inOperand1,
                                                                     const class GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_guardedCommandIR class_func_sync (const class GGS_bool & inOperand0,
                                                             const class GGS_string & inOperand1,
                                                             const class GGS_instructionListIR & inOperand2,
                                                             const class GGS_procCallEffectiveParameterListIR & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBoolAndSync (class GGS_bool & outArgument0,
                                                           class GGS_instructionListIR & outArgument1,
                                                           class GGS_string & outArgument2,
                                                           class GGS_string & outArgument3,
                                                           class GGS_instructionListIR & outArgument4,
                                                           class GGS_procCallEffectiveParameterListIR & outArgument5,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractBooleanGuard (class GGS_bool & outArgument0,
                                                            class GGS_instructionListIR & outArgument1,
                                                            class GGS_string & outArgument2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSync (class GGS_bool & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_instructionListIR & outArgument2,
                                                    class GGS_procCallEffectiveParameterListIR & outArgument3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_boolAndSync_3F_ getter_getBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_booleanGuard_3F_ getter_getBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR_2E_sync_3F_ getter_getSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBooleanGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSync (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_boolAndSync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_boolAndSync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_instructionListIR mProperty_boolExpInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_boolExpInstructionGenerationList (void) const {
    return mProperty_boolExpInstructionGenerationList ;
  }

  public: GGS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GGS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

  public: GGS_string mProperty_guardMangledName ;
  public: inline GGS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GGS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setBoolExpInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolExpInstructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (const GGS_bool & in_isExitCommand,
                                               const GGS_instructionListIR & in_boolExpInstructionGenerationList,
                                               const GGS_string & in_boolGuardBoolLLVMName,
                                               const GGS_string & in_guardMangledName,
                                               const GGS_instructionListIR & in_guardInstructionGenerationList,
                                               const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_boolAndSync (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_boolAndSync & operator = (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_boolAndSync init_21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                   const class GGS_instructionListIR & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_instructionListIR & inOperand4,
                                                                                   const class GGS_procCallEffectiveParameterListIR & inOperand5,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_boolAndSync extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.boolAndSync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_boolAndSync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_boolAndSync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_boolAndSync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_boolAndSync_3F_ (const GGS_guardedCommandIR_2E_boolAndSync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_boolAndSync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_boolAndSync unwrappedValue (void) const {
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
  public: static GGS_guardedCommandIR_2E_boolAndSync_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_boolAndSync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_booleanGuard struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_booleanGuard : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_instructionListIR mProperty_instructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_instructionGenerationList (void) const {
    return mProperty_instructionGenerationList ;
  }

  public: GGS_string mProperty_boolGuardBoolLLVMName ;
  public: inline GGS_string readProperty_boolGuardBoolLLVMName (void) const {
    return mProperty_boolGuardBoolLLVMName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionGenerationList = inValue ;
  }

  public: inline void setter_setBoolGuardBoolLLVMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_boolGuardBoolLLVMName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (const GGS_bool & in_isExitCommand,
                                                const GGS_instructionListIR & in_instructionGenerationList,
                                                const GGS_string & in_boolGuardBoolLLVMName) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_booleanGuard (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_booleanGuard & operator = (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_booleanGuard init_21__21__21_ (const class GGS_bool & inOperand0,
                                                                        const class GGS_instructionListIR & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_booleanGuard extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.booleanGuard? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_booleanGuard_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_booleanGuard mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_booleanGuard_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_booleanGuard_3F_ (const GGS_guardedCommandIR_2E_booleanGuard & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_booleanGuard_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_booleanGuard unwrappedValue (void) const {
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
  public: static GGS_guardedCommandIR_2E_booleanGuard_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_booleanGuard_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIR_2E_sync struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_sync : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isExitCommand ;
  public: inline GGS_bool readProperty_isExitCommand (void) const {
    return mProperty_isExitCommand ;
  }

  public: GGS_string mProperty_guardMangledName ;
  public: inline GGS_string readProperty_guardMangledName (void) const {
    return mProperty_guardMangledName ;
  }

  public: GGS_instructionListIR mProperty_guardInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_guardInstructionGenerationList (void) const {
    return mProperty_guardInstructionGenerationList ;
  }

  public: GGS_procCallEffectiveParameterListIR mProperty_effectiveParameterListIR ;
  public: inline GGS_procCallEffectiveParameterListIR readProperty_effectiveParameterListIR (void) const {
    return mProperty_effectiveParameterListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_sync (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsExitCommand (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isExitCommand = inValue ;
  }

  public: inline void setter_setGuardMangledName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardMangledName = inValue ;
  }

  public: inline void setter_setGuardInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_guardInstructionGenerationList = inValue ;
  }

  public: inline void setter_setEffectiveParameterListIR (const GGS_procCallEffectiveParameterListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_effectiveParameterListIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIR_2E_sync (const GGS_bool & in_isExitCommand,
                                        const GGS_string & in_guardMangledName,
                                        const GGS_instructionListIR & in_guardInstructionGenerationList,
                                        const GGS_procCallEffectiveParameterListIR & in_effectiveParameterListIR) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIR_2E_sync (const GGS_guardedCommandIR_2E_sync & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIR_2E_sync & operator = (const GGS_guardedCommandIR_2E_sync & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIR_2E_sync init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_instructionListIR & inOperand2,
                                                                    const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIR_2E_sync extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync ;

//--------------------------------------------------------------------------------------------------
// Phase 1: guardedCommandIR.sync? optional
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIR_2E_sync_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_guardedCommandIR_2E_sync mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIR_2E_sync_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_guardedCommandIR_2E_sync_3F_ (const GGS_guardedCommandIR_2E_sync & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_guardedCommandIR_2E_sync_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_guardedCommandIR_2E_sync unwrappedValue (void) const {
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
  public: static GGS_guardedCommandIR_2E_sync_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIR_2E_sync_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syncInstructionBranchListIR final {
  public: DownEnumerator_syncInstructionBranchListIR (const class GGS_syncInstructionBranchListIR & inList) ;

  public: ~ DownEnumerator_syncInstructionBranchListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syncInstructionBranchListIR (const DownEnumerator_syncInstructionBranchListIR &) = delete ;
  private: DownEnumerator_syncInstructionBranchListIR & operator = (const DownEnumerator_syncInstructionBranchListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syncInstructionBranchListIR final {
  public: UpEnumerator_syncInstructionBranchListIR (const class GGS_syncInstructionBranchListIR & inList)  ;

  public: ~ UpEnumerator_syncInstructionBranchListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListIR current_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syncInstructionBranchListIR (const UpEnumerator_syncInstructionBranchListIR &) = delete ;
  private: UpEnumerator_syncInstructionBranchListIR & operator = (const UpEnumerator_syncInstructionBranchListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syncInstructionBranchListIR list
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syncInstructionBranchListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_syncInstructionBranchListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_syncInstructionBranchListIR (void) = default ;

//--- Copy
  public: GGS_syncInstructionBranchListIR (const GGS_syncInstructionBranchListIR &) = default ;
  public: GGS_syncInstructionBranchListIR & operator = (const GGS_syncInstructionBranchListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_syncInstructionBranchListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syncInstructionBranchListIR subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syncInstructionBranchListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_guardedCommandIR & in_mGuardedCommand,
                                                 const class GGS_instructionListIR & in_mInstructionGenerationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListIR init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListIR class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0,
                                                                                 const class GGS_instructionListIR & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_syncInstructionBranchListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_guardedCommandIR & inOperand0,
                                                    const class GGS_instructionListIR & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_syncInstructionBranchListIR_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_syncInstructionBranchListIR add_operation (const GGS_syncInstructionBranchListIR & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_guardedCommandIR constinArgument0,
                                               class GGS_instructionListIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                      class GGS_instructionListIR constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                                 class GGS_instructionListIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                                                class GGS_instructionListIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                                      class GGS_instructionListIR & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationListAtIndex (class GGS_instructionListIR constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_guardedCommandIR & outArgument0,
                                              class GGS_instructionListIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_guardedCommandIR & outArgument0,
                                             class GGS_instructionListIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_mInstructionGenerationListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_syncInstructionBranchListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syncInstructionBranchListIR ;
  friend class DownEnumerator_syncInstructionBranchListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GGS_instructionListIR mProperty_mInstructionGenerationList ;
  public: inline GGS_instructionListIR readProperty_mInstructionGenerationList (void) const {
    return mProperty_mInstructionGenerationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syncInstructionBranchListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionGenerationList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGenerationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListIR_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand,
                                                      const GGS_instructionListIR & in_mInstructionGenerationList) ;

//--------------------------------- Copy constructor
  public: GGS_syncInstructionBranchListIR_2E_element (const GGS_syncInstructionBranchListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syncInstructionBranchListIR_2E_element & operator = (const GGS_syncInstructionBranchListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListIR_2E_element init_21__21_ (const class GGS_guardedCommandIR & inOperand0,
                                                                          const class GGS_instructionListIR & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListIR_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIRList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_guardedCommandIRList final {
  public: DownEnumerator_guardedCommandIRList (const class GGS_guardedCommandIRList & inList) ;

  public: ~ DownEnumerator_guardedCommandIRList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardedCommandIRList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_guardedCommandIRList (const DownEnumerator_guardedCommandIRList &) = delete ;
  private: DownEnumerator_guardedCommandIRList & operator = (const DownEnumerator_guardedCommandIRList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_guardedCommandIRList final {
  public: UpEnumerator_guardedCommandIRList (const class GGS_guardedCommandIRList & inList)  ;

  public: ~ UpEnumerator_guardedCommandIRList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandIR current_mGuardedCommand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_guardedCommandIRList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_guardedCommandIRList (const UpEnumerator_guardedCommandIRList &) = delete ;
  private: UpEnumerator_guardedCommandIRList & operator = (const UpEnumerator_guardedCommandIRList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @guardedCommandIRList list
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIRList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_guardedCommandIRList_2E_element> mArray ;

//--- Default constructor
  public: GGS_guardedCommandIRList (void) ;

//--- Destructor
  public: virtual ~ GGS_guardedCommandIRList (void) = default ;

//--- Copy
  public: GGS_guardedCommandIRList (const GGS_guardedCommandIRList &) = default ;
  public: GGS_guardedCommandIRList & operator = (const GGS_guardedCommandIRList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_guardedCommandIRList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_guardedCommandIRList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_guardedCommandIRList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_guardedCommandIR & in_mGuardedCommand
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIRList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIRList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_guardedCommandIRList class_func_listWithValue (const class GGS_guardedCommandIR & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_guardedCommandIRList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_guardedCommandIR & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_guardedCommandIRList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_guardedCommandIRList add_operation (const GGS_guardedCommandIRList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_guardedCommandIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_guardedCommandIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_guardedCommandIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_guardedCommandIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandIR constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_guardedCommandIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_guardedCommandIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIR getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_guardedCommandIRList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_guardedCommandIRList ;
  friend class DownEnumerator_guardedCommandIRList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @guardedCommandIRList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_guardedCommandIRList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandIR mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandIR readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_guardedCommandIRList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIR & in_mGuardedCommand) ;

//--------------------------------- Copy constructor
  public: GGS_guardedCommandIRList_2E_element (const GGS_guardedCommandIRList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_guardedCommandIRList_2E_element & operator = (const GGS_guardedCommandIRList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_guardedCommandIRList_2E_element init_21_ (const class GGS_guardedCommandIR & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_guardedCommandIRList_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardedCommandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_syncInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncInstructionIR (const class cPtr_syncInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mSelectInstructionLocation (void) const ;
  public: void setProperty_mSelectInstructionLocation (const GGS_location & inValue) ;

  public: class GGS_syncInstructionBranchListIR readProperty_mOnInstructionBranchListIR (void) const ;
  public: void setProperty_mOnInstructionBranchListIR (const GGS_syncInstructionBranchListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionIR init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_syncInstructionBranchListIR & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_syncInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncInstructionIR_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_syncInstructionBranchListIR & inOperand1,
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
  public: GGS_location mProperty_mSelectInstructionLocation ;
  public: GGS_syncInstructionBranchListIR mProperty_mOnInstructionBranchListIR ;


//--- Default constructor
  public: cPtr_syncInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncInstructionIR (const GGS_location & in_mSelectInstructionLocation,
                                  const GGS_syncInstructionBranchListIR & in_mOnInstructionBranchListIR,
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
// Phase 1: @syncInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncInstructionIR_2E_weak (const class GGS_syncInstructionIR & inSource) ;

  public: GGS_syncInstructionIR_2E_weak & operator = (const class GGS_syncInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncInstructionIR_2E_weak init_nil (void) {
    GGS_syncInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncInstructionIR bang_syncInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_syncInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncToolInstanceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncToolInstanceDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_syncToolInstanceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncToolInstanceDeclarationAST (const class cPtr_syncToolInstanceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncTypeName (void) const ;
  public: void setProperty_mSyncTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mSyncInstanceName (void) const ;
  public: void setProperty_mSyncInstanceName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncToolInstanceDeclarationAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_expressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncToolInstanceDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncToolInstanceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncToolInstanceDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syncToolInstanceDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncToolInstanceDeclarationAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_expressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncTypeName ;
  public: GGS_lstring mProperty_mSyncInstanceName ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_syncToolInstanceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncToolInstanceDeclarationAST (const GGS_lstring & in_mSyncTypeName,
                                               const GGS_lstring & in_mSyncInstanceName,
                                               const GGS_expressionAST & in_mSourceExpression,
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
// Phase 1: @syncToolInstanceDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncToolInstanceDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

  public: GGS_syncToolInstanceDeclarationAST_2E_weak & operator = (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncToolInstanceDeclarationAST_2E_weak init_nil (void) {
    GGS_syncToolInstanceDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncToolInstanceDeclarationAST bang_syncToolInstanceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncToolInstanceDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_syncToolInstanceDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncToolInstanceDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncToolInstanceDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_objectIR mProperty_initialValue ;
  public: inline GGS_objectIR readProperty_initialValue (void) const {
    return mProperty_initialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalSyncInstanceMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_omnibusType & in_type,
                                                const GGS_objectIR & in_initialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalSyncInstanceMap_2E_element (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalSyncInstanceMap_2E_element & operator = (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_omnibusType & inOperand1,
                                                                        const class GGS_objectIR & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalSyncInstanceMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalSyncInstanceMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalSyncInstanceMap_2E_element_3F_ (const GGS_globalSyncInstanceMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalSyncInstanceMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalSyncInstanceMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_globalSyncInstanceMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedSyncInstance reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedSyncInstance (const class cPtr_decoratedSyncInstance * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncInstanceName (void) const ;
  public: void setProperty_mSyncInstanceName (const GGS_lstring & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionGeneratedCode (void) const ;
  public: void setProperty_mExpressionGeneratedCode (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedSyncInstance init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_objectIR & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedSyncInstance extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedSyncInstance : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedSyncInstance_init_21__21_ (const class GGS_lstring & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncInstanceName ;
  public: GGS_objectIR mProperty_mExpressionGeneratedCode ;


//--- Default constructor
  public: cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedSyncInstance (const GGS_lstring & in_mSyncInstanceName,
                                      const GGS_objectIR & in_mExpressionGeneratedCode,
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
// Phase 1: @decoratedSyncInstance_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedSyncInstance_2E_weak (const class GGS_decoratedSyncInstance & inSource) ;

  public: GGS_decoratedSyncInstance_2E_weak & operator = (const class GGS_decoratedSyncInstance & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedSyncInstance_2E_weak init_nil (void) {
    GGS_decoratedSyncInstance_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedSyncInstance bang_decoratedSyncInstance_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedSyncInstance unwrappedValue (void) const ;

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
  public: static GGS_decoratedSyncInstance_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedSyncInstance_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_objectIR mProperty_mInitialValue ;
  public: inline GGS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_objectIR & in_mInitialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalSyncInstanceMapIR_2E_element & operator = (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMapIR_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMapIR_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalSyncInstanceMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalSyncInstanceMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalSyncInstanceMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mode mProperty_key ;
  public: inline GGS_mode readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_mode & in_key,
                                              const GGS_string & in_llvmName) ;

//--------------------------------- Copy constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineLLVMNameDict_2E_element & operator = (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict_2E_element init_21__21_ (const class GGS_mode & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineLLVMNameDict.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineLLVMNameDict_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineLLVMNameDict_2E_element_3F_ (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineLLVMNameDict_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineLLVMNameDict_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineLLVMNameDict_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineLLVMNameDict final {
  public: DownEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_routineLLVMNameDict (const DownEnumerator_routineLLVMNameDict &) = delete ;
  private: DownEnumerator_routineLLVMNameDict & operator = (const DownEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineLLVMNameDict final {
  public: UpEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_routineLLVMNameDict (const UpEnumerator_routineLLVMNameDict &) = delete ;
  private: UpEnumerator_routineLLVMNameDict & operator = (const UpEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dict
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict final : public GenericDictionary <GGS_mode, GGS_routineLLVMNameDict_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineLLVMNameDict (void) = default ;

//--------------------------------- Build
  protected: static GGS_routineLLVMNameDict builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_mode & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_mode constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_mode constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setLlvmNameForKey (class GGS_string constinArgument0,
                                                          class GGS_mode constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_mode constinArgument0,
                                                  class GGS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_mode & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_llvmNameForKey (const class GGS_mode & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_routineLLVMNameDict_2E_element_3F_ readSubscript__3F_ (const class GGS_mode & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineLLVMNameDict ;
  friend class DownEnumerator_routineLLVMNameDict ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineMapForContext_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsPublic ;
  public: inline GGS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GGS_routineTypedSignature mProperty_mSignature ;
  public: inline GGS_routineTypedSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const {
    return mProperty_mReturnTypeProxy ;
  }

  public: GGS_routineLLVMNameDict mProperty_mModeDictionary ;
  public: inline GGS_routineLLVMNameDict readProperty_mModeDictionary (void) const {
    return mProperty_mModeDictionary ;
  }

  public: GGS_bool mProperty_mIsExported ;
  public: inline GGS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GGS_mode mProperty_mFunctionMode ;
  public: inline GGS_mode readProperty_mFunctionMode (void) const {
    return mProperty_mFunctionMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineMapForContext_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPublic (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeProxy = inValue ;
  }

  public: inline void setter_setMModeDictionary (const GGS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mModeDictionary = inValue ;
  }

  public: inline void setter_setMIsExported (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFunctionMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineMapForContext_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_bool & in_mIsPublic,
                                               const GGS_routineTypedSignature & in_mSignature,
                                               const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                               const GGS_routineLLVMNameDict & in_mModeDictionary,
                                               const GGS_bool & in_mIsExported,
                                               const GGS_mode & in_mFunctionMode) ;

//--------------------------------- Copy constructor
  public: GGS_routineMapForContext_2E_element (const GGS_routineMapForContext_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineMapForContext_2E_element & operator = (const GGS_routineMapForContext_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineMapForContext_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_routineTypedSignature & inOperand2,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                       const class GGS_routineLLVMNameDict & inOperand4,
                                                                                       const class GGS_bool & inOperand5,
                                                                                       const class GGS_mode & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineMapForContext_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineMapForContext.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineMapForContext_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineMapForContext_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineMapForContext_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineMapForContext_2E_element_3F_ (const GGS_routineMapForContext_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineMapForContext_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineMapForContext_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineMapForContext_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMapForContext_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_objectIR mProperty_mValue ;
  public: inline GGS_objectIR readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalConstantMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_objectIR & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalConstantMap_2E_element (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalConstantMap_2E_element & operator = (const GGS_globalConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_objectIR & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalConstantMap_2E_element_3F_ (const GGS_globalConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_globalConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantMap final {

  public: DownEnumerator_constantMap (const class GGS_constantMap & inMap) ;

  public: ~ DownEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;

  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantMap (const DownEnumerator_constantMap &) = delete ;
  private: DownEnumerator_constantMap & operator = (const DownEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantMap final {
  public: UpEnumerator_constantMap (const class GGS_constantMap & inMap)  ;

  public: ~ UpEnumerator_constantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
  public: class GGS_constantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantMap (const UpEnumerator_constantMap &) = delete ;
  private: UpEnumerator_constantMap & operator = (const UpEnumerator_constantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_constantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_constantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_constantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_constantMap (void) ;

//--- Handle copy
  public: GGS_constantMap (const GGS_constantMap & inSource) ;
  public: GGS_constantMap & operator = (const GGS_constantMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_constantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap class_func_mapWithMapToOverride (const class GGS_constantMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_bigint constinArgument1,
                                                  class GGS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClassTypeNameForKey (class GGS_lstring constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_bigint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_bigint & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mClassTypeNameForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantMap ;
  friend class DownEnumerator_constantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_constantMap mProperty_mConstantMap ;
  public: inline GGS_constantMap readProperty_mConstantMap (void) const {
    return mProperty_mConstantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantMap (const GGS_constantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeConstantMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_constantMap & in_mConstantMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeConstantMap_2E_element (const GGS_typeConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeConstantMap_2E_element & operator = (const GGS_typeConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstantMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_constantMap & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstantMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeConstantMap_2E_element_3F_ (const GGS_typeConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typeConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeConstructorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_constructorMap mProperty_mConstructorMap ;
  public: inline GGS_constructorMap readProperty_mConstructorMap (void) const {
    return mProperty_mConstructorMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeConstructorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstructorMap (const GGS_constructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeConstructorMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_constructorMap & in_mConstructorMap) ;

//--------------------------------- Copy constructor
  public: GGS_typeConstructorMap_2E_element (const GGS_typeConstructorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeConstructorMap_2E_element & operator = (const GGS_typeConstructorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeConstructorMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_constructorMap & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeConstructorMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeConstructorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeConstructorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeConstructorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeConstructorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeConstructorMap_2E_element_3F_ (const GGS_typeConstructorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeConstructorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeConstructorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typeConstructorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeConstructorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertySetterMap final {

  public: DownEnumerator_propertySetterMap (const class GGS_propertySetterMap & inMap) ;

  public: ~ DownEnumerator_propertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;

  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;

  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertySetterMap (const DownEnumerator_propertySetterMap &) = delete ;
  private: DownEnumerator_propertySetterMap & operator = (const DownEnumerator_propertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertySetterMap final {
  public: UpEnumerator_propertySetterMap (const class GGS_propertySetterMap & inMap)  ;

  public: ~ UpEnumerator_propertySetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
  public: class GGS_propertySetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertySetterMap (const UpEnumerator_propertySetterMap &) = delete ;
  private: UpEnumerator_propertySetterMap & operator = (const UpEnumerator_propertySetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertySetterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertySetterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertySetterMap (void) ;

//--- Handle copy
  public: GGS_propertySetterMap (const GGS_propertySetterMap & inSource) ;
  public: GGS_propertySetterMap & operator = (const GGS_propertySetterMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertySetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertySetterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertySetterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertySetterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterMap class_func_mapWithMapToOverride (const class GGS_propertySetterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility constinArgument1,
                                                  class GGS_propertySetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GGS_propertySetterKind constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GGS_propertyVisibility constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility & outArgument1,
                                                  class GGS_propertySetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertySetterKind getter_mAccessForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyVisibility getter_mVisibilityForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertySetterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertySetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertySetterMap ;
  friend class DownEnumerator_propertySetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertySetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertySetterMap mProperty_mSetterMap ;
  public: inline GGS_propertySetterMap readProperty_mSetterMap (void) const {
    return mProperty_mSetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typePropertySetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSetterMap (const GGS_propertySetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typePropertySetterMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_propertySetterMap & in_mSetterMap) ;

//--------------------------------- Copy constructor
  public: GGS_typePropertySetterMap_2E_element (const GGS_typePropertySetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typePropertySetterMap_2E_element & operator = (const GGS_typePropertySetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertySetterMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertySetterMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertySetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typePropertySetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typePropertySetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typePropertySetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typePropertySetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typePropertySetterMap_2E_element_3F_ (const GGS_typePropertySetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typePropertySetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typePropertySetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typePropertySetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyGetterMap final {

  public: DownEnumerator_propertyGetterMap (const class GGS_propertyGetterMap & inMap) ;

  public: ~ DownEnumerator_propertyGetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;

  public: class GGS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;

  public: class GGS_propertyGetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_propertyGetterMap (const DownEnumerator_propertyGetterMap &) = delete ;
  private: DownEnumerator_propertyGetterMap & operator = (const DownEnumerator_propertyGetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyGetterMap final {
  public: UpEnumerator_propertyGetterMap (const class GGS_propertyGetterMap & inMap)  ;

  public: ~ UpEnumerator_propertyGetterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_propertyVisibility current_mVisibility (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;
  public: class GGS_propertyGetterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_propertyGetterMap (const UpEnumerator_propertyGetterMap &) = delete ;
  private: UpEnumerator_propertyGetterMap & operator = (const UpEnumerator_propertyGetterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_propertyGetterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_propertyGetterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_propertyGetterMap (void) ;

//--- Handle copy
  public: GGS_propertyGetterMap (const GGS_propertyGetterMap & inSource) ;
  public: GGS_propertyGetterMap & operator = (const GGS_propertyGetterMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_propertyGetterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyGetterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterMap class_func_mapWithMapToOverride (const class GGS_propertyGetterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility constinArgument1,
                                                  class GGS_propertyGetterKind constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_replaceKey (class GGS_propertyGetterMap_2E_element constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GGS_propertyGetterKind constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVisibilityForKey (class GGS_propertyVisibility constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_propertyVisibility & outArgument1,
                                                  class GGS_propertyGetterKind & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterKind getter_mAccessForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyVisibility getter_mVisibilityForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_propertyGetterMap ;
  friend class DownEnumerator_propertyGetterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typePropertyGetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_typePropertyGetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyGetterMap mProperty_mGetterMap ;
  public: inline GGS_propertyGetterMap readProperty_mGetterMap (void) const {
    return mProperty_mGetterMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typePropertyGetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGetterMap (const GGS_propertyGetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typePropertyGetterMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_propertyGetterMap & in_mGetterMap) ;

//--------------------------------- Copy constructor
  public: GGS_typePropertyGetterMap_2E_element (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typePropertyGetterMap_2E_element & operator = (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typePropertyGetterMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertyGetterMap & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typePropertyGetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typePropertyGetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_typePropertyGetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typePropertyGetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typePropertyGetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typePropertyGetterMap_2E_element_3F_ (const GGS_typePropertyGetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typePropertyGetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typePropertyGetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_typePropertyGetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationDecorationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declarationDecorationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractDecoratedDeclaration mProperty_mDeclaration ;
  public: inline GGS_abstractDecoratedDeclaration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationDecorationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GGS_abstractDecoratedDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationDecorationList_2E_element (const GGS_abstractDecoratedDeclaration & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_declarationDecorationList_2E_element (const GGS_declarationDecorationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declarationDecorationList_2E_element & operator = (const GGS_declarationDecorationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationDecorationList_2E_element init_21_ (const class GGS_abstractDecoratedDeclaration & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationDecorationList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bigint mProperty_mIndex ;
  public: inline GGS_bigint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_lstring mProperty_mClassTypeName ;
  public: inline GGS_lstring readProperty_mClassTypeName (void) const {
    return mProperty_mClassTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMClassTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassTypeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_bigint & in_mIndex,
                                      const GGS_lstring & in_mClassTypeName) ;

//--------------------------------- Copy constructor
  public: GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantMap_2E_element & operator = (const GGS_constantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_bigint & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_constantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorSignature list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_constructorSignature final {
  public: DownEnumerator_constructorSignature (const class GGS_constructorSignature & inList) ;

  public: ~ DownEnumerator_constructorSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constructorSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constructorSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constructorSignature (const DownEnumerator_constructorSignature &) = delete ;
  private: DownEnumerator_constructorSignature & operator = (const DownEnumerator_constructorSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constructorSignature final {
  public: UpEnumerator_constructorSignature (const class GGS_constructorSignature & inList)  ;

  public: ~ UpEnumerator_constructorSignature (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constructorSignature_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constructorSignature_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constructorSignature (const UpEnumerator_constructorSignature &) = delete ;
  private: UpEnumerator_constructorSignature & operator = (const UpEnumerator_constructorSignature &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @constructorSignature list
//--------------------------------------------------------------------------------------------------

class GGS_constructorSignature : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_constructorSignature_2E_element> mArray ;

//--- Default constructor
  public: GGS_constructorSignature (void) ;

//--- Destructor
  public: virtual ~ GGS_constructorSignature (void) = default ;

//--- Copy
  public: GGS_constructorSignature (const GGS_constructorSignature &) = default ;
  public: GGS_constructorSignature & operator = (const GGS_constructorSignature &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_constructorSignature_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_constructorSignature subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_constructorSignature (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mSelector,
                                                 const class GGS_omnibusType & in_mType,
                                                 const class GGS_uint & in_mFieldIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorSignature init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorSignature extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorSignature class_func_listWithValue (const class GGS_string & inOperand0,
                                                                          const class GGS_omnibusType & inOperand1,
                                                                          const class GGS_uint & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_constructorSignature inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_uint & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_constructorSignature_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constructorSignature add_operation (const GGS_constructorSignature & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldIndexAtIndex (class GGS_uint constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFieldIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorSignature getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorSignature getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorSignature getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constructorSignature ;
  friend class DownEnumerator_constructorSignature ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorSignature ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constructorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_constructorSignature mProperty_mSignature ;
  public: inline GGS_constructorSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GGS_constructorValue mProperty_mInitValue ;
  public: inline GGS_constructorValue readProperty_mInitValue (void) const {
    return mProperty_mInitValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constructorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignature (const GGS_constructorSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMInitValue (const GGS_constructorValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_constructorSignature & in_mSignature,
                                         const GGS_constructorValue & in_mInitValue) ;

//--------------------------------- Copy constructor
  public: GGS_constructorMap_2E_element (const GGS_constructorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constructorMap_2E_element & operator = (const GGS_constructorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_constructorSignature & inOperand1,
                                                                 const class GGS_constructorValue & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constructorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constructorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constructorMap_2E_element_3F_ (const GGS_constructorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constructorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constructorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_constructorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorValue_2E_arrayValue struct
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_arrayValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_elementType ;
  public: inline GGS_omnibusType readProperty_elementType (void) const {
    return mProperty_elementType ;
  }

  public: GGS_uint mProperty_size ;
  public: inline GGS_uint readProperty_size (void) const {
    return mProperty_size ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_arrayValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setElementType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementType = inValue ;
  }

  public: inline void setter_setSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_size = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_arrayValue (const GGS_omnibusType & in_elementType,
                                              const GGS_uint & in_size) ;

//--------------------------------- Copy constructor
  public: GGS_constructorValue_2E_arrayValue (const GGS_constructorValue_2E_arrayValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constructorValue_2E_arrayValue & operator = (const GGS_constructorValue_2E_arrayValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorValue_2E_arrayValue init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_uint & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorValue_2E_arrayValue extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constructorValue.arrayValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_arrayValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_arrayValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_arrayValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constructorValue_2E_arrayValue_3F_ (const GGS_constructorValue_2E_arrayValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constructorValue_2E_arrayValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constructorValue_2E_arrayValue unwrappedValue (void) const {
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
  public: static GGS_constructorValue_2E_arrayValue_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorValue_2E_simple struct
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_simple : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_value ;
  public: inline GGS_bigint readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_simple (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_simple (const GGS_bigint & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_constructorValue_2E_simple (const GGS_constructorValue_2E_simple & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constructorValue_2E_simple & operator = (const GGS_constructorValue_2E_simple & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorValue_2E_simple init_21_ (const class GGS_bigint & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorValue_2E_simple extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constructorValue.simple? optional
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_simple_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_simple mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_simple_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constructorValue_2E_simple_3F_ (const GGS_constructorValue_2E_simple & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constructorValue_2E_simple_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constructorValue_2E_simple unwrappedValue (void) const {
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
  public: static GGS_constructorValue_2E_simple_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorValue_2E_structure struct
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_structure : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_sortedOperandIRList mProperty_sortedOperandList ;
  public: inline GGS_sortedOperandIRList readProperty_sortedOperandList (void) const {
    return mProperty_sortedOperandList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_structure (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSortedOperandList (const GGS_sortedOperandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_sortedOperandList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_structure (const GGS_sortedOperandIRList & in_sortedOperandList) ;

//--------------------------------- Copy constructor
  public: GGS_constructorValue_2E_structure (const GGS_constructorValue_2E_structure & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constructorValue_2E_structure & operator = (const GGS_constructorValue_2E_structure & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorValue_2E_structure init_21_ (const class GGS_sortedOperandIRList & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorValue_2E_structure extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constructorValue.structure? optional
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_structure_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_structure mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_structure_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constructorValue_2E_structure_3F_ (const GGS_constructorValue_2E_structure & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constructorValue_2E_structure_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constructorValue_2E_structure unwrappedValue (void) const {
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
  public: static GGS_constructorValue_2E_structure_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorSignature_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constructorSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mSelector ;
  public: inline GGS_string readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_uint mProperty_mFieldIndex ;
  public: inline GGS_uint readProperty_mFieldIndex (void) const {
    return mProperty_mFieldIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constructorSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMFieldIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorSignature_2E_element (const GGS_string & in_mSelector,
                                               const GGS_omnibusType & in_mType,
                                               const GGS_uint & in_mFieldIndex) ;

//--------------------------------- Copy constructor
  public: GGS_constructorSignature_2E_element (const GGS_constructorSignature_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constructorSignature_2E_element & operator = (const GGS_constructorSignature_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorSignature_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                       const class GGS_omnibusType & inOperand1,
                                                                       const class GGS_uint & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorSignature_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum propertyGetterKind
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertyGetterKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_storedProperty,
    enum_computedProperty,
    enum_constantProperty
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_storedProperty (class GGS_omnibusType & out_type,
                                                                       class GGS_uint & out_index) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_computedProperty (class GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                         class GGS_routineLLVMNameDict & out_modeDictionary) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_constantProperty (class GGS_objectIR & out_value) const ;

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
  public: static GGS_propertyGetterKind extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterKind class_func_computedProperty (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_routineLLVMNameDict & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyGetterKind class_func_constantProperty (const class GGS_objectIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertyGetterKind class_func_storedProperty (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractComputedProperty (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                class GGS_routineLLVMNameDict & outArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractConstantProperty (class GGS_objectIR & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractStoredProperty (class GGS_omnibusType & outArgument0,
                                                              class GGS_uint & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterKind_2E_computedProperty_3F_ getter_getComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterKind_2E_constantProperty_3F_ getter_getConstantProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyGetterKind_2E_storedProperty_3F_ getter_getStoredProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyVisibility mProperty_mVisibility ;
  public: inline GGS_propertyVisibility readProperty_mVisibility (void) const {
    return mProperty_mVisibility ;
  }

  public: GGS_propertyGetterKind mProperty_mAccess ;
  public: inline GGS_propertyGetterKind readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVisibility (const GGS_propertyVisibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVisibility = inValue ;
  }

  public: inline void setter_setMAccess (const GGS_propertyGetterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_propertyVisibility & in_mVisibility,
                                            const GGS_propertyGetterKind & in_mAccess) ;

//--------------------------------- Copy constructor
  public: GGS_propertyGetterMap_2E_element (const GGS_propertyGetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyGetterMap_2E_element & operator = (const GGS_propertyGetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertyVisibility & inOperand1,
                                                                    const class GGS_propertyGetterKind & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyGetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyGetterMap_2E_element_3F_ (const GGS_propertyGetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyGetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyGetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_propertyGetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterKind_2E_computedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_computedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_typeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeProxy (void) const {
    return mProperty_typeProxy ;
  }

  public: GGS_routineLLVMNameDict mProperty_modeDictionary ;
  public: inline GGS_routineLLVMNameDict readProperty_modeDictionary (void) const {
    return mProperty_modeDictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_computedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeProxy = inValue ;
  }

  public: inline void setter_setModeDictionary (const GGS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_modeDictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                      const GGS_routineLLVMNameDict & in_modeDictionary) ;

//--------------------------------- Copy constructor
  public: GGS_propertyGetterKind_2E_computedProperty (const GGS_propertyGetterKind_2E_computedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyGetterKind_2E_computedProperty & operator = (const GGS_propertyGetterKind_2E_computedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterKind_2E_computedProperty init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GGS_routineLLVMNameDict & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterKind_2E_computedProperty extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyGetterKind.computedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_computedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_computedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_computedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyGetterKind_2E_computedProperty_3F_ (const GGS_propertyGetterKind_2E_computedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyGetterKind_2E_computedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyGetterKind_2E_computedProperty unwrappedValue (void) const {
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
  public: static GGS_propertyGetterKind_2E_computedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterKind_2E_constantProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_constantProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_value ;
  public: inline GGS_objectIR readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_constantProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_constantProperty (const GGS_objectIR & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_propertyGetterKind_2E_constantProperty (const GGS_propertyGetterKind_2E_constantProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyGetterKind_2E_constantProperty & operator = (const GGS_propertyGetterKind_2E_constantProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterKind_2E_constantProperty init_21_ (const class GGS_objectIR & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterKind_2E_constantProperty extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyGetterKind.constantProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_constantProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_constantProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_constantProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyGetterKind_2E_constantProperty_3F_ (const GGS_propertyGetterKind_2E_constantProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyGetterKind_2E_constantProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyGetterKind_2E_constantProperty unwrappedValue (void) const {
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
  public: static GGS_propertyGetterKind_2E_constantProperty_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyGetterKind_2E_storedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_storedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_uint mProperty_index ;
  public: inline GGS_uint readProperty_index (void) const {
    return mProperty_index ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_storedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_storedProperty (const GGS_omnibusType & in_type,
                                                    const GGS_uint & in_index) ;

//--------------------------------- Copy constructor
  public: GGS_propertyGetterKind_2E_storedProperty (const GGS_propertyGetterKind_2E_storedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyGetterKind_2E_storedProperty & operator = (const GGS_propertyGetterKind_2E_storedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyGetterKind_2E_storedProperty init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                        const class GGS_uint & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyGetterKind_2E_storedProperty extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyGetterKind.storedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_storedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_storedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_storedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyGetterKind_2E_storedProperty_3F_ (const GGS_propertyGetterKind_2E_storedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyGetterKind_2E_storedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyGetterKind_2E_storedProperty unwrappedValue (void) const {
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
  public: static GGS_propertyGetterKind_2E_storedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum propertySetterKind
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_propertySetterKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_storedProperty,
    enum_computedProperty
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_storedProperty (class GGS_omnibusType & out_type,
                                                                       class GGS_uint & out_index) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_computedProperty (class GGS_unifiedTypeMapEntry & out_typeProxy,
                                                                         class GGS_routineLLVMNameDict & out_getterModeDictionary,
                                                                         class GGS_routineLLVMNameDict & out_setterModeDictionary) const ;

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
  public: static GGS_propertySetterKind extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterKind class_func_computedProperty (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GGS_routineLLVMNameDict & inOperand1,
                                                                           const class GGS_routineLLVMNameDict & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_propertySetterKind class_func_storedProperty (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_uint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractComputedProperty (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                class GGS_routineLLVMNameDict & outArgument1,
                                                                class GGS_routineLLVMNameDict & outArgument2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractStoredProperty (class GGS_omnibusType & outArgument0,
                                                              class GGS_uint & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_propertySetterKind_2E_computedProperty_3F_ getter_getComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertySetterKind_2E_storedProperty_3F_ getter_getStoredProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyVisibility mProperty_mVisibility ;
  public: inline GGS_propertyVisibility readProperty_mVisibility (void) const {
    return mProperty_mVisibility ;
  }

  public: GGS_propertySetterKind mProperty_mAccess ;
  public: inline GGS_propertySetterKind readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertySetterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVisibility (const GGS_propertyVisibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVisibility = inValue ;
  }

  public: inline void setter_setMAccess (const GGS_propertySetterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_propertyVisibility & in_mVisibility,
                                            const GGS_propertySetterKind & in_mAccess) ;

//--------------------------------- Copy constructor
  public: GGS_propertySetterMap_2E_element (const GGS_propertySetterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertySetterMap_2E_element & operator = (const GGS_propertySetterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertySetterMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_propertyVisibility & inOperand1,
                                                                    const class GGS_propertySetterKind & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertySetterMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertySetterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertySetterMap_2E_element_3F_ (const GGS_propertySetterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertySetterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertySetterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_propertySetterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterKind_2E_computedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_computedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_typeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_typeProxy (void) const {
    return mProperty_typeProxy ;
  }

  public: GGS_routineLLVMNameDict mProperty_getterModeDictionary ;
  public: inline GGS_routineLLVMNameDict readProperty_getterModeDictionary (void) const {
    return mProperty_getterModeDictionary ;
  }

  public: GGS_routineLLVMNameDict mProperty_setterModeDictionary ;
  public: inline GGS_routineLLVMNameDict readProperty_setterModeDictionary (void) const {
    return mProperty_setterModeDictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_computedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeProxy = inValue ;
  }

  public: inline void setter_setGetterModeDictionary (const GGS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_getterModeDictionary = inValue ;
  }

  public: inline void setter_setSetterModeDictionary (const GGS_routineLLVMNameDict & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_setterModeDictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                      const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                      const GGS_routineLLVMNameDict & in_setterModeDictionary) ;

//--------------------------------- Copy constructor
  public: GGS_propertySetterKind_2E_computedProperty (const GGS_propertySetterKind_2E_computedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertySetterKind_2E_computedProperty & operator = (const GGS_propertySetterKind_2E_computedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertySetterKind_2E_computedProperty init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GGS_routineLLVMNameDict & inOperand1,
                                                                              const class GGS_routineLLVMNameDict & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertySetterKind_2E_computedProperty extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertySetterKind.computedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_computedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterKind_2E_computedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_computedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertySetterKind_2E_computedProperty_3F_ (const GGS_propertySetterKind_2E_computedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertySetterKind_2E_computedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertySetterKind_2E_computedProperty unwrappedValue (void) const {
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
  public: static GGS_propertySetterKind_2E_computedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertySetterKind_2E_storedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_storedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_uint mProperty_index ;
  public: inline GGS_uint readProperty_index (void) const {
    return mProperty_index ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_storedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterKind_2E_storedProperty (const GGS_omnibusType & in_type,
                                                    const GGS_uint & in_index) ;

//--------------------------------- Copy constructor
  public: GGS_propertySetterKind_2E_storedProperty (const GGS_propertySetterKind_2E_storedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertySetterKind_2E_storedProperty & operator = (const GGS_propertySetterKind_2E_storedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertySetterKind_2E_storedProperty init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                        const class GGS_uint & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertySetterKind_2E_storedProperty extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertySetterKind.storedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_storedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterKind_2E_storedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_storedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertySetterKind_2E_storedProperty_3F_ (const GGS_propertySetterKind_2E_storedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertySetterKind_2E_storedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertySetterKind_2E_storedProperty unwrappedValue (void) const {
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
  public: static GGS_propertySetterKind_2E_storedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticStringMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticStringMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticStringMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticStringMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mIndex) ;

//--------------------------------- Copy constructor
  public: GGS_staticStringMap_2E_element (const GGS_staticStringMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticStringMap_2E_element & operator = (const GGS_staticStringMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticStringMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticStringMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticStringMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticStringMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticStringMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticStringMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticStringMap_2E_element_3F_ (const GGS_staticStringMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticStringMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticStringMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticStringMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalStructuredConstantList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalStructuredConstantList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_operandIRList mProperty_mOperandIRList ;
  public: inline GGS_operandIRList readProperty_mOperandIRList (void) const {
    return mProperty_mOperandIRList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalStructuredConstantList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMOperandIRList (const GGS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandIRList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalStructuredConstantList_2E_element (const GGS_omnibusType & in_mType,
                                                       const GGS_operandIRList & in_mOperandIRList) ;

//--------------------------------- Copy constructor
  public: GGS_globalStructuredConstantList_2E_element (const GGS_globalStructuredConstantList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalStructuredConstantList_2E_element & operator = (const GGS_globalStructuredConstantList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalStructuredConstantList_2E_element init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                           const class GGS_operandIRList & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalStructuredConstantList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (class cPtr_abstractDeclarationAST * inObject,
                                         class GGS_semanticContext & io_ioContext,
                                         class GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         class GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         class GGS_routineListIR & io_ioRoutineListIR,
                                         class GGS_staticListInitializationMap & io_ioStaticListValueMap,
                                         class GGS_staticEntityMap & io_ioStaticEntityMap,
                                         class GGS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         class GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractRoutineIR mProperty_mRoutine ;
  public: inline GGS_abstractRoutineIR readProperty_mRoutine (void) const {
    return mProperty_mRoutine ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutine (const GGS_abstractRoutineIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutine = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineListIR_2E_element (const GGS_abstractRoutineIR & in_mRoutine) ;

//--------------------------------- Copy constructor
  public: GGS_routineListIR_2E_element (const GGS_routineListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineListIR_2E_element & operator = (const GGS_routineListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineListIR_2E_element init_21_ (const class GGS_abstractRoutineIR & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineListIR_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineListIR llvmRoutineGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmRoutineGeneration (const class GGS_routineListIR inObject,
                                            class GGS_string & io_ioLLVMcode,
                                            const class GGS_generationContext constin_inGenerationContext,
                                            class GGS_generationAdds & io_ioGenerationAdds,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (class cPtr_abstractRoutineIR * inObject,
                                             class GGS_string & io_ioLLVMcode,
                                             const class GGS_generationContext constin_inGenerationContext,
                                             class GGS_generationAdds & io_ioGenerationAdds,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR generateRelease'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_generateRelease (class GGS_instructionListIR & ioObject,
                                      const class GGS_omnibusType constin_inType,
                                      const class GGS_lstring constin_in_5F_omnibusName,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @releaseIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_releaseIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_releaseIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_releaseIR (const class cPtr_releaseIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_lstring readProperty_mOmnibusName (void) const ;
  public: void setProperty_mOmnibusName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_releaseIR init_21__21_ (const class GGS_omnibusType & inOperand0,
                                             const class GGS_lstring & inOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_releaseIR extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_releaseIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

class cPtr_releaseIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void releaseIR_init_21__21_ (const class GGS_omnibusType & inOperand0,
                                       const class GGS_lstring & inOperand1,
                                       Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_lstring mProperty_mOmnibusName ;


//--- Default constructor
  public: cPtr_releaseIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_releaseIR (const GGS_omnibusType & in_mType,
                          const GGS_lstring & in_mOmnibusName,
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
// Phase 1: @releaseIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_releaseIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_releaseIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_releaseIR_2E_weak (const class GGS_releaseIR & inSource) ;

  public: GGS_releaseIR_2E_weak & operator = (const class GGS_releaseIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_releaseIR_2E_weak init_nil (void) {
    GGS_releaseIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_releaseIR bang_releaseIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_releaseIR unwrappedValue (void) const ;

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
  public: static GGS_releaseIR_2E_weak extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_releaseIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_releaseIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_releaseIR_2E_weak ;

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
//Extension getter '@mode routineLLVMDictionaryForFunction' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GGS_mode & inObject,
                                                                                const class GGS_string & constinArgument0,
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
// Phase 1: @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_bool readProperty_mPublicFunction (void) const ;
  public: void setProperty_mPublicFunction (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mFunctionName (void) const ;
  public: void setProperty_mFunctionName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mFunctionAttributeList (void) const ;
  public: void setProperty_mFunctionAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mFunctionFormalArgumentList (void) const ;
  public: void setProperty_mFunctionFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_lstring readProperty_mFunctionReturnTypeName (void) const ;
  public: void setProperty_mFunctionReturnTypeName (const GGS_lstring & inValue) ;

  public: class GGS_instructionListAST readProperty_mFunctionInstructionList (void) const ;
  public: void setProperty_mFunctionInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfFunctionDeclaration (void) const ;
  public: void setProperty_mEndOfFunctionDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_mode & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_lstring & inOperand3,
                                                                                      const class GGS_lstringlist & inOperand4,
                                                                                      const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                      const class GGS_lstring & inOperand6,
                                                                                      const class GGS_instructionListAST & inOperand7,
                                                                                      const class GGS_location & inOperand8,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionDeclarationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_mode & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstring & inOperand3,
                                                                                const class GGS_lstringlist & inOperand4,
                                                                                const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                const class GGS_lstring & inOperand6,
                                                                                const class GGS_instructionListAST & inOperand7,
                                                                                const class GGS_location & inOperand8,
                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_mode mProperty_mMode ;
  public: GGS_bool mProperty_mPublicFunction ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lstringlist mProperty_mFunctionAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mFunctionFormalArgumentList ;
  public: GGS_lstring mProperty_mFunctionReturnTypeName ;
  public: GGS_instructionListAST mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionDeclaration ;


//--- Default constructor
  public: cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GGS_mode & in_mMode,
                                       const GGS_bool & in_mPublicFunction,
                                       const GGS_lstring & in_mReceiverTypeName,
                                       const GGS_lstring & in_mFunctionName,
                                       const GGS_lstringlist & in_mFunctionAttributeList,
                                       const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                       const GGS_lstring & in_mFunctionReturnTypeName,
                                       const GGS_instructionListAST & in_mFunctionInstructionList,
                                       const GGS_location & in_mEndOfFunctionDeclaration,
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
// Phase 1: @functionDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_functionDeclarationAST_2E_weak (const class GGS_functionDeclarationAST & inSource) ;

  public: GGS_functionDeclarationAST_2E_weak & operator = (const class GGS_functionDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_functionDeclarationAST_2E_weak init_nil (void) {
    GGS_functionDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_functionDeclarationAST bang_functionDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_functionDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_functionDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2E_weak ;

