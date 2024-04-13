#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmGenerationInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmGenerationInstruction_2D_weak : public GALGAS_abstractLLVMInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmGenerationInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmGenerationInstruction_2D_weak (const class GALGAS_llvmGenerationInstruction & inSource) ;

  public: GALGAS_llvmGenerationInstruction_2D_weak & operator = (const class GALGAS_llvmGenerationInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmGenerationInstruction bang_llvmGenerationInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmGenerationInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmGenerationInstruction_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmGenerationInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmGenerationInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmVarInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmVarInstruction_2D_weak : public GALGAS_abstractLLVMInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_llvmVarInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_llvmVarInstruction_2D_weak (const class GALGAS_llvmVarInstruction & inSource) ;

  public: GALGAS_llvmVarInstruction_2D_weak & operator = (const class GALGAS_llvmVarInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_llvmVarInstruction bang_llvmVarInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmVarInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmVarInstruction_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_llvmVarInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_llvmVarInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (class GALGAS_llvmGenerationInstructionList & ioObject,
                                   const class GALGAS_lstring constin_inReturnType,
                                   const class GALGAS_lstring constin_inReturnValue,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const class GALGAS_llvmGenerationInstructionList inObject,
                                           const class GALGAS_ctCheckMap constin_inMap,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (class cPtr_abstractLLVMInstruction * inObject,
                                               class GALGAS_ctCheckMap & io_ioMap,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentGenerationVarMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentGenerationVarMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_assignmentGenerationVarMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentGenerationVarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_assignmentGenerationVarMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inSource) ;
  public: GALGAS_assignmentGenerationVarMap & operator = (const GALGAS_assignmentGenerationVarMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assignmentGenerationVarMap init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentGenerationVarMap extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentGenerationVarMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_assignmentGenerationVarMap class_func_mapWithMapToOverride (const class GALGAS_assignmentGenerationVarMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_assignmentGenerationVarMap add_operation (const GALGAS_assignmentGenerationVarMap & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_string constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_assignmentGenerationVarMap getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_assignmentGenerationVarMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_assignmentGenerationVarMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_assignmentGenerationVarMap ;
 
} ; // End of GALGAS_assignmentGenerationVarMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_assignmentGenerationVarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_assignmentGenerationVarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@assignmentGenerationVarMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_assignmentGenerationVarMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mValue ;

//--- Constructors
  public: cMapElement_assignmentGenerationVarMap (const GALGAS_assignmentGenerationVarMap_2D_element & inValue
                                                  COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_assignmentGenerationVarMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_string & in_mValue
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
// Phase 1: @assignmentGenerationVarMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentGenerationVarMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mValue ;
  public: inline GALGAS_string readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_assignmentGenerationVarMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_assignmentGenerationVarMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & in_lkey,
                                                        const GALGAS_string & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_assignmentGenerationVarMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentGenerationVarMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentGenerationVarMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentGenerationVarMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentGenerationVarMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const class GALGAS_llvmGenerationInstructionList inObject,
                                     const class GALGAS_assignmentGenerationVarMap constin_inVarMap,
                                     const class GALGAS_assignmentGenerationVarMap constin_inTypeMap,
                                     class GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                     class GALGAS_uint & io_ioTemporaryIndex,
                                     class GALGAS_allocaList & io_ioAllocaList,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (class cPtr_abstractLLVMInstruction * inObject,
                                         class GALGAS_assignmentGenerationVarMap & io_ioVarMap,
                                         class GALGAS_assignmentGenerationVarMap & io_ioTypeMap,
                                         class GALGAS_stringlist & io_ioInstructionAsStringListIR,
                                         class GALGAS_uint & io_ioTemporaryIndex,
                                         class GALGAS_allocaList & io_ioAllocaList,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_grammar : public cParser_omnibus_5F_syntax {
//------------------------------------- 'assignment_combined_with_operator' non terminal
//--- 'parse' label
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (GALGAS_omnibusInfixOperator & outArgument0,
                                                                       GALGAS_location & outArgument1,
                                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimeInfixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_compileTimeInfixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compileTimeInfixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compileTimeInfixOperator_ (GALGAS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compileTimePrefixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_compileTimePrefixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compileTimePrefixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compileTimePrefixOperator_ (GALGAS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_ (GALGAS_ctExpressionAST & outArgument0,
                                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_addition' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_addition_ (GALGAS_ctExpressionAST & outArgument0,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_and' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (GALGAS_ctExpressionAST & outArgument0,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_bitwise_xor' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (GALGAS_ctExpressionAST & outArgument0,
                                                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_comparison' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (GALGAS_ctExpressionAST & outArgument0,
                                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_equality' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_equality_ (GALGAS_ctExpressionAST & outArgument0,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_product' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_product_ (GALGAS_ctExpressionAST & outArgument0,
                                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_expression_shift' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_expression_5F_shift_ (GALGAS_ctExpressionAST & outArgument0,
                                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'compile_time_primary' non terminal
//--- 'parse' label
  public: virtual void nt_compile_5F_time_5F_primary_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_compile_5F_time_5F_primary_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_compile_5F_time_5F_primary_ (GALGAS_ctExpressionAST & outArgument0,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'control_register_lvalue' non terminal
//--- 'parse' label
  public: virtual void nt_control_5F_register_5F_lvalue_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_control_5F_register_5F_lvalue_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_control_5F_register_5F_lvalue_ (GALGAS_ast & ioArgument0,
                                                          GALGAS_controlRegisterLValueAST & outArgument1,
                                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'effective_parameters' non terminal
//--- 'parse' label
  public: virtual void nt_effective_5F_parameters_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_effective_5F_parameters_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_effective_5F_parameters_ (GALGAS_ast & ioArgument0,
                                                    GALGAS_effectiveArgumentListAST & outArgument1,
                                                    GALGAS_location & outArgument2,
                                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GALGAS_ast & ioArgument0,
                                       GALGAS_expressionAST & outArgument1,
                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_access_list' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_access_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_access_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_access_5F_list_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_primaryInExpressionAccessListAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_addition' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_addition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_addition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_addition_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_expressionAST & outArgument1,
                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_and' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_and_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_or' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_or_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_or_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_or_ (GALGAS_ast & ioArgument0,
                                                        GALGAS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_bitwise_xor' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_bitwise_5F_xor_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_bitwise_5F_xor_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_bitwise_5F_xor_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_comparison' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_comparison_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_comparison_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_comparison_ (GALGAS_ast & ioArgument0,
                                                     GALGAS_expressionAST & outArgument1,
                                                     Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_equality' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_equality_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_equality_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_equality_ (GALGAS_ast & ioArgument0,
                                                   GALGAS_expressionAST & outArgument1,
                                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_if' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_if_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_if_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_if_ (GALGAS_ast & ioArgument0,
                                             GALGAS_ifExpressionAST & outArgument1,
                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_logical_and' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_logical_5F_and_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_logical_5F_and_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_logical_5F_and_ (GALGAS_ast & ioArgument0,
                                                         GALGAS_expressionAST & outArgument1,
                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_product' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_product_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_product_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_product_ (GALGAS_ast & ioArgument0,
                                                  GALGAS_expressionAST & outArgument1,
                                                  Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'expression_shift' non terminal
//--- 'parse' label
  public: virtual void nt_expression_5F_shift_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_5F_shift_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_5F_shift_ (GALGAS_ast & ioArgument0,
                                                GALGAS_expressionAST & outArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_function_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_function_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_function_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                    const GALGAS_lstring inArgument1,
                                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'function_header' non terminal
//--- 'parse' label
  public: virtual void nt_function_5F_header_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_function_5F_header_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_function_5F_header_ (GALGAS_ast & ioArgument0,
                                               GALGAS_mode & outArgument1,
                                               GALGAS_lstring & outArgument2,
                                               GALGAS_lstringlist & outArgument3,
                                               GALGAS_routineFormalArgumentListAST & outArgument4,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_generic_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_generic_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_generic_5F_formal_5F_arguments_ (GALGAS_genericFormalParameterList & outArgument0,
                                                           Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'generic_where_clause' non terminal
//--- 'parse' label
  public: virtual void nt_generic_5F_where_5F_clause_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_generic_5F_where_5F_clause_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_generic_5F_where_5F_clause_ (GALGAS_ctExpressionAST & outArgument0,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guard' non terminal
//--- 'parse' label
  public: virtual void nt_guard_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_guard_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_guard_ (GALGAS_ast & ioArgument0,
                                  const GALGAS_lstring inArgument1,
                                  const GALGAS_string inArgument2,
                                  Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'guarded_command' non terminal
//--- 'parse' label
  public: virtual void nt_guarded_5F_command_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_guarded_5F_command_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_guarded_5F_command_ (GALGAS_ast & ioArgument0,
                                               const GALGAS_bool inArgument1,
                                               GALGAS_guardedCommandAST & outArgument2,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_if_5F_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_if_5F_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_if_5F_instruction_ (GALGAS_ast & ioArgument0,
                                              GALGAS_ifInstructionAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'import_file' non terminal
//--- 'parse' label
  public: virtual void nt_import_5F_file_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_import_5F_file_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_import_5F_file_ (GALGAS_lstringlist & ioArgument0,
                                           Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_ (GALGAS_ast & ioArgument0,
                                        GALGAS_instructionListAST & ioArgument1,
                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public: virtual void nt_instructionList_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instructionList_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instructionList_ (GALGAS_ast & ioArgument0,
                                            GALGAS_instructionListAST & outArgument1,
                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'isr_in_driver' non terminal
//--- 'parse' label
  public: virtual void nt_isr_5F_in_5F_driver_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_isr_5F_in_5F_driver_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_isr_5F_in_5F_driver_ (GALGAS_ast & ioArgument0,
                                                const GALGAS_lstring inArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvmPrefixOperator' non terminal
//--- 'parse' label
  public: virtual void nt_llvmPrefixOperator_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvmPrefixOperator_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvmPrefixOperator_ (GALGAS_llvmPrefixOperatorEnumeration & outArgument0,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_function_header' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_function_5F_header_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_function_5F_header_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_function_5F_header_ (GALGAS_lstring & outArgument0,
                                                       GALGAS_lstring & outArgument1,
                                                       GALGAS_genericFormalParameterList & outArgument2,
                                                       Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_instruction_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_instruction_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_instruction_ (GALGAS_abstractLLVMInstruction & outArgument0,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'llvm_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_llvm_5F_instruction_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_llvm_5F_instruction_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_llvm_5F_instruction_5F_list_ (GALGAS_llvmGenerationInstructionList & outArgument0,
                                                        Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue' non terminal
//--- 'parse' label
  public: virtual void nt_lvalue_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_lvalue_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_lvalue_ (GALGAS_ast & ioArgument0,
                                   GALGAS_LValueAST & outArgument1,
                                   Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'lvalue_operand' non terminal
//--- 'parse' label
  public: virtual void nt_lvalue_5F_operand_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_lvalue_5F_operand_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_lvalue_5F_operand_ (GALGAS_ast & ioArgument0,
                                              GALGAS_LValueOperandAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'mode' non terminal
//--- 'parse' label
  public: virtual void nt_mode_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_mode_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_mode_ (GALGAS_mode & outArgument0,
                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public: virtual void nt_primary_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_primary_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_primary_ (GALGAS_ast & ioArgument0,
                                    GALGAS_expressionAST & outArgument1,
                                    Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_or_public_struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                                         GALGAS_structurePropertyListAST & ioArgument1,
                                                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'private_struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_private_5F_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                                         GALGAS_structurePropertyListAST & ioArgument1,
                                                                         Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_call' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_call_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_call_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_call_ (GALGAS_ast & ioArgument0,
                                              GALGAS_callInstructionAST & outArgument1,
                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                             GALGAS_routineFormalArgumentListAST & outArgument1,
                                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_input_formal_arguments' non terminal
//--- 'parse' label
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (GALGAS_ast & ioArgument0,
                                                                      GALGAS_routineFormalArgumentListAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'propertyGetterSetter' non terminal
//--- 'parse' label
  public: virtual void nt_propertyGetterSetter_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_propertyGetterSetter_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_propertyGetterSetter_ (GALGAS_ast & ioArgument0,
                                                 const GALGAS_propertyVisibility inArgument1,
                                                 const GALGAS_lstring inArgument2,
                                                 const GALGAS_propertyAttributeList inArgument3,
                                                 const GALGAS_lstring inArgument4,
                                                 GALGAS_structurePropertyListAST & ioArgument5,
                                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'registerDeclaration' non terminal
//--- 'parse' label
  public: virtual void nt_registerDeclaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_registerDeclaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_registerDeclaration_ (GALGAS_ast & ioArgument0,
                                                GALGAS_controlRegisterNameListAST & ioArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                            GALGAS_lstringlist & outArgument1,
                                            GALGAS_location & outArgument2,
                                            Lexique_omnibus_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_ast & ioArgument0,
                                                  GALGAS_lstringlist & outArgument1,
                                                  GALGAS_location & outArgument2
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_ast & ioArgument0,
                                                    GALGAS_lstringlist & outArgument1,
                                                    GALGAS_location & outArgument2
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'staticArrayProperty' non terminal
//--- 'parse' label
  public: virtual void nt_staticArrayProperty_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_staticArrayProperty_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_staticArrayProperty_ (GALGAS_ast & ioArgument0,
                                                GALGAS_staticListPropertyListAST & ioArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'staticArray_exp' non terminal
//--- 'parse' label
  public: virtual void nt_staticArray_5F_exp_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_staticArray_5F_exp_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_staticArray_5F_exp_ (GALGAS_ast & ioArgument0,
                                               GALGAS_extendStaticListElementAST & ioArgument1,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'struct_property_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_struct_5F_property_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_struct_5F_property_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_struct_5F_property_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                              const GALGAS_propertyVisibility inArgument1,
                                                              GALGAS_structurePropertyListAST & ioArgument2,
                                                              Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'system_routine_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_system_5F_routine_5F_declaration_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_system_5F_routine_5F_declaration_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_system_5F_routine_5F_declaration_ (GALGAS_ast & ioArgument0,
                                                             const GALGAS_lstring inArgument1,
                                                             Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'task_event' non terminal
//--- 'parse' label
  public: virtual void nt_task_5F_event_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_task_5F_event_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_task_5F_event_ (GALGAS_ast & ioArgument0,
                                          const GALGAS_lstring inArgument1,
                                          GALGAS_taskSetupListAST & ioArgument2,
                                          GALGAS_taskSetupListAST & ioArgument3,
                                          GALGAS_taskSetupListAST & ioArgument4,
                                          Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'type_definition' non terminal
//--- 'parse' label
  public: virtual void nt_type_5F_definition_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_type_5F_definition_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_5F_definition_ (GALGAS_ast & ioArgument0,
                                               GALGAS_lstring & outArgument1,
                                               Lexique_omnibus_5F_lexique * inCompiler) ;

  public: virtual int32_t select_omnibus_5F_syntax_0 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_1 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_2 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_3 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_4 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_5 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_6 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_7 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_8 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_9 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_10 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_11 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_12 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_13 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_14 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_15 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_16 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_17 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_18 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_19 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_20 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_21 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_22 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_23 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_24 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_25 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_26 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_27 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_28 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_29 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_30 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_31 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_32 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_33 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_34 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_35 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_36 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_37 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_38 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_39 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_40 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_41 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_42 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_43 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_44 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_45 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_46 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_47 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_48 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_49 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_50 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_51 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_52 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_53 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_54 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_55 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_56 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_57 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_58 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_59 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_60 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_61 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_62 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_63 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_64 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_65 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_66 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_67 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_68 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_69 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_70 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_71 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_72 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_73 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_74 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_75 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_76 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_77 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_78 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_79 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_80 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_81 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_82 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_83 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_84 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_85 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_86 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_87 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_88 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_89 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_90 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_91 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_92 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_93 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_94 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_95 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_96 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_97 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_98 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_99 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_100 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_101 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_102 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_103 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_104 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_105 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_106 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_107 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_108 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_109 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_110 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_111 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_112 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_113 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_114 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_115 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_116 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_117 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_118 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_119 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_120 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_121 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_122 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_123 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_124 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_125 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_126 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_127 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_128 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_129 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_130 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_131 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_132 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_133 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_134 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_135 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_136 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_137 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_138 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_139 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_140 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_syntax_141 (Lexique_omnibus_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
