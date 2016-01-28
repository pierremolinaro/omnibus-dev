#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*



#ifndef plm_5F_lexique_CLASS_DEFINED
#define plm_5F_lexique_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       T O K E N    C L A S S                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_plm_5F_lexique : public cToken {
  public : C_BigInt mLexicalAttribute_bigInteger ;
  public : C_String mLexicalAttribute_tokenString ;

  public : cTokenFor_plm_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_plm_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_plm_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_attribute,
   kToken_typeName,
   kToken_modeName,
   kToken_integer,
   kToken_literal_5F_string,
   kToken_comment,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken_and,
   kToken_assert,
   kToken_at,
   kToken_boolset,
   kToken_boot,
   kToken_case,
   kToken_check,
   kToken_convert,
   kToken_do,
   kToken_else,
   kToken_elsif,
   kToken_end,
   kToken_enum,
   kToken_extend,
   kToken_extension,
   kToken_false,
   kToken_for,
   kToken_func,
   kToken_if,
   kToken_import,
   kToken_in,
   kToken_init,
   kToken_let,
   kToken_mutating,
   kToken_mode,
   kToken_newtype,
   kToken_not,
   kToken_or,
   kToken_panic,
   kToken_pointerSize,
   kToken_proc,
   kToken_register,
   kToken_required,
   kToken_requiredBy,
   kToken_self,
   kToken_struct,
   kToken_target,
   kToken_then,
   kToken_true,
   kToken_truncate,
   kToken_var,
   kToken_while,
   kToken_xor,
   kToken__3A_,
   kToken__2E_,
   kToken__2C_,
   kToken__3B_,
   kToken__7B_,
   kToken__7D_,
   kToken__3D_,
   kToken__28_,
   kToken__29_,
   kToken__3D__3D_,
   kToken__21__3D_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3E_,
   kToken__3E__3D_,
   kToken__5B_,
   kToken__5D_,
   kToken__3C__3C_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__3E_,
   kToken__3A__3A_,
   kToken__7C_,
   kToken__7C__3D_,
   kToken__26_,
   kToken__26__3D_,
   kToken__5E_,
   kToken__5E__3D_,
   kToken__2B_,
   kToken__2B__25_,
   kToken__2B__3D_,
   kToken__2B__25__3D_,
   kToken__2D_,
   kToken__2D__25_,
   kToken__2D__3D_,
   kToken__2D__25__3D_,
   kToken__2A_,
   kToken__2A__25_,
   kToken__2A__3D_,
   kToken__2A__25__3D_,
   kToken__2F_,
   kToken__21__2F_,
   kToken__2F__3D_,
   kToken__21__2F__3D_,
   kToken__25_,
   kToken__21__25_,
   kToken__25__3D_,
   kToken__21__25__3D_} ;

