#ifndef all_2D_declarations_2D__37__ENTITIES_DEFINED
#define all_2D_declarations_2D__37__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @infixObjectObjectOperatorDescription class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixObjectObjectOperatorDescription : public GALGAS_infixOperatorDescription {
//--- Constructor
  public : GALGAS_infixObjectObjectOperatorDescription (void) ;

//---
  public : inline const class cPtr_infixObjectObjectOperatorDescription * ptr (void) const { return (const cPtr_infixObjectObjectOperatorDescription *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixObjectObjectOperatorDescription (const cPtr_infixObjectObjectOperatorDescription * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixObjectObjectOperatorDescription extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixObjectObjectOperatorDescription constructor_new (const class GALGAS_llvmBinaryOperation & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixObjectObjectOperatorDescription & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixObjectObjectOperatorDescription class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixObjectObjectOperatorDescription ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @infixObjectObjectOperatorDescription class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixObjectObjectOperatorDescription : public cPtr_infixOperatorDescription {
//--- Attributes

//--- Constructor
  public : cPtr_infixObjectObjectOperatorDescription (const GALGAS_llvmBinaryOperation & in_mOperator
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@globalVarDeclarationList-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_globalVarDeclarationList_2D_element inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_objectIR function_checkAssignmentCompatibility (const class GALGAS_objectIR & constinArgument0,
                                                             const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                             const class GALGAS_location & constinArgument2,
                                                             const class GALGAS_bool & constinArgument3,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const class GALGAS_semanticContext constinArgument0,
                                       class GALGAS_unifiedSymbolMap & outArgument1,
                                       class GALGAS_universalPropertyAndRoutineMapForContext & outArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const class GALGAS_globalVariableMapIR_2D_element inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@moduleListIR-element generateLLVM'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const class GALGAS_moduleListIR_2D_element inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@panicClauseListAST-element enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_panicClauseListAST_2D_element inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initList-element enterInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const class GALGAS_initList_2D_element inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@callInstructionAST baseGuardAnalyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_callInstructionAST_baseGuardAnalyze) (const class cPtr_callInstructionAST * inObject,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                              const class GALGAS_lstring constinArgument1,
                                                                              const class GALGAS_semanticContext constinArgument2,
                                                                              const class GALGAS_mode constinArgument3,
                                                                              class GALGAS_semanticTemporariesStruct & ioArgument4,
                                                                              class GALGAS_staticStringMap & ioArgument5,
                                                                              class GALGAS_unifiedSymbolMap & ioArgument6,
                                                                              class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument7,
                                                                              class GALGAS_guardKindGenerationIR & outArgument8,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_baseGuardAnalyze (const int32_t inClassIndex,
                                            extensionMethodSignature_callInstructionAST_baseGuardAnalyze inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_baseGuardAnalyze (const class cPtr_callInstructionAST * inObject,
                                           const GALGAS_unifiedTypeMap_2D_proxy constin_inSelfType,
                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                           const GALGAS_semanticContext constin_inContext,
                                           const GALGAS_mode constin_inMode,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                           GALGAS_unifiedSymbolMap & io_ioVariableMap,
                                           GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
                                           GALGAS_guardKindGenerationIR & out_outConvenienceGuardGenerationIR,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                              const class GALGAS_bool constinArgument1,
                                              const class GALGAS_bool constinArgument2,
                                              const class GALGAS_objectIR constinArgument3,
                                              const class GALGAS_lstring constinArgument4,
                                              const class GALGAS_effectiveArgumentListAST constinArgument5,
                                              const class GALGAS_lstring constinArgument6,
                                              const class GALGAS_semanticContext constinArgument7,
                                              const class GALGAS_mode constinArgument8,
                                              class GALGAS_semanticTemporariesStruct & ioArgument9,
                                              class GALGAS_staticStringMap & ioArgument10,
                                              class GALGAS_unifiedSymbolMap & ioArgument11,
                                              class GALGAS_universalPropertyAndRoutineMapForContext & ioArgument12,
                                              class GALGAS_allocaList & ioArgument13,
                                              class GALGAS_instructionListIR & ioArgument14,
                                              class GALGAS_procCallEffectiveParameterListIR & outArgument15,
                                              class GALGAS_calleeKindIR & outArgument16,
                                              class GALGAS_lstring & outArgument17,
                                              class GALGAS_lstring & outArgument18,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument19,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'acceptVariableName'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_acceptVariableName (class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'functionResultVariableName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForPrimitiveImplementation (const class GALGAS_string & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForSafeImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSafeImplementation (const class GALGAS_string & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_llvmNameForSectionImplementation (const class GALGAS_string & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBooleanOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBooleanOperators (class GALGAS_lstring inArgument0,
                                    class GALGAS_semanticContext & ioArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterEnumerationOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterEnumerationOperators (class GALGAS_lstring inArgument0,
                                        class GALGAS_semanticContext & ioArgument1,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'accessAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_accessAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'staticIntegerTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'enterAliasInfixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasInfixOperator (class GALGAS_infixOperatorMap & ioArgument0,
                                      const class GALGAS_lstring constinArgument1,
                                      const class GALGAS_lstring constinArgument2,
                                      const class GALGAS_lstring constinArgument3,
                                      const class GALGAS_lstring constinArgument4,
                                      const class GALGAS_lstring constinArgument5,
                                      const class GALGAS_lstring constinArgument6,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument7,
                                      const class GALGAS_unifiedTypeMap_2D_proxy constinArgument8,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'enterAliasPrefixOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterAliasPrefixOperator (class GALGAS_prefixOperatorMap & ioArgument0,
                                       const class GALGAS_lstring constinArgument1,
                                       const class GALGAS_lstring constinArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_integer_literal_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_integer_5F_literal_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enter_literal_integer_operators'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enter_5F_literal_5F_integer_5F_operators (const class GALGAS_lstring constinArgument0,
                                                       const class GALGAS_bool constinArgument1,
                                                       class GALGAS_semanticContext & ioArgument2,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterLiteralIntegerOperators'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterLiteralIntegerOperators (const class GALGAS_lstring constinArgument0,
                                           class GALGAS_semanticContext & ioArgument1,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterControlRegistersInContext'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterControlRegistersInContext (const class GALGAS_controlRegisterDeclarationListAST constinArgument0,
                                             class GALGAS_semanticContext & ioArgument1,
                                             class GALGAS_staticStringMap & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const class GALGAS_controlRegisterMap constinArgument0,
                                              const class GALGAS_lstring constinArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Filewrapper 'controlRegisterDumpGenerationTemplate'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'controlRegisterDumpGenerationTemplate dump'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_PROJECT_5F_NAME,
                                                                              const class GALGAS_controlRegisterMap & in_CONTROL_5F_REGISTER_5F_MAP,
                                                                              const class GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                              const class GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'linkForControlRegister'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_linkForControlRegister (const class GALGAS_string & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'arrayIndexListFor'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uintlist function_arrayIndexListFor (const class GALGAS_uint & constinArgument0,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'fieldIndexColumns'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_fieldIndexColumns (const class GALGAS_uint & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

#endif
