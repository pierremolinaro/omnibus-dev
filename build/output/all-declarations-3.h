#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLowerOrEqualOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (const class GALGAS_compileTimeIntLowerOrEqualOperator & inSource) ;

  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & operator = (const class GALGAS_compileTimeIntLowerOrEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntLowerOrEqualOperator bang_compileTimeIntLowerOrEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntXorOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntXorOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntXorOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntXorOperator (const class cPtr_compileTimeIntXorOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeIntXorOperator init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntXorOperator extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntXorOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntXorOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntXorOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntXorOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntXorOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntXorOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntXorOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntXorOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntXorOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntXorOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntXorOperator_2D_weak (const class GALGAS_compileTimeIntXorOperator & inSource) ;

  public: GALGAS_compileTimeIntXorOperator_2D_weak & operator = (const class GALGAS_compileTimeIntXorOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntXorOperator bang_compileTimeIntXorOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntXorOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntXorOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntXorOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntXorOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseOrOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseOrOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseOrOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntBitWiseOrOperator (const class cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeIntBitWiseOrOperator init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseOrOperator extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseOrOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseOrOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntBitWiseOrOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntBitWiseOrOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntBitWiseOrOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntBitWiseOrOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntBitWiseOrOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntBitWiseOrOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseOrOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (const class GALGAS_compileTimeIntBitWiseOrOperator & inSource) ;

  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & operator = (const class GALGAS_compileTimeIntBitWiseOrOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntBitWiseOrOperator bang_compileTimeIntBitWiseOrOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseOrOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseOrOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseOrOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMinusOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMinusOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMinusOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntMinusOperator (const class cPtr_compileTimeIntMinusOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeIntMinusOperator init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMinusOperator extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMinusOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntMinusOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMinusOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntMinusOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntMinusOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntMinusOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntMinusOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntMinusOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntMinusOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMinusOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMinusOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntMinusOperator_2D_weak (const class GALGAS_compileTimeIntMinusOperator & inSource) ;

  public: GALGAS_compileTimeIntMinusOperator_2D_weak & operator = (const class GALGAS_compileTimeIntMinusOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntMinusOperator bang_compileTimeIntMinusOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMinusOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMinusOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntMinusOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMinusOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntComplementOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntComplementOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntComplementOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntComplementOperator (const class cPtr_compileTimeIntComplementOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_compileTimeIntComplementOperator init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntComplementOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntComplementOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntComplementOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntComplementOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntComplementOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntComplementOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntComplementOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntComplementOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntComplementOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntComplementOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntComplementOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntComplementOperator_2D_weak (const class GALGAS_compileTimeIntComplementOperator & inSource) ;

  public: GALGAS_compileTimeIntComplementOperator_2D_weak & operator = (const class GALGAS_compileTimeIntComplementOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntComplementOperator bang_compileTimeIntComplementOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntComplementOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntComplementOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeIntComplementOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntComplementOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolTypeAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_boolTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolTypeAST (const class cPtr_boolTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolTypeAST init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolTypeAST extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolTypeAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolTypeAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolTypeAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolTypeAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolTypeAST_init (Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & arg_ioContext,
           class GALGAS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GALGAS_routineListIR & arg_ioRoutineListIR,
           class GALGAS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_boolTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolTypeAST (LOCATION_ARGS) ;

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
// Phase 1: @boolTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolTypeAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolTypeAST_2D_weak (const class GALGAS_boolTypeAST & inSource) ;

  public: GALGAS_boolTypeAST_2D_weak & operator = (const class GALGAS_boolTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolTypeAST bang_boolTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolImplicitConverterToBoolean (const class cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolImplicitConverterToBoolean init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolImplicitConverterToBoolean class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolImplicitConverterToBoolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR arg_inReceiverOperand,
           const class GALGAS_location arg_inErrorLocation,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionGenerationList,
           class GALGAS_allocaList & arg_ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_boolImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) ;

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
// Phase 1: @boolImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolImplicitConverterToBoolean_2D_weak (const class GALGAS_boolImplicitConverterToBoolean & inSource) ;

  public: GALGAS_boolImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_boolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolImplicitConverterToBoolean bang_boolImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolNotOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolNotOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_boolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolNotOperator (const class cPtr_boolNotOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_boolNotOperator init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolNotOperator extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolNotOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolNotOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolNotOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolNotOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolNotOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_boolNotOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolNotOperator (LOCATION_ARGS) ;

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
// Phase 1: @boolNotOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolNotOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolNotOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolNotOperator_2D_weak (const class GALGAS_boolNotOperator & inSource) ;

  public: GALGAS_boolNotOperator_2D_weak & operator = (const class GALGAS_boolNotOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolNotOperator bang_boolNotOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolNotOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolNotOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_boolNotOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolNotOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeAliasDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeAliasDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeAliasDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeAliasDeclarationAST_2D_weak (const class GALGAS_typeAliasDeclarationAST & inSource) ;

  public: GALGAS_typeAliasDeclarationAST_2D_weak & operator = (const class GALGAS_typeAliasDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeAliasDeclarationAST bang_typeAliasDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeAliasDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeAliasDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeAliasDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeAliasDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixedSizeArrayTypeDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak (const class GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) ;

  public: GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & operator = (const class GALGAS_fixedSizeArrayTypeDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_fixedSizeArrayTypeDeclarationAST bang_fixedSizeArrayTypeDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMStaticArrayTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR (const class cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GALGAS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_userLLVMStaticArrayTypeDefinitionIR init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_omnibusType & inOperand1,
                                                                              const class GALGAS_bigint & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMStaticArrayTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMStaticArrayTypeDefinitionIR class_func_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_omnibusType & inOperand1,
                                                                                  const class GALGAS_bigint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMStaticArrayTypeDefinitionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMStaticArrayTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_omnibusType & inOperand1,
                                                                     const class GALGAS_bigint & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GALGAS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                    const GALGAS_omnibusType & in_mElementType,
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
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak : public GALGAS_userLLVMTypeDefinitionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak (const class GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & operator = (const class GALGAS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR bang_userLLVMStaticArrayTypeDefinitionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractAssignmentOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractAssignmentOperatorUsage : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractAssignmentOperatorUsage_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_instructionListIR & arg_ioInstructionListIR,
           class GALGAS_allocaList & arg_ioAllocaList,
           const class GALGAS_omnibusType arg_inTargetType,
           const class GALGAS_string arg_inTargetLLVMName,
           const class GALGAS_objectIR arg_inSourcePossibleReference,
           const class GALGAS_location arg_inErrorLocation,
           const class GALGAS_bool arg_inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractAssignmentOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractAssignmentOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractAssignmentOperatorUsage_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractAssignmentOperatorUsage_2D_weak (const class GALGAS_abstractAssignmentOperatorUsage & inSource) ;

  public: GALGAS_abstractAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_abstractAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractAssignmentOperatorUsage bang_abstractAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractAssignmentOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractAssignmentOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractRoutineIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractRoutineIR (const class cPtr_abstractRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mRoutineMangledName (void) const ;
  public: void setProperty_mRoutineMangledName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_bool readProperty_isRequired (void) const ;
  public: void setProperty_isRequired (const GALGAS_bool & inValue) ;

  public: class GALGAS_bool readProperty_warnsIfUnused (void) const ;
  public: void setProperty_warnsIfUnused (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractRoutineIR init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractRoutineIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractRoutineIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & arg_ioSectionList,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_lstring mProperty_mRoutineMangledName ;
  public: GALGAS_bool mProperty_isRequired ;
  public: GALGAS_bool mProperty_warnsIfUnused ;


//--- Default constructor
  public: cPtr_abstractRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                  const GALGAS_bool & in_isRequired,
                                  const GALGAS_bool & in_warnsIfUnused
                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractRoutineIR_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractRoutineIR_2D_weak (const class GALGAS_abstractRoutineIR & inSource) ;

  public: GALGAS_abstractRoutineIR_2D_weak & operator = (const class GALGAS_abstractRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractRoutineIR bang_abstractRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticArrayTypeAssignFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticArrayTypeAssignFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_staticArrayTypeAssignFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_staticArrayTypeAssignFunctionIR (const class cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mFixedSizeArrayType (void) const ;
  public: void setProperty_mFixedSizeArrayType (const GALGAS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticArrayTypeAssignFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_bool & inOperand1,
                                                                                                     const class GALGAS_bool & inOperand2,
                                                                                                     const class GALGAS_omnibusType & inOperand3,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticArrayTypeAssignFunctionIR extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticArrayTypeAssignFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_bool & inOperand1,
                                                                              const class GALGAS_bool & inOperand2,
                                                                              const class GALGAS_omnibusType & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticArrayTypeAssignFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @staticArrayTypeAssignFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_staticArrayTypeAssignFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
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
  public: GALGAS_omnibusType mProperty_mFixedSizeArrayType ;


//--- Default constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                const GALGAS_bool & in_isRequired,
                                                const GALGAS_bool & in_warnsIfUnused,
                                                const GALGAS_omnibusType & in_mFixedSizeArrayType
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
// Phase 1: @staticArrayTypeAssignFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticArrayTypeAssignFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_staticArrayTypeAssignFunctionIR_2D_weak (const class GALGAS_staticArrayTypeAssignFunctionIR & inSource) ;

  public: GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & operator = (const class GALGAS_staticArrayTypeAssignFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_staticArrayTypeAssignFunctionIR bang_staticArrayTypeAssignFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticArrayTypeAssignFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticArrayTypeAssignFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticArrayTypeAssignFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDynamicArrayDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDynamicArrayDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeDynamicArrayDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeDynamicArrayDeclarationAST_2D_weak (const class GALGAS_typeDynamicArrayDeclarationAST & inSource) ;

  public: GALGAS_typeDynamicArrayDeclarationAST_2D_weak & operator = (const class GALGAS_typeDynamicArrayDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeDynamicArrayDeclarationAST bang_typeDynamicArrayDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDynamicArrayDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDynamicArrayDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeDynamicArrayDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDynamicArrayDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayRemoveAllFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayRemoveAllFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayRemoveAllFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayRemoveAllFunctionIR (const class cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynArrayRemoveAllFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayRemoveAllFunctionIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayRemoveAllFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayRemoveAllFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayRemoveAllFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayRemoveAllFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused
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
// Phase 1: @dynArrayRemoveAllFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayRemoveAllFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynArrayRemoveAllFunctionIR_2D_weak (const class GALGAS_dynArrayRemoveAllFunctionIR & inSource) ;

  public: GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & operator = (const class GALGAS_dynArrayRemoveAllFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynArrayRemoveAllFunctionIR bang_dynArrayRemoveAllFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayRemoveAllFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayRemoveAllFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayRemoveAllFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayLengthFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayLengthFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayLengthFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayLengthFunctionIR (const class cPtr_dynArrayLengthFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynArrayLengthFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_bool & inOperand1,
                                                                                          const class GALGAS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayLengthFunctionIR extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayLengthFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayLengthFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayLengthFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayLengthFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayLengthFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayLengthFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused
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
// Phase 1: @dynArrayLengthFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayLengthFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayLengthFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynArrayLengthFunctionIR_2D_weak (const class GALGAS_dynArrayLengthFunctionIR & inSource) ;

  public: GALGAS_dynArrayLengthFunctionIR_2D_weak & operator = (const class GALGAS_dynArrayLengthFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynArrayLengthFunctionIR bang_dynArrayLengthFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayLengthFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayLengthFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayLengthFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayLengthFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayAppendFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayAppendFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayAppendFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayAppendFunctionIR (const class cPtr_dynArrayAppendFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mArrayTypeProxy (void) const ;
  public: void setProperty_mArrayTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

  public: class GALGAS_string readProperty_mInsertFunctionMangledName (void) const ;
  public: void setProperty_mInsertFunctionMangledName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynArrayAppendFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_bool & inOperand2,
                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                      const class GALGAS_string & inOperand5,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayAppendFunctionIR extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayAppendFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                       const class GALGAS_string & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayAppendFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayAppendFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayAppendFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayAppendFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                             const class GALGAS_string & inOperand5,
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mArrayTypeProxy ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;
  public: GALGAS_string mProperty_mInsertFunctionMangledName ;


//--- Default constructor
  public: cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayAppendFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                         const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                         const GALGAS_string & in_mInsertFunctionMangledName
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
// Phase 1: @dynArrayAppendFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayAppendFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayAppendFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynArrayAppendFunctionIR_2D_weak (const class GALGAS_dynArrayAppendFunctionIR & inSource) ;

  public: GALGAS_dynArrayAppendFunctionIR_2D_weak & operator = (const class GALGAS_dynArrayAppendFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynArrayAppendFunctionIR bang_dynArrayAppendFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayAppendFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayAppendFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayAppendFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayAppendFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayInsertFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayInsertFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayInsertFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayInsertFunctionIR (const class cPtr_dynArrayInsertFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynArrayInsertFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_bool & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2,
                                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayInsertFunctionIR extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayInsertFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayInsertFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayInsertFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayInsertFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayInsertFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
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
  public: GALGAS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;


//--- Default constructor
  public: cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayInsertFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_unifiedTypeMapEntry & in_mElementTypeProxy
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
// Phase 1: @dynArrayInsertFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynArrayInsertFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynArrayInsertFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynArrayInsertFunctionIR_2D_weak (const class GALGAS_dynArrayInsertFunctionIR & inSource) ;

  public: GALGAS_dynArrayInsertFunctionIR_2D_weak & operator = (const class GALGAS_dynArrayInsertFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynArrayInsertFunctionIR bang_dynArrayInsertFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayInsertFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynArrayInsertFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynArrayInsertFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynArrayInsertFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynamicArrayTypeAssignUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_dynamicArrayTypeAssignUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynamicArrayTypeAssignUsage (const class cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mDynamicArrayType (void) const ;
  public: void setProperty_mDynamicArrayType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_string readProperty_mAssignFunctionName (void) const ;
  public: void setProperty_mAssignFunctionName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynamicArrayTypeAssignUsage init_21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignUsage extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynamicArrayTypeAssignUsage class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                          const class GALGAS_string & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynamicArrayTypeAssignUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynamicArrayTypeAssignUsage_init_21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                         const class GALGAS_string & inOperand1,
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
  public: GALGAS_omnibusType mProperty_mDynamicArrayType ;
  public: GALGAS_string mProperty_mAssignFunctionName ;


//--- Default constructor
  public: cPtr_dynamicArrayTypeAssignUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignUsage (const GALGAS_omnibusType & in_mDynamicArrayType,
                                            const GALGAS_string & in_mAssignFunctionName
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
// Phase 1: @dynamicArrayTypeAssignUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynamicArrayTypeAssignUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynamicArrayTypeAssignUsage_2D_weak (const class GALGAS_dynamicArrayTypeAssignUsage & inSource) ;

  public: GALGAS_dynamicArrayTypeAssignUsage_2D_weak & operator = (const class GALGAS_dynamicArrayTypeAssignUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynamicArrayTypeAssignUsage bang_dynamicArrayTypeAssignUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynamicArrayTypeAssignUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignGenericFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR (const class cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_dynamicArrayTypeAssignGenericFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignGenericFunctionIR extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynamicArrayTypeAssignGenericFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignGenericFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignGenericFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                        const GALGAS_bool & in_isRequired,
                                                        const GALGAS_bool & in_warnsIfUnused
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
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (const class GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & operator = (const class GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR bang_dynamicArrayTypeAssignGenericFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumerationConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: inline GALGAS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS_bigint mProperty_mConstantValue ;
  public: inline GALGAS_bigint readProperty_mConstantValue (void) const {
    return mProperty_mConstantValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMConstantValue (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                                     const GALGAS_bigint & in_mConstantValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumerationConstantList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bigint & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumerationConstantList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bigint & inOperand1,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumerationConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumerationDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumerationDeclarationAST_2D_weak (const class GALGAS_enumerationDeclarationAST & inSource) ;

  public: GALGAS_enumerationDeclarationAST_2D_weak & operator = (const class GALGAS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumerationDeclarationAST bang_enumerationDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumerationDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumerationDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumToUintRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumToUintRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_enumToUintRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumToUintRoutineIR (const class cPtr_enumToUintRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mEnumerationLLVMTypeName (void) const ;
  public: void setProperty_mEnumerationLLVMTypeName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumToUintRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2,
                                                                                         const class GALGAS_string & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumToUintRoutineIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumToUintRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_string & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumToUintRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumToUintRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumToUintRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mEnumerationLLVMTypeName ;


//--- Default constructor
  public: cPtr_enumToUintRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                    const GALGAS_bool & in_isRequired,
                                    const GALGAS_bool & in_warnsIfUnused,
                                    const GALGAS_string & in_mEnumerationLLVMTypeName
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
// Phase 1: @enumToUintRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumToUintRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumToUintRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumToUintRoutineIR_2D_weak (const class GALGAS_enumToUintRoutineIR & inSource) ;

  public: GALGAS_enumToUintRoutineIR_2D_weak & operator = (const class GALGAS_enumToUintRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumToUintRoutineIR bang_enumToUintRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumToUintRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumToUintRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumToUintRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumToUintRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structurePropertyListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structurePropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_propertyAttributeList mProperty_mPropertyAttributeList ;
  public: inline GALGAS_propertyAttributeList readProperty_mPropertyAttributeList (void) const {
    return mProperty_mPropertyAttributeList ;
  }

  public: GALGAS_propertyVisibility mProperty_mVisibility ;
  public: inline GALGAS_propertyVisibility readProperty_mVisibility (void) const {
    return mProperty_mVisibility ;
  }

  public: GALGAS_lstring mProperty_mPropertyTypeName ;
  public: inline GALGAS_lstring readProperty_mPropertyTypeName (void) const {
    return mProperty_mPropertyTypeName ;
  }

  public: GALGAS_propertyKindAST mProperty_mPropertyKind ;
  public: inline GALGAS_propertyKindAST readProperty_mPropertyKind (void) const {
    return mProperty_mPropertyKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_structurePropertyListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyAttributeList (const GALGAS_propertyAttributeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyAttributeList = inValue ;
  }

  public: inline void setter_setMVisibility (const GALGAS_propertyVisibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVisibility = inValue ;
  }

  public: inline void setter_setMPropertyTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeName = inValue ;
  }

  public: inline void setter_setMPropertyKind (const GALGAS_propertyKindAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_structurePropertyListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                      const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                      const GALGAS_propertyVisibility & in_mVisibility,
                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                      const GALGAS_propertyKindAST & in_mPropertyKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_structurePropertyListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_propertyAttributeList & inOperand1,
                                                                                      const class GALGAS_propertyVisibility & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                      const class GALGAS_propertyKindAST & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structurePropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structurePropertyListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_propertyAttributeList & inOperand1,
                                                                                  const class GALGAS_propertyVisibility & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_propertyKindAST & inOperand4,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structurePropertyListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structureDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structureDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structureDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structureDeclarationAST_2D_weak (const class GALGAS_structureDeclarationAST & inSource) ;

  public: GALGAS_structureDeclarationAST_2D_weak & operator = (const class GALGAS_structureDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structureDeclarationAST bang_structureDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structureDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structureDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structureDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structureDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyAttributeList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyAttributeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_lbigint mProperty_mAttributeValue ;
  public: inline GALGAS_lbigint readProperty_mAttributeValue (void) const {
    return mProperty_mAttributeValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyAttributeList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyAttributeList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyAttributeList_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                   const GALGAS_lbigint & in_mAttributeValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyAttributeList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lbigint & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyAttributeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyAttributeList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lbigint & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyAttributeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyAttributeList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mPropertyName ;
  public: inline GALGAS_string readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyList_2D_element (const GALGAS_string & in_mPropertyName,
                                          const GALGAS_omnibusType & in_mType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyList_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_omnibusType & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedOperandIRList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedOperandIRList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_objectIR mProperty_mOperand ;
  public: inline GALGAS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sortedOperandIRList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sortedOperandIRList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sortedOperandIRList_2D_element (const GALGAS_objectIR & in_mOperand,
                                                 const GALGAS_uint & in_mIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sortedOperandIRList_2D_element init_21__21_ (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_uint & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedOperandIRList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedOperandIRList_2D_element class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                             const class GALGAS_uint & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sortedOperandIRList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedOperandIRList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMSructureTypeDefinitionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMSructureTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMSructureTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMSructureTypeDefinitionIR (const class cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_propertyList readProperty_mPropertyList (void) const ;
  public: void setProperty_mPropertyList (const GALGAS_propertyList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_userLLVMSructureTypeDefinitionIR init_21__21_ (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_propertyList & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMSructureTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMSructureTypeDefinitionIR class_func_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_propertyList & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMSructureTypeDefinitionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMSructureTypeDefinitionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMSructureTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMSructureTypeDefinitionIR_init_21__21_ (const class GALGAS_string & inOperand0,
                                                              const class GALGAS_propertyList & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GALGAS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_propertyList mProperty_mPropertyList ;


//--- Default constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                 const GALGAS_propertyList & in_mPropertyList
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
// Phase 1: @userLLVMSructureTypeDefinitionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak : public GALGAS_userLLVMTypeDefinitionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (const class GALGAS_userLLVMSructureTypeDefinitionIR & inSource) ;

  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & operator = (const class GALGAS_userLLVMSructureTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_userLLVMSructureTypeDefinitionIR bang_userLLVMSructureTypeDefinitionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structureAssignmentOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structureAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_structureAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_structureAssignmentOperatorUsage (const class cPtr_structureAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mStructureType (void) const ;
  public: void setProperty_mStructureType (const GALGAS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_structureAssignmentOperatorUsage init_21_ (const class GALGAS_omnibusType & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structureAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structureAssignmentOperatorUsage class_func_new (const class GALGAS_omnibusType & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structureAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structureAssignmentOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structureAssignmentOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structureAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structureAssignmentOperatorUsage_init_21_ (const class GALGAS_omnibusType & inOperand0,
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
  public: GALGAS_omnibusType mProperty_mStructureType ;


//--- Default constructor
  public: cPtr_structureAssignmentOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structureAssignmentOperatorUsage (const GALGAS_omnibusType & in_mStructureType
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
// Phase 1: @structureAssignmentOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structureAssignmentOperatorUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structureAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structureAssignmentOperatorUsage_2D_weak (const class GALGAS_structureAssignmentOperatorUsage & inSource) ;

  public: GALGAS_structureAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_structureAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structureAssignmentOperatorUsage bang_structureAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structureAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structureAssignmentOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structureAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structureAssignmentOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structureTypeAssignFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structureTypeAssignFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_structureTypeAssignFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_structureTypeAssignFunctionIR (const class cPtr_structureTypeAssignFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_omnibusType readProperty_mStructureType (void) const ;
  public: void setProperty_mStructureType (const GALGAS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_structureTypeAssignFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_bool & inOperand2,
                                                                                                   const class GALGAS_omnibusType & inOperand3,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structureTypeAssignFunctionIR extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structureTypeAssignFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_omnibusType & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structureTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structureTypeAssignFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structureTypeAssignFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structureTypeAssignFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structureTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GALGAS_lstring & inOperand0,
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
  public: GALGAS_omnibusType mProperty_mStructureType ;


//--- Default constructor
  public: cPtr_structureTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structureTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_omnibusType & in_mStructureType
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
// Phase 1: @structureTypeAssignFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_structureTypeAssignFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structureTypeAssignFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structureTypeAssignFunctionIR_2D_weak (const class GALGAS_structureTypeAssignFunctionIR & inSource) ;

  public: GALGAS_structureTypeAssignFunctionIR_2D_weak & operator = (const class GALGAS_structureTypeAssignFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structureTypeAssignFunctionIR bang_structureTypeAssignFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_structureTypeAssignFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_structureTypeAssignFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_structureTypeAssignFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_structureTypeAssignFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syncDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syncDeclarationAST_2D_weak (const class GALGAS_syncDeclarationAST & inSource) ;

  public: GALGAS_syncDeclarationAST_2D_weak & operator = (const class GALGAS_syncDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syncDeclarationAST bang_syncDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_integerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_integerDeclarationAST (const class cPtr_integerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsSigned (void) const ;
  public: void setProperty_mIsSigned (const GALGAS_bool & inValue) ;

  public: class GALGAS_uint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_integerDeclarationAST init_21__21_ (const class GALGAS_bool & inOperand0,
                                                            const class GALGAS_uint & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerDeclarationAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_uint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_integerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_integerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerDeclarationAST_init_21__21_ (const class GALGAS_bool & inOperand0,
                                                   const class GALGAS_uint & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter typeName
  public: virtual class GALGAS_string getter_typeName (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & arg_ioContext,
           class GALGAS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GALGAS_routineListIR & arg_ioRoutineListIR,
           class GALGAS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsSigned ;
  public: GALGAS_uint mProperty_mSize ;


//--- Default constructor
  public: cPtr_integerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                      const GALGAS_uint & in_mSize
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
// Phase 1: @integerDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerDeclarationAST_2D_weak (const class GALGAS_integerDeclarationAST & inSource) ;

  public: GALGAS_integerDeclarationAST_2D_weak & operator = (const class GALGAS_integerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerDeclarationAST bang_integerDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_integerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@integerDeclarationAST typeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage init_21_ (const class GALGAS_string & inOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage class_func_new (const class GALGAS_string & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfix_integer_compileTimeInt_operatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_init_21_ (const class GALGAS_string & inOperand0,
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
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
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
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (const class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & operator = (const class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage bang_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage init_21_ (const class GALGAS_string & inOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage class_func_new (const class GALGAS_string & inOperand0
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfix_compileTimeInt_integer_operatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_init_21_ (const class GALGAS_string & inOperand0,
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
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
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
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (const class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & operator = (const class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage bang_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @integerBuiltinFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerBuiltinFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_integerBuiltinFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_integerBuiltinFunctionIR (const class cPtr_integerBuiltinFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLLVMTypeName (void) const ;
  public: void setProperty_mLLVMTypeName (const GALGAS_string & inValue) ;

  public: class GALGAS_string readProperty_mIntrinsicName (void) const ;
  public: void setProperty_mIntrinsicName (const GALGAS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_integerBuiltinFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                  const class GALGAS_bool & inOperand1,
                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                  const class GALGAS_string & inOperand3,
                                                                                                  const class GALGAS_string & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerBuiltinFunctionIR extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerBuiltinFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_string & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_integerBuiltinFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerBuiltinFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerBuiltinFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_integerBuiltinFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2,
                                                                                         const class GALGAS_string & inOperand3,
                                                                                         const class GALGAS_string & inOperand4,
                                                                                         Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMTypeName ;
  public: GALGAS_string mProperty_mIntrinsicName ;


//--- Default constructor
  public: cPtr_integerBuiltinFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerBuiltinFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_string & in_mLLVMTypeName,
                                         const GALGAS_string & in_mIntrinsicName
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
// Phase 1: @integerBuiltinFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_integerBuiltinFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerBuiltinFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerBuiltinFunctionIR_2D_weak (const class GALGAS_integerBuiltinFunctionIR & inSource) ;

  public: GALGAS_integerBuiltinFunctionIR_2D_weak & operator = (const class GALGAS_integerBuiltinFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerBuiltinFunctionIR bang_integerBuiltinFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_integerBuiltinFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_integerBuiltinFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_integerBuiltinFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_integerBuiltinFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_literalStringDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringDeclarationAST (const class cPtr_literalStringDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalStringDeclarationAST init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringDeclarationAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringDeclarationAST_init (Compiler * inCompiler) ;


//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & arg_ioContext,
           class GALGAS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GALGAS_routineListIR & arg_ioRoutineListIR,
           class GALGAS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GALGAS_staticEntityMap & arg_ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_literalStringDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringDeclarationAST (LOCATION_ARGS) ;

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
// Phase 1: @literalStringDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringDeclarationAST_2D_weak (const class GALGAS_literalStringDeclarationAST & inSource) ;

  public: GALGAS_literalStringDeclarationAST_2D_weak & operator = (const class GALGAS_literalStringDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringDeclarationAST bang_literalStringDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeOpaqueDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeOpaqueDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeOpaqueDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeOpaqueDeclarationAST_2D_weak (const class GALGAS_typeOpaqueDeclarationAST & inSource) ;

  public: GALGAS_typeOpaqueDeclarationAST_2D_weak & operator = (const class GALGAS_typeOpaqueDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeOpaqueDeclarationAST bang_typeOpaqueDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeOpaqueDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeOpaqueDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeOpaqueDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeOpaqueDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterNameListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterNameListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: inline GALGAS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GALGAS_controlRegisterKind mProperty_mControlRegisterKind ;
  public: inline GALGAS_controlRegisterKind readProperty_mControlRegisterKind (void) const {
    return mProperty_mControlRegisterKind ;
  }

  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: inline GALGAS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GALGAS_expressionAST mProperty_mRegisterOffset ;
  public: inline GALGAS_expressionAST readProperty_mRegisterOffset (void) const {
    return mProperty_mRegisterOffset ;
  }

  public: GALGAS_location mProperty_mRegisterOffsetLocation ;
  public: inline GALGAS_location readProperty_mRegisterOffsetLocation (void) const {
    return mProperty_mRegisterOffsetLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterNameListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMControlRegisterKind (const GALGAS_controlRegisterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterKind = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMRegisterOffset (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterOffset = inValue ;
  }

  public: inline void setter_setMRegisterOffsetLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterOffsetLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterNameListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterNameListAST_2D_element (const GALGAS_lstring & in_mRegisterName,
                                                        const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                        const GALGAS_bool & in_mIsReadOnly,
                                                        const GALGAS_expressionAST & in_mRegisterOffset,
                                                        const GALGAS_location & in_mRegisterOffsetLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterNameListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_controlRegisterKind & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_expressionAST & inOperand3,
                                                                                        const class GALGAS_location & inOperand4,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterNameListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterNameListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_controlRegisterKind & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_expressionAST & inOperand3,
                                                                                    const class GALGAS_location & inOperand4,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterNameListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterNameListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterDeclarationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_controlRegisterNameListAST mProperty_mRegisterArrayList ;
  public: inline GALGAS_controlRegisterNameListAST readProperty_mRegisterArrayList (void) const {
    return mProperty_mRegisterArrayList ;
  }

  public: GALGAS_lstring mProperty_mRegisterTypeName ;
  public: inline GALGAS_lstring readProperty_mRegisterTypeName (void) const {
    return mProperty_mRegisterTypeName ;
  }

  public: GALGAS_controlRegisterBitSliceList mProperty_mRegisterBitSliceList ;
  public: inline GALGAS_controlRegisterBitSliceList readProperty_mRegisterBitSliceList (void) const {
    return mProperty_mRegisterBitSliceList ;
  }

  public: GALGAS_location mProperty_mRegisterBitSliceListLocation ;
  public: inline GALGAS_location readProperty_mRegisterBitSliceListLocation (void) const {
    return mProperty_mRegisterBitSliceListLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterArrayList (const GALGAS_controlRegisterNameListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterArrayList = inValue ;
  }

  public: inline void setter_setMRegisterTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTypeName = inValue ;
  }

  public: inline void setter_setMRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSliceList = inValue ;
  }

  public: inline void setter_setMRegisterBitSliceListLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSliceListLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterDeclarationList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                            const GALGAS_lstring & in_mRegisterTypeName,
                                                            const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                            const GALGAS_location & in_mRegisterBitSliceListLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterDeclarationList_2D_element init_21__21__21__21_ (const class GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                        const class GALGAS_location & inOperand3,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterDeclarationList_2D_element class_func_new (const class GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                        const class GALGAS_location & inOperand3,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterDeclarationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterBitSliceList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterBitSliceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_controlRegisterBitSlice mProperty_mRegisterBitSlice ;
  public: inline GALGAS_controlRegisterBitSlice readProperty_mRegisterBitSlice (void) const {
    return mProperty_mRegisterBitSlice ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterBitSlice (const GALGAS_controlRegisterBitSlice & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSlice = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterBitSliceList_2D_element init_21_ (const class GALGAS_controlRegisterBitSlice & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterBitSliceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterBitSliceList_2D_element class_func_new (const class GALGAS_controlRegisterBitSlice & inOperand0,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterBitSliceList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @registerGroupListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_registerGroupListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRegisterGroupName ;
  public: inline GALGAS_lstring readProperty_mRegisterGroupName (void) const {
    return mProperty_mRegisterGroupName ;
  }

  public: GALGAS_controlRegisterGroupKindAST mProperty_mControlRegisterGroupKind ;
  public: inline GALGAS_controlRegisterGroupKindAST readProperty_mControlRegisterGroupKind (void) const {
    return mProperty_mControlRegisterGroupKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_registerGroupListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterGroupName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterGroupName = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupKind (const GALGAS_controlRegisterGroupKindAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupKind = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_registerGroupListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & in_mRegisterGroupName,
                                                  const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_registerGroupListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_controlRegisterGroupKindAST & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_registerGroupListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_registerGroupListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_controlRegisterGroupKindAST & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_registerGroupListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_registerGroupListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak (const class GALGAS_controlRegisterGroupDeclarationAST & inSource) ;

  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak & operator = (const class GALGAS_controlRegisterGroupDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_controlRegisterGroupDeclarationAST bang_controlRegisterGroupDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterGroupDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterGroupDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterGroupDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mFieldBitCount,
                                                 const class GALGAS_string & in_mFieldName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterFieldList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldList extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterFieldList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterFieldList class_func_listWithValue (const class GALGAS_uint & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterFieldList add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_uint constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldBitCountAtIndex (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_controlRegisterFieldList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterFieldList ;
 
} ; // End of GALGAS_controlRegisterFieldList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterFieldList : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mFieldBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFieldName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterFieldList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mFieldBitCount ;
  public: inline GALGAS_uint readProperty_mFieldBitCount (void) const {
    return mProperty_mFieldBitCount ;
  }

  public: GALGAS_string mProperty_mFieldName ;
  public: inline GALGAS_string readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldBitCount = inValue ;
  }

  public: inline void setter_setMFieldName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterFieldList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterFieldList_2D_element (const GALGAS_uint & in_mFieldBitCount,
                                                      const GALGAS_string & in_mFieldName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterFieldList_2D_element init_21__21_ (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterFieldList_2D_element class_func_new (const class GALGAS_uint & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterFieldList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterFieldList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterFieldMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) ;
  public: GALGAS_controlRegisterFieldMap & operator = (const GALGAS_controlRegisterFieldMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterFieldMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldMap extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterFieldMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterFieldMap class_func_mapWithMapToOverride (const class GALGAS_controlRegisterFieldMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterFieldMap add_operation (const GALGAS_controlRegisterFieldMap & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitIndexForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitIndexForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterFieldMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_controlRegisterFieldMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterFieldMap ;
 
} ; // End of GALGAS_controlRegisterFieldMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterFieldMap : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterFieldMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@controlRegisterFieldMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterFieldMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mBitIndex ;
  public: GALGAS_uint mProperty_mBitCount ;

//--- Constructors
  public: cMapElement_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap_2D_element & inValue
                                               COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & in_mBitIndex,
                                               const GALGAS_uint & in_mBitCount
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
// Phase 1: @controlRegisterFieldMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mBitIndex ;
  public: inline GALGAS_uint readProperty_mBitIndex (void) const {
    return mProperty_mBitIndex ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBitIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterFieldMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_uint & in_mBitIndex,
                                                     const GALGAS_uint & in_mBitCount) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterFieldMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_uint & inOperand1,
                                                                             const class GALGAS_uint & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterFieldMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_uint & inOperand1,
                                                                                 const class GALGAS_uint & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterFieldMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_sliceMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_sliceMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_sliceMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_sliceMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_sliceMap (const GALGAS_sliceMap & inSource) ;
  public: GALGAS_sliceMap & operator = (const GALGAS_sliceMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceMap extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_sliceMap class_func_mapWithMapToOverride (const class GALGAS_sliceMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_llvmBinaryOperation & inOperand1,
                                                     const class GALGAS_bigint & inOperand2,
                                                     const class GALGAS_omnibusType & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sliceMap add_operation (const GALGAS_sliceMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_llvmBinaryOperation constinArgument1,
                                                  class GALGAS_bigint constinArgument2,
                                                  class GALGAS_omnibusType constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessOperatorForKey (class GALGAS_llvmBinaryOperation constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessRightOperandForKey (class GALGAS_bigint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_llvmBinaryOperation & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_omnibusType & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_llvmBinaryOperation getter_mAccessOperatorForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAccessRightOperandForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sliceMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_llvmBinaryOperation & outOperand1,
                                                    class GALGAS_bigint & outOperand2,
                                                    class GALGAS_omnibusType & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_sliceMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_sliceMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sliceMap ;
 
} ; // End of GALGAS_sliceMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sliceMap : public cGenericAbstractEnumerator {
  public: cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sliceMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @llvmBinaryOperation enum                                         *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmBinaryOperation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_llvmBinaryOperation (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_addNoOVF,
    kEnum_subNoOVF,
    kEnum_mulNoOVF,
    kEnum_udivNoOVF,
    kEnum_sdivNoOVF,
    kEnum_uremNoOVF,
    kEnum_sremNoOVF,
    kEnum_uaddOVF,
    kEnum_saddOVF,
    kEnum_usubOVF,
    kEnum_ssubOVF,
    kEnum_umulOVF,
    kEnum_smulOVF,
    kEnum_udivOVF,
    kEnum_sdivOVF,
    kEnum_uremOVF,
    kEnum_sremOVF,
    kEnum_and,
    kEnum_ior,
    kEnum_xor,
    kEnum_shl,
    kEnum_ashr,
    kEnum_lshr,
    kEnum_icmp_5F_eq,
    kEnum_icmp_5F_ult,
    kEnum_icmp_5F_ule,
    kEnum_icmp_5F_slt,
    kEnum_icmp_5F_sle
  } enumeration ;
  
//--------------------------------- Private data member
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
  public: static GALGAS_llvmBinaryOperation extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmBinaryOperation class_func_addNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_and (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_ashr (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_icmp_5F_eq (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_icmp_5F_sle (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_icmp_5F_slt (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_icmp_5F_ule (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_icmp_5F_ult (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_ior (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_lshr (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_mulNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_saddOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_sdivNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_sdivOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_shl (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_smulOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_sremNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_sremOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_ssubOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_subNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_uaddOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_udivNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_udivOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_umulOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_uremNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_uremOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_usubOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation class_func_xor (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAnd (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_eq (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_sle (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_slt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_ule (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_ult (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIor (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isShl (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXor (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_addNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_and () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ashr () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_eq () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_sle () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_slt () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_ule () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_ult () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ior () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lshr () const ;

  public: VIRTUAL_IN_DEBUG bool optional_mulNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_saddOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sdivNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sdivOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_shl () const ;

  public: VIRTUAL_IN_DEBUG bool optional_smulOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sremNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sremOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ssubOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_subNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uaddOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_udivNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_udivOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_umulOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uremNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uremOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_usubOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_xor () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmBinaryOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@sliceMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_sliceMap : public cMapElement {
//--- Map attributes
  public: GALGAS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: GALGAS_bigint mProperty_mAccessRightOperand ;
  public: GALGAS_omnibusType mProperty_mResultType ;

//--- Constructors
  public: cMapElement_sliceMap (const GALGAS_sliceMap_2D_element & inValue
                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                const GALGAS_bigint & in_mAccessRightOperand,
                                const GALGAS_omnibusType & in_mResultType
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
// Phase 1: @sliceMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sliceMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: inline GALGAS_llvmBinaryOperation readProperty_mAccessOperator (void) const {
    return mProperty_mAccessOperator ;
  }

  public: GALGAS_bigint mProperty_mAccessRightOperand ;
  public: inline GALGAS_bigint readProperty_mAccessRightOperand (void) const {
    return mProperty_mAccessRightOperand ;
  }

  public: GALGAS_omnibusType mProperty_mResultType ;
  public: inline GALGAS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sliceMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessOperator (const GALGAS_llvmBinaryOperation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessOperator = inValue ;
  }

  public: inline void setter_setMAccessRightOperand (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessRightOperand = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sliceMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                      const GALGAS_bigint & in_mAccessRightOperand,
                                      const GALGAS_omnibusType & in_mResultType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sliceMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_llvmBinaryOperation & inOperand1,
                                                                  const class GALGAS_bigint & inOperand2,
                                                                  const class GALGAS_omnibusType & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sliceMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_llvmBinaryOperation & inOperand1,
                                                                  const class GALGAS_bigint & inOperand2,
                                                                  const class GALGAS_omnibusType & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sliceMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@controlRegisterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: GALGAS_bool mProperty_mUserAccess ;
  public: GALGAS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: GALGAS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: GALGAS_bigint mProperty_mAddressOffset ;
  public: GALGAS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: GALGAS_uint mProperty_mRegisterBitCount ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_uint mProperty_mElementArraySize ;

//--- Constructors
  public: cMapElement_controlRegisterMap (const GALGAS_controlRegisterMap_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & in_mType,
                                          const GALGAS_bool & in_mIsReadOnly,
                                          const GALGAS_bool & in_mUserAccess,
                                          const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                          const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                          const GALGAS_bigint & in_mAddressOffset,
                                          const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                          const GALGAS_uint & in_mRegisterBitCount,
                                          const GALGAS_uint & in_mArraySize,
                                          const GALGAS_uint & in_mElementArraySize
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
// Phase 1: @controlRegisterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: inline GALGAS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GALGAS_bool mProperty_mUserAccess ;
  public: inline GALGAS_bool readProperty_mUserAccess (void) const {
    return mProperty_mUserAccess ;
  }

  public: GALGAS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: inline GALGAS_sliceMap readProperty_mRegisterFieldAccessMap (void) const {
    return mProperty_mRegisterFieldAccessMap ;
  }

  public: GALGAS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: inline GALGAS_controlRegisterFieldMap readProperty_mRegisterFieldMap (void) const {
    return mProperty_mRegisterFieldMap ;
  }

  public: GALGAS_bigint mProperty_mAddressOffset ;
  public: inline GALGAS_bigint readProperty_mAddressOffset (void) const {
    return mProperty_mAddressOffset ;
  }

  public: GALGAS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: inline GALGAS_controlRegisterFieldList readProperty_mControlRegisterFieldList (void) const {
    return mProperty_mControlRegisterFieldList ;
  }

  public: GALGAS_uint mProperty_mRegisterBitCount ;
  public: inline GALGAS_uint readProperty_mRegisterBitCount (void) const {
    return mProperty_mRegisterBitCount ;
  }

  public: GALGAS_uint mProperty_mArraySize ;
  public: inline GALGAS_uint readProperty_mArraySize (void) const {
    return mProperty_mArraySize ;
  }

  public: GALGAS_uint mProperty_mElementArraySize ;
  public: inline GALGAS_uint readProperty_mElementArraySize (void) const {
    return mProperty_mElementArraySize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMUserAccess (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserAccess = inValue ;
  }

  public: inline void setter_setMRegisterFieldAccessMap (const GALGAS_sliceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldAccessMap = inValue ;
  }

  public: inline void setter_setMRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldMap = inValue ;
  }

  public: inline void setter_setMAddressOffset (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddressOffset = inValue ;
  }

  public: inline void setter_setMControlRegisterFieldList (const GALGAS_controlRegisterFieldList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterFieldList = inValue ;
  }

  public: inline void setter_setMRegisterBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitCount = inValue ;
  }

  public: inline void setter_setMArraySize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArraySize = inValue ;
  }

  public: inline void setter_setMElementArraySize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElementArraySize = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_omnibusType & in_mType,
                                                const GALGAS_bool & in_mIsReadOnly,
                                                const GALGAS_bool & in_mUserAccess,
                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                const GALGAS_bigint & in_mAddressOffset,
                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                const GALGAS_uint & in_mRegisterBitCount,
                                                const GALGAS_uint & in_mArraySize,
                                                const GALGAS_uint & in_mElementArraySize) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterMap_2D_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_omnibusType & inOperand1,
                                                                                                        const class GALGAS_bool & inOperand2,
                                                                                                        const class GALGAS_bool & inOperand3,
                                                                                                        const class GALGAS_sliceMap & inOperand4,
                                                                                                        const class GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                                        const class GALGAS_bigint & inOperand6,
                                                                                                        const class GALGAS_controlRegisterFieldList & inOperand7,
                                                                                                        const class GALGAS_uint & inOperand8,
                                                                                                        const class GALGAS_uint & inOperand9,
                                                                                                        const class GALGAS_uint & inOperand10,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_omnibusType & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_bool & inOperand3,
                                                                            const class GALGAS_sliceMap & inOperand4,
                                                                            const class GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const class GALGAS_bigint & inOperand6,
                                                                            const class GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const class GALGAS_uint & inOperand8,
                                                                            const class GALGAS_uint & inOperand9,
                                                                            const class GALGAS_uint & inOperand10,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @registerGroupKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_registerGroupKind_single : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_registerGroupKind_single (const GALGAS_bigint inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_registerGroupKind_single (void) { }
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_registerGroupKind_arrayGroup : public cEnumAssociatedValues {
  public: const GALGAS_lbigintlist mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_registerGroupKind_arrayGroup (const GALGAS_lbigintlist inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_registerGroupKind_arrayGroup (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedControlRegisterArrayGroupDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration (const class cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lbigintlist readProperty_mBaseAddresses (void) const ;
  public: void setProperty_mBaseAddresses (const GALGAS_lbigintlist & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedControlRegisterArrayGroupDeclaration init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lbigintlist & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedControlRegisterArrayGroupDeclaration extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedControlRegisterArrayGroupDeclaration class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lbigintlist & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedControlRegisterArrayGroupDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedControlRegisterArrayGroupDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lbigintlist & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mGroupName ;
  public: GALGAS_lbigintlist mProperty_mBaseAddresses ;


//--- Default constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                              const GALGAS_lbigintlist & in_mBaseAddresses
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
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak (const class GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & operator = (const class GALGAS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration bang_decoratedControlRegisterArrayGroupDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupArrayList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupArrayList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mGroupName ;
  public: inline GALGAS_lstring readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GALGAS_lbigintlist mProperty_mBaseAddresses ;
  public: inline GALGAS_lbigintlist readProperty_mBaseAddresses (void) const {
    return mProperty_mBaseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupArrayList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMBaseAddresses (const GALGAS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseAddresses = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterGroupArrayList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & in_mGroupName,
                                                           const GALGAS_lbigintlist & in_mBaseAddresses) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterGroupArrayList_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lbigintlist & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupArrayList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterGroupArrayList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lbigintlist & inOperand1,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterGroupArrayList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterGroupArrayList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByAddress sorted list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByAddress : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByAddress (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterByAddress init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByAddress extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterByAddress class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterByAddress class_func_sortedListWithValue (const class GALGAS_bigint & inOperand0,
                                                                                       const class GALGAS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterByAddress inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_bigint inArgument0,
                                               class GALGAS_string inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_controlRegisterByAddress_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterByAddress ;
 
} ; // End of GALGAS_controlRegisterByAddress class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterByAddress : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterByAddress (const GALGAS_controlRegisterByAddress & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mHTML (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterByAddress_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByAddress_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByAddress_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bigint mProperty_mAddress ;
  public: inline GALGAS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GALGAS_string mProperty_mHTML ;
  public: inline GALGAS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByAddress_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_controlRegisterByAddress_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterByAddress_2D_element (const GALGAS_bigint & in_mAddress,
                                                      const GALGAS_string & in_mHTML) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_controlRegisterByAddress_2D_element init_21__21_ (const class GALGAS_bigint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByAddress_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterByAddress_2D_element class_func_new (const class GALGAS_bigint & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_controlRegisterByAddress_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_controlRegisterByAddress_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2D_element ;

