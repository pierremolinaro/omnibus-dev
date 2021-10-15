#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR omnibus_target_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_omnibus_5F_target_5F_grammar : public cParser_omnibus_5F_target_5F_specific_5F_syntax {
//------------------------------------- 'configuration_key' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_key_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_key_ (const GALGAS_string inArgument0,
                                                 C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_start_5F_symbol_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                                             GALGAS_lstringlist & outArgument1,
                                                             GALGAS_location & outArgument2,
                                                             C_Lexique_omnibus_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_ast & ioArgument0,
                                                  GALGAS_lstringlist & outArgument1,
                                                  GALGAS_location & outArgument2
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_ast & ioArgument0,
                                                    GALGAS_lstringlist & outArgument1,
                                                    GALGAS_location & outArgument2
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

//------------------------------------- 'interruptConfigList' non terminal
//--- 'parse' label
  public: virtual void nt_interruptConfigList_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interruptConfigList_ (GALGAS_interruptionConfigurationList & outArgument0,
                                                GALGAS_enumerationConstantList & outArgument1,
                                                C_Lexique_omnibus_5F_lexique * inCompiler) ;

//------------------------------------- 'python_utility_tool_list' non terminal
//--- 'parse' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_parse (C_Lexique_omnibus_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_python_5F_utility_5F_tool_5F_list_ (GALGAS__32_lstringlist & outArgument0,
                                                              C_Lexique_omnibus_5F_lexique * inCompiler) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (C_Lexique_omnibus_5F_lexique *) ;

  public: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (C_Lexique_omnibus_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertDriver'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertDriver (class GALGAS_universalValuedObjectMap & ioObject,
                                   const class GALGAS_lstring constin_inDriverName,
                                   const class GALGAS_bool constin_inIsInstancied,
                                   const class GALGAS_omnibusType constin_inDriverType,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                           const class GALGAS_lstring constin_inConstantName,
                                           const class GALGAS_objectIR constin_inConstantObjectIR,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertGlobalSyncInstance'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertGlobalSyncInstance (class GALGAS_universalValuedObjectMap & ioObject,
                                               const class GALGAS_lstring constin_inSyncInstanceName,
                                               const class GALGAS_omnibusType constin_inType,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalConstantName,
                                          const class GALGAS_bool constin_inIsFormalInputArgument,
                                          const class GALGAS_omnibusType constin_inType,
                                          const class GALGAS_lstring constin_inOmnibusConstantName,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertUsedLocalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (class GALGAS_universalValuedObjectMap & ioObject,
                                              const class GALGAS_lstring constin_inLocalConstantName,
                                              const class GALGAS_bool constin_inIsFormalInputArgument,
                                              const class GALGAS_omnibusType constin_inType,
                                              const class GALGAS_lstring constin_inOmnibusConstantName,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertLocalVariable (class GALGAS_universalValuedObjectMap & ioObject,
                                          const class GALGAS_lstring constin_inLocalVariableName,
                                          const class GALGAS_omnibusType constin_inType,
                                          const class GALGAS_lstring constin_inOmnibusName,
                                          const class GALGAS_valuedObjectState constin_inVariableInitialState,
                                          const class GALGAS_bool constin_inObjectShouldBeValuedAtEndOfScope,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchEntity'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchEntity (const class GALGAS_universalValuedObjectMap inObject,
                                   const class GALGAS_lstring constin_inValuedObjectName,
                                   class GALGAS_valuedObject & out_outEntity,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObject'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObject (const class GALGAS_universalValuedObjectMap inObject,
                                         const class GALGAS_lstring constin_inValuedObjectName,
                                         const class GALGAS_mode constin_inMode,
                                         const class GALGAS_stringset constin_inInitializedDriverSet,
                                         class GALGAS_objectIR & out_outObjectIR,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForGlobalSyncInstance (const class GALGAS_string & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap readAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                 const class GALGAS_lstring constin_inValuedObjectName,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                      const class GALGAS_lstring constin_inValuedObjectName,
                                                      class GALGAS_objectIR & out_outObjectIR,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                       const class GALGAS_lstring constin_inValuedObjectName,
                                                       class GALGAS_objectIR & out_outObjectIR,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap searchValuedObjectForReadWriteAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_searchValuedObjectForReadWriteAccess (class GALGAS_universalValuedObjectMap & ioObject,
                                                           const class GALGAS_lstring constin_inValuedObjectName,
                                                           class GALGAS_objectIR & out_outObjectIR,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap searchValuedObjectType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchValuedObjectType (const class GALGAS_universalValuedObjectMap inObject,
                                             const class GALGAS_semanticContext constin_inContext,
                                             const class GALGAS_omnibusType constin_inSelfType,
                                             const class GALGAS_LValueAST constin_inLValue,
                                             class GALGAS_omnibusType & out_outType,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@LValueOperandAST getValuedObjectType'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_getValuedObjectType (const class GALGAS_LValueOperandAST inObject,
                                          const class GALGAS_semanticContext constin_inContext,
                                          class GALGAS_omnibusType & io_ioType,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticContext propertyGetterMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterMap extensionGetter_propertyGetterMap (const class GALGAS_semanticContext & inObject,
                                                                  const class GALGAS_omnibusType & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@universalValuedObjectMap checkLocalVariableFinalState'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkLocalVariableFinalState (const class GALGAS_universalValuedObjectMap inObject,
                                                   class GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForSelectBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openOverrideForRepeatBlock'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (class GALGAS_universalValuedObjectMap & ioObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeOverride'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (class GALGAS_universalValuedObjectMap & ioObject,
                                    const class GALGAS_location constin_inErrorLocation,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@staticEntityMap findOrAddStaticString'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_findOrAddStaticString (class GALGAS_staticEntityMap & ioObject,
                                            class GALGAS_string in_inString,
                                            class GALGAS_uint & out_outIndex,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusType_checkIsCompileTimeType) (const class cPtr_omnibusType * inObject,
                                                                             const class GALGAS_location constinArgument0,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkIsCompileTimeType (const int32_t inClassIndex,
                                                  extensionMethodSignature_omnibusType_checkIsCompileTimeType inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsCompileTimeType (const class cPtr_omnibusType * inObject,
                                                 const GALGAS_location constin_inErrorLocation,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType checkIsNotCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusType_checkIsNotCompileTimeType) (const class cPtr_omnibusType * inObject,
                                                                                const class GALGAS_location constinArgument0,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkIsNotCompileTimeType (const int32_t inClassIndex,
                                                     extensionMethodSignature_omnibusType_checkIsNotCompileTimeType inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkIsNotCompileTimeType (const class cPtr_omnibusType * inObject,
                                                    const GALGAS_location constin_inErrorLocation,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType isCompileTimeType'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_omnibusType_isCompileTimeType) (const class cPtr_omnibusType * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isCompileTimeType (const int32_t inClassIndex,
                                             enterExtensionGetter_omnibusType_isCompileTimeType inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isCompileTimeType (const cPtr_omnibusType * inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType instanciable'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_omnibusType_instanciable) (const class cPtr_omnibusType * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_instanciable (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_instanciable inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_instanciable (const cPtr_omnibusType * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType copyable'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_omnibusType_copyable) (const class cPtr_omnibusType * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_copyable (const int32_t inClassIndex,
                                    enterExtensionGetter_omnibusType_copyable inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_copyable (const cPtr_omnibusType * inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRetain'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusType_generateRetain) (const class cPtr_omnibusType * inObject,
                                                                     const class GALGAS_string constinArgument0,
                                                                     class GALGAS_string & ioArgument1,
                                                                     class GALGAS_generationAdds & ioArgument2,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateRetain (const int32_t inClassIndex,
                                          extensionMethodSignature_omnibusType_generateRetain inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRetain (const class cPtr_omnibusType * inObject,
                                         const GALGAS_string constin_inOmnibusName,
                                         GALGAS_string & io_ioLLVMcode,
                                         GALGAS_generationAdds & io_ioGenerationAdds,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType arcList'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_arcAssignmentList (*enterExtensionGetter_omnibusType_arcList) (const class cPtr_omnibusType * inObject,
                                                                                    const class GALGAS_uintlist constinArgument0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_arcList (const int32_t inClassIndex,
                                   enterExtensionGetter_omnibusType_arcList inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arcAssignmentList callExtensionGetter_arcList (const cPtr_omnibusType * inObject,
                                                            const GALGAS_uintlist constin_inPropertyIndexPath,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateInsulate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusType_generateInsulate) (const class cPtr_omnibusType * inObject,
                                                                       const class GALGAS_string constinArgument0,
                                                                       class GALGAS_string & ioArgument1,
                                                                       class GALGAS_generationAdds & ioArgument2,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateInsulate (const int32_t inClassIndex,
                                            extensionMethodSignature_omnibusType_generateInsulate inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInsulate (const class cPtr_omnibusType * inObject,
                                           const GALGAS_string constin_inOmnibusName,
                                           GALGAS_string & io_ioLLVMcode,
                                           GALGAS_generationAdds & io_ioGenerationAdds,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@omnibusType generateRelease'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_omnibusType_generateRelease) (const class cPtr_omnibusType * inObject,
                                                                      const class GALGAS_string constinArgument0,
                                                                      class GALGAS_string & ioArgument1,
                                                                      class GALGAS_generationAdds & ioArgument2,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateRelease (const int32_t inClassIndex,
                                           extensionMethodSignature_omnibusType_generateRelease inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateRelease (const class cPtr_omnibusType * inObject,
                                          const GALGAS_string constin_inOmnibusName,
                                          GALGAS_string & io_ioLLVMcode,
                                          GALGAS_generationAdds & io_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType descriptionForHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_omnibusType_descriptionForHTMLFile) (const class cPtr_omnibusType * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_descriptionForHTMLFile (const int32_t inClassIndex,
                                                  enterExtensionGetter_omnibusType_descriptionForHTMLFile inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_omnibusType * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType deinitNeeded'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_omnibusType_deinitNeeded) (const class cPtr_omnibusType * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_deinitNeeded (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_deinitNeeded inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_deinitNeeded (const cPtr_omnibusType * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--- Constructor
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeBoolImplicitConverterToBoolean constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeBoolImplicitConverterToBoolean * ptr (void) const { return (const cPtr_compileTimeBoolImplicitConverterToBoolean *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolImplicitConverterToBoolean (const cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeBoolImplicitConverterToBoolean constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeBoolImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeBoolImplicitConverterToBoolean (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolNotOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolNotOperator : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeBoolNotOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeBoolNotOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeBoolNotOperator * ptr (void) const { return (const cPtr_compileTimeBoolNotOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolNotOperator (const cPtr_compileTimeBoolNotOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolNotOperator extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeBoolNotOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeBoolNotOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolNotOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolNotOperator : public cPtr_prefixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeBoolNotOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeBoolEqualOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeBoolEqualOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeBoolEqualOperator * ptr (void) const { return (const cPtr_compileTimeBoolEqualOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolEqualOperator (const cPtr_compileTimeBoolEqualOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolEqualOperator extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeBoolEqualOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeBoolEqualOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolEqualOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeBoolEqualOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMStaticArrayTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--- Constructor
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_userLLVMStaticArrayTypeDefinitionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_userLLVMStaticArrayTypeDefinitionIR * ptr (void) const { return (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMStaticArrayTypeDefinitionIR (const cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMStaticArrayTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_userLLVMStaticArrayTypeDefinitionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_omnibusType & inOperand1,
                                                                                   const class GALGAS_bigint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElementType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSize (class GALGAS_bigint inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMStaticArrayTypeDefinitionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMStaticArrayTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_userLLVMStaticArrayTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_bigint mProperty_mSize ;

//--- Constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                    const GALGAS_omnibusType & in_mElementType,
                                                    const GALGAS_bigint & in_mSize
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bigint getter_mSize (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSize (GALGAS_bigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fixedSizeArrayAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixedSizeArrayAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--- Constructor
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_fixedSizeArrayAssignmentOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_fixedSizeArrayAssignmentOperatorUsage * ptr (void) const { return (const cPtr_fixedSizeArrayAssignmentOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_fixedSizeArrayAssignmentOperatorUsage (const cPtr_fixedSizeArrayAssignmentOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fixedSizeArrayAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixedSizeArrayAssignmentOperatorUsage constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                                     const class GALGAS_uint & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixedSizeArrayAssignmentOperatorUsage & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssignValueToElements_5F_functionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fixedSizeArrayAssignmentOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @fixedSizeArrayAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_fixedSizeArrayAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mElementType ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_string mProperty_mAssignValueToElements_5F_functionName ;

//--- Constructor
  public: cPtr_fixedSizeArrayAssignmentOperatorUsage (const GALGAS_omnibusType & in_mElementType,
                                                      const GALGAS_uint & in_mArraySize,
                                                      const GALGAS_string & in_mAssignValueToElements_5F_functionName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mElementType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_mArraySize (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMArraySize (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mAssignValueToElements_5F_functionName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssignValueToElements_5F_functionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticArrayTypeAssignFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticArrayTypeAssignFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_staticArrayTypeAssignFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticArrayTypeAssignFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_staticArrayTypeAssignFunctionIR * ptr (void) const { return (const cPtr_staticArrayTypeAssignFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_staticArrayTypeAssignFunctionIR (const cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticArrayTypeAssignFunctionIR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticArrayTypeAssignFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_omnibusType & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticArrayTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFixedSizeArrayType (class GALGAS_omnibusType inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mFixedSizeArrayType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticArrayTypeAssignFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @staticArrayTypeAssignFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_staticArrayTypeAssignFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mFixedSizeArrayType ;

//--- Constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                const GALGAS_bool & in_isRequired,
                                                const GALGAS_bool & in_warnsIfUnused,
                                                const GALGAS_omnibusType & in_mFixedSizeArrayType
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mFixedSizeArrayType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFixedSizeArrayType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayRemoveAllFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynArrayRemoveAllFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_dynArrayRemoveAllFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynArrayRemoveAllFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynArrayRemoveAllFunctionIR * ptr (void) const { return (const cPtr_dynArrayRemoveAllFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayRemoveAllFunctionIR (const cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayRemoveAllFunctionIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynArrayRemoveAllFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynArrayRemoveAllFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynArrayRemoveAllFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayRemoveAllFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynArrayRemoveAllFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes

//--- Constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayLengthFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynArrayLengthFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_dynArrayLengthFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynArrayLengthFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynArrayLengthFunctionIR * ptr (void) const { return (const cPtr_dynArrayLengthFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayLengthFunctionIR (const cPtr_dynArrayLengthFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayLengthFunctionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynArrayLengthFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynArrayLengthFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynArrayLengthFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayLengthFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynArrayLengthFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes

//--- Constructor
  public: cPtr_dynArrayLengthFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayAppendFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynArrayAppendFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_dynArrayAppendFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynArrayAppendFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynArrayAppendFunctionIR * ptr (void) const { return (const cPtr_dynArrayAppendFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayAppendFunctionIR (const cPtr_dynArrayAppendFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayAppendFunctionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynArrayAppendFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                        const class GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                        const class GALGAS_string & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynArrayAppendFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArrayTypeProxy (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertFunctionMangledName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mArrayTypeProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mInsertFunctionMangledName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynArrayAppendFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayAppendFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynArrayAppendFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mArrayTypeProxy ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mElementTypeProxy ;
  public: GALGAS_string mProperty_mInsertFunctionMangledName ;

//--- Constructor
  public: cPtr_dynArrayAppendFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mArrayTypeProxy,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeProxy,
                                         const GALGAS_string & in_mInsertFunctionMangledName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mArrayTypeProxy (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMArrayTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeProxy (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mInsertFunctionMangledName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMInsertFunctionMangledName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayInsertFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynArrayInsertFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_dynArrayInsertFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynArrayInsertFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynArrayInsertFunctionIR * ptr (void) const { return (const cPtr_dynArrayInsertFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynArrayInsertFunctionIR (const cPtr_dynArrayInsertFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynArrayInsertFunctionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynArrayInsertFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_unifiedTypeMap_2D_entry & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynArrayInsertFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynArrayInsertFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynArrayInsertFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynArrayInsertFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mElementTypeProxy ;

//--- Constructor
  public: cPtr_dynArrayInsertFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeProxy
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeProxy (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynamicArrayTypeAssignUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--- Constructor
  public: GALGAS_dynamicArrayTypeAssignUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynamicArrayTypeAssignUsage constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynamicArrayTypeAssignUsage * ptr (void) const { return (const cPtr_dynamicArrayTypeAssignUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynamicArrayTypeAssignUsage (const cPtr_dynamicArrayTypeAssignUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignUsage extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynamicArrayTypeAssignUsage constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                           const class GALGAS_string & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssignFunctionName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDynamicArrayType (class GALGAS_omnibusType inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssignFunctionName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mDynamicArrayType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynamicArrayTypeAssignUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignUsage : public cPtr_abstractAssignmentOperatorUsage {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mDynamicArrayType ;
  public: GALGAS_string mProperty_mAssignFunctionName ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignUsage (const GALGAS_omnibusType & in_mDynamicArrayType,
                                            const GALGAS_string & in_mAssignFunctionName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mDynamicArrayType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDynamicArrayType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mAssignFunctionName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssignFunctionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dynamicArrayTypeAssignGenericFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dynamicArrayTypeAssignGenericFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_dynamicArrayTypeAssignGenericFunctionIR * ptr (void) const { return (const cPtr_dynamicArrayTypeAssignGenericFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dynamicArrayTypeAssignGenericFunctionIR (const cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dynamicArrayTypeAssignGenericFunctionIR extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dynamicArrayTypeAssignGenericFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_bool & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dynamicArrayTypeAssignGenericFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignGenericFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                        const GALGAS_bool & in_isRequired,
                                                        const GALGAS_bool & in_warnsIfUnused
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumToUintRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumToUintRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_enumToUintRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumToUintRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_enumToUintRoutineIR * ptr (void) const { return (const cPtr_enumToUintRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_enumToUintRoutineIR (const cPtr_enumToUintRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumToUintRoutineIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumToUintRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_string & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumToUintRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationLLVMTypeName (class GALGAS_string inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationLLVMTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumToUintRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumToUintRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumToUintRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_string mProperty_mEnumerationLLVMTypeName ;

//--- Constructor
  public: cPtr_enumToUintRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                    const GALGAS_bool & in_isRequired,
                                    const GALGAS_bool & in_warnsIfUnused,
                                    const GALGAS_string & in_mEnumerationLLVMTypeName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumerationLLVMTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationLLVMTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structureAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structureAssignmentOperatorUsage : public GALGAS_abstractAssignmentOperatorUsage {
//--- Constructor
  public: GALGAS_structureAssignmentOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structureAssignmentOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_structureAssignmentOperatorUsage * ptr (void) const { return (const cPtr_structureAssignmentOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_structureAssignmentOperatorUsage (const cPtr_structureAssignmentOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structureAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structureAssignmentOperatorUsage constructor_new (const class GALGAS_omnibusType & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structureAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMStructureType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mStructureType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureAssignmentOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structureAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structureAssignmentOperatorUsage : public cPtr_abstractAssignmentOperatorUsage {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mStructureType ;

//--- Constructor
  public: cPtr_structureAssignmentOperatorUsage (const GALGAS_omnibusType & in_mStructureType
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mStructureType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStructureType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structureTypeAssignFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structureTypeAssignFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_structureTypeAssignFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structureTypeAssignFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_structureTypeAssignFunctionIR * ptr (void) const { return (const cPtr_structureTypeAssignFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_structureTypeAssignFunctionIR (const cPtr_structureTypeAssignFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structureTypeAssignFunctionIR extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structureTypeAssignFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_omnibusType & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structureTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMStructureType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mStructureType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureTypeAssignFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structureTypeAssignFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structureTypeAssignFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_omnibusType mProperty_mStructureType ;

//--- Constructor
  public: cPtr_structureTypeAssignFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_omnibusType & in_mStructureType
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mStructureType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStructureType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerBuiltinFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerBuiltinFunctionIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_integerBuiltinFunctionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerBuiltinFunctionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_integerBuiltinFunctionIR * ptr (void) const { return (const cPtr_integerBuiltinFunctionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_integerBuiltinFunctionIR (const cPtr_integerBuiltinFunctionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_integerBuiltinFunctionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerBuiltinFunctionIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_string & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerBuiltinFunctionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIntrinsicName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mIntrinsicName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerBuiltinFunctionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerBuiltinFunctionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_integerBuiltinFunctionIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_string mProperty_mLLVMTypeName ;
  public: GALGAS_string mProperty_mIntrinsicName ;

//--- Constructor
  public: cPtr_integerBuiltinFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_string & in_mLLVMTypeName,
                                         const GALGAS_string & in_mIntrinsicName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mIntrinsicName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIntrinsicName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@typeOpaqueDeclarationAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph) (const class cPtr_typeOpaqueDeclarationAST * inObject,
                                                                                              class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_typeOpaqueDeclarationAST_noteTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_typeOpaqueDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedControlRegisterArrayGroupDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedControlRegisterArrayGroupDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_decoratedControlRegisterArrayGroupDeclaration * ptr (void) const { return (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedControlRegisterArrayGroupDeclaration (const cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedControlRegisterArrayGroupDeclaration extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedControlRegisterArrayGroupDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_lbigintlist & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBaseAddresses (class GALGAS_lbigintlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lbigintlist getter_mBaseAddresses (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGroupName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedControlRegisterArrayGroupDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedControlRegisterArrayGroupDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public: GALGAS_lstring mProperty_mGroupName ;
  public: GALGAS_lbigintlist mProperty_mBaseAddresses ;

//--- Constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (const GALGAS_lstring & in_mGroupName,
                                                              const GALGAS_lbigintlist & in_mBaseAddresses
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGroupName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMGroupName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lbigintlist getter_mBaseAddresses (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMBaseAddresses (GALGAS_lbigintlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupArrayList generateLLVMcode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMcode (const class GALGAS_controlRegisterGroupArrayList inObject,
                                       class GALGAS_string & io_ioLLVMcode,
                                       const class GALGAS_uint constin_inPointerSize,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_registerGroupAddressArrayLLVMname (const class GALGAS_string & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedSyncInstance class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedSyncInstance : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public: GALGAS_decoratedSyncInstance (void) ;

//---
  public: inline const class cPtr_decoratedSyncInstance * ptr (void) const { return (const cPtr_decoratedSyncInstance *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedSyncInstance (const cPtr_decoratedSyncInstance * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedSyncInstance extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedSyncInstance constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedSyncInstance & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionGeneratedCode (class GALGAS_objectIR inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyncInstanceName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mExpressionGeneratedCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyncInstanceName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedSyncInstance class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedSyncInstance class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedSyncInstance : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public: GALGAS_lstring mProperty_mSyncInstanceName ;
  public: GALGAS_objectIR mProperty_mExpressionGeneratedCode ;

//--- Constructor
  public: cPtr_decoratedSyncInstance (const GALGAS_lstring & in_mSyncInstanceName,
                                      const GALGAS_objectIR & in_mExpressionGeneratedCode
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSyncInstanceName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSyncInstanceName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mExpressionGeneratedCode (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionGeneratedCode (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @implementedDriverAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_implementedDriverAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_implementedDriverAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_implementedDriverAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_implementedDriverAST * ptr (void) const { return (const cPtr_implementedDriverAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_implementedDriverAST (const cPtr_implementedDriverAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_implementedDriverAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_implementedDriverAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstringlist & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_location & inOperand3,
                                                                    const class GALGAS_instructionListAST & inOperand4,
                                                                    const class GALGAS_location & inOperand5,
                                                                    const class GALGAS_location & inOperand6,
                                                                    const class GALGAS_instructionListAST & inOperand7,
                                                                    const class GALGAS_location & inOperand8
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_implementedDriverAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBootEndLocation (class GALGAS_location inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBootInstructionList (class GALGAS_instructionListAST inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBootLocation (class GALGAS_location inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverDependanceList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInstancied (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartupEndLocation (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartupInstructionList (class GALGAS_instructionListAST inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartupLocation (class GALGAS_location inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mBootEndLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mBootInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mBootLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInstancied (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartupEndLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mStartupInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartupLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implementedDriverAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implementedDriverAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @implementedDriverAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_implementedDriverAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public: GALGAS_lstring mProperty_mDriverName ;
  public: GALGAS_lstringlist mProperty_mDriverDependanceList ;
  public: GALGAS_bool mProperty_mIsInstancied ;
  public: GALGAS_location mProperty_mBootLocation ;
  public: GALGAS_instructionListAST mProperty_mBootInstructionList ;
  public: GALGAS_location mProperty_mBootEndLocation ;
  public: GALGAS_location mProperty_mStartupLocation ;
  public: GALGAS_instructionListAST mProperty_mStartupInstructionList ;
  public: GALGAS_location mProperty_mStartupEndLocation ;

//--- Constructor
  public: cPtr_implementedDriverAST (const GALGAS_lstring & in_mDriverName,
                                     const GALGAS_lstringlist & in_mDriverDependanceList,
                                     const GALGAS_bool & in_mIsInstancied,
                                     const GALGAS_location & in_mBootLocation,
                                     const GALGAS_instructionListAST & in_mBootInstructionList,
                                     const GALGAS_location & in_mBootEndLocation,
                                     const GALGAS_location & in_mStartupLocation,
                                     const GALGAS_instructionListAST & in_mStartupInstructionList,
                                     const GALGAS_location & in_mStartupEndLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDriverName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mDriverDependanceList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDriverDependanceList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsInstancied (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsInstancied (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_location getter_mBootLocation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMBootLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mBootInstructionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMBootInstructionList (GALGAS_instructionListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_location getter_mBootEndLocation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMBootEndLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_location getter_mStartupLocation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStartupLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mStartupInstructionList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStartupInstructionList (GALGAS_instructionListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_location getter_mStartupEndLocation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStartupEndLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRequiredDriver class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedRequiredDriver : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public: GALGAS_decoratedRequiredDriver (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedRequiredDriver constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_decoratedRequiredDriver * ptr (void) const { return (const cPtr_decoratedRequiredDriver *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedRequiredDriver (const cPtr_decoratedRequiredDriver * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRequiredDriver extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedRequiredDriver constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedRequiredDriver & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDriverName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedRequiredDriver class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedRequiredDriver class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedRequiredDriver : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public: GALGAS_lstring mProperty_mDriverName ;

//--- Constructor
  public: cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDriverName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedStaticList class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedStaticList : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public: GALGAS_decoratedStaticList (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_decoratedStaticList constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_decoratedStaticList * ptr (void) const { return (const cPtr_decoratedStaticList *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedStaticList (const cPtr_decoratedStaticList * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedStaticList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedStaticList constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_staticListValueListAST & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMStaticListName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueList (class GALGAS_staticListValueListAST inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedStaticList class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedStaticList class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedStaticList : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public: GALGAS_lstring mProperty_mStaticListName ;
  public: GALGAS_staticListValueListAST mProperty_mValueList ;

//--- Constructor
  public: cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                    const GALGAS_staticListValueListAST & in_mValueList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStaticListName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_staticListValueListAST getter_mValueList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMValueList (GALGAS_staticListValueListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListIndirectRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticListIndirectRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public: GALGAS_staticListIndirectRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticListIndirectRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_staticListIndirectRoutineIR * ptr (void) const { return (const cPtr_staticListIndirectRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_staticListIndirectRoutineIR (const cPtr_staticListIndirectRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListIndirectRoutineIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListIndirectRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                           const class GALGAS_routineTypedSignature & inOperand4,
                                                                           const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                           const class GALGAS_uint & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListIndirectRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineTypedSignature inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyIndex (class GALGAS_uint inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxy (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStaticListElementType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnTypeProxy (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mStaticListElementType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListIndirectRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @staticListIndirectRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_staticListIndirectRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mStaticListElementType ;
  public: GALGAS_routineTypedSignature mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReturnTypeProxy ;
  public: GALGAS_uint mProperty_mPropertyIndex ;

//--- Constructor
  public: cPtr_staticListIndirectRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused,
                                            const GALGAS_unifiedTypeMap_2D_entry & in_mStaticListElementType,
                                            const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMap_2D_entry & in_mReturnTypeProxy,
                                            const GALGAS_uint & in_mPropertyIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mStaticListElementType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMStaticListElementType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_routineTypedSignature getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (GALGAS_routineTypedSignature inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReturnTypeProxy (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxy (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_mPropertyIndex (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyIndex (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

