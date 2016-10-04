#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               LEXIQUE plm_5F_lexique                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    R O U T I N E S                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                    E X T E R N    F U N C T I O N S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                       T O K E N    C L A S S                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_plm_5F_lexique : public cToken {
  public : C_BigInt mLexicalAttribute_bigInteger ;
  public : C_String mLexicalAttribute_tokenString ;

  public : cTokenFor_plm_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                     S C A N N E R    C L A S S                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_plm_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_plm_5F_lexique (C_Compiler * inCallerCompiler,
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
   kToken__40_attribute,
   kToken__24_type,
   kToken_integer,
   kToken__22_string_22_,
   kToken_comment,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken_and,
   kToken_assert,
   kToken_at,
   kToken_boot,
   kToken_case,
   kToken_check,
   kToken_configuration,
   kToken_convert,
   kToken_do,
   kToken_else,
   kToken_enum,
   kToken_extend,
   kToken_extension,
   kToken_extern,
   kToken_false,
   kToken_for,
   kToken_func,
   kToken_guard,
   kToken_if,
   kToken_import,
   kToken_in,
   kToken_init,
   kToken_isr,
   kToken_let,
   kToken_loop,
   kToken_module,
   kToken_not,
   kToken_or,
   kToken_panic,
   kToken_primitive,
   kToken_priority,
   kToken_public,
   kToken_register,
   kToken_required,
   kToken_safe,
   kToken_section,
   kToken_self,
   kToken_service,
   kToken_setup,
   kToken_struct,
   kToken_stackSize,
   kToken_staticArray,
   kToken_switch,
   kToken_sync,
   kToken_system,
   kToken_target,
   kToken_task,
   kToken_true,
   kToken_truncate,
   kToken_type,
   kToken_until,
   kToken_var,
   kToken_user,
   kToken_when,
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
   kToken__2E__2E__3C_,
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
  public : virtual int16_t terminalVocabularyCount (void) const { return 114 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (cTokenFor_plm_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

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
//                              Abstract extension getter '@abstractDeclaration location'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*enterExtensionGetter_abstractDeclaration_location) (const class cPtr_abstractDeclaration * inObject,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractDeclaration_location inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callExtensionGetter_location (const class cPtr_abstractDeclaration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

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
  public : static class GALGAS_declarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_declarationListAST constructor_listWithValue (const class GALGAS_abstractDeclaration & inOperand0
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
  public : static class GALGAS_declarationListAST_2D_element constructor_new (const class GALGAS_abstractDeclaration & inOperand0
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
                                                  const class GALGAS_bool & in_mAllowedAccessToAll
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVarDeclarationList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalVarDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_globalVarDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_expressionAST & inOperand2,
                                                                                   const class GALGAS_bool & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalVarDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_expressionAST & inOperand2,
                                                      const class GALGAS_bool & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_globalVarDeclarationList add_operation (const GALGAS_globalVarDeclarationList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_expressionAST constinArgument2,
                                                       class GALGAS_bool constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_expressionAST & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_expressionAST & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_expressionAST & outArgument2,
                                                       class GALGAS_bool & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_expressionAST & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_expressionAST & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAllowedAccessToAllAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_bool current_mAllowedAccessToAll (LOCATION_ARGS) const ;
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
//                                     @globalVarDeclarationList_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_globalVarDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;
  public : GALGAS_bool mAttribute_mAllowedAccessToAll ;


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
                                                       const GALGAS_bool & in_mAllowedAccessToAll) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalVarDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalVarDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_expressionAST & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAllowedAccessToAll (LOCATION_ARGS) const ;

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
                                                  const class GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                  const class GALGAS_structurePropertyListAST & in_mPropertyList,
                                                  const class GALGAS_svcDeclarationListAST & in_mSVCListAST,
                                                  const class GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_extensionDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_functionDeclarationListAST & inOperand1,
                                                                                      const class GALGAS_structurePropertyListAST & inOperand2,
                                                                                      const class GALGAS_svcDeclarationListAST & inOperand3,
                                                                                      const class GALGAS_guardDeclarationListAST & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extensionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_functionDeclarationListAST & inOperand1,
                                                      const class GALGAS_structurePropertyListAST & inOperand2,
                                                      const class GALGAS_svcDeclarationListAST & inOperand3,
                                                      const class GALGAS_guardDeclarationListAST & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extensionDeclarationListAST add_operation (const GALGAS_extensionDeclarationListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_functionDeclarationListAST constinArgument1,
                                                       class GALGAS_structurePropertyListAST constinArgument2,
                                                       class GALGAS_svcDeclarationListAST constinArgument3,
                                                       class GALGAS_guardDeclarationListAST constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_functionDeclarationListAST & outArgument1,
                                                  class GALGAS_structurePropertyListAST & outArgument2,
                                                  class GALGAS_svcDeclarationListAST & outArgument3,
                                                  class GALGAS_guardDeclarationListAST & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_functionDeclarationListAST & outArgument1,
                                                 class GALGAS_structurePropertyListAST & outArgument2,
                                                 class GALGAS_svcDeclarationListAST & outArgument3,
                                                 class GALGAS_guardDeclarationListAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_functionDeclarationListAST & outArgument1,
                                                       class GALGAS_structurePropertyListAST & outArgument2,
                                                       class GALGAS_svcDeclarationListAST & outArgument3,
                                                       class GALGAS_guardDeclarationListAST & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_functionDeclarationListAST & outArgument1,
                                               class GALGAS_structurePropertyListAST & outArgument2,
                                               class GALGAS_svcDeclarationListAST & outArgument3,
                                               class GALGAS_guardDeclarationListAST & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_functionDeclarationListAST & outArgument1,
                                              class GALGAS_structurePropertyListAST & outArgument2,
                                              class GALGAS_svcDeclarationListAST & outArgument3,
                                              class GALGAS_guardDeclarationListAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mProcedureDeclarationListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mPropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_mSVCListASTAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_functionDeclarationListAST current_mProcedureDeclarationListAST (LOCATION_ARGS) const ;
  public : class GALGAS_structurePropertyListAST current_mPropertyList (LOCATION_ARGS) const ;
  public : class GALGAS_svcDeclarationListAST current_mSVCListAST (LOCATION_ARGS) const ;
  public : class GALGAS_guardDeclarationListAST current_mGuardListAST (LOCATION_ARGS) const ;
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
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_bool & in_mPublicFunction,
                                                  const class GALGAS_lstring & in_mFunctionName,
                                                  const class GALGAS_lstringlist & in_mFunctionAttributeList,
                                                  const class GALGAS_procFormalArgumentList & in_mFunctionFormalArgumentList,
                                                  const class GALGAS_lstring & in_mFunctionReturnTypeName,
                                                  const class GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                  const class GALGAS_location & in_mEndOfFunctionDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionDeclarationListAST constructor_listWithValue (const class GALGAS_mode & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstringlist & inOperand3,
                                                                                     const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                     const class GALGAS_lstring & inOperand5,
                                                                                     const class GALGAS_instructionListAST & inOperand6,
                                                                                     const class GALGAS_location & inOperand7
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_functionDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mode & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_procFormalArgumentList & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_instructionListAST & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST add_operation (const GALGAS_functionDeclarationListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_mode constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_procFormalArgumentList constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_instructionListAST constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_mode & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_procFormalArgumentList & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  class GALGAS_instructionListAST & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_mode & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_procFormalArgumentList & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_instructionListAST & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_mode & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_procFormalArgumentList & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_instructionListAST & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_mode & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_procFormalArgumentList & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_instructionListAST & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_mode & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_procFormalArgumentList & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_instructionListAST & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mFunctionFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mFunctionInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicFunctionAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPublicFunction (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFunctionAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFunctionReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mFunctionInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_functionDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @guardDeclarationListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_guardDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_guardDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mGuardName,
                                                  const class GALGAS_bool & in_mIsPublic,
                                                  const class GALGAS_lstringlist & in_mGuardAttributeList,
                                                  const class GALGAS_procFormalArgumentList & in_mGuardFormalArgumentList,
                                                  const class GALGAS_guardKind & in_mGuardKind,
                                                  const class GALGAS_instructionListAST & in_mGuardInstructionList,
                                                  const class GALGAS_location & in_mEndOfGuardDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_guardDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  const class GALGAS_procFormalArgumentList & inOperand3,
                                                                                  const class GALGAS_guardKind & inOperand4,
                                                                                  const class GALGAS_instructionListAST & inOperand5,
                                                                                  const class GALGAS_location & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guardDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_procFormalArgumentList & inOperand3,
                                                      const class GALGAS_guardKind & inOperand4,
                                                      const class GALGAS_instructionListAST & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_guardDeclarationListAST add_operation (const GALGAS_guardDeclarationListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_procFormalArgumentList constinArgument3,
                                                       class GALGAS_guardKind constinArgument4,
                                                       class GALGAS_instructionListAST constinArgument5,
                                                       class GALGAS_location constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_procFormalArgumentList & outArgument3,
                                                  class GALGAS_guardKind & outArgument4,
                                                  class GALGAS_instructionListAST & outArgument5,
                                                  class GALGAS_location & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_procFormalArgumentList & outArgument3,
                                                 class GALGAS_guardKind & outArgument4,
                                                 class GALGAS_instructionListAST & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_procFormalArgumentList & outArgument3,
                                                       class GALGAS_guardKind & outArgument4,
                                                       class GALGAS_instructionListAST & outArgument5,
                                                       class GALGAS_location & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_procFormalArgumentList & outArgument3,
                                               class GALGAS_guardKind & outArgument4,
                                               class GALGAS_instructionListAST & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_procFormalArgumentList & outArgument3,
                                              class GALGAS_guardKind & outArgument4,
                                              class GALGAS_instructionListAST & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfGuardDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mGuardFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mGuardInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKind getter_mGuardKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guardDeclarationListAST ;
 
} ; // End of GALGAS_guardDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_guardDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_guardDeclarationListAST (const GALGAS_guardDeclarationListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mGuardName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mGuardAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mGuardFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_guardKind current_mGuardKind (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mGuardInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfGuardDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guardDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structurePropertyListAST list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structurePropertyListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_structurePropertyListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_structurePropertyListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFieldName,
                                                  const class GALGAS_bool & in_mIsPublic,
                                                  const class GALGAS_lstring & in_mFieldTypeName,
                                                  const class GALGAS_structureVarInit & in_mInitialisation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structurePropertyListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structurePropertyListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_structurePropertyListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_structureVarInit & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_structurePropertyListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_structureVarInit & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_structurePropertyListAST add_operation (const GALGAS_structurePropertyListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_structureVarInit constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_structureVarInit & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_structureVarInit & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_structureVarInit & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_structureVarInit & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_structureVarInit & outArgument3,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_structureVarInit getter_mInitialisationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_structurePropertyListAST ;
 
} ; // End of GALGAS_structurePropertyListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_structurePropertyListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_structurePropertyListAST (const GALGAS_structurePropertyListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFieldTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_structureVarInit current_mInitialisation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_structurePropertyListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @svcDeclarationListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_svcDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_svcDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_svcDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mName,
                                                  const class GALGAS_routineKind & in_mRoutineKind,
                                                  const class GALGAS_bool & in_mPublic,
                                                  const class GALGAS_lstringlist & in_mAttributeList,
                                                  const class GALGAS_procFormalArgumentList & in_mFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnTypeName,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInstructionListLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_svcDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_svcDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_svcDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_routineKind & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                const class GALGAS_lstring & inOperand5,
                                                                                const class GALGAS_instructionListAST & inOperand6,
                                                                                const class GALGAS_location & inOperand7
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_svcDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_routineKind & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_procFormalArgumentList & inOperand4,
                                                      const class GALGAS_lstring & inOperand5,
                                                      const class GALGAS_instructionListAST & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_svcDeclarationListAST add_operation (const GALGAS_svcDeclarationListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_routineKind constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_lstringlist constinArgument3,
                                                       class GALGAS_procFormalArgumentList constinArgument4,
                                                       class GALGAS_lstring constinArgument5,
                                                       class GALGAS_instructionListAST constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_routineKind & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_procFormalArgumentList & outArgument4,
                                                  class GALGAS_lstring & outArgument5,
                                                  class GALGAS_instructionListAST & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_routineKind & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_lstringlist & outArgument3,
                                                 class GALGAS_procFormalArgumentList & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_instructionListAST & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_routineKind & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_lstringlist & outArgument3,
                                                       class GALGAS_procFormalArgumentList & outArgument4,
                                                       class GALGAS_lstring & outArgument5,
                                                       class GALGAS_instructionListAST & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_routineKind & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_lstringlist & outArgument3,
                                               class GALGAS_procFormalArgumentList & outArgument4,
                                               class GALGAS_lstring & outArgument5,
                                               class GALGAS_instructionListAST & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_routineKind & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_lstringlist & outArgument3,
                                              class GALGAS_procFormalArgumentList & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_instructionListAST & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mRoutineKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_svcDeclarationListAST ;
 
} ; // End of GALGAS_svcDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_svcDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_svcDeclarationListAST (const GALGAS_svcDeclarationListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public : class GALGAS_routineKind current_mRoutineKind (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPublic (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInstructionListLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_svcDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_svcDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @extensionDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extensionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_functionDeclarationListAST mAttribute_mProcedureDeclarationListAST ;
  public : GALGAS_structurePropertyListAST mAttribute_mPropertyList ;
  public : GALGAS_svcDeclarationListAST mAttribute_mSVCListAST ;
  public : GALGAS_guardDeclarationListAST mAttribute_mGuardListAST ;


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
                                                          const GALGAS_functionDeclarationListAST & in_mProcedureDeclarationListAST,
                                                          const GALGAS_structurePropertyListAST & in_mPropertyList,
                                                          const GALGAS_svcDeclarationListAST & in_mSVCListAST,
                                                          const GALGAS_guardDeclarationListAST & in_mGuardListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_functionDeclarationListAST & inOperand1,
                                                                                       const class GALGAS_structurePropertyListAST & inOperand2,
                                                                                       const class GALGAS_svcDeclarationListAST & inOperand3,
                                                                                       const class GALGAS_guardDeclarationListAST & inOperand4
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
  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mProcedureDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_mSVCListAST (LOCATION_ARGS) const ;

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
                                                  const class GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                  const class GALGAS_location & in_mRegisterBitSliceListLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterDeclarationListAST constructor_listWithValue (const class GALGAS_controlRegisterNameList & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                            const class GALGAS_location & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_controlRegisterNameList & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterDeclarationListAST add_operation (const GALGAS_controlRegisterDeclarationListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_controlRegisterNameList constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_controlRegisterBitSliceList constinArgument2,
                                                       class GALGAS_location constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_controlRegisterNameList & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_controlRegisterNameList & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_controlRegisterNameList & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_controlRegisterBitSliceList & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_controlRegisterNameList & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_controlRegisterBitSliceList & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_controlRegisterNameList & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_controlRegisterBitSliceList & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_mRegisterBitSliceListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterBitSliceListLocationAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_location current_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;
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
  public : static class GALGAS_controlRegisterBitSliceList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterBitSliceList constructor_listWithValue (const class GALGAS_controlRegisterBitSlice & inOperand0
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
                                                  const class GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                  const class GALGAS_lstringlist & in_mAttributeList,
                                                  const class GALGAS_expressionAST & in_mRegisterAddress,
                                                  const class GALGAS_location & in_mRegisterAddressLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterNameList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterNameList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterNameList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_controlRegisterKind & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2,
                                                                                  const class GALGAS_expressionAST & inOperand3,
                                                                                  const class GALGAS_location & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterNameList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_controlRegisterKind & inOperand1,
                                                      const class GALGAS_lstringlist & inOperand2,
                                                      const class GALGAS_expressionAST & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_controlRegisterNameList add_operation (const GALGAS_controlRegisterNameList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_controlRegisterKind constinArgument1,
                                                       class GALGAS_lstringlist constinArgument2,
                                                       class GALGAS_expressionAST constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_controlRegisterKind & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_expressionAST & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_controlRegisterKind & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 class GALGAS_expressionAST & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_controlRegisterKind & outArgument1,
                                                       class GALGAS_lstringlist & outArgument2,
                                                       class GALGAS_expressionAST & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_controlRegisterKind & outArgument1,
                                               class GALGAS_lstringlist & outArgument2,
                                               class GALGAS_expressionAST & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_controlRegisterKind & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              class GALGAS_expressionAST & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterKind getter_mControlRegisterKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRegisterAddressAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterAddressLocationAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_controlRegisterKind current_mControlRegisterKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mRegisterAddress (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mRegisterAddressLocation (LOCATION_ARGS) const ;
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
  public : GALGAS_location mAttribute_mRegisterBitSliceListLocation ;


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
                                                                const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                const GALGAS_location & in_mRegisterBitSliceListLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterDeclarationListAST_2D_element constructor_new (const class GALGAS_controlRegisterNameList & inOperand0,
                                                                                             const class GALGAS_lstring & inOperand1,
                                                                                             const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                             const class GALGAS_location & inOperand3
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

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameList getter_mRegisterNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @mode enum                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_userMode,
    kEnum_sectionMode,
    kEnum_serviceMode,
    kEnum_primitiveMode,
    kEnum_guardMode,
    kEnum_panicMode,
    kEnum_bootMode,
    kEnum_initMode,
    kEnum_safeMode,
    kEnum_anyMode
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
  public : static GALGAS_mode extractObject (const GALGAS_object & inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mode constructor_anyMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_bootMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_guardMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_initMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_panicMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_primitiveMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_safeMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_sectionMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_serviceMode (LOCATION_ARGS) ;

  public : static class GALGAS_mode constructor_userMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAnyMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBootMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGuardMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInitMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPanicMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitiveMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafeMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSectionMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isServiceMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUserMode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mode ;

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
                                                  const class GALGAS_location & in_mInstructionLocation,
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
  public : static class GALGAS_instructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_instructionListAST constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_instructionAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_instructionAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST add_operation (const GALGAS_instructionListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                       class GALGAS_instructionAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                  class GALGAS_instructionAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                 class GALGAS_instructionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                       class GALGAS_instructionAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_instructionAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_instructionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocationAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_location current_mInstructionLocation (LOCATION_ARGS) const ;
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
  public : static class GALGAS_procFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentList constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
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
//                                    @functionDeclarationListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_mode mAttribute_mMode ;
  public : GALGAS_bool mAttribute_mPublicFunction ;
  public : GALGAS_lstring mAttribute_mFunctionName ;
  public : GALGAS_lstringlist mAttribute_mFunctionAttributeList ;
  public : GALGAS_procFormalArgumentList mAttribute_mFunctionFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mFunctionReturnTypeName ;
  public : GALGAS_instructionListAST mAttribute_mFunctionInstructionList ;
  public : GALGAS_location mAttribute_mEndOfFunctionDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_functionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_functionDeclarationListAST_2D_element (const GALGAS_mode & in_mMode,
                                                         const GALGAS_bool & in_mPublicFunction,
                                                         const GALGAS_lstring & in_mFunctionName,
                                                         const GALGAS_lstringlist & in_mFunctionAttributeList,
                                                         const GALGAS_procFormalArgumentList & in_mFunctionFormalArgumentList,
                                                         const GALGAS_lstring & in_mFunctionReturnTypeName,
                                                         const GALGAS_instructionListAST & in_mFunctionInstructionList,
                                                         const GALGAS_location & in_mEndOfFunctionDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_functionDeclarationListAST_2D_element constructor_new (const class GALGAS_mode & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstringlist & inOperand3,
                                                                                      const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                      const class GALGAS_lstring & inOperand5,
                                                                                      const class GALGAS_instructionListAST & inOperand6,
                                                                                      const class GALGAS_location & inOperand7
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
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfFunctionDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFunctionAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mFunctionFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublicFunction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;

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
                                                  const class GALGAS_lstring & in_mRequiredProcedureName,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_bool & in_mIsGlobal,
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
  public : static class GALGAS_requiredProcedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_requiredProcedureDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_mode & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2,
                                                                                              const class GALGAS_procFormalArgumentList & inOperand3,
                                                                                              const class GALGAS_location & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_requiredProcedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_procFormalArgumentList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_requiredProcedureDeclarationListAST add_operation (const GALGAS_requiredProcedureDeclarationListAST & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_procFormalArgumentList constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_procFormalArgumentList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_procFormalArgumentList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_procFormalArgumentList & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_procFormalArgumentList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_procFormalArgumentList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGlobalAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
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
  public : class GALGAS_lstring current_mRequiredProcedureName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsGlobal (LOCATION_ARGS) const ;
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
  public : GALGAS_lstring mAttribute_mRequiredProcedureName ;
  public : GALGAS_mode mAttribute_mMode ;
  public : GALGAS_bool mAttribute_mIsGlobal ;
  public : GALGAS_procFormalArgumentList mAttribute_mProcFormalArgumentList ;
  public : GALGAS_location mAttribute_mEndOfProcLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & in_mRequiredProcedureName,
                                                                  const GALGAS_mode & in_mMode,
                                                                  const GALGAS_bool & in_mIsGlobal,
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
  public : static class GALGAS_requiredProcedureDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_mode & inOperand1,
                                                                                               const class GALGAS_bool & inOperand2,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGlobal (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRequiredProcedureName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_requiredProcedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @externProcedureDeclarationListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_externProcedureDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_externProcedureDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mExternProcedureName,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                  const class GALGAS_lstring & in_mReturnTypeName,
                                                  const class GALGAS_lstring & in_mRoutineNameForGeneration,
                                                  const class GALGAS_location & in_mEndOfProcLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_externProcedureDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_mode & inOperand1,
                                                                                            const class GALGAS_procFormalArgumentList & inOperand2,
                                                                                            const class GALGAS_lstring & inOperand3,
                                                                                            const class GALGAS_lstring & inOperand4,
                                                                                            const class GALGAS_location & inOperand5
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externProcedureDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_procFormalArgumentList & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      const class GALGAS_location & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_externProcedureDeclarationListAST add_operation (const GALGAS_externProcedureDeclarationListAST & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_procFormalArgumentList constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_lstring constinArgument4,
                                                       class GALGAS_location constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_procFormalArgumentList & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  class GALGAS_lstring & outArgument4,
                                                  class GALGAS_location & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_procFormalArgumentList & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_location & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_procFormalArgumentList & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_lstring & outArgument4,
                                                       class GALGAS_location & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_procFormalArgumentList & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_lstring & outArgument4,
                                               class GALGAS_location & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_procFormalArgumentList & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_location & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternProcedureNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externProcedureDeclarationListAST ;
 
} ; // End of GALGAS_externProcedureDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_externProcedureDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_externProcedureDeclarationListAST (const GALGAS_externProcedureDeclarationListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mExternProcedureName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_procFormalArgumentList current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mRoutineNameForGeneration (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_externProcedureDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @externProcedureDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externProcedureDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mExternProcedureName ;
  public : GALGAS_mode mAttribute_mMode ;
  public : GALGAS_procFormalArgumentList mAttribute_mProcFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mReturnTypeName ;
  public : GALGAS_lstring mAttribute_mRoutineNameForGeneration ;
  public : GALGAS_location mAttribute_mEndOfProcLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_externProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_externProcedureDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externProcedureDeclarationListAST_2D_element (const GALGAS_lstring & in_mExternProcedureName,
                                                                const GALGAS_mode & in_mMode,
                                                                const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList,
                                                                const GALGAS_lstring & in_mReturnTypeName,
                                                                const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                                const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externProcedureDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externProcedureDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_mode & inOperand1,
                                                                                             const class GALGAS_procFormalArgumentList & inOperand2,
                                                                                             const class GALGAS_lstring & inOperand3,
                                                                                             const class GALGAS_lstring & inOperand4,
                                                                                             const class GALGAS_location & inOperand5
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externProcedureDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternProcedureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externProcedureDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @isrDeclarationListAST list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_isrDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_isrDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_isrDeclarationListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mISRName,
                                                  const class GALGAS_mode & in_mMode,
                                                  const class GALGAS_lstring & in_mSelfTypeName,
                                                  const class GALGAS_string & in_mGlobalVariableName,
                                                  const class GALGAS_instructionListAST & in_mISRInstructionList,
                                                  const class GALGAS_location & in_mEndOfISRDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_isrDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_isrDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_isrDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_mode & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_instructionListAST & inOperand4,
                                                                                const class GALGAS_location & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_isrDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_mode & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_instructionListAST & inOperand4,
                                                      const class GALGAS_location & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_isrDeclarationListAST add_operation (const GALGAS_isrDeclarationListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_mode constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_instructionListAST constinArgument4,
                                                       class GALGAS_location constinArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_mode & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_instructionListAST & outArgument4,
                                                  class GALGAS_location & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_instructionListAST & outArgument4,
                                                 class GALGAS_location & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_mode & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_instructionListAST & outArgument4,
                                                       class GALGAS_location & outArgument5,
                                                       class GALGAS_uint constinArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_mode & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_instructionListAST & outArgument4,
                                               class GALGAS_location & outArgument5,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_instructionListAST & outArgument4,
                                              class GALGAS_location & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfISRDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mISRInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mISRNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelfTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_isrDeclarationListAST ;
 
} ; // End of GALGAS_isrDeclarationListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_isrDeclarationListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_isrDeclarationListAST (const GALGAS_isrDeclarationListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mISRName (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelfTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGlobalVariableName (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mISRInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfISRDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_isrDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @isrDeclarationListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_isrDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mISRName ;
  public : GALGAS_mode mAttribute_mMode ;
  public : GALGAS_lstring mAttribute_mSelfTypeName ;
  public : GALGAS_string mAttribute_mGlobalVariableName ;
  public : GALGAS_instructionListAST mAttribute_mISRInstructionList ;
  public : GALGAS_location mAttribute_mEndOfISRDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_isrDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_isrDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_isrDeclarationListAST_2D_element (const GALGAS_lstring & in_mISRName,
                                                    const GALGAS_mode & in_mMode,
                                                    const GALGAS_lstring & in_mSelfTypeName,
                                                    const GALGAS_string & in_mGlobalVariableName,
                                                    const GALGAS_instructionListAST & in_mISRInstructionList,
                                                    const GALGAS_location & in_mEndOfISRDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_isrDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_isrDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_mode & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 const class GALGAS_instructionListAST & inOperand4,
                                                                                 const class GALGAS_location & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_isrDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfISRDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mISRInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mISRName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelfTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_isrDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @routineKind enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_routineKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_function,
    kEnum_section,
    kEnum_safe,
    kEnum_service,
    kEnum_primitive
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
  public : static GALGAS_routineKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineKind constructor_function (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_primitive (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_safe (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_section (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_service (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitive (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSafe (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isService (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @svcDeclarationListAST_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_svcDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mName ;
  public : GALGAS_routineKind mAttribute_mRoutineKind ;
  public : GALGAS_bool mAttribute_mPublic ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;
  public : GALGAS_procFormalArgumentList mAttribute_mFormalArgumentList ;
  public : GALGAS_lstring mAttribute_mReturnTypeName ;
  public : GALGAS_instructionListAST mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionListLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_svcDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_svcDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_svcDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                    const GALGAS_routineKind & in_mRoutineKind,
                                                    const GALGAS_bool & in_mPublic,
                                                    const GALGAS_lstringlist & in_mAttributeList,
                                                    const GALGAS_procFormalArgumentList & in_mFormalArgumentList,
                                                    const GALGAS_lstring & in_mReturnTypeName,
                                                    const GALGAS_instructionListAST & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionListLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_svcDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_svcDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_routineKind & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_procFormalArgumentList & inOperand4,
                                                                                 const class GALGAS_lstring & inOperand5,
                                                                                 const class GALGAS_instructionListAST & inOperand6,
                                                                                 const class GALGAS_location & inOperand7
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_svcDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mRoutineKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_svcDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_svcDeclarationListAST_2D_element ;

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
//                                              @callInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_callInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_callInstructionAST (void) ;

//---
  public : inline const class cPtr_callInstructionAST * ptr (void) const { return (const cPtr_callInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_callInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_callInstructionAST constructor_new (const class GALGAS_assignmentTargetAST & inOperand0,
                                                                   const class GALGAS_effectiveParameterListAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_callInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterListAST getter_mArguments (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_callInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @effectiveParameterListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_effectiveParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_effectiveParameterListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_effectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                  const class GALGAS_lstring & in_mSelector
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_effectiveParameterListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_effectiveParameterListAST constructor_listWithValue (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_effectiveParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                      const class GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveParameterListAST add_operation (const GALGAS_effectiveParameterListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_effectiveParameterPassingModeAST constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_effectiveParameterPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterPassingModeAST getter_mEffectiveParameterKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_effectiveParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_effectiveParameterListAST ;
 
} ; // End of GALGAS_effectiveParameterListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_effectiveParameterListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_effectiveParameterListAST (const GALGAS_effectiveParameterListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_effectiveParameterPassingModeAST current_mEffectiveParameterKind (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_effectiveParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveParameterListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @assignmentSelfAccessAST enum                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentSelfAccessAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_assignmentSelfAccessAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noSelfAccess,
    kEnum_selfAccess
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
  public : static GALGAS_assignmentSelfAccessAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentSelfAccessAST constructor_noSelfAccess (LOCATION_ARGS) ;

  public : static class GALGAS_assignmentSelfAccessAST constructor_selfAccess (const class GALGAS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentSelfAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_selfAccess (class GALGAS_location & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoSelfAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentSelfAccessAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentSelfAccessAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @accessInAssignmentListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_accessInAssignmentListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_accessInAssignmentAST & in_mAccess
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_accessInAssignmentListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_accessInAssignmentListAST constructor_listWithValue (const class GALGAS_accessInAssignmentAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_accessInAssignmentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_accessInAssignmentAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_accessInAssignmentListAST add_operation (const GALGAS_accessInAssignmentListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_accessInAssignmentAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_accessInAssignmentAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_accessInAssignmentAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_accessInAssignmentAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_accessInAssignmentAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_accessInAssignmentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentAST getter_mAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_accessInAssignmentListAST ;
 
} ; // End of GALGAS_accessInAssignmentListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_accessInAssignmentListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_accessInAssignmentListAST (const GALGAS_accessInAssignmentListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_accessInAssignmentAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_accessInAssignmentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @assignmentTargetAST struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentTargetAST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_assignmentSelfAccessAST mAttribute_mSelfAccess ;
  public : GALGAS_lstring mAttribute_mIdentifier ;
  public : GALGAS_accessInAssignmentListAST mAttribute_mAccessList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_assignmentTargetAST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_assignmentTargetAST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_assignmentTargetAST (const GALGAS_assignmentSelfAccessAST & in_mSelfAccess,
                                       const GALGAS_lstring & in_mIdentifier,
                                       const GALGAS_accessInAssignmentListAST & in_mAccessList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentTargetAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentTargetAST constructor_new (const class GALGAS_assignmentSelfAccessAST & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_accessInAssignmentListAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentTargetAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_accessInAssignmentListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentSelfAccessAST getter_mSelfAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentTargetAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentTargetAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @callInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_callInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_assignmentTargetAST mAttribute_mAssignmentTargetAST ;
  public : GALGAS_effectiveParameterListAST mAttribute_mArguments ;
  public : GALGAS_location mAttribute_mEndOfArguments ;

//--- Constructor
  public : cPtr_callInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                    const GALGAS_effectiveParameterListAST & in_mArguments,
                                    const GALGAS_location & in_mEndOfArguments
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_effectiveParameterListAST getter_mArguments (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfArguments (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @guardKind enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_baseGuard,
    kEnum_convenienceGuard
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
  public : static GALGAS_guardKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardKind constructor_baseGuard (LOCATION_ARGS) ;

  public : static class GALGAS_guardKind constructor_convenienceGuard (const class GALGAS_callInstructionAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_convenienceGuard (class GALGAS_callInstructionAST & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @guardKind enum, associated values                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardKind_convenienceGuard : public cEnumAssociatedValues {
  public : const GALGAS_callInstructionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_guardKind_convenienceGuard (const GALGAS_callInstructionAST & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardKind_convenienceGuard (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @guardDeclarationListAST_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mGuardName ;
  public : GALGAS_bool mAttribute_mIsPublic ;
  public : GALGAS_lstringlist mAttribute_mGuardAttributeList ;
  public : GALGAS_procFormalArgumentList mAttribute_mGuardFormalArgumentList ;
  public : GALGAS_guardKind mAttribute_mGuardKind ;
  public : GALGAS_instructionListAST mAttribute_mGuardInstructionList ;
  public : GALGAS_location mAttribute_mEndOfGuardDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_guardDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_guardDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guardDeclarationListAST_2D_element (const GALGAS_lstring & in_mGuardName,
                                                      const GALGAS_bool & in_mIsPublic,
                                                      const GALGAS_lstringlist & in_mGuardAttributeList,
                                                      const GALGAS_procFormalArgumentList & in_mGuardFormalArgumentList,
                                                      const GALGAS_guardKind & in_mGuardKind,
                                                      const GALGAS_instructionListAST & in_mGuardInstructionList,
                                                      const GALGAS_location & in_mEndOfGuardDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_lstringlist & inOperand2,
                                                                                   const class GALGAS_procFormalArgumentList & inOperand3,
                                                                                   const class GALGAS_guardKind & inOperand4,
                                                                                   const class GALGAS_instructionListAST & inOperand5,
                                                                                   const class GALGAS_location & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfGuardDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentList getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mGuardInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKind getter_mGuardKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardDeclarationListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationListAST_2D_element ;

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
  public : static class GALGAS_bootList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_bootList constructor_sortedListWithValue (const class GALGAS_location & inOperand0,
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
  public : static class GALGAS_bootList_2D_element constructor_new (const class GALGAS_location & inOperand0,
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
  public : static class GALGAS_initList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_initList constructor_sortedListWithValue (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_lstringlist & inOperand3,
                                                                         const class GALGAS_instructionListAST & inOperand4,
                                                                         const class GALGAS_location & inOperand5,
                                                                         const class GALGAS_lbigint & inOperand6
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_initList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_lstringlist & inOperand3,
                                                      const class GALGAS_instructionListAST & inOperand4,
                                                      const class GALGAS_location & inOperand5,
                                                      const class GALGAS_lbigint & inOperand6
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_location & outArgument0,
                                                     class GALGAS_lstring & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     class GALGAS_lstringlist & outArgument3,
                                                     class GALGAS_instructionListAST & outArgument4,
                                                     class GALGAS_location & outArgument5,
                                                     class GALGAS_lbigint & outArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_location & outArgument0,
                                                     class GALGAS_lstring & outArgument1,
                                                     class GALGAS_string & outArgument2,
                                                     class GALGAS_lstringlist & outArgument3,
                                                     class GALGAS_instructionListAST & outArgument4,
                                                     class GALGAS_location & outArgument5,
                                                     class GALGAS_lbigint & outArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_location & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_instructionListAST & outArgument4,
                                                  class GALGAS_location & outArgument5,
                                                  class GALGAS_lbigint & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_location & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_lstringlist & outArgument3,
                                                  class GALGAS_instructionListAST & outArgument4,
                                                  class GALGAS_location & outArgument5,
                                                  class GALGAS_lbigint & outArgument6,
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
  public : class GALGAS_lstring current_mSelfTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGlobalVarName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mRequiredByProcList (LOCATION_ARGS) const ;
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
//                                             @initList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_initList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_location mAttribute_mInitLocation ;
  public : GALGAS_lstring mAttribute_mSelfTypeName ;
  public : GALGAS_string mAttribute_mGlobalVarName ;
  public : GALGAS_lstringlist mAttribute_mRequiredByProcList ;
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
                                       const GALGAS_lstring & in_mSelfTypeName,
                                       const GALGAS_string & in_mGlobalVarName,
                                       const GALGAS_lstringlist & in_mRequiredByProcList,
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
  public : static class GALGAS_initList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_string & inOperand2,
                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                    const class GALGAS_instructionListAST & inOperand4,
                                                                    const class GALGAS_location & inOperand5,
                                                                    const class GALGAS_lbigint & inOperand6
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

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGlobalVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInitLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mRequiredByProcList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelfTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_initList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @panicClauseListAST sorted list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicClauseListAST : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_panicClauseListAST (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicClauseListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicClauseListAST constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_panicClauseListAST constructor_sortedListWithValue (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_instructionListAST & inOperand1,
                                                                                   const class GALGAS_location & inOperand2,
                                                                                   const class GALGAS_lbigint & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_panicClauseListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2,
                                                      const class GALGAS_lbigint & inOperand3
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bool & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_lbigint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bool & outArgument0,
                                                     class GALGAS_instructionListAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_lbigint & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bool & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_lbigint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bool & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  class GALGAS_lbigint & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_panicClauseListAST ;
 
} ; // End of GALGAS_panicClauseListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_panicClauseListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_panicClauseListAST (const GALGAS_panicClauseListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_bool current_mIsSetup (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mPanicInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfPanicInstructions (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_panicClauseListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicClauseListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @panicClauseListAST_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicClauseListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mIsSetup ;
  public : GALGAS_instructionListAST mAttribute_mPanicInstructionList ;
  public : GALGAS_location mAttribute_mEndOfPanicInstructions ;
  public : GALGAS_lbigint mAttribute_mPriority ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicClauseListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_panicClauseListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_panicClauseListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_panicClauseListAST_2D_element (const GALGAS_bool & in_mIsSetup,
                                                 const GALGAS_instructionListAST & in_mPanicInstructionList,
                                                 const GALGAS_location & in_mEndOfPanicInstructions,
                                                 const GALGAS_lbigint & in_mPriority) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicClauseListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicClauseListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_instructionListAST & inOperand1,
                                                                              const class GALGAS_location & inOperand2,
                                                                              const class GALGAS_lbigint & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicClauseListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPanicInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSetup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mPanicInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicClauseListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicClauseListAST_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @taskList list                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mTaskName,
                                                  const class GALGAS_lbigint & in_mPriority,
                                                  const class GALGAS_lbigint & in_mStackSize,
                                                  const class GALGAS_taskVarListAST & in_mVarList,
                                                  const class GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                                  const class GALGAS_taskInitListAST & in_mTaskInitListAST,
                                                  const class GALGAS_syncInstructionBranchList & in_mGuardedCommandList,
                                                  const class GALGAS_location & in_mEndOfTaskDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lbigint & inOperand1,
                                                                   const class GALGAS_lbigint & inOperand2,
                                                                   const class GALGAS_taskVarListAST & inOperand3,
                                                                   const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                   const class GALGAS_taskInitListAST & inOperand5,
                                                                   const class GALGAS_syncInstructionBranchList & inOperand6,
                                                                   const class GALGAS_location & inOperand7
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lbigint & inOperand1,
                                                      const class GALGAS_lbigint & inOperand2,
                                                      const class GALGAS_taskVarListAST & inOperand3,
                                                      const class GALGAS_functionDeclarationListAST & inOperand4,
                                                      const class GALGAS_taskInitListAST & inOperand5,
                                                      const class GALGAS_syncInstructionBranchList & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskList add_operation (const GALGAS_taskList & inOperand,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lbigint constinArgument1,
                                                       class GALGAS_lbigint constinArgument2,
                                                       class GALGAS_taskVarListAST constinArgument3,
                                                       class GALGAS_functionDeclarationListAST constinArgument4,
                                                       class GALGAS_taskInitListAST constinArgument5,
                                                       class GALGAS_syncInstructionBranchList constinArgument6,
                                                       class GALGAS_location constinArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lbigint & outArgument1,
                                                  class GALGAS_lbigint & outArgument2,
                                                  class GALGAS_taskVarListAST & outArgument3,
                                                  class GALGAS_functionDeclarationListAST & outArgument4,
                                                  class GALGAS_taskInitListAST & outArgument5,
                                                  class GALGAS_syncInstructionBranchList & outArgument6,
                                                  class GALGAS_location & outArgument7,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_lbigint & outArgument2,
                                                 class GALGAS_taskVarListAST & outArgument3,
                                                 class GALGAS_functionDeclarationListAST & outArgument4,
                                                 class GALGAS_taskInitListAST & outArgument5,
                                                 class GALGAS_syncInstructionBranchList & outArgument6,
                                                 class GALGAS_location & outArgument7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lbigint & outArgument1,
                                                       class GALGAS_lbigint & outArgument2,
                                                       class GALGAS_taskVarListAST & outArgument3,
                                                       class GALGAS_functionDeclarationListAST & outArgument4,
                                                       class GALGAS_taskInitListAST & outArgument5,
                                                       class GALGAS_syncInstructionBranchList & outArgument6,
                                                       class GALGAS_location & outArgument7,
                                                       class GALGAS_uint constinArgument8,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lbigint & outArgument1,
                                               class GALGAS_lbigint & outArgument2,
                                               class GALGAS_taskVarListAST & outArgument3,
                                               class GALGAS_functionDeclarationListAST & outArgument4,
                                               class GALGAS_taskInitListAST & outArgument5,
                                               class GALGAS_syncInstructionBranchList & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigint & outArgument1,
                                              class GALGAS_lbigint & outArgument2,
                                              class GALGAS_taskVarListAST & outArgument3,
                                              class GALGAS_functionDeclarationListAST & outArgument4,
                                              class GALGAS_taskInitListAST & outArgument5,
                                              class GALGAS_syncInstructionBranchList & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_mGuardedCommandListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSizeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskInitListAST getter_mTaskInitListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mTaskProcListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskVarListAST getter_mVarListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskList ;
 
} ; // End of GALGAS_taskList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskList : public cGenericAbstractEnumerator {
  public : cEnumerator_taskList (const GALGAS_taskList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mPriority (LOCATION_ARGS) const ;
  public : class GALGAS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public : class GALGAS_taskVarListAST current_mVarList (LOCATION_ARGS) const ;
  public : class GALGAS_functionDeclarationListAST current_mTaskProcList (LOCATION_ARGS) const ;
  public : class GALGAS_taskInitListAST current_mTaskInitListAST (LOCATION_ARGS) const ;
  public : class GALGAS_syncInstructionBranchList current_mGuardedCommandList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @syncInstructionBranchList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionBranchList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_syncInstructionBranchList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_syncInstructionBranchList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_guardedCommand & in_mGuardedCommand,
                                                  const class GALGAS_instructionListAST & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfBranch
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionBranchList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionBranchList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_syncInstructionBranchList constructor_listWithValue (const class GALGAS_guardedCommand & inOperand0,
                                                                                    const class GALGAS_instructionListAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_syncInstructionBranchList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_guardedCommand & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchList add_operation (const GALGAS_syncInstructionBranchList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_guardedCommand constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_guardedCommand & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_guardedCommand & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_guardedCommand & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_guardedCommand & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_guardedCommand & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardedCommand getter_mGuardedCommandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_syncInstructionBranchList ;
 
} ; // End of GALGAS_syncInstructionBranchList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_syncInstructionBranchList : public cGenericAbstractEnumerator {
  public : cEnumerator_syncInstructionBranchList (const GALGAS_syncInstructionBranchList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_guardedCommand current_mGuardedCommand (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_syncInstructionBranchList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskInitListAST list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskInitListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskInitListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskInitListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lbigint & in_mTaskInitPriority,
                                                  const class GALGAS_instructionListAST & in_mTaskInitInstructionList,
                                                  const class GALGAS_location & in_mEndOfTaskInitDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskInitListAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskInitListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskInitListAST constructor_listWithValue (const class GALGAS_lbigint & inOperand0,
                                                                          const class GALGAS_instructionListAST & inOperand1,
                                                                          const class GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskInitListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lbigint & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskInitListAST add_operation (const GALGAS_taskInitListAST & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lbigint constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lbigint & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lbigint & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lbigint & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lbigint & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lbigint & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskInitDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mTaskInitInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mTaskInitPriorityAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskInitListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskInitListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskInitListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskInitListAST ;
 
} ; // End of GALGAS_taskInitListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskInitListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskInitListAST (const GALGAS_taskInitListAST & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lbigint current_mTaskInitPriority (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mTaskInitInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfTaskInitDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskInitListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskInitListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskVarListAST list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskVarListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_taskVarListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_taskVarListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mVarName,
                                                  const class GALGAS_lstring & in_mVarTypeName,
                                                  const class GALGAS_expressionAST & in_mVarInitExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskVarListAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskVarListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_taskVarListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_expressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskVarListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_expressionAST & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_taskVarListAST add_operation (const GALGAS_taskVarListAST & inOperand,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mVarInitExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskVarListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskVarListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskVarListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_taskVarListAST ;
 
} ; // End of GALGAS_taskVarListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_taskVarListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_taskVarListAST (const GALGAS_taskVarListAST & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mVarTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mVarInitExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskVarListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskVarListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @taskList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_taskList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mTaskName ;
  public : GALGAS_lbigint mAttribute_mPriority ;
  public : GALGAS_lbigint mAttribute_mStackSize ;
  public : GALGAS_taskVarListAST mAttribute_mVarList ;
  public : GALGAS_functionDeclarationListAST mAttribute_mTaskProcList ;
  public : GALGAS_taskInitListAST mAttribute_mTaskInitListAST ;
  public : GALGAS_syncInstructionBranchList mAttribute_mGuardedCommandList ;
  public : GALGAS_location mAttribute_mEndOfTaskDeclaration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_taskList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskList_2D_element (const GALGAS_lstring & in_mTaskName,
                                       const GALGAS_lbigint & in_mPriority,
                                       const GALGAS_lbigint & in_mStackSize,
                                       const GALGAS_taskVarListAST & in_mVarList,
                                       const GALGAS_functionDeclarationListAST & in_mTaskProcList,
                                       const GALGAS_taskInitListAST & in_mTaskInitListAST,
                                       const GALGAS_syncInstructionBranchList & in_mGuardedCommandList,
                                       const GALGAS_location & in_mEndOfTaskDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lbigint & inOperand1,
                                                                    const class GALGAS_lbigint & inOperand2,
                                                                    const class GALGAS_taskVarListAST & inOperand3,
                                                                    const class GALGAS_functionDeclarationListAST & inOperand4,
                                                                    const class GALGAS_taskInitListAST & inOperand5,
                                                                    const class GALGAS_syncInstructionBranchList & inOperand6,
                                                                    const class GALGAS_location & inOperand7
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_mGuardedCommandList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskInitListAST getter_mTaskInitListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mTaskProcList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskVarListAST getter_mVarList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Parser class 'plm_syntax' declaration                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_plm_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_plm_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_assignment_5F_operator_ (class GALGAS_operatorAssignmentKind & outArgument0,
                                                       class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_assignment_5F_operator_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_assignment_5F_target_ (class GALGAS_assignmentTargetAST & outArgument0,
                                                     class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_assignment_5F_target_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_ (class GALGAS_ast & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_init_ (class GALGAS_initList & ioArgument0,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_init_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_struct_5F_var_ (class GALGAS_structurePropertyListAST & ioArgument0,
                                                             class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_struct_5F_var_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_type_ (const class GALGAS_lstring constinArgument0,
                                                    class GALGAS_abstractDeclaration & outArgument1,
                                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_type_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_effective_5F_parameters_ (class GALGAS_effectiveParameterListAST & outArgument0,
                                                        class GALGAS_location & outArgument1,
                                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_effective_5F_parameters_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

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

  protected : virtual void nt_function_ (class GALGAS_functionDeclarationListAST & ioArgument0,
                                         class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_header_ (class GALGAS_mode & outArgument0,
                                                   class GALGAS_lstring & outArgument1,
                                                   class GALGAS_lstringlist & outArgument2,
                                                   class GALGAS_procFormalArgumentList & outArgument3,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_function_5F_header_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guard_ (class GALGAS_guardDeclarationListAST & ioArgument0,
                                      class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guard_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guarded_5F_command_ (class GALGAS_guardedCommand & outArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_guarded_5F_command_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_ (class GALGAS_ifInstructionAST & outArgument0,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_if_5F_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_import_5F_file_ (class GALGAS_lstringlist & ioArgument0,
                                               class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_import_5F_file_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_ (class GALGAS_instructionListAST & ioArgument0,
                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_ (class GALGAS_instructionListAST & outArgument0,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instructionList_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_isr_ (class GALGAS_isrDeclarationListAST & ioArgument0,
                                    const class GALGAS_lstring constinArgument1,
                                    const class GALGAS_string constinArgument2,
                                    class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_isr_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_mode_ (class GALGAS_mode & outArgument0,
                                     class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_mode_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_module_5F_variable_ (class GALGAS_structurePropertyListAST & ioArgument0,
                                                   class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_module_5F_variable_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_ (class GALGAS_expressionAST & outArgument0,
                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_primary_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_call_ (class GALGAS_callInstructionAST & outArgument0,
                                                  class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_call_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_ (class GALGAS_procFormalArgumentList & outArgument0,
                                                                 class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_procedure_5F_formal_5F_arguments_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_property_5F_in_5F_extension_ (class GALGAS_structurePropertyListAST & ioArgument0,
                                                            class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_property_5F_in_5F_extension_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_ (class GALGAS_svcDeclarationListAST & ioArgument0,
                                        class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_ast & ioArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                class C_Lexique_plm_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_plm_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_plm_5F_syntax_import_5F_file_i0_ (GALGAS_lstringlist & ioArgument0,
                                                          C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_import_5F_file_i0_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_start_5F_symbol_i1_ (GALGAS_ast & ioArgument0,
                                                           GALGAS_lstringlist & outArgument1,
                                                           GALGAS_location & outArgument2,
                                                           C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i2_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i2_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i3_ (const GALGAS_lstring constinArgument0,
                                                               GALGAS_abstractDeclaration & outArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i3_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i4_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i4_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_struct_5F_var_i5_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_struct_5F_var_i5_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i6_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i6_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i7_ (const GALGAS_lstring constinArgument0,
                                                               GALGAS_abstractDeclaration & outArgument1,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i7_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i8_ (GALGAS_ast & ioArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i8_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_property_5F_in_5F_extension_i9_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_property_5F_in_5F_extension_i9_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i10_ (const GALGAS_lstring constinArgument0,
                                                                GALGAS_abstractDeclaration & outArgument1,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_type_i10_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i11_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i11_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i12_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i12_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i13_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i13_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_module_5F_variable_i14_ (GALGAS_structurePropertyListAST & ioArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_module_5F_variable_i14_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i15_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i15_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i16_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i16_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i17_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i17_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i18_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i18_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i19_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i19_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i20_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i20_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_section_i21_ (GALGAS_svcDeclarationListAST & ioArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_section_i21_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i22_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i22_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i23_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i23_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_init_i24_ (GALGAS_initList & ioArgument0,
                                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_5F_init_i24_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_i25_ (GALGAS_functionDeclarationListAST & ioArgument0,
                                                     C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_i25_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_mode_i26_ (GALGAS_mode & outArgument0,
                                                 C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_mode_i26_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_5F_header_i27_ (GALGAS_mode & outArgument0,
                                                               GALGAS_lstring & outArgument1,
                                                               GALGAS_lstringlist & outArgument2,
                                                               GALGAS_procFormalArgumentList & outArgument3,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_function_5F_header_i27_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i28_ (GALGAS_procFormalArgumentList & outArgument0,
                                                                             C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_formal_5F_arguments_i28_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i29_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i29_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i30_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i30_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_isr_i31_ (GALGAS_isrDeclarationListAST & ioArgument0,
                                                const GALGAS_lstring constinArgument1,
                                                const GALGAS_string constinArgument2,
                                                C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_isr_i31_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guard_i32_ (GALGAS_guardDeclarationListAST & ioArgument0,
                                                  C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guard_i32_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i33_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i33_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_i34_ (GALGAS_expressionAST & outArgument0,
                                                       C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_i34_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__32__i35_ (GALGAS_expressionAST & outArgument0,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__32__i35_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__31__i36_ (GALGAS_expressionAST & outArgument0,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__31__i36_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__30__i37_ (GALGAS_expressionAST & outArgument0,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__30__i37_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__39__i38_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__39__i38_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__38__i39_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__38__i39_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__37__i40_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__37__i40_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__36__i41_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__36__i41_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__35__i42_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__35__i42_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__34__i43_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__34__i43_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__33__i44_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__33__i44_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__32__i45_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__32__i45_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__i46_ (GALGAS_expressionAST & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_expression_5F__31__i46_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i47_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i47_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i48_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i48_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i49_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i49_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i50_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i50_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i51_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i51_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i52_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i52_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i53_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i53_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i54_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i54_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i55_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i55_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i56_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i56_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i57_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i57_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i58_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i58_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i59_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i59_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i60_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i60_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i61_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i61_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i62_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i62_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i63_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_primary_i63_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_effective_5F_parameters_i64_ (GALGAS_effectiveParameterListAST & outArgument0,
                                                                    GALGAS_location & outArgument1,
                                                                    C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_effective_5F_parameters_i64_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instructionList_i65_ (GALGAS_instructionListAST & outArgument0,
                                                            C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instructionList_i65_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i66_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i66_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i67_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i67_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_operator_i68_ (GALGAS_operatorAssignmentKind & outArgument0,
                                                                   C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_operator_i68_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i69_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i69_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i70_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i70_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i71_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i71_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i72_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i72_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i73_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i73_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i74_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i74_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i75_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i75_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_if_5F_instruction_i76_ (GALGAS_ifInstructionAST & outArgument0,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_if_5F_instruction_i76_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i77_ (GALGAS_guardedCommand & outArgument0,
                                                               C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_guarded_5F_command_i77_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i78_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i78_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i79_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i79_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i80_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i80_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i81_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i81_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i82_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i82_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_call_i83_ (GALGAS_callInstructionAST & outArgument0,
                                                              C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_procedure_5F_call_i83_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i84_ (GALGAS_instructionListAST & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_instruction_i84_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_target_i85_ (GALGAS_assignmentTargetAST & outArgument0,
                                                                 C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_assignment_5F_target_i85_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i86_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i86_parse (C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i87_ (GALGAS_ast & ioArgument0,
                                                        C_Lexique_plm_5F_lexique * inLexique) ;

  protected : void rule_plm_5F_syntax_declaration_i87_parse (C_Lexique_plm_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_plm_5F_syntax_0 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_1 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_2 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_3 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_4 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_5 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_6 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_7 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_8 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_9 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_10 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_11 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_12 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_13 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_14 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_15 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_16 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_17 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_18 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_19 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_20 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_21 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_22 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_23 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_24 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_25 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_26 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_27 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_28 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_29 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_30 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_31 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_32 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_33 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_34 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_35 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_36 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_37 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_38 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_39 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_40 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_41 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_42 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_43 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_44 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_45 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_46 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_47 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_48 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_49 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_50 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_51 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_52 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_53 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_54 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_55 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_56 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_57 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_58 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_59 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_60 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_61 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_62 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_63 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_64 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_65 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_66 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_67 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_68 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_69 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_70 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_71 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_72 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_73 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_74 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_75 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_76 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_77 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_78 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_79 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_80 (C_Lexique_plm_5F_lexique *) = 0 ;

  protected : virtual int32_t select_plm_5F_syntax_81 (C_Lexique_plm_5F_lexique *) = 0 ;


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
  public : static class GALGAS_assertInstructionAST constructor_new (const class GALGAS_location & inOperand0,
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
  public : static class GALGAS_booleanShortCircuitAndOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
  public : static class GALGAS_checkInstructionAST constructor_new (const class GALGAS_location & inOperand0,
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
  public : static class GALGAS_constructorCall constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_functionCallEffectiveParameterList & inOperand1,
                                                                const class GALGAS_location & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorCall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionCallEffectiveParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorCall class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCall ;

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
  public : static class GALGAS_functionCallEffectiveParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_functionCallEffectiveParameterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
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
//                                      Pointer class for @constructorCall class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorCall : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_functionCallEffectiveParameterList mAttribute_mParameterList ;
  public : GALGAS_location mAttribute_mErrorLocation ;

//--- Constructor
  public : cPtr_constructorCall (const GALGAS_lstring & in_mTypeName,
                                 const GALGAS_functionCallEffectiveParameterList & in_mParameterList,
                                 const GALGAS_location & in_mErrorLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionCallEffectiveParameterList getter_mParameterList (LOCATION_ARGS) const ;
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
  public : static class GALGAS_convertExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
  public : static class GALGAS_enumerationDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
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
  public : static class GALGAS_extendExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
//                                       @extendStaticArrayDeclarationAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticArrayDeclarationAST : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_extendStaticArrayDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extendStaticArrayDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extendStaticArrayDeclarationAST * ptr (void) const { return (const cPtr_extendStaticArrayDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extendStaticArrayDeclarationAST (const cPtr_extendStaticArrayDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendStaticArrayDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticArrayDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_extendStaticArrayExpressionListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendStaticArrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionListAST getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticlistName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendStaticArrayDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extendStaticArrayExpressionListAST list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticArrayExpressionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_extendStaticArrayExpressionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_extendStaticArrayExpressionListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_extendStaticArrayExpressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mEndOfExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extendStaticArrayExpressionListAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticArrayExpressionListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_extendStaticArrayExpressionListAST constructor_listWithValue (const class GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                                                             const class GALGAS_location & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extendStaticArrayExpressionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_extendStaticArrayExpressionAST & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_extendStaticArrayExpressionListAST add_operation (const GALGAS_extendStaticArrayExpressionListAST & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_extendStaticArrayExpressionAST constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_extendStaticArrayExpressionAST & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_extendStaticArrayExpressionAST & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_extendStaticArrayExpressionAST & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_extendStaticArrayExpressionAST & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_extendStaticArrayExpressionAST & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extendStaticArrayExpressionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extendStaticArrayExpressionListAST ;
 
} ; // End of GALGAS_extendStaticArrayExpressionListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_extendStaticArrayExpressionListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_extendStaticArrayExpressionListAST (const GALGAS_extendStaticArrayExpressionListAST & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_extendStaticArrayExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_extendStaticArrayExpressionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayExpressionListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @extendStaticArrayDeclarationAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_extendStaticArrayDeclarationAST : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStaticlistName ;
  public : GALGAS_extendStaticArrayExpressionListAST mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_extendStaticArrayDeclarationAST (const GALGAS_lstring & in_mStaticlistName,
                                                 const GALGAS_extendStaticArrayExpressionListAST & in_mExpressions
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStaticlistName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_extendStaticArrayExpressionListAST getter_mExpressions (LOCATION_ARGS) const ;
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
  public : static class GALGAS_forInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_expressionAST & inOperand2,
                                                                  const class GALGAS_location & inOperand3,
                                                                  const class GALGAS_bool & inOperand4,
                                                                  const class GALGAS_instructionListAST & inOperand5,
                                                                  const class GALGAS_location & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mWhileExpression (LOCATION_ARGS) const ;


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
  public : GALGAS_lstring mAttribute_mIteratedObject ;
  public : GALGAS_expressionAST mAttribute_mWhileExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_whileExpression ;
  public : GALGAS_bool mAttribute_mStaticWhileExpression ;
  public : GALGAS_instructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forInstructionAST (const GALGAS_lstring & in_mVarName,
                                   const GALGAS_lstring & in_mIteratedObject,
                                   const GALGAS_expressionAST & in_mWhileExpression,
                                   const GALGAS_location & in_mEndOf_5F_whileExpression,
                                   const GALGAS_bool & in_mStaticWhileExpression,
                                   const GALGAS_instructionListAST & in_mDoInstructionList,
                                   const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mIteratedObject (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mWhileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_whileExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mStaticWhileExpression (LOCATION_ARGS) const ;
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
//                                       @forLowerUpperBoundInstructionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forLowerUpperBoundInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_forLowerUpperBoundInstructionAST (void) ;

//---
  public : inline const class cPtr_forLowerUpperBoundInstructionAST * ptr (void) const { return (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forLowerUpperBoundInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_forLowerUpperBoundInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_expressionAST & inOperand2,
                                                                                 const class GALGAS_location & inOperand3,
                                                                                 const class GALGAS_expressionAST & inOperand4,
                                                                                 const class GALGAS_location & inOperand5,
                                                                                 const class GALGAS_instructionListAST & inOperand6,
                                                                                 const class GALGAS_location & inOperand7
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_do_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mUpperBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forLowerUpperBoundInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forLowerUpperBoundInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_expressionAST mAttribute_mLowerBoundExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  public : GALGAS_expressionAST mAttribute_mUpperBoundExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction ;
  public : GALGAS_instructionListAST mAttribute_mDoInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_do_5F_instruction ;

//--- Constructor
  public : cPtr_forLowerUpperBoundInstructionAST (const GALGAS_lstring & in_mVarName,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                  const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                  const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                  const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                  const GALGAS_instructionListAST & in_mDoInstructionList,
                                                  const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_lowerBoundExpression_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_upperBoundExpression_5F_instruction (LOCATION_ARGS) const ;
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
  public : static class GALGAS_globalConstantDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
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
//                                               @ifExpressionAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_ifExpressionAST (void) ;

//---
  public : inline const class cPtr_ifExpressionAST * ptr (void) const { return (const cPtr_ifExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                const class GALGAS_location & inOperand1,
                                                                const class GALGAS_expressionAST & inOperand2,
                                                                const class GALGAS_location & inOperand3,
                                                                const class GALGAS_expressionAST & inOperand4,
                                                                const class GALGAS_location & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mElseExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mIfExpressionEndLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mThenExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mThenExpressionEndLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @ifExpressionAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mIfExpression ;
  public : GALGAS_location mAttribute_mIfExpressionEndLocation ;
  public : GALGAS_expressionAST mAttribute_mThenExpression ;
  public : GALGAS_location mAttribute_mThenExpressionEndLocation ;
  public : GALGAS_expressionAST mAttribute_mElseExpression ;
  public : GALGAS_location mAttribute_mElseExpressionEndLocation ;

//--- Constructor
  public : cPtr_ifExpressionAST (const GALGAS_expressionAST & in_mIfExpression,
                                 const GALGAS_location & in_mIfExpressionEndLocation,
                                 const GALGAS_expressionAST & in_mThenExpression,
                                 const GALGAS_location & in_mThenExpressionEndLocation,
                                 const GALGAS_expressionAST & in_mElseExpression,
                                 const GALGAS_location & in_mElseExpressionEndLocation
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mIfExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mThenExpressionEndLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mElseExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mElseExpressionEndLocation (LOCATION_ARGS) const ;
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
  public : static class GALGAS_ifInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                 const class GALGAS_location & inOperand1,
                                                                 const class GALGAS_bool & inOperand2,
                                                                 const class GALGAS_instructionListAST & inOperand3,
                                                                 const class GALGAS_location & inOperand4,
                                                                 const class GALGAS_instructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6,
                                                                 const class GALGAS_location & inOperand7
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

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mStaticIfExpression (LOCATION_ARGS) const ;

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
  public : GALGAS_bool mAttribute_mStaticIfExpression ;
  public : GALGAS_instructionListAST mAttribute_mThenInstructionList ;
  public : GALGAS_location mAttribute_mEndOfThenInstructionList ;
  public : GALGAS_instructionListAST mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOf_5F_if_5F_instruction ;

//--- Constructor
  public : cPtr_ifInstructionAST (const GALGAS_expressionAST & in_mTestExpression,
                                  const GALGAS_location & in_mTestExpressionEndLocation,
                                  const GALGAS_bool & in_mStaticIfExpression,
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
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mStaticIfExpression (LOCATION_ARGS) const ;
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
  public : static class GALGAS_infixOperatorExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
  public : static class GALGAS_infixOperator constructor_addOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_addOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_andOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_booleanXorOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_divOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_divOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_equal (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_infEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_leftShiftOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_modOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_modOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_mulOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_mulOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_nonEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_orOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_rightShiftOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_strictInf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_strictSup (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_subOp (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_subOpNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_supEqual (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperator constructor_xorOp (LOCATION_ARGS) ;

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
  public : static class GALGAS_letInstructionWithAssignmentAST constructor_new (const class GALGAS_lstring & inOperand0,
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
  public : static class GALGAS_literalBooleanInExpressionAST constructor_new (const class GALGAS_bool & inOperand0
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
  public : static class GALGAS_literalIntegerInExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
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
  public : static class GALGAS_literalStringInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
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
//                                             @moduleDeclarationAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduleDeclarationAST : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_moduleDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_moduleDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_moduleDeclarationAST * ptr (void) const { return (const cPtr_moduleDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_moduleDeclarationAST (const cPtr_moduleDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduleDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_moduleDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduleDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduleDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduleDeclarationAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @moduleDeclarationAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_moduleDeclarationAST : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mModuleName ;

//--- Constructor
  public : cPtr_moduleDeclarationAST (const GALGAS_lstring & in_mModuleName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModuleName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @opaqueTypeDeclaration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_opaqueTypeDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_opaqueTypeDeclaration (void) ;

//---
  public : inline const class cPtr_opaqueTypeDeclaration * ptr (void) const { return (const cPtr_opaqueTypeDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_opaqueTypeDeclaration (const cPtr_opaqueTypeDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_opaqueTypeDeclaration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_opaqueTypeDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstringlist & inOperand1,
                                                                      const class GALGAS_expressionAST & inOperand2,
                                                                      const class GALGAS_location & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_opaqueTypeDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOpaqueTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_opaqueTypeDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opaqueTypeDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @opaqueTypeDeclaration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_opaqueTypeDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mOpaqueTypeName ;
  public : GALGAS_lstringlist mAttribute_mAttributeList ;
  public : GALGAS_expressionAST mAttribute_mSizeExpression ;
  public : GALGAS_location mAttribute_mSizeExpressionLocation ;

//--- Constructor
  public : cPtr_opaqueTypeDeclaration (const GALGAS_lstring & in_mOpaqueTypeName,
                                       const GALGAS_lstringlist & in_mAttributeList,
                                       const GALGAS_expressionAST & in_mSizeExpression,
                                       const GALGAS_location & in_mSizeExpressionLocation
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOpaqueTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @panicInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_panicInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_panicInstructionAST (void) ;

//---
  public : inline const class cPtr_panicInstructionAST * ptr (void) const { return (const cPtr_panicInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicInstructionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_expressionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mCodeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mThrowLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @panicInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_panicInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mThrowLocation ;
  public : GALGAS_expressionAST mAttribute_mCodeExpression ;

//--- Constructor
  public : cPtr_panicInstructionAST (const GALGAS_location & in_mThrowLocation,
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
  public : static class GALGAS_prefixOperatorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
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
  public : static class GALGAS_prefixOperator constructor_minus (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_minusNoOvf (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_notOperator (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperator constructor_unsignedComplement (LOCATION_ARGS) ;

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
//                                            @primaryInExpressionAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_primaryInExpressionAST (void) ;

//---
  public : inline const class cPtr_primaryInExpressionAST * ptr (void) const { return (const cPtr_primaryInExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAST constructor_new (const class GALGAS_primaryInExpressionSelfAccessAST & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_primaryInExpressionAccessListAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mObjectName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionSelfAccessAST getter_mSelfAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @primaryInExpressionSelfAccessAST enum                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionSelfAccessAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionSelfAccessAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noSelfAccess,
    kEnum_selfAccess
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
  public : static GALGAS_primaryInExpressionSelfAccessAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionSelfAccessAST constructor_noSelfAccess (LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionSelfAccessAST constructor_selfAccess (const class GALGAS_location & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionSelfAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_selfAccess (class GALGAS_location & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoSelfAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelfAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionSelfAccessAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionSelfAccessAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @primaryInExpressionSelfAccessAST enum, associated values                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess (const GALGAS_location & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @primaryInExpressionAccessListAST list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_primaryInExpressionAccessListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_primaryInExpressionAccessAST & in_mAccess
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primaryInExpressionAccessListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessListAST constructor_listWithValue (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_primaryInExpressionAccessListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_primaryInExpressionAccessAST & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionAccessListAST add_operation (const GALGAS_primaryInExpressionAccessListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_primaryInExpressionAccessAST constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_primaryInExpressionAccessAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessAST getter_mAccessAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_primaryInExpressionAccessListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_primaryInExpressionAccessListAST ;
 
} ; // End of GALGAS_primaryInExpressionAccessListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_primaryInExpressionAccessListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_primaryInExpressionAccessListAST (const GALGAS_primaryInExpressionAccessListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_primaryInExpressionAccessAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_primaryInExpressionAccessListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @primaryInExpressionAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_primaryInExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_primaryInExpressionSelfAccessAST mAttribute_mSelfAccess ;
  public : GALGAS_lstring mAttribute_mObjectName ;
  public : GALGAS_primaryInExpressionAccessListAST mAttribute_mAccessList ;

//--- Constructor
  public : cPtr_primaryInExpressionAST (const GALGAS_primaryInExpressionSelfAccessAST & in_mSelfAccess,
                                        const GALGAS_lstring & in_mObjectName,
                                        const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionSelfAccessAST getter_mSelfAccess (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mObjectName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_primaryInExpressionAccessListAST getter_mAccessList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @registerConstantExpressionAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerConstantExpressionAST : public GALGAS_expressionAST {
//--- Constructor
  public : GALGAS_registerConstantExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerConstantExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_registerConstantExpressionAST * ptr (void) const { return (const cPtr_registerConstantExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerConstantExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerConstantExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstringlist & inOperand1,
                                                                              const class GALGAS_registerIntegerFieldListAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_mFieldValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mMaskFieldNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerConstantExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @registerIntegerFieldListAST list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerIntegerFieldListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_registerIntegerFieldListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_registerIntegerFieldListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mFieldName,
                                                  const class GALGAS_expressionAST & in_mExpression,
                                                  const class GALGAS_location & in_mExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerIntegerFieldListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerIntegerFieldListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_registerIntegerFieldListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_expressionAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_registerIntegerFieldListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_expressionAST & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_registerIntegerFieldListAST add_operation (const GALGAS_registerIntegerFieldListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_expressionAST constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_expressionAST & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_expressionAST & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_expressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerIntegerFieldListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_registerIntegerFieldListAST ;
 
} ; // End of GALGAS_registerIntegerFieldListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_registerIntegerFieldListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_registerIntegerFieldListAST (const GALGAS_registerIntegerFieldListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mFieldName (LOCATION_ARGS) const ;
  public : class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_registerIntegerFieldListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @registerConstantExpressionAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_registerConstantExpressionAST : public cPtr_expressionAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRegisterName ;
  public : GALGAS_lstringlist mAttribute_mMaskFieldNames ;
  public : GALGAS_registerIntegerFieldListAST mAttribute_mFieldValues ;

//--- Constructor
  public : cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                               const GALGAS_lstringlist & in_mMaskFieldNames,
                                               const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mMaskFieldNames (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerIntegerFieldListAST getter_mFieldValues (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @staticArrayAST class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticArrayAST : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_staticArrayAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_staticArrayAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_staticArrayAST * ptr (void) const { return (const cPtr_staticArrayAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_staticArrayAST (const cPtr_staticArrayAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticArrayAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticArrayAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_staticArrayPropertyListAST & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticArrayAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyListAST getter_mPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticArrayAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @staticArrayPropertyListAST list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticArrayPropertyListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_staticArrayPropertyListAST (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_staticArrayPropertyListAST (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mPropertyName,
                                                  const class GALGAS_staticArrayPropertyTypeAST & in_mPropertyType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticArrayPropertyListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticArrayPropertyListAST constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_staticArrayPropertyListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_staticArrayPropertyTypeAST & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_staticArrayPropertyListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_staticArrayPropertyTypeAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_staticArrayPropertyListAST add_operation (const GALGAS_staticArrayPropertyListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_staticArrayPropertyTypeAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_staticArrayPropertyTypeAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_staticArrayPropertyTypeAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_staticArrayPropertyTypeAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_staticArrayPropertyTypeAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_staticArrayPropertyTypeAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyTypeAST getter_mPropertyTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticArrayPropertyListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_staticArrayPropertyListAST ;
 
} ; // End of GALGAS_staticArrayPropertyListAST class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_staticArrayPropertyListAST : public cGenericAbstractEnumerator {
  public : cEnumerator_staticArrayPropertyListAST (const GALGAS_staticArrayPropertyListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_staticArrayPropertyTypeAST current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_staticArrayPropertyListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayPropertyListAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @staticArrayAST class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_staticArrayAST : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStaticListName ;
  public : GALGAS_staticArrayPropertyListAST mAttribute_mPropertyList ;

//--- Constructor
  public : cPtr_staticArrayAST (const GALGAS_lstring & in_mStaticListName,
                                const GALGAS_staticArrayPropertyListAST & in_mPropertyList
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStaticListName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_staticArrayPropertyListAST getter_mPropertyList (LOCATION_ARGS) const ;
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
  public : static class GALGAS_structureDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstringlist & inOperand1,
                                                                     const class GALGAS_structurePropertyListAST & inOperand2,
                                                                     const class GALGAS_functionDeclarationListAST & inOperand3,
                                                                     const class GALGAS_svcDeclarationListAST & inOperand4,
                                                                     const class GALGAS_guardDeclarationListAST & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_mSVCListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_structurePropertyListAST getter_mStructureFieldListAST (LOCATION_ARGS) const ;

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
  public : GALGAS_lstringlist mAttribute_mAttributeListAST ;
  public : GALGAS_structurePropertyListAST mAttribute_mStructureFieldListAST ;
  public : GALGAS_functionDeclarationListAST mAttribute_mFunctionDeclarationListAST ;
  public : GALGAS_svcDeclarationListAST mAttribute_mSVCListAST ;
  public : GALGAS_guardDeclarationListAST mAttribute_mGuardListAST ;

//--- Constructor
  public : cPtr_structureDeclaration (const GALGAS_lstring & in_mStructureName,
                                      const GALGAS_lstringlist & in_mAttributeListAST,
                                      const GALGAS_structurePropertyListAST & in_mStructureFieldListAST,
                                      const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                      const GALGAS_svcDeclarationListAST & in_mSVCListAST,
                                      const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStructureName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mAttributeListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_structurePropertyListAST getter_mStructureFieldListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_functionDeclarationListAST getter_mFunctionDeclarationListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_svcDeclarationListAST getter_mSVCListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @switchInstructionAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_switchInstructionAST (void) ;

//---
  public : inline const class cPtr_switchInstructionAST * ptr (void) const { return (const cPtr_switchInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_switchCaseList & inOperand2,
                                                                     const class GALGAS_location & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_switchInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_mSwitchCaseList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @switchCaseList list                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_switchCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_switchCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_switchCaseList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstringlist & in_mCaseIdentifiers,
                                                  const class GALGAS_instructionListAST & in_mCaseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_switchCaseList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_switchCaseList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_switchCaseList constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                         const class GALGAS_instructionListAST & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchCaseList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                      const class GALGAS_instructionListAST & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseList add_operation (const GALGAS_switchCaseList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                       class GALGAS_instructionListAST constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                  class GALGAS_instructionListAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_instructionListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                       class GALGAS_instructionListAST & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                               class GALGAS_instructionListAST & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_instructionListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCaseIdentifiersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mCaseInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_switchCaseList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_switchCaseList ;
 
} ; // End of GALGAS_switchCaseList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_switchCaseList : public cGenericAbstractEnumerator {
  public : cEnumerator_switchCaseList (const GALGAS_switchCaseList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstringlist current_mCaseIdentifiers (LOCATION_ARGS) const ;
  public : class GALGAS_instructionListAST current_mCaseInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_switchCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchCaseList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @switchInstructionAST class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_switchInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_expressionAST mAttribute_mSwitchExpression ;
  public : GALGAS_location mAttribute_mEndOf_5F_test_5F_expression ;
  public : GALGAS_switchCaseList mAttribute_mSwitchCaseList ;
  public : GALGAS_location mAttribute_mEndOf_5F_while_5F_instruction ;

//--- Constructor
  public : cPtr_switchInstructionAST (const GALGAS_expressionAST & in_mSwitchExpression,
                                      const GALGAS_location & in_mEndOf_5F_test_5F_expression,
                                      const GALGAS_switchCaseList & in_mSwitchCaseList,
                                      const GALGAS_location & in_mEndOf_5F_while_5F_instruction
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_test_5F_expression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_switchCaseList getter_mSwitchCaseList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_while_5F_instruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @syncInstructionAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_syncInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_syncInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_syncInstructionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_syncInstructionAST * ptr (void) const { return (const cPtr_syncInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_syncInstructionAST (const cPtr_syncInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_syncInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_syncInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_syncInstructionBranchList & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_syncInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchList getter_mBranchList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOf_5F_on_5F_instruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartOf_5F_on_5F_instruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syncInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @syncInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_syncInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_location mAttribute_mStartOf_5F_on_5F_instruction ;
  public : GALGAS_syncInstructionBranchList mAttribute_mBranchList ;
  public : GALGAS_location mAttribute_mEndOf_5F_on_5F_instruction ;

//--- Constructor
  public : cPtr_syncInstructionAST (const GALGAS_location & in_mStartOf_5F_on_5F_instruction,
                                    const GALGAS_syncInstructionBranchList & in_mBranchList,
                                    const GALGAS_location & in_mEndOf_5F_on_5F_instruction
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mStartOf_5F_on_5F_instruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_syncInstructionBranchList getter_mBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOf_5F_on_5F_instruction (LOCATION_ARGS) const ;
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
  public : static class GALGAS_truncateExpressionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
  public : static class GALGAS_typeAliasDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
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
//                                             @typeArrayDeclaration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeArrayDeclaration : public GALGAS_abstractDeclaration {
//--- Constructor
  public : GALGAS_typeArrayDeclaration (void) ;

//---
  public : inline const class cPtr_typeArrayDeclaration * ptr (void) const { return (const cPtr_typeArrayDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeArrayDeclaration (const cPtr_typeArrayDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeArrayDeclaration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeArrayDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_expressionAST & inOperand2,
                                                                     const class GALGAS_location & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeArrayDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mArrayTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeArrayDeclaration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeArrayDeclaration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @typeArrayDeclaration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeArrayDeclaration : public cPtr_abstractDeclaration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mArrayTypeName ;
  public : GALGAS_lstring mAttribute_mElementTypeName ;
  public : GALGAS_expressionAST mAttribute_mSizeExpression ;
  public : GALGAS_location mAttribute_mSizeExpressionLocation ;

//--- Constructor
  public : cPtr_typeArrayDeclaration (const GALGAS_lstring & in_mArrayTypeName,
                                      const GALGAS_lstring & in_mElementTypeName,
                                      const GALGAS_expressionAST & in_mSizeExpression,
                                      const GALGAS_location & in_mSizeExpressionLocation
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mArrayTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mSizeExpressionLocation (LOCATION_ARGS) const ;
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
  public : static class GALGAS_typedConstantCall constructor_new (const class GALGAS_lstring & inOperand0,
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
//                                         @varAssignmentInstructionAST class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varAssignmentInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varAssignmentInstructionAST (void) ;

//---
  public : inline const class cPtr_varAssignmentInstructionAST * ptr (void) const { return (const cPtr_varAssignmentInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varAssignmentInstructionAST (const cPtr_varAssignmentInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varAssignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varAssignmentInstructionAST constructor_new (const class GALGAS_assignmentTargetAST & inOperand0,
                                                                            const class GALGAS_expressionAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varAssignmentInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varAssignmentInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @varAssignmentInstructionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varAssignmentInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_assignmentTargetAST mAttribute_mAssignmentTargetAST ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_varAssignmentInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                             const GALGAS_expressionAST & in_mSourceExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;
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
  public : static class GALGAS_varInstructionAST constructor_new (const class GALGAS_lstring & inOperand0,
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
  public : static class GALGAS_varInstructionWithAssignmentAST constructor_new (const class GALGAS_lstring & inOperand0,
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
//                                       @varOperatorAssignInstructionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varOperatorAssignInstructionAST : public GALGAS_instructionAST {
//--- Constructor
  public : GALGAS_varOperatorAssignInstructionAST (void) ;

//---
  public : inline const class cPtr_varOperatorAssignInstructionAST * ptr (void) const { return (const cPtr_varOperatorAssignInstructionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varOperatorAssignInstructionAST (const cPtr_varOperatorAssignInstructionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varOperatorAssignInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_varOperatorAssignInstructionAST constructor_new (const class GALGAS_assignmentTargetAST & inOperand0,
                                                                                const class GALGAS_operatorAssignmentKind & inOperand1,
                                                                                const class GALGAS_expressionAST & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varOperatorAssignInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_operatorAssignmentKind getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mSourceExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varOperatorAssignInstructionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varOperatorAssignInstructionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @operatorAssignmentKind enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_operatorAssignmentKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_operatorAssignmentKind (void) ;

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
  public : static GALGAS_operatorAssignmentKind extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_operatorAssignmentKind constructor_addAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_addModuloAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_bitWiseAndAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_bitWiseOrAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_bitWiseXorAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_divAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_divZeroAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_modAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_modZeroAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_mulAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_mulModuloAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_subAssign (LOCATION_ARGS) ;

  public : static class GALGAS_operatorAssignmentKind constructor_subModuloAssign (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_operatorAssignmentKind & inOperand) const ;

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
 
} ; // End of GALGAS_operatorAssignmentKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operatorAssignmentKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @varOperatorAssignInstructionAST class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varOperatorAssignInstructionAST : public cPtr_instructionAST {
//--- Attributes
  public : GALGAS_assignmentTargetAST mAttribute_mAssignmentTargetAST ;
  public : GALGAS_operatorAssignmentKind mAttribute_mOperator ;
  public : GALGAS_expressionAST mAttribute_mSourceExpression ;

//--- Constructor
  public : cPtr_varOperatorAssignInstructionAST (const GALGAS_assignmentTargetAST & in_mAssignmentTargetAST,
                                                 const GALGAS_operatorAssignmentKind & in_mOperator,
                                                 const GALGAS_expressionAST & in_mSourceExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_assignmentTargetAST getter_mAssignmentTargetAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_operatorAssignmentKind getter_mOperator (LOCATION_ARGS) const ;
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
  public : static class GALGAS_whileInstructionAST constructor_new (const class GALGAS_expressionAST & inOperand0,
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
//                                             @accessInAssignmentAST enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_accessInAssignmentAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_accessInAssignmentAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_arrayAccess
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
  public : static GALGAS_accessInAssignmentAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_accessInAssignmentAST constructor_arrayAccess (const class GALGAS_expressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_accessInAssignmentAST constructor_property (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_accessInAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayAccess (class GALGAS_expressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_accessInAssignmentAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_accessInAssignmentAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @accessInAssignmentAST enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_accessInAssignmentAST_property : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_accessInAssignmentAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_accessInAssignmentAST_property (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_accessInAssignmentAST_arrayAccess : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                    const GALGAS_location & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_accessInAssignmentAST_arrayAccess (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @assignmentSelfAccessAST enum, associated values                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess : public cEnumAssociatedValues {
  public : const GALGAS_location mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess (const GALGAS_location & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess (void) {}
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
  public : static class GALGAS_controlRegisterBitSlice constructor_namedBit (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lbigint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterBitSlice constructor_unusedBits (const class GALGAS_lbigint & inOperand0
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
//                                              @controlRegisterKind enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_controlRegisterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_scalar,
    kEnum_registerArray
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
  public : static GALGAS_controlRegisterKind extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterKind constructor_registerArray (const class GALGAS_expressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_expressionAST & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterKind constructor_scalar (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_registerArray (class GALGAS_expressionAST & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_expressionAST & outArgument2,
                                                       class GALGAS_location & outArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isScalar (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @controlRegisterKind enum, associated values                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_controlRegisterKind_registerArray : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;
  public : const GALGAS_expressionAST mAssociatedValue2 ;
  public : const GALGAS_location mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_controlRegisterKind_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                    const GALGAS_location & inAssociatedValue1,
                                                                    const GALGAS_expressionAST & inAssociatedValue2,
                                                                    const GALGAS_location & inAssociatedValue3
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_controlRegisterKind_registerArray (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @effectiveParameterPassingModeAST enum                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_effectiveParameterPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_effectiveParameterPassingModeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_input,
    kEnum_inputWithType,
    kEnum_output,
    kEnum_outputInput,
    kEnum_outputInputSelfVariable
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
  public : static GALGAS_effectiveParameterPassingModeAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_effectiveParameterPassingModeAST constructor_input (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveParameterPassingModeAST constructor_inputWithType (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveParameterPassingModeAST constructor_output (const class GALGAS_expressionAST & inOperand0,
                                                                                    const class GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveParameterPassingModeAST constructor_outputInput (const class GALGAS_lstring & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_effectiveParameterPassingModeAST constructor_outputInputSelfVariable (const class GALGAS_lstring & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_effectiveParameterPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_input (class GALGAS_lstring & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_inputWithType (class GALGAS_bool & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_output (class GALGAS_expressionAST & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_outputInput (class GALGAS_lstring & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_outputInputSelfVariable (class GALGAS_lstring & outArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInputWithType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInput (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutputInputSelfVariable (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_effectiveParameterPassingModeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveParameterPassingModeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @effectiveParameterPassingModeAST enum, associated values                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveParameterPassingModeAST_input : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveParameterPassingModeAST_input (const GALGAS_lstring & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveParameterPassingModeAST_input (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType (const GALGAS_bool & inAssociatedValue0,
                                                                                 const GALGAS_lstring & inAssociatedValue1,
                                                                                 const GALGAS_lstring & inAssociatedValue2
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveParameterPassingModeAST_output : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveParameterPassingModeAST_output (const GALGAS_expressionAST & inAssociatedValue0,
                                                                          const GALGAS_location & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveParameterPassingModeAST_output (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput (const GALGAS_lstring & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable (const GALGAS_lstring & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @extendStaticArrayExpressionAST enum                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extendStaticArrayExpressionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_extendStaticArrayExpressionAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_expression,
    kEnum_function
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
  public : static GALGAS_extendStaticArrayExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extendStaticArrayExpressionAST constructor_expression (const class GALGAS_expressionAST & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_extendStaticArrayExpressionAST constructor_function (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_procFormalArgumentList & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extendStaticArrayExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_expression (class GALGAS_expressionAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_procFormalArgumentList & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendStaticArrayExpressionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticArrayExpressionAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @extendStaticArrayExpressionAST enum, associated values                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_extendStaticArrayExpressionAST_expression : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_extendStaticArrayExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_extendStaticArrayExpressionAST_expression (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_extendStaticArrayExpressionAST_function : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_procFormalArgumentList mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_extendStaticArrayExpressionAST_function (const GALGAS_lstring & inAssociatedValue0,
                                                                          const GALGAS_procFormalArgumentList & inAssociatedValue1,
                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_extendStaticArrayExpressionAST_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @guardedCommand enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_guardedCommand : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_guardedCommand (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_synchronization,
    kEnum_boolean,
    kEnum_boolAndSync
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
  public : static GALGAS_guardedCommand extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardedCommand constructor_boolAndSync (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_expressionAST & inOperand1,
                                                                       const class GALGAS_location & inOperand2,
                                                                       const class GALGAS_lstring & inOperand3,
                                                                       const class GALGAS_lstring & inOperand4,
                                                                       const class GALGAS_effectiveParameterListAST & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommand constructor_boolean (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_expressionAST & inOperand1,
                                                                   const class GALGAS_location & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_guardedCommand constructor_synchronization (const class GALGAS_bool & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_effectiveParameterListAST & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardedCommand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_boolAndSync (class GALGAS_bool & outArgument0,
                                                     class GALGAS_expressionAST & outArgument1,
                                                     class GALGAS_location & outArgument2,
                                                     class GALGAS_lstring & outArgument3,
                                                     class GALGAS_lstring & outArgument4,
                                                     class GALGAS_effectiveParameterListAST & outArgument5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_boolean (class GALGAS_bool & outArgument0,
                                                 class GALGAS_expressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_synchronization (class GALGAS_bool & outArgument0,
                                                         class GALGAS_lstring & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_effectiveParameterListAST & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolAndSync (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolean (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSynchronization (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardedCommand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardedCommand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @guardedCommand enum, associated values                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommand_synchronization : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;
  public : const GALGAS_effectiveParameterListAST mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommand_synchronization (const GALGAS_bool & inAssociatedValue0,
                                                                 const GALGAS_lstring & inAssociatedValue1,
                                                                 const GALGAS_lstring & inAssociatedValue2,
                                                                 const GALGAS_effectiveParameterListAST & inAssociatedValue3
                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommand_synchronization (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommand_boolean : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_expressionAST mAssociatedValue1 ;
  public : const GALGAS_location mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommand_boolean (const GALGAS_bool & inAssociatedValue0,
                                                         const GALGAS_expressionAST & inAssociatedValue1,
                                                         const GALGAS_location & inAssociatedValue2
                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommand_boolean (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_guardedCommand_boolAndSync : public cEnumAssociatedValues {
  public : const GALGAS_bool mAssociatedValue0 ;
  public : const GALGAS_expressionAST mAssociatedValue1 ;
  public : const GALGAS_location mAssociatedValue2 ;
  public : const GALGAS_lstring mAssociatedValue3 ;
  public : const GALGAS_lstring mAssociatedValue4 ;
  public : const GALGAS_effectiveParameterListAST mAssociatedValue5 ;

//--- Constructor
  public : cEnumAssociatedValues_guardedCommand_boolAndSync (const GALGAS_bool & inAssociatedValue0,
                                                             const GALGAS_expressionAST & inAssociatedValue1,
                                                             const GALGAS_location & inAssociatedValue2,
                                                             const GALGAS_lstring & inAssociatedValue3,
                                                             const GALGAS_lstring & inAssociatedValue4,
                                                             const GALGAS_effectiveParameterListAST & inAssociatedValue5
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_guardedCommand_boolAndSync (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @primaryInExpressionAccessAST enum                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primaryInExpressionAccessAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_primaryInExpressionAccessAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_arrayAccess,
    kEnum_funcCall
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
  public : static GALGAS_primaryInExpressionAccessAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_primaryInExpressionAccessAST constructor_arrayAccess (const class GALGAS_expressionAST & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessAST constructor_funcCall (const class GALGAS_effectiveParameterListAST & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_primaryInExpressionAccessAST constructor_property (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primaryInExpressionAccessAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayAccess (class GALGAS_expressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_funcCall (class GALGAS_effectiveParameterListAST & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_lstring & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFuncCall (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primaryInExpressionAccessAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @primaryInExpressionAccessAST enum, associated values                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_property : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_property (const GALGAS_lstring & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_property (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (const GALGAS_expressionAST & inAssociatedValue0,
                                                                           const GALGAS_location & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall : public cEnumAssociatedValues {
  public : const GALGAS_effectiveParameterListAST mAssociatedValue0 ;
  public : const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (const GALGAS_effectiveParameterListAST & inAssociatedValue0,
                                                                        const GALGAS_location & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall (void) {}
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
  public : static class GALGAS_procFormalArgumentPassingMode constructor_input (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentPassingMode constructor_inputOutput (LOCATION_ARGS) ;

  public : static class GALGAS_procFormalArgumentPassingMode constructor_output (LOCATION_ARGS) ;

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
//                                          @staticArrayPropertyTypeAST enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_staticArrayPropertyTypeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_staticArrayPropertyTypeAST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_valueType,
    kEnum_function
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
  public : static GALGAS_staticArrayPropertyTypeAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticArrayPropertyTypeAST constructor_function (const class GALGAS_mode & inOperand0,
                                                                                const class GALGAS_procFormalArgumentList & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_staticArrayPropertyTypeAST constructor_valueType (const class GALGAS_lstring & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticArrayPropertyTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_mode & outArgument0,
                                                  class GALGAS_procFormalArgumentList & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_valueType (class GALGAS_lstring & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isValueType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticArrayPropertyTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayPropertyTypeAST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @staticArrayPropertyTypeAST enum, associated values                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_staticArrayPropertyTypeAST_function : public cEnumAssociatedValues {
  public : const GALGAS_mode mAssociatedValue0 ;
  public : const GALGAS_procFormalArgumentList mAssociatedValue1 ;
  public : const GALGAS_lstring mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_staticArrayPropertyTypeAST_function (const GALGAS_mode & inAssociatedValue0,
                                                                      const GALGAS_procFormalArgumentList & inAssociatedValue1,
                                                                      const GALGAS_lstring & inAssociatedValue2
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_staticArrayPropertyTypeAST_function (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @structureVarInit enum                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structureVarInit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_structureVarInit (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_expression,
    kEnum_noExpression
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
  public : static GALGAS_structureVarInit extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_structureVarInit constructor_expression (const class GALGAS_expressionAST & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_structureVarInit constructor_noExpression (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structureVarInit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_expression (class GALGAS_expressionAST & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structureVarInit class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structureVarInit ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @structureVarInit enum, associated values                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_structureVarInit_expression : public cEnumAssociatedValues {
  public : const GALGAS_expressionAST mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_structureVarInit_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_structureVarInit_expression (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'globalAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_globalAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'moduleMangledNameFromModuleName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring function_moduleMangledNameFromModuleName (const class GALGAS_lstring & constinArgument0,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'staticAttribute'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension getter '@procFormalArgumentPassingMode formalPassingModeString' (as function)               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_formalPassingModeString (const class GALGAS_procFormalArgumentPassingMode & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @ast struct                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_globalVarDeclarationList mAttribute_mGlobalVarDeclarationListAST ;
  public : GALGAS_declarationListAST mAttribute_mDeclarationListAST ;
  public : GALGAS_extensionDeclarationListAST mAttribute_mExtensionDeclarationListAST ;
  public : GALGAS_controlRegisterDeclarationListAST mAttribute_mControlRegisterDeclarationListAST ;
  public : GALGAS_functionDeclarationListAST mAttribute_mProcedureListAST ;
  public : GALGAS_requiredProcedureDeclarationListAST mAttribute_mRequiredProcListAST ;
  public : GALGAS_externProcedureDeclarationListAST mAttribute_mExternProcListAST ;
  public : GALGAS_isrDeclarationListAST mAttribute_mISRDeclarationListAST ;
  public : GALGAS_svcDeclarationListAST mAttribute_mStandAloneSVCListAST ;
  public : GALGAS_guardDeclarationListAST mAttribute_mGuardListAST ;
  public : GALGAS_lstringlist mAttribute_mTargetListAST ;
  public : GALGAS_bootList mAttribute_mBootListAST ;
  public : GALGAS_initList mAttribute_mInitListAST ;
  public : GALGAS_panicClauseListAST mAttribute_mPanicClauseListAST ;
  public : GALGAS_taskList mAttribute_mTaskListAST ;
  public : GALGAS_lstringlist mAttribute_mCheckTargetListAST ;


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
  public : GALGAS_ast (const GALGAS_globalVarDeclarationList & in_mGlobalVarDeclarationListAST,
                       const GALGAS_declarationListAST & in_mDeclarationListAST,
                       const GALGAS_extensionDeclarationListAST & in_mExtensionDeclarationListAST,
                       const GALGAS_controlRegisterDeclarationListAST & in_mControlRegisterDeclarationListAST,
                       const GALGAS_functionDeclarationListAST & in_mProcedureListAST,
                       const GALGAS_requiredProcedureDeclarationListAST & in_mRequiredProcListAST,
                       const GALGAS_externProcedureDeclarationListAST & in_mExternProcListAST,
                       const GALGAS_isrDeclarationListAST & in_mISRDeclarationListAST,
                       const GALGAS_svcDeclarationListAST & in_mStandAloneSVCListAST,
                       const GALGAS_guardDeclarationListAST & in_mGuardListAST,
                       const GALGAS_lstringlist & in_mTargetListAST,
                       const GALGAS_bootList & in_mBootListAST,
                       const GALGAS_initList & in_mInitListAST,
                       const GALGAS_panicClauseListAST & in_mPanicClauseListAST,
                       const GALGAS_taskList & in_mTaskListAST,
                       const GALGAS_lstringlist & in_mCheckTargetListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ast constructor_new (const class GALGAS_globalVarDeclarationList & inOperand0,
                                                    const class GALGAS_declarationListAST & inOperand1,
                                                    const class GALGAS_extensionDeclarationListAST & inOperand2,
                                                    const class GALGAS_controlRegisterDeclarationListAST & inOperand3,
                                                    const class GALGAS_functionDeclarationListAST & inOperand4,
                                                    const class GALGAS_requiredProcedureDeclarationListAST & inOperand5,
                                                    const class GALGAS_externProcedureDeclarationListAST & inOperand6,
                                                    const class GALGAS_isrDeclarationListAST & inOperand7,
                                                    const class GALGAS_svcDeclarationListAST & inOperand8,
                                                    const class GALGAS_guardDeclarationListAST & inOperand9,
                                                    const class GALGAS_lstringlist & inOperand10,
                                                    const class GALGAS_bootList & inOperand11,
                                                    const class GALGAS_initList & inOperand12,
                                                    const class GALGAS_panicClauseListAST & inOperand13,
                                                    const class GALGAS_taskList & inOperand14,
                                                    const class GALGAS_lstringlist & inOperand15
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bootList getter_mBootListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mCheckTargetListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterDeclarationListAST getter_mControlRegisterDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_extensionDeclarationListAST getter_mExtensionDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externProcedureDeclarationListAST getter_mExternProcListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVarDeclarationList getter_mGlobalVarDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardDeclarationListAST getter_mGuardListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_isrDeclarationListAST getter_mISRDeclarationListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_initList getter_mInitListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicClauseListAST getter_mPanicClauseListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionDeclarationListAST getter_mProcedureListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_requiredProcedureDeclarationListAST getter_mRequiredProcListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_svcDeclarationListAST getter_mStandAloneSVCListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskList getter_mTaskListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

#endif