//--- Key words table 'keyWordList'
  public : static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lbigint synthetizedAttribute_bigInteger (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;


//--- Attribute access
  public : C_BigInt attributeValue_bigInteger (void) const ;
  public : C_String attributeValue_tokenString (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 102 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_plm_5F_lexique & inToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @declarationListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_declarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_declarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_declarationListAST constructor_listWithValue (const class GALGAS_abstractDeclaration & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_declarationListAST add_operation (const GALGAS_declarationListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDeclaration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDeclaration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDeclaration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationListAST ;
 
} ; // End of GALGAS_declarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_declarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_declarationListAST (const GALGAS_declarationListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractDeclaration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDeclaration (void) ;

//---
  public : inline const class cPtr_abstractDeclaration * ptr (void) const { return (const cPtr_abstractDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDeclaration (const cPtr_abstractDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDeclaration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @abstractDeclaration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractDeclaration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @declarationListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_declarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractDeclaration mAttribute_mDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_declarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclaration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declarationListAST_2D_element constructor_new (const class GALGAS_abstractDeclaration & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVarDeclarationList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalVarDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_globalVarDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_globalVarDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_lstring & in_mVarName,
                                                  const class GALGAS_expressionAST & in_mSourceExpression,
                                                  const class GALGAS_allowedProcList & in_mAllowedProcList,
                                                  const class GALGAS_allowedInitList & in_mAllowedInitList,
                                                  const class GALGAS_allowedExceptionList & in_mAllowedExceptionList,
                                                  const class GALGAS_allowedFunctionList & in_mAllowedFunctionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVarDeclarationList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_globalVarDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_globalVarDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_expressionAST & inOperand2,
                                                                             const class GALGAS_allowedProcList & inOperand3,
                                                                             const class GALGAS_allowedInitList & inOperand4,
                                                                             const class GALGAS_allowedExceptionList & inOperand5,
                                                                             const class GALGAS_allowedFunctionList & inOperand6
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalVarDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_expressionAST & inOperand2,
                                                      const class GALGAS_allowedProcList & inOperand3,
                                                      const class GALGAS_allowedInitList & inOperand4,
                                                      const class GALGAS_allowedExceptionList & inOperand5,
                                                      const class GALGAS_allowedFunctionList & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_globalVarDeclarationList add_operation (const GALGAS_globalVarDeclarationList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_expressionAST constinArgument2,
                                                       class GALGAS_allowedProcList constinArgument3,
                                                       class GALGAS_allowedInitList constinArgument4,
                                                       class GALGAS_allowedExceptionList constinArgument5,
                                                       class GALGAS_allowedFunctionList constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_expressionAST & outArgument2,
                                                  class GALGAS_allowedProcList & outArgument3,
                                                  class GALGAS_allowedInitList & outArgument4,
                                                  class GALGAS_allowedExceptionList & outArgument5,
                                                  class GALGAS_allowedFunctionList & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_expressionAST & outArgument2,
                                                 class GALGAS_allowedProcList & outArgument3,
                                                 class GALGAS_allowedInitList & outArgument4,
                                                 class GALGAS_allowedExceptionList & outArgument5,
                                                 class GALGAS_allowedFunctionList & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_expressionAST & outArgument2,
                                                       class GALGAS_allowedProcList & outArgument3,
                                                       class GALGAS_allowedInitList & outArgument4,
                                                       class GALGAS_allowedExceptionList & outArgument5,
                                                       class GALGAS_allowedFunctionList & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_expressionAST & outArgument2,
                                               class GALGAS_allowedProcList & outArgument3,
                                               class GALGAS_allowedInitList & outArgument4,
                                               class GALGAS_allowedExceptionList & outArgument5,
                                               class GALGAS_allowedFunctionList & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_expressionAST & outArgument2,
                                              class GALGAS_allowedProcList & outArgument3,
                                              class GALGAS_allowedInitList & outArgument4,
                                              class GALGAS_allowedExceptionList & outArgument5,
                                              class GALGAS_allowedFunctionList & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allowedExceptionList getter_mAllowedExceptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedFunctionList getter_mAllowedFunctionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedInitList getter_mAllowedInitListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedProcList getter_mAllowedProcListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVarDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVarDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVarDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_globalVarDeclarationList ;
 
} ; // End of GALGAS_globalVarDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_globalVarDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_globalVarDeclarationList (const GALGAS_globalVarDeclarationList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mSourceExpression (LOCATION_ARGS) const ;
  public : class GALGAS_allowedProcList current_mAllowedProcList (LOCATION_ARGS) const ;
  public : class GALGAS_allowedInitList current_mAllowedInitList (LOCATION_ARGS) const ;
  public : class GALGAS_allowedExceptionList current_mAllowedExceptionList (LOCATION_ARGS) const ;
  public : class GALGAS_allowedFunctionList current_mAllowedFunctionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalVarDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalVarDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @expressionAST class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_expressionAST (void) ;

//---
  public : inline const class cPtr_expressionAST * ptr (void) const { return (const cPtr_expressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionAST (const cPtr_expressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionAST extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @expressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_expressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @allowedExceptionList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedExceptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_allowedExceptionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allowedExceptionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mHasWriteAccess,
                                                  const class GALGAS_lstring & in_mExceptionName,
                                                  const class GALGAS_lbigint & in_mExceptionPriority
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedExceptionList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedExceptionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_allowedExceptionList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_lbigint & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allowedExceptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lbigint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allowedExceptionList add_operation (const GALGAS_allowedExceptionList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lbigint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lbigint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lbigint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lbigint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lbigint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mExceptionPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasWriteAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedExceptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedExceptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedExceptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allowedExceptionList ;
 
} ; // End of GALGAS_allowedExceptionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_allowedExceptionList : public cGenericAbstractEnumerator {
  public : cEnumerator_allowedExceptionList (const GALGAS_allowedExceptionList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mHasWriteAccess (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mExceptionName (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mExceptionPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allowedExceptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedExceptionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @allowedFunctionList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedFunctionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_allowedFunctionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allowedFunctionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mReceiverTypeName,
                                                  const class GALGAS_lstring & in_mFuncName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedFunctionList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedFunctionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_allowedFunctionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allowedFunctionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allowedFunctionList add_operation (const GALGAS_allowedFunctionList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFuncNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedFunctionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedFunctionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedFunctionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allowedFunctionList ;
 
} ; // End of GALGAS_allowedFunctionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_allowedFunctionList : public cGenericAbstractEnumerator {
  public : cEnumerator_allowedFunctionList (const GALGAS_allowedFunctionList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mReceiverTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFuncName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allowedFunctionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedFunctionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedInitList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedInitList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_allowedInitList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allowedInitList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mHasWriteAccess,
                                                  const class GALGAS_lbigint & in_mInitPriority
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedInitList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedInitList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_allowedInitList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lbigint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allowedInitList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lbigint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allowedInitList add_operation (const GALGAS_allowedInitList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lbigint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lbigint & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lbigint & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lbigint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasWriteAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mInitPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedInitList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedInitList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedInitList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allowedInitList ;
 
} ; // End of GALGAS_allowedInitList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_allowedInitList : public cGenericAbstractEnumerator {
  public : cEnumerator_allowedInitList (const GALGAS_allowedInitList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mHasWriteAccess (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mInitPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allowedInitList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedInitList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @allowedProcList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedProcList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_allowedProcList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_allowedProcList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mHasWriteAccess,
                                                  const class GALGAS_lstring & in_mReceiverTypeName,
                                                  const class GALGAS_lstring & in_mProcName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedProcList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedProcList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_allowedProcList constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allowedProcList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_allowedProcList add_operation (const GALGAS_allowedProcList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasWriteAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedProcList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedProcList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedProcList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_allowedProcList ;
 
} ; // End of GALGAS_allowedProcList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_allowedProcList : public cGenericAbstractEnumerator {
  public : cEnumerator_allowedProcList (const GALGAS_allowedProcList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mHasWriteAccess (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReceiverTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mProcName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_allowedProcList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedProcList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @globalVarDeclarationList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalVarDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;
  public : GALGAS_allowedProcList mAttribute_mAllowedProcList ;
  public : GALGAS_allowedInitList mAttribute_mAllowedInitList ;
  public : GALGAS_allowedExceptionList mAttribute_mAllowedExceptionList ;
  public : GALGAS_allowedFunctionList mAttribute_mAllowedFunctionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalVarDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_globalVarDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalVarDeclarationList_2D_element (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mVarName,
                                                       const GALGAS_expressionAST & in_mSourceExpression,
                                                       const GALGAS_allowedProcList & in_mAllowedProcList,
                                                       const GALGAS_allowedInitList & in_mAllowedInitList,
                                                       const GALGAS_allowedExceptionList & in_mAllowedExceptionList,
                                                       const GALGAS_allowedFunctionList & in_mAllowedFunctionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVarDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_globalVarDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_expressionAST & inOperand2,
                                                                              const class GALGAS_allowedProcList & inOperand3,
                                                                              const class GALGAS_allowedInitList & inOperand4,
                                                                              const class GALGAS_allowedExceptionList & inOperand5,
                                                                              const class GALGAS_allowedFunctionList & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalVarDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allowedExceptionList getter_mAllowedExceptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedFunctionList getter_mAllowedFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedInitList getter_mAllowedInitList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_allowedProcList getter_mAllowedProcList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalVarDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @extensionDeclarationListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_extensionDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_extensionDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTypeName,
                                                  const class GALGAS_procedureDeclarationListAST & in_mProcedureDeclarationListAST,
                                                  const class GALGAS_structureFieldListAST & in_mFieldList,
                                                  const class GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_extensionDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_procedureDeclarationListAST & inOperand1,
                                                                                const class GALGAS_structureFieldListAST & inOperand2,
                                                                                const class GALGAS_functionDeclarationListAST & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extensionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_procedureDeclarationListAST & inOperand1,
                                                      const class GALGAS_structureFieldListAST & inOperand2,
                                                      const class GALGAS_functionDeclarationListAST & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extensionDeclarationListAST add_operation (const GALGAS_extensionDeclarationListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_procedureDeclarationListAST constinArgument1,
                                                       class GALGAS_structureFieldListAST constinArgument2,
                                                       class GALGAS_functionDeclarationListAST constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_procedureDeclarationListAST & outArgument1,
                                                  class GALGAS_structureFieldListAST & outArgument2,
                                                  class GALGAS_functionDeclarationListAST & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_procedureDeclarationListAST & outArgument1,
                                                 class GALGAS_structureFieldListAST & outArgument2,
                                                 class GALGAS_functionDeclarationListAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_procedureDeclarationListAST & outArgument1,
                                                       class GALGAS_structureFieldListAST & outArgument2,
                                                       class GALGAS_functionDeclarationListAST & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_procedureDeclarationListAST & outArgument1,
                                               class GALGAS_structureFieldListAST & outArgument2,
                                               class GALGAS_functionDeclarationListAST & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_procedureDeclarationListAST & outArgument1,
                                              class GALGAS_structureFieldListAST & outArgument2,
                                              class GALGAS_functionDeclarationListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_mFieldListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_mProcedureDeclarationListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extensionDeclarationListAST ;
 
} ; // End of GALGAS_extensionDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extensionDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_extensionDeclarationListAST (const GALGAS_extensionDeclarationListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_procedureDeclarationListAST current_mProcedureDeclarationListAST (LOCATION_ARGS) const ;
  public : class GALGAS_structureFieldListAST current_mFieldList (LOCATION_ARGS) const ;
  public : class GALGAS_functionDeclarationListAST current_mFunctionDeclarationListAST (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extensionDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @functionDeclarationListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lstringlist & in_mFunctionModeList,
                                                  const class GALGAS_lstringlist & in_mFunctionAttributeList,
                                                  const class GALGAS_funcFormalArgumentList & in_mFuncFormalArgumentList,
                                                  const class GALGAS_lstring & in_mResultTypeName,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfFuncLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_functionDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstringlist & inOperand1,
                                                                               const class GALGAS_lstringlist & inOperand2,
                                                                               const class GALGAS_funcFormalArgumentList & inOperand3,
                                                                               const class GALGAS_lstring & inOperand4,
                                                                               const class GALGAS_instructionListAST & inOperand5,
                                                                               const class GALGAS_location & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_funcFormalArgumentList & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_instructionListAST & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST add_operation (const GALGAS_functionDeclarationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_funcFormalArgumentList constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_instructionListAST constinArgument5,
                                                       class GALGAS_location constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_funcFormalArgumentList & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  class GALGAS_instructionListAST & outArgument5,
                                                  class GALGAS_location & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_funcFormalArgumentList & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_instructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_funcFormalArgumentList & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_instructionListAST & outArgument5,
                                                       class GALGAS_location & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_funcFormalArgumentList & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_instructionListAST & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_funcFormalArgumentList & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_instructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFuncLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentList getter_mFuncFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionModeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionDeclarationListAST ;
 
} ; // End of GALGAS_functionDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_functionDeclarationListAST (const GALGAS_functionDeclarationListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFunctionModeList (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFunctionAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_funcFormalArgumentList current_mFuncFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfFuncLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureDeclarationListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procedureDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procedureDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procedureDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mMutating,
                                                  const class GALGAS_lstringlist & in_mProcedureModeList,
                                                  const class GALGAS_lstring & in_mProcedureName,
                                                  const class GALGAS_lstringlist & in_mProcedureAttributeList,
                                                  const class GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfProcLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procedureDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_procedureDeclarationListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                const class GALGAS_instructionListAST & inOperand5,
                                                                                const class GALGAS_location & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_procFormalArgumentList & inOperand4,
                                                      const class GALGAS_instructionListAST & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procedureDeclarationListAST add_operation (const GALGAS_procedureDeclarationListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_procFormalArgumentList constinArgument4,
                                                       class GALGAS_instructionListAST constinArgument5,
                                                       class GALGAS_location constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_procFormalArgumentList & outArgument4,
                                                  class GALGAS_instructionListAST & outArgument5,
                                                  class GALGAS_location & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_procFormalArgumentList & outArgument4,
                                                 class GALGAS_instructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_procFormalArgumentList & outArgument4,
                                                       class GALGAS_instructionListAST & outArgument5,
                                                       class GALGAS_location & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_procFormalArgumentList & outArgument4,
                                               class GALGAS_instructionListAST & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_procFormalArgumentList & outArgument4,
                                              class GALGAS_instructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMutatingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureModeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcedureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procedureDeclarationListAST ;
 
} ; // End of GALGAS_procedureDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procedureDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_procedureDeclarationListAST (const GALGAS_procedureDeclarationListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mMutating (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mProcedureModeList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mProcedureName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mProcedureAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procedureDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structureFieldListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureFieldListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_structureFieldListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_structureFieldListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFieldName,
                                                  const class GALGAS_lstring & in_mFieldTypeName,
                                                  const class GALGAS_expressionAST & in_mInitExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureFieldListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureFieldListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_structureFieldListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_expressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_structureFieldListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_expressionAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_structureFieldListAST add_operation (const GALGAS_structureFieldListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_expressionAST constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_expressionAST & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_expressionAST & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_expressionAST & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_expressionAST & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_expressionAST & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mInitExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_structureFieldListAST ;
 
} ; // End of GALGAS_structureFieldListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_structureFieldListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_structureFieldListAST (const GALGAS_structureFieldListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFieldTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mInitExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_structureFieldListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureFieldListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @extensionDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_procedureDeclarationListAST mAttribute_mProcedureDeclarationListAST ;
  public : GALGAS_structureFieldListAST mAttribute_mFieldList ;
  public : GALGAS_functionDeclarationListAST mAttribute_mFunctionDeclarationListAST ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_extensionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_extensionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_extensionDeclarationListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_procedureDeclarationListAST & in_mProcedureDeclarationListAST,
                                                          const GALGAS_structureFieldListAST & in_mFieldList,
                                                          const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extensionDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_procedureDeclarationListAST & inOperand1,
                                                                                 const class GALGAS_structureFieldListAST & inOperand2,
                                                                                 const class GALGAS_functionDeclarationListAST & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_mProcedureDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @controlRegisterDeclarationListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_controlRegisterNameList & in_mRegisterNameList,
                                                  const class GALGAS_lstring & in_mRegisterTypeName,
                                                  const class GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controlRegisterDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_controlRegisterDeclarationListAST constructor_listWithValue (const class GALGAS_controlRegisterNameList & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_controlRegisterBitSliceList & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_controlRegisterNameList & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_controlRegisterBitSliceList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterDeclarationListAST add_operation (const GALGAS_controlRegisterDeclarationListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_controlRegisterNameList constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_controlRegisterBitSliceList constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_controlRegisterNameList & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_controlRegisterNameList & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_controlRegisterNameList & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_controlRegisterNameList & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_controlRegisterBitSliceList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_controlRegisterNameList & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_controlRegisterBitSliceList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_mRegisterBitSliceListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_mRegisterNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterDeclarationListAST ;
 
} ; // End of GALGAS_controlRegisterDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterDeclarationListAST (const GALGAS_controlRegisterDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_controlRegisterNameList current_mRegisterNameList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRegisterTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterBitSliceList current_mRegisterBitSliceList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterBitSliceList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterBitSliceList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterBitSliceList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterBitSliceList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterBitSliceList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controlRegisterBitSliceList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_controlRegisterBitSliceList constructor_listWithValue (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterBitSliceList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterBitSliceList add_operation (const GALGAS_controlRegisterBitSliceList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_controlRegisterBitSlice constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_controlRegisterBitSlice & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_controlRegisterBitSlice & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_controlRegisterBitSlice & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSlice getter_mRegisterBitSliceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterBitSliceList ;
 
} ; // End of GALGAS_controlRegisterBitSliceList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterBitSliceList : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_controlRegisterBitSlice current_mRegisterBitSlice (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterBitSliceList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterNameList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterNameList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterNameList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_controlRegisterNameList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRegisterName,
                                                  const class GALGAS_lstringlist & in_mAttributeList,
                                                  const class GALGAS_lbigint & in_mRegisterAddress
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterNameList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controlRegisterNameList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_controlRegisterNameList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstringlist & inOperand1,
                                                                            const class GALGAS_lbigint & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterNameList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_lbigint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterNameList add_operation (const GALGAS_controlRegisterNameList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_lbigint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_lbigint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_lbigint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_lbigint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_lbigint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mRegisterAddressAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterNameList ;
 
} ; // End of GALGAS_controlRegisterNameList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_controlRegisterNameList : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterNameList (const GALGAS_controlRegisterNameList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRegisterName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mRegisterAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterNameList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @controlRegisterDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_controlRegisterNameList mAttribute_mRegisterNameList ;
  public : GALGAS_lstring mAttribute_mRegisterTypeName ;
  public : GALGAS_controlRegisterBitSliceList mAttribute_mRegisterBitSliceList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controlRegisterDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controlRegisterDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_controlRegisterDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controlRegisterDeclarationListAST_2D_element (const GALGAS_controlRegisterNameList & in_mRegisterNameList,
                                                                const GALGAS_lstring & in_mRegisterTypeName,
                                                                const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controlRegisterDeclarationListAST_2D_element constructor_new (const class GALGAS_controlRegisterNameList & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_controlRegisterBitSliceList & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_mRegisterBitSliceList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_mRegisterNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instructionListAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_instructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_instructionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_instructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_instructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_instructionListAST constructor_listWithValue (const class GALGAS_instructionAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_instructionAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST add_operation (const GALGAS_instructionListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_instructionAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_instructionAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_instructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_instructionAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_instructionAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_instructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListAST ;
 
} ; // End of GALGAS_instructionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_instructionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_instructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_instructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procFormalArgumentList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_procFormalArgumentList constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_lstring & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procFormalArgumentList add_operation (const GALGAS_procFormalArgumentList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procFormalArgumentList ;
 
} ; // End of GALGAS_procFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procFormalArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_procFormalArgumentList (const GALGAS_procFormalArgumentList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @procedureDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procedureDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mMutating ;
  public : GALGAS_lstringlist mAttribute_mProcedureModeList ;
  public : GALGAS_lstring mAttribute_mProcedureName ;
  public : GALGAS_lstringlist mAttribute_mProcedureAttributeList ;
  public : GALGAS_procFormalArgumentList mAttribute_mProcFormalArgumentList ;
  public : GALGAS_instructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfProcLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procedureDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_procedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_procedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_procedureDeclarationListAST_2D_element (const GALGAS_bool & in_mMutating,
                                                          const GALGAS_lstringlist & in_mProcedureModeList,
                                                          const GALGAS_lstring & in_mProcedureName,
                                                          const GALGAS_lstringlist & in_mProcedureAttributeList,
                                                          const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                          const GALGAS_instructionListAST & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procedureDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procedureDeclarationListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                 const class GALGAS_instructionListAST & inOperand5,
                                                                                 const class GALGAS_location & inOperand6
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procedureDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMutating (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureModeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcedureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @requiredProcedureDeclarationListAST list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_requiredProcedureDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_requiredProcedureDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_requiredProcedureDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_bool & in_mMutating,
                                                  const class GALGAS_lstring & in_mRequiredProcedureName,
                                                  const class GALGAS_lstringlist & in_mProcedureModeList,
                                                  const class GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                  const class GALGAS_location & in_mEndOfProcLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredProcedureDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_requiredProcedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_requiredProcedureDeclarationListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                                        const class GALGAS_procFormalArgumentList & inOperand3,
                                                                                        const class GALGAS_location & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_procFormalArgumentList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_requiredProcedureDeclarationListAST add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_procFormalArgumentList constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_procFormalArgumentList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_procFormalArgumentList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_procFormalArgumentList & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_procFormalArgumentList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_procFormalArgumentList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMutatingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureModeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRequiredProcedureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_requiredProcedureDeclarationListAST ;
 
} ; // End of GALGAS_requiredProcedureDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_requiredProcedureDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_requiredProcedureDeclarationListAST (const GALGAS_requiredProcedureDeclarationListAST & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mMutating (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRequiredProcedureName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mProcedureModeList (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_requiredProcedureDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @requiredProcedureDeclarationListAST_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_requiredProcedureDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mMutating ;
  public : GALGAS_lstring mAttribute_mRequiredProcedureName ;
  public : GALGAS_lstringlist mAttribute_mProcedureModeList ;
  public : GALGAS_procFormalArgumentList mAttribute_mProcFormalArgumentList ;
  public : GALGAS_location mAttribute_mEndOfProcLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_requiredProcedureDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_bool & in_mMutating,
                                                                  const GALGAS_lstring & in_mRequiredProcedureName,
                                                                  const GALGAS_lstringlist & in_mProcedureModeList,
                                                                  const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                                  const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredProcedureDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_requiredProcedureDeclarationListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_lstringlist & inOperand2,
                                                                                         const class GALGAS_procFormalArgumentList & inOperand3,
                                                                                         const class GALGAS_location & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMutating (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mProcedureModeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRequiredProcedureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_requiredProcedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @funcFormalArgumentList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_funcFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_funcFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_funcFormalArgumentList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_funcFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_funcFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_funcFormalArgumentList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_funcFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_funcFormalArgumentList add_operation (const GALGAS_funcFormalArgumentList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_funcFormalArgumentList ;
 
} ; // End of GALGAS_funcFormalArgumentList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_funcFormalArgumentList : public cGenericAbstractEnumerator {
  public : cEnumerator_funcFormalArgumentList (const GALGAS_funcFormalArgumentList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_funcFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_funcFormalArgumentList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @functionDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lstringlist mAttribute_mFunctionModeList ;
  public : GALGAS_lstringlist mAttribute_mFunctionAttributeList ;
  public : GALGAS_funcFormalArgumentList mAttribute_mFuncFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mResultTypeName ;
  public : GALGAS_instructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfFuncLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionDeclarationListAST_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                         const GALGAS_lstringlist & in_mFunctionModeList,
                                                         const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                         const GALGAS_funcFormalArgumentList & in_mFuncFormalArgumentList,
                                                         const GALGAS_lstring & in_mResultTypeName,
                                                         const GALGAS_instructionListAST & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfFuncLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1,
                                                                                const class GALGAS_lstringlist & inOperand2,
                                                                                const class GALGAS_funcFormalArgumentList & inOperand3,
                                                                                const class GALGAS_lstring & inOperand4,
                                                                                const class GALGAS_instructionListAST & inOperand5,
                                                                                const class GALGAS_location & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFuncLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_funcFormalArgumentList getter_mFuncFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionModeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @bootList sorted list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_bootList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bootList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_bootList constructor_sortedListWithValue (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_instructionListAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2,
                                                                   const class GALGAS_bigint & inOperand3,
                                                                   const class GALGAS_location & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_bootList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_bigint & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_location & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_bigint & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_location & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_bigint & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_location & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_location & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_bootList ;
 
} ; // End of GALGAS_bootList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bootList : public cGenericAbstractEnumerator {
  public : cEnumerator_bootList (const GALGAS_bootList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mBootLocation (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBootLocation (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mPriorityLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bootList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_location mAttribute_mBootLocation ;
  public : GALGAS_instructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfBootLocation ;
  public : GALGAS_bigint mAttribute_mPriority ;
  public : GALGAS_location mAttribute_mPriorityLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bootList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bootList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bootList_2D_element (const GALGAS_location & in_mBootLocation,
                                       const GALGAS_instructionListAST & in_mInstructionList,
                                       const GALGAS_location & in_mEndOfBootLocation,
                                       const GALGAS_bigint & in_mPriority,
                                       const GALGAS_location & in_mPriorityLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bootList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_instructionListAST & inOperand1,
                                                              const class GALGAS_location & inOperand2,
                                                              const class GALGAS_bigint & inOperand3,
                                                              const class GALGAS_location & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mBootLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBootLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mPriorityLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @initList sorted list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_initList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_initList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_initList constructor_sortedListWithValue (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_initRequiredByProcList & inOperand1,
                                                                   const class GALGAS_instructionListAST & inOperand2,
                                                                   const class GALGAS_location & inOperand3,
                                                                   const class GALGAS_lbigint & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_initList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_initRequiredByProcList & inOperand1,
                                                      const class GALGAS_instructionListAST & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      const class GALGAS_lbigint & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_location & outArgument0,
                                                     class GALGAS_initRequiredByProcList & outArgument1,
                                                     class GALGAS_instructionListAST & outArgument2,
                                                     class GALGAS_location & outArgument3,
                                                     class GALGAS_lbigint & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_location & outArgument0,
                                                     class GALGAS_initRequiredByProcList & outArgument1,
                                                     class GALGAS_instructionListAST & outArgument2,
                                                     class GALGAS_location & outArgument3,
                                                     class GALGAS_lbigint & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_location & outArgument0,
                                                  class GALGAS_initRequiredByProcList & outArgument1,
                                                  class GALGAS_instructionListAST & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  class GALGAS_lbigint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_location & outArgument0,
                                                  class GALGAS_initRequiredByProcList & outArgument1,
                                                  class GALGAS_instructionListAST & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  class GALGAS_lbigint & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_initList ;
 
} ; // End of GALGAS_initList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initList : public cGenericAbstractEnumerator {
  public : cEnumerator_initList (const GALGAS_initList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mInitLocation (LOCATION_ARGS) const ;
  public : class GALGAS_initRequiredByProcList current_mRequiredByProcList (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInitLocation (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRequiredByProcList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initRequiredByProcList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_initRequiredByProcList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_initRequiredByProcList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mProcName,
                                                  const class GALGAS_procFormalArgumentList & in_mProcFormalArgumentList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initRequiredByProcList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_initRequiredByProcList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_initRequiredByProcList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_procFormalArgumentList & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_initRequiredByProcList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_procFormalArgumentList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_initRequiredByProcList add_operation (const GALGAS_initRequiredByProcList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_procFormalArgumentList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_procFormalArgumentList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_procFormalArgumentList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_procFormalArgumentList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_procFormalArgumentList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_procFormalArgumentList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRequiredByProcList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRequiredByProcList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRequiredByProcList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_initRequiredByProcList ;
 
} ; // End of GALGAS_initRequiredByProcList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_initRequiredByProcList : public cGenericAbstractEnumerator {
  public : cEnumerator_initRequiredByProcList (const GALGAS_initRequiredByProcList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mProcName (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mProcFormalArgumentList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_initRequiredByProcList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initRequiredByProcList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @initList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_location mAttribute_mInitLocation ;
  public : GALGAS_initRequiredByProcList mAttribute_mRequiredByProcList ;
  public : GALGAS_instructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInitLocation ;
  public : GALGAS_lbigint mAttribute_mPriority ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_initList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_initList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_initList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_initList_2D_element (const GALGAS_location & in_mInitLocation,
                                       const GALGAS_initRequiredByProcList & in_mRequiredByProcList,
                                       const GALGAS_instructionListAST & in_mInstructionList,
                                       const GALGAS_location & in_mEndOfInitLocation,
                                       const GALGAS_lbigint & in_mPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_initList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_initList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_initRequiredByProcList & inOperand1,
                                                              const class GALGAS_instructionListAST & inOperand2,
                                                              const class GALGAS_location & inOperand3,
                                                              const class GALGAS_lbigint & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_initList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initRequiredByProcList getter_mRequiredByProcList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @exceptionClauseListAST sorted list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_exceptionClauseListAST : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_exceptionClauseListAST (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exceptionClauseListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_exceptionClauseListAST constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_exceptionClauseListAST constructor_sortedListWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_instructionListAST & inOperand1,
                                                                                 const class GALGAS_location & inOperand2,
                                                                                 const class GALGAS_lbigint & inOperand3,
                                                                                 const class GALGAS_location & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_exceptionClauseListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_lbigint & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_lstring & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_lbigint & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_lstring & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_lbigint & outArgument3,
                                                     class GALGAS_location & outArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_lbigint & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_lbigint & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_exceptionClauseListAST ;
 
} ; // End of GALGAS_exceptionClauseListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_exceptionClauseListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_exceptionClauseListAST (const GALGAS_exceptionClauseListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExceptionClauseName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mExceptionInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExceptionInstructions (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mLocationPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_exceptionClauseListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exceptionClauseListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @exceptionClauseListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_exceptionClauseListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mExceptionClauseName ;
  public : GALGAS_instructionListAST mAttribute_mExceptionInstructionList ;
  public : GALGAS_location mAttribute_mEndOfExceptionInstructions ;
  public : GALGAS_lbigint mAttribute_mPriority ;
  public : GALGAS_location mAttribute_mLocationPriority ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_exceptionClauseListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_exceptionClauseListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_exceptionClauseListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_exceptionClauseListAST_2D_element (const GALGAS_lstring & in_mExceptionClauseName,
                                                     const GALGAS_instructionListAST & in_mExceptionInstructionList,
                                                     const GALGAS_location & in_mEndOfExceptionInstructions,
                                                     const GALGAS_lbigint & in_mPriority,
                                                     const GALGAS_location & in_mLocationPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exceptionClauseListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_exceptionClauseListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_instructionListAST & inOperand1,
                                                                            const class GALGAS_location & inOperand2,
                                                                            const class GALGAS_lbigint & inOperand3,
                                                                            const class GALGAS_location & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_exceptionClauseListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExceptionInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionClauseName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mExceptionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_exceptionClauseListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exceptionClauseListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @exceptionTypesAST list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_exceptionTypesAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_exceptionTypesAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_exceptionTypesAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExceptionCodeTypeName,
                                                  const class GALGAS_lstring & in_mExceptionLineTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exceptionTypesAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_exceptionTypesAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_exceptionTypesAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_exceptionTypesAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_exceptionTypesAST add_operation (const GALGAS_exceptionTypesAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionCodeTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionLineTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionTypesAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionTypesAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionTypesAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_exceptionTypesAST ;
 
} ; // End of GALGAS_exceptionTypesAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_exceptionTypesAST : public cGenericAbstractEnumerator {
  public : cEnumerator_exceptionTypesAST (const GALGAS_exceptionTypesAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExceptionCodeTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mExceptionLineTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_exceptionTypesAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exceptionTypesAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @exceptionTypesAST_2D_element struct                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_exceptionTypesAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mExceptionCodeTypeName ;
  public : GALGAS_lstring mAttribute_mExceptionLineTypeName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_exceptionTypesAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_exceptionTypesAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_exceptionTypesAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_exceptionTypesAST_2D_element (const GALGAS_lstring & in_mExceptionCodeTypeName,
                                                const GALGAS_lstring & in_mExceptionLineTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exceptionTypesAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_exceptionTypesAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_exceptionTypesAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionCodeTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExceptionLineTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_exceptionTypesAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exceptionTypesAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Parser class 'common_syntax' declaration                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_common_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_common_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_ast & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_expressionAST & outArgument0,
                                           class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__30__ (class GALGAS_expressionAST & outArgument0,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__30__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__31__ (class GALGAS_expressionAST & outArgument0,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__31__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__32__ (class GALGAS_expressionAST & outArgument0,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__31__32__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__32__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__32__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__33__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__33__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__34__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__34__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__35__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__35__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__36__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__36__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__37__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__37__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__38__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__38__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__39__ (class GALGAS_expressionAST & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_5F__39__parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_declaration_ (class GALGAS_functionDeclarationListAST & ioArgument0,
                                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_ (class GALGAS_ifInstructionAST & outArgument0,
                                                  class GALGAS_labelMap & ioArgument1,
                                                  const class GALGAS_lstring constinArgument2,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_ (class GALGAS_instructionListAST & ioArgument0,
                                            class GALGAS_labelMap & ioArgument1,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_ (class GALGAS_instructionListAST & outArgument0,
                                                class GALGAS_labelMap & ioArgument1,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_expressionAST & outArgument0,
                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_ (class GALGAS_procedureDeclarationListAST & ioArgument0,
                                          class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_ (class GALGAS_procFormalArgumentList & outArgument0,
                                                                 class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_header_ (class GALGAS_lstringlist & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_lstringlist & outArgument2,
                                                    class GALGAS_procFormalArgumentList & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_header_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_ast & ioArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_common_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & ioArgument0,
                                                              GALGAS_lstringlist & outArgument1,
                                                              GALGAS_location & outArgument2,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i1_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i1_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i3_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i3_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i4_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i4_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i5_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i5_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i6_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i6_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i7_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i7_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i8_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i8_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i9_ (GALGAS_ast & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i9_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i10_ (GALGAS_ast & ioArgument0,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i10_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i11_ (GALGAS_ast & ioArgument0,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i11_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_function_5F_declaration_i12_ (GALGAS_functionDeclarationListAST & ioArgument0,
                                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_function_5F_declaration_i12_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_i13_ (GALGAS_procedureDeclarationListAST & ioArgument0,
                                                         C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_i13_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_5F_header_i14_ (GALGAS_lstringlist & outArgument0,
                                                                   GALGAS_lstring & outArgument1,
                                                                   GALGAS_lstringlist & outArgument2,
                                                                   GALGAS_procFormalArgumentList & outArgument3,
                                                                   GALGAS_bool & outArgument4,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_5F_header_i14_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_5F_formal_5F_arguments_i15_ (GALGAS_procFormalArgumentList & outArgument0,
                                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_procedure_5F_formal_5F_arguments_i15_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i16_ (GALGAS_ast & ioArgument0,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i16_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i17_ (GALGAS_ast & ioArgument0,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_declaration_i17_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_i18_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_i18_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__32__i19_ (GALGAS_expressionAST & outArgument0,
                                                                      C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__32__i19_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__31__i20_ (GALGAS_expressionAST & outArgument0,
                                                                      C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__31__i20_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__30__i21_ (GALGAS_expressionAST & outArgument0,
                                                                      C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__30__i21_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__39__i22_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__39__i22_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__38__i23_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__38__i23_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__37__i24_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__37__i24_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__36__i25_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__36__i25_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__35__i26_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__35__i26_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__34__i27_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__34__i27_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__33__i28_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__33__i28_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__32__i29_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__32__i29_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__i30_ (GALGAS_expressionAST & outArgument0,
                                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_expression_5F__31__i30_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i31_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i31_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i32_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i32_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i33_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i33_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i34_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i34_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i35_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i35_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i36_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i36_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i37_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i37_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i38_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i38_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i39_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i39_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i40_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i40_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i41_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i41_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i42_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i42_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i43_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i43_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i44_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i44_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i45_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i45_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i46_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i46_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i47_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i47_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i48_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i48_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i49_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_primary_i49_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i50_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i50_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instructionList_i51_ (GALGAS_instructionListAST & outArgument0,
                                                               GALGAS_labelMap & ioArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instructionList_i51_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i52_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i52_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i53_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i53_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i54_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i54_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i55_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i55_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i56_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i56_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i57_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i57_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i58_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i58_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i59_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i59_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i60_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i60_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_if_5F_instruction_i61_ (GALGAS_ifInstructionAST & outArgument0,
                                                                 GALGAS_labelMap & ioArgument1,
                                                                 const GALGAS_lstring constinArgument2,
                                                                 C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_if_5F_instruction_i61_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i62_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i62_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i63_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i63_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i64_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i64_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i65_ (GALGAS_instructionListAST & ioArgument0,
                                                           GALGAS_labelMap & ioArgument1,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_common_5F_syntax_instruction_i65_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_common_5F_syntax_0 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_1 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_2 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_3 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_4 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_5 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_6 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_7 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_8 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_9 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_10 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_11 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_12 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_13 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_14 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_15 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_16 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_17 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_18 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_19 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_20 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_21 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_22 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_23 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_24 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_25 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_26 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_27 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_28 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_29 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_30 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_31 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_32 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_33 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_34 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_35 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_36 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_37 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_38 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_39 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_40 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_41 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_42 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_43 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_44 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_45 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_46 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_47 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_48 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_49 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_50 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_51 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_52 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_53 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_54 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_55 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_56 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_57 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_58 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_59 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_60 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_common_5F_syntax_61 (C_Lexique_plm_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @instructionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_instructionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_instructionAST (void) ;

//---
  public : inline const class cPtr_instructionAST * ptr (void) const { return (const cPtr_instructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_instructionAST (const cPtr_instructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_instructionAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_instructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @instructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_instructionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_instructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assertInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assertInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_assertInstructionAST (void) ;

//---
  public : inline const class cPtr_assertInstructionAST * ptr (void) const { return (const cPtr_assertInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assertInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assertInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_expressionAST & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assertInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assertInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assertInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @assertInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assertInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mAssertInstructionLocation ;
  public : GALGAS_expressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_assertInstructionAST (const GALGAS_location & in_mAssertInstructionLocation,
                                      const GALGAS_expressionAST & in_mExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mAssertInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_assignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_assignmentInstructionAST * ptr (void) const { return (const cPtr_assignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                   const class GALGAS_expressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @assignmentInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetVarName ;
  public : GALGAS_lstringlist mAttribute_mFieldList ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_assignmentInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                          const GALGAS_lstringlist & in_mFieldList,
                                          const GALGAS_expressionAST & in_mSourceExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @booleanShortCircuitAndOperatorExpressionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_booleanShortCircuitAndOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_booleanShortCircuitAndOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_booleanShortCircuitAndOperatorExpressionAST * ptr (void) const { return (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanShortCircuitAndOperatorExpressionAST (const cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanShortCircuitAndOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_booleanShortCircuitAndOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_expressionAST & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanShortCircuitAndOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @booleanShortCircuitAndOperatorExpressionAST class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_booleanShortCircuitAndOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mLeftExpression ;
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_expressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_booleanShortCircuitAndOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                                             const GALGAS_location & in_mOperatorLocation,
                                                             const GALGAS_expressionAST & in_mRightExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @checkInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_checkInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_checkInstructionAST (void) ;

//---
  public : inline const class cPtr_checkInstructionAST * ptr (void) const { return (const cPtr_checkInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_checkInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_expressionAST & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_checkInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mCheckInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @checkInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_checkInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mCheckInstructionLocation ;
  public : GALGAS_expressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_checkInstructionAST (const GALGAS_location & in_mCheckInstructionLocation,
                                     const GALGAS_expressionAST & in_mExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mCheckInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @constructorCall class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorCall : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_constructorCall (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorCall constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorCall * ptr (void) const { return (const cPtr_constructorCall *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorCall (const cPtr_constructorCall * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorCall extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constructorCall constructor_new (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_location & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorCall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorCall class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCall ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @constructorCall class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorCall : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_location mAttribute_mErrorLocation ;

//--- Constructor
  public : cPtr_constructorCall (const GALGAS_lstring & in_mOptionalTypeName,
                                 const GALGAS_location & in_mErrorLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @convertExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_convertExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_convertExpressionAST (void) ;

//---
  public : inline const class cPtr_convertExpressionAST * ptr (void) const { return (const cPtr_convertExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_convertExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_convertExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               const class GALGAS_location & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_convertExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @convertExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_convertExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mExpression ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_location mAttribute_mEndOfExpression ;

//--- Constructor
  public : cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                      const GALGAS_lstring & in_mTypeName,
                                      const GALGAS_location & in_mEndOfExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationDeclaration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumerationDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_enumerationDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationDeclaration * ptr (void) const { return (const cPtr_enumerationDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationDeclaration (const cPtr_enumerationDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDeclaration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumerationDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstringlist & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCaseNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @enumerationDeclaration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumerationDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mEnumerationName ;
  public : GALGAS_lstringlist mAttribute_mCaseNameList ;

//--- Constructor
  public : cPtr_enumerationDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                        const GALGAS_lstringlist & in_mCaseNameList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mEnumerationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mCaseNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @extendExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_extendExpressionAST (void) ;

//---
  public : inline const class cPtr_extendExpressionAST * ptr (void) const { return (const cPtr_extendExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extendExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_location & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @extendExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_extendExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mExpression ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_location mAttribute_mEndOfExpression ;

//--- Constructor
  public : cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                     const GALGAS_lstring & in_mTypeName,
                                     const GALGAS_location & in_mEndOfExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @forInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_forInstructionAST (void) ;

//---
  public : inline const class cPtr_forInstructionAST * ptr (void) const { return (const cPtr_forInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_forInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_expressionAST & inOperand1,
                                                            const class GALGAS_location & inOperand2,
                                                            const class GALGAS_instructionListAST & inOperand3,
                                                            const class GALGAS_location & inOperand4
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_iteratedExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mIteratedExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @forInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_expressionAST mAttribute_mIteratedExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_iteratedExpression_5F_instruction ;
  public : GALGAS_instructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionAST (const GALGAS_lstring & in_mVarName,
                                   const GALGAS_expressionAST & in_mIteratedExpression,
                                   const GALGAS_location & in_mEndOf_5F_iteratedExpression_5F_instruction,
                                   const GALGAS_instructionListAST & in_mDoInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mIteratedExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_iteratedExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @functionCallInExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_functionCallInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionCallInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionCallInExpressionAST * ptr (void) const { return (const cPtr_functionCallInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallInExpressionAST (const cPtr_functionCallInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionCallInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_functionCallEffectiveParameterList & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionCallEffectiveParameterList list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallEffectiveParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_functionCallEffectiveParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_functionCallEffectiveParameterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_expressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallEffectiveParameterList extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionCallEffectiveParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_functionCallEffectiveParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_expressionAST & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionCallEffectiveParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionCallEffectiveParameterList add_operation (const GALGAS_functionCallEffectiveParameterList & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expressionAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expressionAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expressionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_functionCallEffectiveParameterList ;
 
} ; // End of GALGAS_functionCallEffectiveParameterList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_functionCallEffectiveParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_functionCallEffectiveParameterList (const GALGAS_functionCallEffectiveParameterList & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionCallEffectiveParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @functionCallInExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_functionCallEffectiveParameterList mAttribute_mParameterList ;

//--- Constructor
  public : cPtr_functionCallInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                             const GALGAS_lstring & in_mFunctionName,
                                             const GALGAS_functionCallEffectiveParameterList & in_mParameterList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionCallEffectiveParameterList getter_mParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalConstantDeclaration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalConstantDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_globalConstantDeclaration (void) ;

//---
  public : inline const class cPtr_globalConstantDeclaration * ptr (void) const { return (const cPtr_globalConstantDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_globalConstantDeclaration (const cPtr_globalConstantDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_globalConstantDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_expressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalConstantDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalConstantDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @globalConstantDeclaration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_globalConstantDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mConstantName ;
  public : GALGAS_lstring mAttribute_mConstantTypeName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_globalConstantDeclaration (const GALGAS_lstring & in_mConstantName,
                                           const GALGAS_lstring & in_mConstantTypeName,
                                           const GALGAS_expressionAST & in_mSourceExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @ifInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_ifInstructionAST (void) ;

//---
  public : inline const class cPtr_ifInstructionAST * ptr (void) const { return (const cPtr_ifInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifInstructionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                           const class GALGAS_location & inOperand1,
                                                           const class GALGAS_instructionListAST & inOperand2,
                                                           const class GALGAS_location & inOperand3,
                                                           const class GALGAS_instructionListAST & inOperand4,
                                                           const class GALGAS_location & inOperand5,
                                                           const class GALGAS_location & inOperand6
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfThenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mTestExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mTestExpression ;
  public : GALGAS_location mAttribute_mTestExpressionEndLocation ;
  public : GALGAS_instructionListAST mAttribute_mThenInstructionList ;
  public : GALGAS_location mAttribute_mEndOfThenInstructionList ;
  public : GALGAS_instructionListAST mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_if_5F_instruction ;

//--- Constructor
  public : cPtr_ifInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                  const GALGAS_location & in_mTestExpressionEndLocation,
                                  const GALGAS_instructionListAST & in_mThenInstructionList,
                                  const GALGAS_location & in_mEndOfThenInstructionList,
                                  const GALGAS_instructionListAST & in_mElseInstructionList,
                                  const GALGAS_location & in_mEndOfElseInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mTestExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_if_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @infixOperatorExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_infixOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_infixOperatorExpressionAST * ptr (void) const { return (const cPtr_infixOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixOperatorExpressionAST (const cPtr_infixOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_infixOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_infixOperator & inOperand2,
                                                                     const class GALGAS_expressionAST & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperator getter_mOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @infixOperator enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_infixOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_infixOperator (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_nonEqual,
    kEnum_strictInf,
    kEnum_strictSup,
    kEnum_infEqual,
    kEnum_supEqual,
    kEnum_andOp,
    kEnum_orOp,
    kEnum_xorOp,
    kEnum_booleanXorOp,
    kEnum_addOp,
    kEnum_addOpNoOvf,
    kEnum_subOp,
    kEnum_subOpNoOvf,
    kEnum_mulOp,
    kEnum_mulOpNoOvf,
    kEnum_divOp,
    kEnum_divOpNoOvf,
    kEnum_modOp,
    kEnum_modOpNoOvf,
    kEnum_leftShiftOp,
    kEnum_rightShiftOp
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperator extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_infixOperator constructor_addOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_addOpNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_andOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_booleanXorOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_divOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_divOpNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_equal (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_infEqual (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_leftShiftOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_modOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_modOpNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_mulOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_mulOpNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_nonEqual (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_orOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_rightShiftOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_strictInf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_strictSup (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_subOp (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_subOpNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_supEqual (LOCATION_ARGS) ;

  public : static GALGAS_infixOperator constructor_xorOp (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAndOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBooleanXorOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInfEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLeftShiftOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNonEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOrOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRightShiftOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictInf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStrictSup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubOpNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSupEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXorOp (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @infixOperatorExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_infixOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mLeftExpression ;
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_infixOperator mAttribute_mOp ;
  public : GALGAS_expressionAST mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_infixOperatorExpressionAST (const GALGAS_expressionAST & in_mLeftExpression,
                                            const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_infixOperator & in_mOp,
                                            const GALGAS_expressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_infixOperator getter_mOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @letInstructionWithAssignmentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_letInstructionWithAssignmentAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_letInstructionWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_letInstructionWithAssignmentAST * ptr (void) const { return (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_letInstructionWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_letInstructionWithAssignmentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_expressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_letInstructionWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_letInstructionWithAssignmentAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_letInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                 const GALGAS_lstring & in_mOptionalTypeName,
                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @literalBooleanInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalBooleanInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalBooleanInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalBooleanInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalBooleanInExpressionAST * ptr (void) const { return (const cPtr_literalBooleanInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalBooleanInExpressionAST (const cPtr_literalBooleanInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalBooleanInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalBooleanInExpressionAST constructor_new (const class GALGAS_bool & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalBooleanInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBooleanInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @literalBooleanInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalBooleanInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_bool mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalBooleanInExpressionAST (const GALGAS_bool & in_mValue
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @literalIntegerInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalIntegerInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalIntegerInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntegerInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntegerInExpressionAST * ptr (void) const { return (const cPtr_literalIntegerInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntegerInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalIntegerInExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mLiteralInteger (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntegerInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @literalIntegerInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalIntegerInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lbigint mAttribute_mLiteralInteger ;

//--- Constructor
  public : cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mLiteralInteger (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @literalStringInExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_literalStringInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringInExpressionAST * ptr (void) const { return (const cPtr_literalStringInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLiteralString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @literalStringInExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLiteralString ;

//--- Constructor
  public : cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLiteralString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @methodCallInstructionAST class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_methodCallInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_methodCallInstructionAST (void) ;

//---
  public : inline const class cPtr_methodCallInstructionAST * ptr (void) const { return (const cPtr_methodCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_methodCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_methodCallInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_procEffectiveParameterListAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterListAST getter_mEffectiveParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procEffectiveParameterListAST list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procEffectiveParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_procEffectiveParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                  const class GALGAS_lstring & in_mSelector
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procEffectiveParameterListAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procEffectiveParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_procEffectiveParameterListAST constructor_listWithValue (const class GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procEffectiveParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterListAST add_operation (const GALGAS_procEffectiveParameterListAST & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procEffectiveParameterPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procEffectiveParameterPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procEffectiveParameterPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procEffectiveParameterPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procEffectiveParameterPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procEffectiveParameterPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterPassingModeAST getter_mEffectiveParameterKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_procEffectiveParameterListAST ;
 
} ; // End of GALGAS_procEffectiveParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_procEffectiveParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_procEffectiveParameterListAST (const GALGAS_procEffectiveParameterListAST & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procEffectiveParameterPassingModeAST current_mEffectiveParameterKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_procEffectiveParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @methodCallInstructionAST class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_methodCallInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mReceiverExpression ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_procEffectiveParameterListAST mAttribute_mEffectiveParameterList ;

//--- Constructor
  public : cPtr_methodCallInstructionAST (const GALGAS_expressionAST & in_mReceiverExpression,
                                          const GALGAS_lstring & in_mMethodName,
                                          const GALGAS_procEffectiveParameterListAST & in_mEffectiveParameterList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterListAST getter_mEffectiveParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @operatorAssignInstructionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorAssignInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_operatorAssignInstructionAST (void) ;

//---
  public : inline const class cPtr_operatorAssignInstructionAST * ptr (void) const { return (const cPtr_operatorAssignInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_operatorAssignInstructionAST (const cPtr_operatorAssignInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operatorAssignInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_operatorAssignInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                       const class GALGAS_operatorAssignKind & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorAssignInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_operatorAssignKind getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operatorAssignInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorAssignInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operatorAssignKind enum                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorAssignKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_operatorAssignKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_bitWiseOrAssign,
    kEnum_bitWiseAndAssign,
    kEnum_bitWiseXorAssign,
    kEnum_addAssign,
    kEnum_addModuloAssign,
    kEnum_subAssign,
    kEnum_subModuloAssign,
    kEnum_mulAssign,
    kEnum_mulModuloAssign,
    kEnum_divAssign,
    kEnum_divZeroAssign,
    kEnum_modAssign,
    kEnum_modZeroAssign
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operatorAssignKind extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_operatorAssignKind constructor_addAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_addModuloAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_bitWiseAndAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_bitWiseOrAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_bitWiseXorAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_divAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_divZeroAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_modAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_modZeroAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_mulAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_mulModuloAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_subAssign (LOCATION_ARGS) ;

  public : static GALGAS_operatorAssignKind constructor_subModuloAssign (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorAssignKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddModuloAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBitWiseAndAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBitWiseOrAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBitWiseXorAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivZeroAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModZeroAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulModuloAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubAssign (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubModuloAssign (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operatorAssignKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorAssignKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @operatorAssignInstructionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_operatorAssignInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetVarName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;
  public : GALGAS_operatorAssignKind mAttribute_mOperator ;

//--- Constructor
  public : cPtr_operatorAssignInstructionAST (const GALGAS_lstring & in_mTargetVarName,
                                              const GALGAS_expressionAST & in_mSourceExpression,
                                              const GALGAS_operatorAssignKind & in_mOperator
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_operatorAssignKind getter_mOperator (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @prefixOperatorExpressionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperatorExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_prefixOperatorExpressionAST (void) ;

//---
  public : inline const class cPtr_prefixOperatorExpressionAST * ptr (void) const { return (const cPtr_prefixOperatorExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefixOperatorExpressionAST (const cPtr_prefixOperatorExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_prefixOperatorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_prefixOperator & inOperand1,
                                                                      const class GALGAS_expressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperator getter_mOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefixOperator enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_prefixOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_prefixOperator (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_notOperator,
    kEnum_minus,
    kEnum_unsignedComplement,
    kEnum_minusNoOvf
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperator extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_prefixOperator constructor_minus (LOCATION_ARGS) ;

  public : static GALGAS_prefixOperator constructor_minusNoOvf (LOCATION_ARGS) ;

  public : static GALGAS_prefixOperator constructor_notOperator (LOCATION_ARGS) ;

  public : static GALGAS_prefixOperator constructor_unsignedComplement (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMinus (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMinusNoOvf (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsignedComplement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperator class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperator ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @prefixOperatorExpressionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_prefixOperatorExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mOperatorLocation ;
  public : GALGAS_prefixOperator mAttribute_mOp ;
  public : GALGAS_expressionAST mAttribute_mExpression ;

//--- Constructor
  public : cPtr_prefixOperatorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                             const GALGAS_prefixOperator & in_mOp,
                                             const GALGAS_expressionAST & in_mExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_prefixOperator getter_mOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procCallInstructionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_procCallInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionAST * ptr (void) const { return (const cPtr_procCallInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procCallInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_procEffectiveParameterListAST & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterListAST getter_mEffectiveParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @procCallInstructionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procCallInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mReceiverName ;
  public : GALGAS_lstring mAttribute_mProcName ;
  public : GALGAS_procEffectiveParameterListAST mAttribute_mEffectiveParameterList ;

//--- Constructor
  public : cPtr_procCallInstructionAST (const GALGAS_lstring & in_mReceiverName,
                                        const GALGAS_lstring & in_mProcName,
                                        const GALGAS_procEffectiveParameterListAST & in_mEffectiveParameterList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProcName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procEffectiveParameterListAST getter_mEffectiveParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @registerConstantInExpressionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerConstantInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_registerConstantInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerConstantInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_registerConstantInExpressionAST * ptr (void) const { return (const cPtr_registerConstantInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerConstantInExpressionAST (const cPtr_registerConstantInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerConstantInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerConstantInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerConstantInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerConstantInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @registerConstantInExpressionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerConstantInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRegisterName ;
  public : GALGAS_lstring mAttribute_mFieldName ;

//--- Constructor
  public : cPtr_registerConstantInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                 const GALGAS_lstring & in_mFieldName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @registerIntegerExpInExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerExpInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_registerIntegerExpInExpressionAST (void) ;

//---
  public : inline const class cPtr_registerIntegerExpInExpressionAST * ptr (void) const { return (const cPtr_registerIntegerExpInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerIntegerExpInExpressionAST (const cPtr_registerIntegerExpInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerExpInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerIntegerExpInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_expressionAST & inOperand2,
                                                                            const class GALGAS_location & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerIntegerExpInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerIntegerExpInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @registerIntegerExpInExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerIntegerExpInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRegisterName ;
  public : GALGAS_lstring mAttribute_mFieldName ;
  public : GALGAS_expressionAST mAttribute_mExpression ;
  public : GALGAS_location mAttribute_mExpressionLocation ;

//--- Constructor
  public : cPtr_registerIntegerExpInExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                   const GALGAS_lstring & in_mFieldName,
                                                   const GALGAS_expressionAST & in_mExpression,
                                                   const GALGAS_location & in_mExpressionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structureDeclaration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_structureDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structureDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structureDeclaration * ptr (void) const { return (const cPtr_structureDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structureDeclaration (const cPtr_structureDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureDeclaration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_lstringlist & inOperand1,
                                                               const class GALGAS_structureFieldListAST & inOperand2,
                                                               const class GALGAS_procedureDeclarationListAST & inOperand3,
                                                               const class GALGAS_functionDeclarationListAST & inOperand4
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_mProcedureDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structureFieldListAST getter_mStructureFieldListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @structureDeclaration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structureDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStructureName ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;
  public : GALGAS_structureFieldListAST mAttribute_mStructureFieldListAST ;
  public : GALGAS_procedureDeclarationListAST mAttribute_mProcedureDeclarationListAST ;
  public : GALGAS_functionDeclarationListAST mAttribute_mFunctionDeclarationListAST ;

//--- Constructor
  public : cPtr_structureDeclaration (const GALGAS_lstring & in_mStructureName,
                                      const GALGAS_lstringlist & in_mAttributeList,
                                      const GALGAS_structureFieldListAST & in_mStructureFieldListAST,
                                      const GALGAS_procedureDeclarationListAST & in_mProcedureDeclarationListAST,
                                      const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structureFieldListAST getter_mStructureFieldListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_procedureDeclarationListAST getter_mProcedureDeclarationListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @throwInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_throwInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_throwInstructionAST (void) ;

//---
  public : inline const class cPtr_throwInstructionAST * ptr (void) const { return (const cPtr_throwInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_throwInstructionAST (const cPtr_throwInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_throwInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_throwInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_expressionAST & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_throwInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mCodeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mThrowLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_throwInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_throwInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @throwInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_throwInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mThrowLocation ;
  public : GALGAS_expressionAST mAttribute_mCodeExpression ;

//--- Constructor
  public : cPtr_throwInstructionAST (const GALGAS_location & in_mThrowLocation,
                                     const GALGAS_expressionAST & in_mCodeExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mThrowLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mCodeExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @truncateExpressionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_truncateExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_truncateExpressionAST (void) ;

//---
  public : inline const class cPtr_truncateExpressionAST * ptr (void) const { return (const cPtr_truncateExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_truncateExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_truncateExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_location & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_truncateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_truncateExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @truncateExpressionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_truncateExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mExpression ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_location mAttribute_mEndOfExpression ;

//--- Constructor
  public : cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                       const GALGAS_lstring & in_mTypeName,
                                       const GALGAS_location & in_mEndOfExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeAliasDeclaration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeAliasDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_typeAliasDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeAliasDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeAliasDeclaration * ptr (void) const { return (const cPtr_typeAliasDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeAliasDeclaration (const cPtr_typeAliasDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeAliasDeclaration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeAliasDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_lstring & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeAliasDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAliasedTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNewTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeAliasDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @typeAliasDeclaration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeAliasDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mNewTypeName ;
  public : GALGAS_lstring mAttribute_mAliasedTypeName ;

//--- Constructor
  public : cPtr_typeAliasDeclaration (const GALGAS_lstring & in_mNewTypeName,
                                      const GALGAS_lstring & in_mAliasedTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mNewTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAliasedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @typedConstantCall class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typedConstantCall : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_typedConstantCall (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typedConstantCall constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typedConstantCall * ptr (void) const { return (const cPtr_typedConstantCall *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typedConstantCall (const cPtr_typedConstantCall * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typedConstantCall extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typedConstantCall constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typedConstantCall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typedConstantCall class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCall ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @typedConstantCall class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typedConstantCall : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_lstring mAttribute_mConstructorName ;

//--- Constructor
  public : cPtr_typedConstantCall (const GALGAS_lstring & in_mOptionalTypeName,
                                   const GALGAS_lstring & in_mConstructorName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstructorName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInExpressionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_varInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInExpressionAST * ptr (void) const { return (const cPtr_varInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSourceVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @varInExpressionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mSourceVarName ;
  public : GALGAS_lstringlist mAttribute_mFieldNameList ;

//--- Constructor
  public : cPtr_varInExpressionAST (const GALGAS_lstring & in_mSourceVarName,
                                    const GALGAS_lstringlist & in_mFieldNameList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSourceVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFieldNameList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varInstructionAST class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInstructionAST * ptr (void) const { return (const cPtr_varInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_lstring & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @varInstructionAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_lstring mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_varInstructionAST (const GALGAS_lstring & in_mVarName,
                                   const GALGAS_lstring & in_mTypeName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @varInstructionWithAssignmentAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInstructionWithAssignmentAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varInstructionWithAssignmentAST (void) ;

//---
  public : inline const class cPtr_varInstructionWithAssignmentAST * ptr (void) const { return (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInstructionWithAssignmentAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInstructionWithAssignmentAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_expressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInstructionWithAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInstructionWithAssignmentAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_lstring mAttribute_mOptionalTypeName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_varInstructionWithAssignmentAST (const GALGAS_lstring & in_mVarName,
                                                 const GALGAS_lstring & in_mOptionalTypeName,
                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOptionalTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @whileInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_whileInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_whileInstructionAST (void) ;

//---
  public : inline const class cPtr_whileInstructionAST * ptr (void) const { return (const cPtr_whileInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_whileInstructionAST (const cPtr_whileInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_whileInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_whileInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_instructionListAST & inOperand2,
                                                              const class GALGAS_location & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_whileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mWhileInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_whileInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_whileInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @whileInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_whileInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mTestExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_test_5F_expression ;
  public : GALGAS_instructionListAST mAttribute_mWhileInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_while_5F_instruction ;

//--- Constructor
  public : cPtr_whileInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                     const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                     const GALGAS_instructionListAST & in_mWhileInstructionList,
                                     const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mTestExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mWhileInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @controlRegisterBitSlice enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterBitSlice : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterBitSlice (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_unusedBits,
    kEnum_namedBit
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterBitSlice extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_controlRegisterBitSlice constructor_namedBit (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lbigint & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public : static GALGAS_controlRegisterBitSlice constructor_unusedBits (const class GALGAS_lbigint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_namedBit (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_unusedBits (class GALGAS_lbigint & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNamedBit (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnusedBits (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterBitSlice class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSlice ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @controlRegisterBitSlice enum, associated values                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterBitSlice_unusedBits : public cEnumAssociatedValues {
  public : const GALGAS_lbigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterBitSlice_namedBit : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lbigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                   const GALGAS_lbigint & inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterBitSlice_namedBit (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @procEffectiveParameterPassingModeAST enum                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procEffectiveParameterPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_procEffectiveParameterPassingModeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_output,
    kEnum_outputInput
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procEffectiveParameterPassingModeAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procEffectiveParameterPassingModeAST constructor_input (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

  public : static GALGAS_procEffectiveParameterPassingModeAST constructor_output (const class GALGAS_expressionAST & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static GALGAS_procEffectiveParameterPassingModeAST constructor_outputInput (const class GALGAS_lstring & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procEffectiveParameterPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_input (class GALGAS_lstring & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_output (class GALGAS_expressionAST & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_outputInput (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procEffectiveParameterPassingModeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @procEffectiveParameterPassingModeAST enum, associated values                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                              const GALGAS_location & inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procFormalArgumentPassingMode enum                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procFormalArgumentPassingMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_procFormalArgumentPassingMode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_output,
    kEnum_inputOutput
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procFormalArgumentPassingMode extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_procFormalArgumentPassingMode constructor_input (LOCATION_ARGS) ;

  public : static GALGAS_procFormalArgumentPassingMode constructor_inputOutput (LOCATION_ARGS) ;

  public : static GALGAS_procFormalArgumentPassingMode constructor_output (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procFormalArgumentPassingMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInputOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procFormalArgumentPassingMode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procFormalArgumentPassingMode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @labelMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_labelMap ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_labelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_labelMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_labelMap (const GALGAS_labelMap & inSource) ;
  public : GALGAS_labelMap & operator = (const GALGAS_labelMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_labelMap extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_labelMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_labelMap constructor_mapWithMapToOverride (const class GALGAS_labelMap & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_labelMap getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_labelMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_labelMap ;
 
} ; // End of GALGAS_labelMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_labelMap : public cGenericAbstractEnumerator {
  public : cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_labelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_labelMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@labelMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_labelMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_labelMap (const GALGAS_lstring & inKey
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @ast struct                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_globalVarDeclarationList mAttribute_mGlobalVarDeclarationList ;
  public : GALGAS_declarationListAST mAttribute_mDeclarationList ;
  public : GALGAS_extensionDeclarationListAST mAttribute_mExtensionDeclarationListAST ;
  public : GALGAS_controlRegisterDeclarationListAST mAttribute_mControlRegisterDeclarationListAST ;
  public : GALGAS_procedureDeclarationListAST mAttribute_mProcedureListAST ;
  public : GALGAS_requiredProcedureDeclarationListAST mAttribute_mRequiredProcList ;
  public : GALGAS_functionDeclarationListAST mAttribute_mFunctionListAST ;
  public : GALGAS_lstringlist mAttribute_mTargetList ;
  public : GALGAS_bootList mAttribute_mBootList ;
  public : GALGAS_initList mAttribute_mInitList ;
  public : GALGAS_exceptionClauseListAST mAttribute_mExceptionClauses ;
  public : GALGAS_exceptionTypesAST mAttribute_mExceptionTypes ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ast constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ast (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ast (const GALGAS_globalVarDeclarationList & in_mGlobalVarDeclarationList,
                       const GALGAS_declarationListAST & in_mDeclarationList,
                       const GALGAS_extensionDeclarationListAST & in_mExtensionDeclarationListAST,
                       const GALGAS_controlRegisterDeclarationListAST & in_mControlRegisterDeclarationListAST,
                       const GALGAS_procedureDeclarationListAST & in_mProcedureListAST,
                       const GALGAS_requiredProcedureDeclarationListAST & in_mRequiredProcList,
                       const GALGAS_functionDeclarationListAST & in_mFunctionListAST,
                       const GALGAS_lstringlist & in_mTargetList,
                       const GALGAS_bootList & in_mBootList,
                       const GALGAS_initList & in_mInitList,
                       const GALGAS_exceptionClauseListAST & in_mExceptionClauses,
                       const GALGAS_exceptionTypesAST & in_mExceptionTypes) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ast constructor_new (const class GALGAS_globalVarDeclarationList & inOperand0,
                                              const class GALGAS_declarationListAST & inOperand1,
                                              const class GALGAS_extensionDeclarationListAST & inOperand2,
                                              const class GALGAS_controlRegisterDeclarationListAST & inOperand3,
                                              const class GALGAS_procedureDeclarationListAST & inOperand4,
                                              const class GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                                              const class GALGAS_functionDeclarationListAST & inOperand6,
                                              const class GALGAS_lstringlist & inOperand7,
                                              const class GALGAS_bootList & inOperand8,
                                              const class GALGAS_initList & inOperand9,
                                              const class GALGAS_exceptionClauseListAST & inOperand10,
                                              const class GALGAS_exceptionTypesAST & inOperand11
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bootList getter_mBootList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationListAST getter_mControlRegisterDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionClauseListAST getter_mExceptionClauses (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_exceptionTypesAST getter_mExceptionTypes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_mExtensionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVarDeclarationList getter_mGlobalVarDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initList getter_mInitList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureDeclarationListAST getter_mProcedureListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_mRequiredProcList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'plm_specific_syntax' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_plm_5F_specific_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_plm_5F_specific_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_ast & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_plm_5F_specific_5F_syntax_declaration_i0_ (GALGAS_ast & ioArgument0,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_specific_5F_syntax_declaration_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Parser class 'plm_target_specific_syntax' declaration                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_plm_5F_target_5F_specific_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_plm_5F_target_5F_specific_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_declaration_ (class GALGAS_ast & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_plm_5F_target_5F_specific_5F_syntax_declaration_i0_ (GALGAS_ast & ioArgument0,
                                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_declaration_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_declaration_i1_ (GALGAS_ast & ioArgument0,
                                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_target_5F_specific_5F_syntax_declaration_i1_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @modeDeclaration class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_modeDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_modeDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_modeDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_modeDeclaration * ptr (void) const { return (const cPtr_modeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_modeDeclaration (const cPtr_modeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_modeDeclaration extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_modeDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_modeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_modeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_modeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @modeDeclaration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_modeDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mModeName ;

//--- Constructor
  public : cPtr_modeDeclaration (const GALGAS_lstring & in_mModeName
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pointerSizeDeclaration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pointerSizeDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_pointerSizeDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pointerSizeDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pointerSizeDeclaration * ptr (void) const { return (const cPtr_pointerSizeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pointerSizeDeclaration (const cPtr_pointerSizeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pointerSizeDeclaration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pointerSizeDeclaration constructor_new (const class GALGAS_lbigint & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pointerSizeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pointerSizeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pointerSizeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pointerSizeDeclaration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pointerSizeDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lbigint mAttribute_mSize ;

//--- Constructor
  public : cPtr_pointerSizeDeclaration (const GALGAS_lbigint & in_mSize
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mSize (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumConstantMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_enumConstantMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_enumConstantMap (const GALGAS_enumConstantMap & inSource) ;
  public : GALGAS_enumConstantMap & operator = (const GALGAS_enumConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_enumConstantMap constructor_mapWithMapToOverride (const class GALGAS_enumConstantMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_enumConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_enumConstantMap ;
 
} ; // End of GALGAS_enumConstantMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_enumConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_enumConstantMap (const GALGAS_enumConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_enumConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@enumConstantMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_enumConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;

//--- Constructor
  public : cMapElement_enumConstantMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumConstantMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_enumConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_uint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @structureFieldListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureFieldListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mFieldName ;
  public : GALGAS_lstring mAttribute_mFieldTypeName ;
  public : GALGAS_expressionAST mAttribute_mInitExpression ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_structureFieldListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_structureFieldListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_structureFieldListAST_2D_element (const GALGAS_lstring & in_mFieldName,
                                                    const GALGAS_lstring & in_mFieldTypeName,
                                                    const GALGAS_expressionAST & in_mInitExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structureFieldListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structureFieldListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_expressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureFieldListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mInitExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureFieldListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @propertyList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_propertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_propertyList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mPropertyName,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_propertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_propertyList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_propertyList add_operation (const GALGAS_propertyList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyList ;
 
} ; // End of GALGAS_propertyList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_propertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @unifiedTypeMap_2D_proxy map proxy                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_comparable (C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_copiable (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_enumerationType (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_equatable (C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_functionMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_kind (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_llvmTypeName (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureMap getter_procedureMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedConstantMap getter_typedConstantMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @propertyList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mPropertyName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_propertyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyList_2D_element (const GALGAS_string & in_mPropertyName,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_propertyList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @propertyMap map                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_propertyMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_propertyMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_propertyMap (const GALGAS_propertyMap & inSource) ;
  public : GALGAS_propertyMap & operator = (const GALGAS_propertyMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_propertyMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_propertyMap constructor_mapWithMapToOverride (const class GALGAS_propertyMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeProxyForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyMap ;
 
} ; // End of GALGAS_propertyMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_propertyMap : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@propertyMap' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeProxy ;
  public : GALGAS_uint mAttribute_mIndex ;

//--- Constructor
  public : cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                    const GALGAS_uint & in_mIndex
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @propertyMap_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeProxy ;
  public : GALGAS_uint mAttribute_mIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_propertyMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                          const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                 const class GALGAS_uint & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @allowedProcList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedProcList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mHasWriteAccess ;
  public : GALGAS_lstring mAttribute_mReceiverTypeName ;
  public : GALGAS_lstring mAttribute_mProcName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allowedProcList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_allowedProcList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_allowedProcList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_allowedProcList_2D_element (const GALGAS_bool & in_mHasWriteAccess,
                                              const GALGAS_lstring & in_mReceiverTypeName,
                                              const GALGAS_lstring & in_mProcName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedProcList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedProcList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_allowedProcList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasWriteAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProcName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allowedProcList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedProcList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @allowedFunctionList_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedFunctionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mReceiverTypeName ;
  public : GALGAS_lstring mAttribute_mFuncName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allowedFunctionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_allowedFunctionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_allowedFunctionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_allowedFunctionList_2D_element (const GALGAS_lstring & in_mReceiverTypeName,
                                                  const GALGAS_lstring & in_mFuncName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedFunctionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedFunctionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_allowedFunctionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFuncName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allowedFunctionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedFunctionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @allowedInitList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_allowedInitList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mHasWriteAccess ;
  public : GALGAS_lbigint mAttribute_mInitPriority ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_allowedInitList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_allowedInitList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_allowedInitList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_allowedInitList_2D_element (const GALGAS_bool & in_mHasWriteAccess,
                                              const GALGAS_lbigint & in_mInitPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_allowedInitList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_allowedInitList_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_lbigint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_allowedInitList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasWriteAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mInitPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_allowedInitList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allowedInitList_2D_element ;

#endif
