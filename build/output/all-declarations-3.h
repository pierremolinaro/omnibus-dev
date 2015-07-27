#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'copyExecutableFile'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyExecutableFile (const class GALGAS_string constinArgument0,
                                 const class GALGAS_string constinArgument1,
                                 const class GALGAS_string constinArgument2,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'copyTextFile'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_copyTextFile (const class GALGAS_string constinArgument0,
                           const class GALGAS_string constinArgument1,
                           const class GALGAS_string constinArgument2,
                           class C_Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'importFilesAndCompile'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_importFilesAndCompile (const class GALGAS_lstring constinArgument0,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileProject (const class GALGAS_lstring constinArgument0,
                             const class GALGAS_ast constinArgument1,
                             const class GALGAS_lstring constinArgument2,
                             const class GALGAS_location constinArgument3,
                             const class GALGAS_string constinArgument4,
                             const class GALGAS_stringset constinArgument5,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'recursiveImportFiles'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFiles (class GALGAS_ast & ioArgument0,
                                   class GALGAS_string inArgument1,
                                   class GALGAS_lstringlist inArgument2,
                                   class GALGAS_stringset & ioArgument3,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'addPredefinedTypes'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPredefinedTypes (class GALGAS_declarationListAST & ioArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'addTargetSpecificFiles'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addTargetSpecificFiles (const class GALGAS_lstring constinArgument0,
                                     class GALGAS_ast & ioArgument1,
                                     const class GALGAS_string constinArgument2,
                                     class GALGAS_stringset & ioArgument3,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @literalStringDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_literalStringDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringDeclaration * ptr (void) const { return (const cPtr_literalStringDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringDeclaration (const cPtr_literalStringDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringDeclaration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @literalStringDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringDeclaration (const GALGAS_lstring & in_mLiteralStringTypeName
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'recursiveImportEmbeddedTargetFiles'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportEmbeddedTargetFiles (class GALGAS_ast & ioArgument0,
                                                 class GALGAS_lstringlist inArgument1,
                                                 class GALGAS_stringset & ioArgument2,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'recursiveImportFileSystemTargetFiles'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursiveImportFileSystemTargetFiles (class GALGAS_ast & ioArgument0,
                                                   const class GALGAS_string constinArgument1,
                                                   class GALGAS_lstringlist inArgument2,
                                                   class GALGAS_stringset & ioArgument3,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Filewrapper 'embeddedSampleCode'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_embeddedSampleCode ;
extern const char * gWrapperFileContent_1_embeddedSampleCode ;
extern const char * gWrapperFileContent_2_embeddedSampleCode ;
extern const char * gWrapperFileContent_3_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'embeddedTargets'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_embeddedTargets ;
extern const char * gWrapperFileContent_1_embeddedTargets ;
extern const char * gWrapperFileContent_2_embeddedTargets ;
extern const char * gWrapperFileContent_3_embeddedTargets ;
extern const char * gWrapperFileContent_4_embeddedTargets ;
extern const char * gWrapperFileContent_5_embeddedTargets ;
extern const char * gWrapperFileContent_6_embeddedTargets ;
extern const char * gWrapperFileContent_7_embeddedTargets ;
extern const char * gWrapperFileContent_8_embeddedTargets ;
extern const char * gWrapperFileContent_9_embeddedTargets ;
extern const char * gWrapperFileContent_10_embeddedTargets ;
extern const char * gWrapperFileContent_11_embeddedTargets ;
extern const char * gWrapperFileContent_12_embeddedTargets ;
extern const char * gWrapperFileContent_13_embeddedTargets ;
extern const char * gWrapperFileContent_14_embeddedTargets ;
extern const char * gWrapperFileContent_15_embeddedTargets ;
extern const char * gWrapperFileContent_16_embeddedTargets ;
extern const char * gWrapperFileContent_17_embeddedTargets ;
extern const char * gWrapperFileContent_18_embeddedTargets ;
extern const char * gWrapperFileContent_19_embeddedTargets ;
extern const char * gWrapperFileContent_20_embeddedTargets ;
extern const char * gWrapperFileContent_21_embeddedTargets ;
extern const char * gWrapperFileContent_22_embeddedTargets ;
extern const char * gWrapperFileContent_23_embeddedTargets ;
extern const char * gWrapperFileContent_24_embeddedTargets ;
extern const char * gWrapperFileContent_25_embeddedTargets ;
extern const char * gWrapperFileContent_26_embeddedTargets ;
extern const char * gWrapperFileContent_27_embeddedTargets ;
extern const char * gWrapperFileContent_28_embeddedTargets ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_4_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_5_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_6_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_7_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_8_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_9_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_10_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_11_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_12_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_13_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_14_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_15_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_16_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_17_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_18_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_19_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_20_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_21_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_22_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_23_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_24_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_25_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_26_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_27_embeddedTargets ;
extern const cRegularFileWrapper gWrapperFile_28_embeddedTargets ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedTargets ;
extern const cDirectoryWrapper gWrapperDirectory_1_embeddedTargets ;
extern const cDirectoryWrapper gWrapperDirectory_2_embeddedTargets ;
extern const cDirectoryWrapper gWrapperDirectory_3_embeddedTargets ;
extern const cDirectoryWrapper gWrapperDirectory_4_embeddedTargets ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractExpressionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractExpressionIR : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractExpressionIR (void) ;

//---
  public : inline const class cPtr_abstractExpressionIR * ptr (void) const { return (const cPtr_abstractExpressionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExpressionIR (const cPtr_abstractExpressionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExpressionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExpressionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExpressionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExpressionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractExpressionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractExpressionIR : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractExpressionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assertInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assertInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_assertInstructionIR (void) ;

//---
  public : inline const class cPtr_assertInstructionIR * ptr (void) const { return (const cPtr_assertInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assertInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_instructionListIR & inOperand1,
                                                              const class GALGAS_variableKindIR & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mAssertInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mExpressionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @assertInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assertInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mAssertInstructionLocation ;
  public : GALGAS_instructionListIR mAttribute_mInstructionList ;
  public : GALGAS_variableKindIR mAttribute_mExpressionValue ;

//--- Constructor
  public : cPtr_assertInstructionIR (const GALGAS_location & in_mAssertInstructionLocation,
                                     const GALGAS_instructionListIR & in_mInstructionList,
                                     const GALGAS_variableKindIR & in_mExpressionValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mAssertInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mExpressionValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_assignmentInstructionIR (void) ;

//---
  public : inline const class cPtr_assignmentInstructionIR * ptr (void) const { return (const cPtr_assignmentInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionIR (const cPtr_assignmentInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assignmentInstructionIR constructor_new (const class GALGAS_variableKindIR & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                  const class GALGAS_variableKindIR & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_variableKindIR mAttribute_mTargetVariable ;
  public : GALGAS_lstringlist mAttribute_mFieldList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetVarType ;
  public : GALGAS_variableKindIR mAttribute_mSourceValue ;

//--- Constructor
  public : cPtr_assignmentInstructionIR (const GALGAS_variableKindIR & in_mTargetVariable,
                                         const GALGAS_lstringlist & in_mFieldList,
                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                         const GALGAS_variableKindIR & in_mSourceValue
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @conversionInstructionIR class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_conversionInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_conversionInstructionIR (void) ;

//---
  public : inline const class cPtr_conversionInstructionIR * ptr (void) const { return (const cPtr_conversionInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_conversionInstructionIR (const cPtr_conversionInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_conversionInstructionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_conversionInstructionIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                  const class GALGAS_variableKindIR & inOperand2,
                                                                  const class GALGAS_variableKindIR & inOperand3,
                                                                  const class GALGAS_bool & inOperand4,
                                                                  const class GALGAS_location & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_conversionInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mConvertedExpressionType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSilently (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTemporaryResultVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_conversionInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conversionInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @conversionInstructionIR class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_conversionInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mConvertedExpressionType ;
  public : GALGAS_variableKindIR mAttribute_mTemporaryResultVariable ;
  public : GALGAS_variableKindIR mAttribute_mOperand ;
  public : GALGAS_bool mAttribute_mSilently ;
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_conversionInstructionIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mConvertedExpressionType,
                                         const GALGAS_variableKindIR & in_mTemporaryResultVariable,
                                         const GALGAS_variableKindIR & in_mOperand,
                                         const GALGAS_bool & in_mSilently,
                                         const GALGAS_location & in_mLocation
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mConvertedExpressionType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTemporaryResultVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSilently (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @fieldAccessIR class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_fieldAccessIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_fieldAccessIR (void) ;

//---
  public : inline const class cPtr_fieldAccessIR * ptr (void) const { return (const cPtr_fieldAccessIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_fieldAccessIR (const cPtr_fieldAccessIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_fieldAccessIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_fieldAccessIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                        const class GALGAS_variableKindIR & inOperand1,
                                                        const class GALGAS_variableKindIR & inOperand2,
                                                        const class GALGAS_lstring & inOperand3
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_fieldAccessIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mField (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSource (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fieldAccessIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fieldAccessIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @fieldAccessIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_fieldAccessIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mResult ;
  public : GALGAS_variableKindIR mAttribute_mSource ;
  public : GALGAS_lstring mAttribute_mField ;

//--- Constructor
  public : cPtr_fieldAccessIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                               const GALGAS_variableKindIR & in_mResult,
                               const GALGAS_variableKindIR & in_mSource,
                               const GALGAS_lstring & in_mField
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSource (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mField (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @foreverInstructionGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_foreverInstructionGeneration : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_foreverInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_foreverInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_foreverInstructionGeneration * ptr (void) const { return (const cPtr_foreverInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_foreverInstructionGeneration (const cPtr_foreverInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_foreverInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_foreverInstructionGeneration constructor_new (const class GALGAS_instructionListIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_foreverInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_foreverInstructionGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_foreverInstructionGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @foreverInstructionGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_foreverInstructionGeneration : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_foreverInstructionGeneration (const GALGAS_instructionListIR & in_mInstructionGenerationList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @functionCallIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_functionCallIR (void) ;

//---
  public : inline const class cPtr_functionCallIR * ptr (void) const { return (const cPtr_functionCallIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallIR (const cPtr_functionCallIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallIR extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionCallIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                         const class GALGAS_string & inOperand1,
                                                         const class GALGAS_variableKindIR & inOperand2,
                                                         const class GALGAS_variableListIR & inOperand3
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTempConstantTarget (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableListIR reader_mVariableList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @functionCallIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mFunctionName ;
  public : GALGAS_variableKindIR mAttribute_mTempConstantTarget ;
  public : GALGAS_variableListIR mAttribute_mVariableList ;

//--- Constructor
  public : cPtr_functionCallIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                const GALGAS_string & in_mFunctionName,
                                const GALGAS_variableKindIR & in_mTempConstantTarget,
                                const GALGAS_variableListIR & in_mVariableList
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTempConstantTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableListIR reader_mVariableList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionIR class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_ifInstructionIR (void) ;

//---
  public : inline const class cPtr_ifInstructionIR * ptr (void) const { return (const cPtr_ifInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionIR extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifInstructionIR constructor_new (const class GALGAS_variableKindIR & inOperand0,
                                                          const class GALGAS_instructionListIR & inOperand1,
                                                          const class GALGAS_instructionListIR & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mElseInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTestVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mThenInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifInstructionIR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_variableKindIR mAttribute_mTestVariable ;
  public : GALGAS_instructionListIR mAttribute_mThenInstructionGenerationList ;
  public : GALGAS_instructionListIR mAttribute_mElseInstructionGenerationList ;

//--- Constructor
  public : cPtr_ifInstructionIR (const GALGAS_variableKindIR & in_mTestVariable,
                                 const GALGAS_instructionListIR & in_mThenInstructionGenerationList,
                                 const GALGAS_instructionListIR & in_mElseInstructionGenerationList
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTestVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mThenInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mElseInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @incDecInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_incDecInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_incDecInstructionIR (void) ;

//---
  public : inline const class cPtr_incDecInstructionIR * ptr (void) const { return (const cPtr_incDecInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecInstructionIR (const cPtr_incDecInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_incDecInstructionIR constructor_new (const class GALGAS_sint_36__34_ & inOperand0,
                                                              const class GALGAS_uint_36__34_ & inOperand1,
                                                              const class GALGAS_incDecKind & inOperand2,
                                                              const class GALGAS_variableKindIR & inOperand3,
                                                              const class GALGAS_location & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint_36__34_ reader_mMax (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sint_36__34_ reader_mMin (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mVariableLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @incDecInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_incDecInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_sint_36__34_ mAttribute_mMin ;
  public : GALGAS_uint_36__34_ mAttribute_mMax ;
  public : GALGAS_incDecKind mAttribute_mKind ;
  public : GALGAS_variableKindIR mAttribute_mVariable ;
  public : GALGAS_location mAttribute_mVariableLocation ;

//--- Constructor
  public : cPtr_incDecInstructionIR (const GALGAS_sint_36__34_ & in_mMin,
                                     const GALGAS_uint_36__34_ & in_mMax,
                                     const GALGAS_incDecKind & in_mKind,
                                     const GALGAS_variableKindIR & in_mVariable,
                                     const GALGAS_location & in_mVariableLocation
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_sint_36__34_ reader_mMin (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint_36__34_ reader_mMax (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind reader_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mVariableLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @letInstructionWithAssignmentIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_letInstructionWithAssignmentIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_letInstructionWithAssignmentIR (void) ;

//---
  public : inline const class cPtr_letInstructionWithAssignmentIR * ptr (void) const { return (const cPtr_letInstructionWithAssignmentIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_letInstructionWithAssignmentIR (const cPtr_letInstructionWithAssignmentIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_letInstructionWithAssignmentIR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_letInstructionWithAssignmentIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                         const class GALGAS_variableKindIR & inOperand1,
                                                                         const class GALGAS_variableKindIR & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSourceIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetConstantIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionWithAssignmentIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @letInstructionWithAssignmentIR class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_letInstructionWithAssignmentIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mTargetConstantIR ;
  public : GALGAS_variableKindIR mAttribute_mSourceIR ;

//--- Constructor
  public : cPtr_letInstructionWithAssignmentIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                const GALGAS_variableKindIR & in_mTargetConstantIR,
                                                const GALGAS_variableKindIR & in_mSourceIR
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetConstantIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSourceIR (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @operatorAssignInstructionIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorAssignInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_operatorAssignInstructionIR (void) ;

//---
  public : inline const class cPtr_operatorAssignInstructionIR * ptr (void) const { return (const cPtr_operatorAssignInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_operatorAssignInstructionIR (const cPtr_operatorAssignInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operatorAssignInstructionIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_operatorAssignInstructionIR constructor_new (const class GALGAS_variableKindIR & inOperand0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                      const class GALGAS_operatorAssignKind & inOperand2,
                                                                      const class GALGAS_variableKindIR & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorAssignInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_operatorAssignKind reader_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSourceValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operatorAssignInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorAssignInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @operatorAssignInstructionIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_operatorAssignInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_variableKindIR mAttribute_mTargetVariable ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetVarType ;
  public : GALGAS_operatorAssignKind mAttribute_mOperator ;
  public : GALGAS_variableKindIR mAttribute_mSourceValue ;

//--- Constructor
  public : cPtr_operatorAssignInstructionIR (const GALGAS_variableKindIR & in_mTargetVariable,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetVarType,
                                             const GALGAS_operatorAssignKind & in_mOperator,
                                             const GALGAS_variableKindIR & in_mSourceValue
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetVarType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_operatorAssignKind reader_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSourceValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @operatorInfixExpressionIR class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorInfixExpressionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_operatorInfixExpressionIR (void) ;

//---
  public : inline const class cPtr_operatorInfixExpressionIR * ptr (void) const { return (const cPtr_operatorInfixExpressionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_operatorInfixExpressionIR (const cPtr_operatorInfixExpressionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operatorInfixExpressionIR extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_operatorInfixExpressionIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                    const class GALGAS_variableKindIR & inOperand1,
                                                                    const class GALGAS_variableKindIR & inOperand2,
                                                                    const class GALGAS_infixOperatorIR & inOperand3,
                                                                    const class GALGAS_variableKindIR & inOperand4,
                                                                    const class GALGAS_location & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorInfixExpressionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mLeftOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorIR reader_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mRighOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operatorInfixExpressionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorInfixExpressionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @operatorInfixExpressionIR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_operatorInfixExpressionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mResult ;
  public : GALGAS_variableKindIR mAttribute_mLeftOperand ;
  public : GALGAS_infixOperatorIR mAttribute_mOperator ;
  public : GALGAS_variableKindIR mAttribute_mRighOperand ;
  public : GALGAS_location mAttribute_mOperatorLocation ;

//--- Constructor
  public : cPtr_operatorInfixExpressionIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                           const GALGAS_variableKindIR & in_mResult,
                                           const GALGAS_variableKindIR & in_mLeftOperand,
                                           const GALGAS_infixOperatorIR & in_mOperator,
                                           const GALGAS_variableKindIR & in_mRighOperand,
                                           const GALGAS_location & in_mOperatorLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mLeftOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_infixOperatorIR reader_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mRighOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @prefixOperatorExpressionIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperatorExpressionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_prefixOperatorExpressionIR (void) ;

//---
  public : inline const class cPtr_prefixOperatorExpressionIR * ptr (void) const { return (const cPtr_prefixOperatorExpressionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefixOperatorExpressionIR (const cPtr_prefixOperatorExpressionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorExpressionIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_prefixOperatorExpressionIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_variableKindIR & inOperand1,
                                                                     const class GALGAS_variableKindIR & inOperand2,
                                                                     const class GALGAS_prefixOperatorIR & inOperand3,
                                                                     const class GALGAS_location & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorExpressionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorIR reader_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorExpressionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @prefixOperatorExpressionIR class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_prefixOperatorExpressionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mResult ;
  public : GALGAS_variableKindIR mAttribute_mOperand ;
  public : GALGAS_prefixOperatorIR mAttribute_mOperator ;
  public : GALGAS_location mAttribute_mOperatorLocation ;

//--- Constructor
  public : cPtr_prefixOperatorExpressionIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                            const GALGAS_variableKindIR & in_mResult,
                                            const GALGAS_variableKindIR & in_mOperand,
                                            const GALGAS_prefixOperatorIR & in_mOperator,
                                            const GALGAS_location & in_mOperatorLocation
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mResult (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_prefixOperatorIR reader_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mOperatorLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procCallInstructionIR class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_procCallInstructionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionIR * ptr (void) const { return (const cPtr_procCallInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionIR (const cPtr_procCallInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionIR extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procCallInstructionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_procCallEffectiveParameterListIR & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR reader_mParameters (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mProcName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @procCallInstructionIR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procCallInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_string mAttribute_mProcName ;
  public : GALGAS_procCallEffectiveParameterListIR mAttribute_mParameters ;

//--- Constructor
  public : cPtr_procCallInstructionIR (const GALGAS_string & in_mProcName,
                                       const GALGAS_procCallEffectiveParameterListIR & in_mParameters
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mProcName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR reader_mParameters (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @registerIntegerConstantInExpressionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerConstantInExpressionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_registerIntegerConstantInExpressionIR (void) ;

//---
  public : inline const class cPtr_registerIntegerConstantInExpressionIR * ptr (void) const { return (const cPtr_registerIntegerConstantInExpressionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerIntegerConstantInExpressionIR (const cPtr_registerIntegerConstantInExpressionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerConstantInExpressionIR extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerIntegerConstantInExpressionIR constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_variableKindIR & inOperand1,
                                                                                const class GALGAS_uint_36__34_ & inOperand2,
                                                                                const class GALGAS_uint & inOperand3,
                                                                                const class GALGAS_variableKindIR & inOperand4,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                                const class GALGAS_bool & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerIntegerConstantInExpressionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mBitShift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mExpressionValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint_36__34_ reader_mMaxBound (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNoCheck (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mResultVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerIntegerConstantInExpressionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @registerIntegerConstantInExpressionIR class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerIntegerConstantInExpressionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_variableKindIR mAttribute_mExpressionValue ;
  public : GALGAS_uint_36__34_ mAttribute_mMaxBound ;
  public : GALGAS_uint mAttribute_mBitShift ;
  public : GALGAS_variableKindIR mAttribute_mResultVariable ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_bool mAttribute_mNoCheck ;

//--- Constructor
  public : cPtr_registerIntegerConstantInExpressionIR (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_variableKindIR & in_mExpressionValue,
                                                       const GALGAS_uint_36__34_ & in_mMaxBound,
                                                       const GALGAS_uint & in_mBitShift,
                                                       const GALGAS_variableKindIR & in_mResultVariable,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                       const GALGAS_bool & in_mNoCheck
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mExpressionValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint_36__34_ reader_mMaxBound (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBitShift (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mResultVariable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mNoCheck (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @throwInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_throwInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_throwInstructionIR (void) ;

//---
  public : inline const class cPtr_throwInstructionIR * ptr (void) const { return (const cPtr_throwInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_throwInstructionIR (const cPtr_throwInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_throwInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_throwInstructionIR constructor_new (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_variableKindIR & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_throwInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mThrowInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_throwInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_throwInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @throwInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_throwInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_location mAttribute_mThrowInstructionLocation ;
  public : GALGAS_variableKindIR mAttribute_mCode ;

//--- Constructor
  public : cPtr_throwInstructionIR (const GALGAS_location & in_mThrowInstructionLocation,
                                    const GALGAS_variableKindIR & in_mCode
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mThrowInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varDeclarationIR class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varDeclarationIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_varDeclarationIR (void) ;

//---
  public : inline const class cPtr_varDeclarationIR * ptr (void) const { return (const cPtr_varDeclarationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varDeclarationIR (const cPtr_varDeclarationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varDeclarationIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varDeclarationIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                           const class GALGAS_variableKindIR & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varDeclarationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varDeclarationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @varDeclarationIR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varDeclarationIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mTargetVar ;

//--- Constructor
  public : cPtr_varDeclarationIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                  const GALGAS_variableKindIR & in_mTargetVar
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @varDeclarationInstructionWithSimpleAssignmentIR class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varDeclarationInstructionWithSimpleAssignmentIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_varDeclarationInstructionWithSimpleAssignmentIR (void) ;

//---
  public : inline const class cPtr_varDeclarationInstructionWithSimpleAssignmentIR * ptr (void) const { return (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varDeclarationInstructionWithSimpleAssignmentIR (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varDeclarationInstructionWithSimpleAssignmentIR extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varDeclarationInstructionWithSimpleAssignmentIR constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const class GALGAS_variableKindIR & inOperand1,
                                                                                          const class GALGAS_variableKindIR & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varDeclarationInstructionWithSimpleAssignmentIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mSourceVar (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varDeclarationInstructionWithSimpleAssignmentIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @varDeclarationInstructionWithSimpleAssignmentIR class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varDeclarationInstructionWithSimpleAssignmentIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_variableKindIR mAttribute_mTargetVar ;
  public : GALGAS_variableKindIR mAttribute_mSourceVar ;

//--- Constructor
  public : cPtr_varDeclarationInstructionWithSimpleAssignmentIR (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                 const GALGAS_variableKindIR & in_mTargetVar,
                                                                 const GALGAS_variableKindIR & in_mSourceVar
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTargetVar (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mSourceVar (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @whileInstructionIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_whileInstructionIR (void) ;

//---
  public : inline const class cPtr_whileInstructionIR * ptr (void) const { return (const cPtr_whileInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionIR (const cPtr_whileInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_whileInstructionIR constructor_new (const class GALGAS_uint & inOperand0,
                                                             const class GALGAS_instructionListIR & inOperand1,
                                                             const class GALGAS_variableKindIR & inOperand2,
                                                             const class GALGAS_instructionListIR & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLabelIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_variableKindIR reader_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR reader_mTestInstructionGenerationList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @whileInstructionIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_uint mAttribute_mLabelIndex ;
  public : GALGAS_instructionListIR mAttribute_mTestInstructionGenerationList ;
  public : GALGAS_variableKindIR mAttribute_mTestExpression ;
  public : GALGAS_instructionListIR mAttribute_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_whileInstructionIR (const GALGAS_uint & in_mLabelIndex,
                                    const GALGAS_instructionListIR & in_mTestInstructionGenerationList,
                                    const GALGAS_variableKindIR & in_mTestExpression,
                                    const GALGAS_instructionListIR & in_mInstructionGenerationList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mLabelIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mTestInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_variableKindIR reader_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR reader_mInstructionGenerationList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @booleanIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_booleanIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanIR * ptr (void) const { return (const cPtr_booleanIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanIR (const cPtr_booleanIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_booleanIR constructor_new (const class GALGAS_string & inOperand0,
                                                    const class GALGAS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBooleanTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @booleanIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mBooleanTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_booleanIR (const GALGAS_string & in_mBooleanTypeName,
                           const GALGAS_string & in_mActualTypeName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBooleanTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumerationIR class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_enumerationIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationIR * ptr (void) const { return (const cPtr_enumerationIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationIR (const cPtr_enumerationIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationIR constructor_new (const class GALGAS_string & inOperand0,
                                                        const class GALGAS_string & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @enumerationIR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mEnumerationName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_enumerationIR (const GALGAS_string & in_mEnumerationName,
                               const GALGAS_string & in_mActualTypeName
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @integerIR class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_integerIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_integerIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_integerIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_integerIR * ptr (void) const { return (const cPtr_integerIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_integerIR (const cPtr_integerIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_integerIR extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_integerIR constructor_new (const class GALGAS_string & inOperand0,
                                                    const class GALGAS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_integerIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mIntegerTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @integerIR class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_integerIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mIntegerTypeName ;
  public : GALGAS_string mAttribute_mActualTypeName ;

//--- Constructor
  public : cPtr_integerIR (const GALGAS_string & in_mIntegerTypeName,
                           const GALGAS_string & in_mActualTypeName
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mIntegerTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mActualTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @literalStringTypeIR class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringTypeIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_literalStringTypeIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringTypeIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringTypeIR * ptr (void) const { return (const cPtr_literalStringTypeIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringTypeIR (const cPtr_literalStringTypeIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringTypeIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringTypeIR constructor_new (const class GALGAS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringTypeIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLiteralStringTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringTypeIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringTypeIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @literalStringTypeIR class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringTypeIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mLiteralStringTypeName ;

//--- Constructor
  public : cPtr_literalStringTypeIR (const GALGAS_string & in_mLiteralStringTypeName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLiteralStringTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @structureIR class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureIR : public GALGAS_abstractTypeIR {
//--- Constructor
  public : GALGAS_structureIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structureIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structureIR * ptr (void) const { return (const cPtr_structureIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structureIR (const cPtr_structureIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureIR extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureIR constructor_new (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_structureFieldListForGeneration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureIR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureIR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @structureIR class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structureIR : public cPtr_abstractTypeIR {
//--- Attributes
  public : GALGAS_string mAttribute_mStructureName ;
  public : GALGAS_structureFieldListForGeneration mAttribute_mStructureFieldListForGeneration ;

//--- Constructor
  public : cPtr_structureIR (const GALGAS_string & in_mStructureName,
                             const GALGAS_structureFieldListForGeneration & in_mStructureFieldListForGeneration
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structureFieldListForGeneration reader_mStructureFieldListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@expressionAST addDependenceEdgeForStaticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                            const class GALGAS_lstring constinArgument0,
                                                                                            class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                                            class C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                               categoryMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addDependenceEdgeForStaticExpression (const class cPtr_expressionAST * inObject,
                                                              const GALGAS_lstring constin_inConstantName,
                                                              GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

#endif
