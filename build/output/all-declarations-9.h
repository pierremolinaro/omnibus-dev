#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_target_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_target_5F_grammar : public cParser_omnibus_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'configuration_key' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_key_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_key_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_key_ (const GALGAS_string inArgument0,
                                                 Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_start_5F_symbol_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_start_5F_symbol_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_start_5F_symbol_ (GALGAS_ast & ioArgument0,
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

//------------------------------------- 'interruptConfigList' non terminal
//--- 'parse' label
  public: virtual void nt_interruptConfigList_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interruptConfigList_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interruptConfigList_ (GALGAS_interruptionConfigurationList & outArgument0,
                                                GALGAS_enumerationConstantList & outArgument1,
                                                Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'python_utility_tool_list' non terminal
//--- 'parse' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (Lexique_omnibus_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist & outArgument0,
                                                              Lexique_omnibus_5F_lexique * inCompiler) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
// Phase 1: @configurationDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_configurationDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_configurationDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_configurationDeclarationAST_2D_weak (const class GALGAS_configurationDeclarationAST & inSource) ;

  public: GALGAS_configurationDeclarationAST_2D_weak & operator = (const class GALGAS_configurationDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_configurationDeclarationAST bang_configurationDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_configurationDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_configurationDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_configurationDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_configurationDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertDriver'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (class GALGAS_universalValuedObjectMap & ioObject,
                                   const class GALGAS_lstring constin_inDriverName,
                                   const class GALGAS_bool constin_inIsInstancied,
                                   const class GALGAS_omnibusType constin_inDriverType,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                           const class GALGAS_lstring constin_inConstantName,
                                           const class GALGAS_objectIR constin_inConstantObjectIR,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (class GALGAS_universalValuedObjectMap & ioObject,
                                               const class GALGAS_lstring constin_inSyncInstanceName,
                                               const class GALGAS_omnibusType constin_inType,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalConstantName,
                                          const class GALGAS_bool constin_inIsFormalInputArgument,
                                          const class GALGAS_omnibusType constin_inType,
                                          const class GALGAS_lstring constin_inOmnibusConstantName,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                              const class GALGAS_lstring constin_inLocalConstantName,
                                              const class GALGAS_bool constin_inIsFormalInputArgument,
                                              const class GALGAS_omnibusType constin_inType,
                                              const class GALGAS_lstring constin_inOmnibusConstantName,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalVariableName,
                                          const class GALGAS_omnibusType constin_inType,
                                          const class GALGAS_lstring constin_inOmnibusName,
                                          const class GALGAS_valuedObjectState constin_inVariableInitialState,
                                          const class GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const class GALGAS_universalValuedObjectMap inObject,
                                   const class GALGAS_lstring constin_inValuedObjectName,
                                   class GALGAS_valuedObject & out_outEntity,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const class GALGAS_universalValuedObjectMap inObject,
                                         const class GALGAS_lstring constin_inValuedObjectName,
                                         const class GALGAS_mode constin_inMode,
                                         const class GALGAS_stringset constin_inInitializedDriverSet,
                                         class GALGAS_objectIR & out_outObjectIR,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForGlobalSyncInstance (const class GALGAS_string & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                 const class GALGAS_lstring constin_inValuedObjectName,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                      const class GALGAS_lstring constin_inValuedObjectName,
                                                      class GALGAS_objectIR & out_outObjectIR,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                       const class GALGAS_lstring constin_inValuedObjectName,
                                                       class GALGAS_objectIR & out_outObjectIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                           const class GALGAS_lstring constin_inValuedObjectName,
                                                           class GALGAS_objectIR & out_outObjectIR,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const class GALGAS_universalValuedObjectMap inObject,
                                             const class GALGAS_semanticContext constin_inContext,
                                             const class GALGAS_omnibusType constin_inSelfType,
                                             const class GALGAS_LValueAST constin_inLValue,
                                             class GALGAS_omnibusType & out_outType,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const class GALGAS_LValueOperandAST inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_omnibusType & io_ioType,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertyGetterMap' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterMap extensionGetter_propertyGetterMap (const class GALGAS_semanticContext & inObject,
                                                                  const class GALGAS_omnibusType & constinArgument0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const class GALGAS_universalValuedObjectMap inObject,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GALGAS_universalValuedObjectMap & ioObject,
                                    const class GALGAS_location constin_inErrorLocation,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@staticEntityMap findOrAddStaticString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (class GALGAS_staticEntityMap & ioObject,
                                            class GALGAS_string in_inString,
                                            class GALGAS_uint & out_outIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (class cPtr_omnibusType * inObject,
                                                 const class GALGAS_location constin_inErrorLocation,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsNotCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (class cPtr_omnibusType * inObject,
                                                    const class GALGAS_location constin_inErrorLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRetain'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (class cPtr_omnibusType * inObject,
                                         const class GALGAS_string constin_inOmnibusName,
                                         class GALGAS_string & io_ioLLVMcode,
                                         class GALGAS_generationAdds & io_ioGenerationAdds,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                            const class GALGAS_uintlist constin_inPropertyIndexPath,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateInsulate'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (class cPtr_omnibusType * inObject,
                                           const class GALGAS_string constin_inOmnibusName,
                                           class GALGAS_string & io_ioLLVMcode,
                                           class GALGAS_generationAdds & io_ioGenerationAdds,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRelease'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (class cPtr_omnibusType * inObject,
                                          const class GALGAS_string constin_inOmnibusName,
                                          class GALGAS_string & io_ioLLVMcode,
                                          class GALGAS_generationAdds & io_ioGenerationAdds,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean (const class cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolImplicitConverterToBoolean class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolImplicitConverterToBoolean class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GALGAS_objectIR inReceiverOperand,
           const class GALGAS_location inErrorLocation,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_implicitBooleanConversionResult & outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_compileTimeBoolImplicitConverterToBoolean (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeBoolImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak (const class GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) ;

  public: GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_compileTimeBoolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean bang_compileTimeBoolImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolNotOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolNotOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolNotOperator (const class cPtr_compileTimeBoolNotOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolNotOperator extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolNotOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolNotOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolNotOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolNotOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inReceiverOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_omnibusType inResultType,
           const class GALGAS_bool inDoNotGeneratePanicCode,
           const class GALGAS_bool inSafeMode,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_compileTimeBoolNotOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeBoolNotOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolNotOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolNotOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeBoolNotOperator_2D_weak (const class GALGAS_compileTimeBoolNotOperator & inSource) ;

  public: GALGAS_compileTimeBoolNotOperator_2D_weak & operator = (const class GALGAS_compileTimeBoolNotOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeBoolNotOperator bang_compileTimeBoolNotOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolNotOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolNotOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolNotOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolNotOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolEqualOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolEqualOperator (const class cPtr_compileTimeBoolEqualOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolEqualOperator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolEqualOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolEqualOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolEqualOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolEqualOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_objectIR inLeftOperand,
           const class GALGAS_location inOperatorLocation,
           const class GALGAS_objectIR inRightOperand,
           const class GALGAS_omnibusType inResultType,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_allocaList & ioAllocaList,
           class GALGAS_instructionListIR & ioInstructionGenerationList,
           class GALGAS_objectIR & outResultValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_compileTimeBoolEqualOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeBoolEqualOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolEqualOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolEqualOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeBoolEqualOperator_2D_weak (const class GALGAS_compileTimeBoolEqualOperator & inSource) ;

  public: GALGAS_compileTimeBoolEqualOperator_2D_weak & operator = (const class GALGAS_compileTimeBoolEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeBoolEqualOperator bang_compileTimeBoolEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolEqualOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolEqualOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_compileTimeBoolEqualOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolEqualOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixedSizeArrayAssignmentOperatorUsage reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixedSizeArrayAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage (const class cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;

  public: class GALGAS_uint readProperty_mArraySize (void) const ;

  public: class GALGAS_string readProperty_mAssignValueToElements_5F_functionName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixedSizeArrayAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixedSizeArrayAssignmentOperatorUsage class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                                    const class GALGAS_uint & inOperand1,
                                                                                    const class GALGAS_string & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArraySize (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssignValueToElements_5F_functionName (class GALGAS_string inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixedSizeArrayAssignmentOperatorUsage class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_fixedSizeArrayAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method generateCode
  public: virtual void method_generateCode (class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_instructionListIR & ioInstructionListIR,
           class GALGAS_allocaList & ioAllocaList,
           const class GALGAS_omnibusType inTargetType,
           const class GALGAS_string inTargetLLVMName,
           const class GALGAS_objectIR inSourcePossibleReference,
           const class GALGAS_location inErrorLocation,
           const class GALGAS_bool inTargetIsInitialized,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_string mProperty_mAssignValueToElements_5F_functionName ;

//--- Constructor
  public: cPtr_fixedSizeArrayAssignmentOperatorUsage (const GALGAS_omnibusType & in_mElementType,
                                                      const GALGAS_uint & in_mArraySize,
                                                      const GALGAS_string & in_mAssignValueToElements_5F_functionName
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
// Phase 1: @fixedSizeArrayAssignmentOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak : public GALGAS_abstractAssignmentOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak (const class GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) ;

  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & operator = (const class GALGAS_fixedSizeArrayAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage bang_fixedSizeArrayAssignmentOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_omnibusType readProperty_mFixedSizeArrayType (void) const ;

  public: class GALGAS_omnibusType readProperty_mElementType (void) const ;

  public: class GALGAS_uint readProperty_mArraySize (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_omnibusType & inOperand3,
                                                                                                    const class GALGAS_omnibusType & inOperand4,
                                                                                                    const class GALGAS_uint & inOperand5
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArraySize (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFixedSizeArrayType (class GALGAS_omnibusType inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & ioLLVMcode,
           const class GALGAS_generationContext inGenerationContext,
           class GALGAS_generationAdds & ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_omnibusType mProperty_mFixedSizeArrayType ;
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;

//--- Constructor
  public: cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                      const GALGAS_bool & in_isRequired,
                                                                      const GALGAS_bool & in_warnsIfUnused,
                                                                      const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                      const GALGAS_omnibusType & in_mElementType,
                                                                      const GALGAS_uint & in_mArraySize
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
// Phase 1: @assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (const class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & operator = (const class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_typeOpaqueDeclarationAST * inObject,
                                                     class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const class GALGAS_controlRegisterGroupArrayList inObject,
                                       class GALGAS_string & io_ioLLVMcode,
                                       const class GALGAS_uint constin_inPointerSize,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_registerGroupAddressArrayLLVMname (const class GALGAS_string & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const class GALGAS_semanticContext constinArgument0,
                                                                                 const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                                                 class GALGAS_universalValuedObjectMap & ioArgument2,
                                                                                 class GALGAS_routineFormalArgumentListIR & ioArgument3,
                                                                                 const class GALGAS_bool constinArgument4,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

