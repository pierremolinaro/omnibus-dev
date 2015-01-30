#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @modeMap map                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_modeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_modeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_modeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_modeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_modeMap (const GALGAS_modeMap & inSource) ;
  public : GALGAS_modeMap & operator = (const GALGAS_modeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_modeMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_modeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_modeMap constructor_mapWithMapToOverride (const class GALGAS_modeMap & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_modeMap reader_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_modeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_modeMap ;
 
} ; // End of GALGAS_modeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_modeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_modeMap (const GALGAS_modeMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_modeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_modeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Class for element of '@modeMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_modeMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_modeMap (const GALGAS_lstring & inKey
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
//                                             @modeMap_2D_element struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_modeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_modeMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_modeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_modeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_modeMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_modeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_modeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_modeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_modeMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_modeMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typeKind enum                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_boolean,
    kEnum_boolset,
    kEnum_literalString,
    kEnum_enumeration,
    kEnum_structure,
    kEnum_integer
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
  public : static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeKind constructor_boolean (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_boolset (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_enumeration (const class GALGAS_enumConstantMap & inOperand0
                                                           COMMA_LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_integer (const class GALGAS_sint_36__34_ & inOperand0,
                                                       const class GALGAS_uint_36__34_ & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_literalString (LOCATION_ARGS) ;

  public : static GALGAS_typeKind constructor_structure (const class GALGAS_propertyList & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBoolean (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBoolset (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEnumeration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isInteger (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLiteralString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_typeKind constinArgument1,
                                                     class GALGAS_constructorMap constinArgument2,
                                                     class GALGAS_procedureMap constinArgument3,
                                                     class GALGAS_bool constinArgument4,
                                                     class GALGAS_bool constinArgument5,
                                                     class GALGAS_bool constinArgument6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setComparableForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setConstructorMapForKey (class GALGAS_constructorMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setCopiableForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setEquatableForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setKindForKey (class GALGAS_typeKind constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setProcedureMapForKey (class GALGAS_procedureMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind & outArgument1,
                                                   class GALGAS_constructorMap & outArgument2,
                                                   class GALGAS_procedureMap & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_bool & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_comparableForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap reader_constructorMapForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_copiableForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_equatableForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind reader_kindForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureMap reader_procedureMapForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_kind (LOCATION_ARGS) const ;
  public : class GALGAS_constructorMap current_constructorMap (LOCATION_ARGS) const ;
  public : class GALGAS_procedureMap current_procedureMap (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_copiable (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_equatable (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_comparable (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_typeKind mAttribute_kind ;
  public : GALGAS_constructorMap mAttribute_constructorMap ;
  public : GALGAS_procedureMap mAttribute_procedureMap ;
  public : GALGAS_bool mAttribute_copiable ;
  public : GALGAS_bool mAttribute_equatable ;
  public : GALGAS_bool mAttribute_comparable ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_typeKind & in_kind,
                                       const GALGAS_constructorMap & in_constructorMap,
                                       const GALGAS_procedureMap & in_procedureMap,
                                       const GALGAS_bool & in_copiable,
                                       const GALGAS_bool & in_equatable,
                                       const GALGAS_bool & in_comparable
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
//                                                   @typeList list                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_typeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_typeList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mActualType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_typeList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_typeList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_typeList operator_concat (const GALGAS_typeList & inOperand
                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_typeList add_operation (const GALGAS_typeList & inOperand,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mActualTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typeList ;
 
} ; // End of GALGAS_typeList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_typeList : public cGenericAbstractEnumerator {
  public : cEnumerator_typeList (const GALGAS_typeList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mActualType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mActualType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_typeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typeList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & in_mActualType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mActualType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @orderedGenerationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_orderedGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_orderedGenerationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractGeneration & in_mGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedGenerationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orderedGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_orderedGenerationList constructor_listWithValue (const class GALGAS_abstractGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_orderedGenerationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_orderedGenerationList operator_concat (const GALGAS_orderedGenerationList & inOperand
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_orderedGenerationList add_operation (const GALGAS_orderedGenerationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_abstractGeneration constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_abstractGeneration & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_abstractGeneration & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_abstractGeneration & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGeneration reader_mGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_orderedGenerationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_orderedGenerationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_orderedGenerationList ;
 
} ; // End of GALGAS_orderedGenerationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_orderedGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_orderedGenerationList (const GALGAS_orderedGenerationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractGeneration current_mGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_orderedGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedGenerationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @abstractGeneration class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractGeneration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractGeneration (void) ;

//---
  public : inline const class cPtr_abstractGeneration * ptr (void) const { return (const cPtr_abstractGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractGeneration (const cPtr_abstractGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractGeneration extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @abstractGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @orderedGenerationList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orderedGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractGeneration mAttribute_mGeneration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_orderedGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_orderedGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_orderedGenerationList_2D_element (const GALGAS_abstractGeneration & in_mGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orderedGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orderedGenerationList_2D_element constructor_new (const class GALGAS_abstractGeneration & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orderedGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGeneration reader_mGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orderedGenerationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orderedGenerationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plm_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plm_5F_grammar : public cParser_common_5F_syntax,
                                public cParser_plm_5F_specific_5F_syntax {
//------------------------------------- 'additive_expression' non terminal
//--- 'parse' label
  public : virtual void nt_additive_5F_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_additive_5F_expression_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'comparison' non terminal
//--- 'parse' label
  public : virtual void nt_comparison_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_comparison_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ifInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instructionListAST & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_instructionListAST & outArgument0,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'multiplicative_expression' non terminal
//--- 'parse' label
  public : virtual void nt_multiplicative_5F_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_multiplicative_5F_expression_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_expressionAST & outArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_ (const GALGAS_procedureKindAST inArgument0,
                                       GALGAS_procedureDeclarationListAST & ioArgument1,
                                       C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_header' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_header_ (GALGAS_lstring & outArgument0,
                                                 GALGAS_lstring & outArgument1,
                                                 GALGAS_procFormalArgumentList & outArgument2,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                             GALGAS_lstringlist & outArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & ioArgument0,
                                                   GALGAS_lstringlist & outArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_ast & ioArgument0,
                                                     GALGAS_lstringlist & outArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'var_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_var_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_var_5F_declaration_ (GALGAS_generalizedTypeEnumAST & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

  public : virtual int32_t select_common_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_11 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_12 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_13 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_14 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_15 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_16 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_17 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_18 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_19 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_20 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_21 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_22 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_23 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_24 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR plms_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_plms_5F_grammar : public cParser_common_5F_syntax,
                                 public cParser_plms_5F_specific_5F_syntax {
//------------------------------------- 'additive_expression' non terminal
//--- 'parse' label
  public : virtual void nt_additive_5F_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_additive_5F_expression_ (GALGAS_expressionAST & outArgument0,
                                                    C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'comparison' non terminal
//--- 'parse' label
  public : virtual void nt_comparison_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_comparison_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_ast & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expressionAST & outArgument0,
                                        C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_ (GALGAS_ifInstructionAST & outArgument0,
                                               C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_ (GALGAS_instructionListAST & ioArgument0,
                                         C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'instructionList' non terminal
//--- 'parse' label
  public : virtual void nt_instructionList_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instructionList_ (GALGAS_instructionListAST & outArgument0,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'multiplicative_expression' non terminal
//--- 'parse' label
  public : virtual void nt_multiplicative_5F_expression_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_multiplicative_5F_expression_ (GALGAS_expressionAST & outArgument0,
                                                          C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_expressionAST & outArgument0,
                                     C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_ (const GALGAS_procedureKindAST inArgument0,
                                       GALGAS_procedureDeclarationListAST & ioArgument1,
                                       C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'procedure_header' non terminal
//--- 'parse' label
  public : virtual void nt_procedure_5F_header_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_procedure_5F_header_ (GALGAS_lstring & outArgument0,
                                                 GALGAS_lstring & outArgument1,
                                                 GALGAS_procFormalArgumentList & outArgument2,
                                                 C_Lexique_plm_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & ioArgument0,
                                             GALGAS_lstringlist & outArgument1,
                                             GALGAS_location & outArgument2,
                                             C_Lexique_plm_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & ioArgument0,
                                                   GALGAS_lstringlist & outArgument1,
                                                   GALGAS_location & outArgument2
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_ast & ioArgument0,
                                                     GALGAS_lstringlist & outArgument1,
                                                     GALGAS_location & outArgument2
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'var_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_var_5F_declaration_parse (C_Lexique_plm_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_var_5F_declaration_ (GALGAS_generalizedTypeEnumAST & outArgument0,
                                                GALGAS_lstring & outArgument1,
                                                C_Lexique_plm_5F_lexique * inCompiler) ;

  public : virtual int32_t select_common_5F_syntax_0 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_1 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_2 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_3 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_4 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_5 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_6 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_7 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_8 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_9 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_10 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_11 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_12 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_13 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_14 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_15 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_16 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_17 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_18 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_19 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_20 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_21 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_22 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_23 (C_Lexique_plm_5F_lexique *) ;

  public : virtual int32_t select_common_5F_syntax_24 (C_Lexique_plm_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @receiverType enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_receiverType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_receiverType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noReceiver,
    kEnum_receiver,
    kEnum_mutatingReceiver
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
  public : static GALGAS_receiverType extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_receiverType constructor_mutatingReceiver (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                    const class GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

  public : static GALGAS_receiverType constructor_noReceiver (LOCATION_ARGS) ;

  public : static GALGAS_receiverType constructor_receiver (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const class GALGAS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_receiverType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMutatingReceiver (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoReceiver (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isReceiver (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_receiverType class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_receiverType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @receiverType enum, associated values                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_receiverType_receiver : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_receiverType_receiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_receiverType_receiver (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_receiverType_mutatingReceiver : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_receiverType_mutatingReceiver (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                const GALGAS_string & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_receiverType_mutatingReceiver (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @typeKind enum, associated values                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_enumeration : public cEnumAssociatedValues {
  public : const GALGAS_enumConstantMap mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_enumeration (const GALGAS_enumConstantMap & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_enumeration (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_structure : public cEnumAssociatedValues {
  public : const GALGAS_propertyList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_structure (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_typeKind_integer : public cEnumAssociatedValues {
  public : const GALGAS_sint_36__34_ mAssociatedValue0 ;
  public : const GALGAS_uint_36__34_ mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_integer (const GALGAS_sint_36__34_ & inAssociatedValue0,
                                                   const GALGAS_uint_36__34_ & inAssociatedValue1
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_integer (void) {}
} ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringListCommandLineOption gOption_plm_5F_options_pathList ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterNodeInPrecedenceGraph'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNodeInPrecedenceGraph (class GALGAS_lstring inArgument0,
                                         class GALGAS_abstractDeclaration inArgument1,
                                         class GALGAS_generalizedTypeEnumAST inArgument2,
                                         class GALGAS_semanticTypePrecedenceGraph & ioArgument3,
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
//                              Pointer class for @abstractInfixOperatorGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractInfixOperatorGeneration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractInfixOperatorGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @standardInfixOperatorGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_standardInfixOperatorGeneration : public GALGAS_abstractInfixOperatorGeneration {
//--- Constructor
  public : GALGAS_standardInfixOperatorGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_standardInfixOperatorGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_standardInfixOperatorGeneration * ptr (void) const { return (const cPtr_standardInfixOperatorGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_standardInfixOperatorGeneration (const cPtr_standardInfixOperatorGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_standardInfixOperatorGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_standardInfixOperatorGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_standardInfixOperatorGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mInfixOperator (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_standardInfixOperatorGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standardInfixOperatorGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @standardInfixOperatorGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_standardInfixOperatorGeneration : public cPtr_abstractInfixOperatorGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mInfixOperator ;

//--- Constructor
  public : cPtr_standardInfixOperatorGeneration (const GALGAS_string & in_mInfixOperator
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mInfixOperator (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @semanticContext struct                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_targetBaseTypeMap mAttribute_mTargetBaseTypeMap ;
  public : GALGAS_unifiedTypeMap mAttribute_mTypeMap ;
  public : GALGAS_procedureMap mAttribute_mProcedureMap ;
  public : GALGAS_functionMap mAttribute_mFunctionMap ;
  public : GALGAS_registerMap mAttribute_mRegisterMap ;
  public : GALGAS_globalConstantMap mAttribute_mGlobalConstantMap ;
  public : GALGAS_globalVariableMap mAttribute_mGlobalVariableMap ;
  public : GALGAS_modeMap mAttribute_mModeMap ;
  public : GALGAS_stringset mAttribute_mTypeNameSetForIncDec ;
  public : GALGAS_infixOperatorMap mAttribute_mEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mNonEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mStrictInfOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mInfEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mStrictSupOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mSupEqualOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAndOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAndShortCircuitOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mOrOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mOrShortCircuitOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mXorOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mAddOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mSubOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mMulOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mDivOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mModOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mLeftShiftOperatorMap ;
  public : GALGAS_infixOperatorMap mAttribute_mRightShiftOperatorMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_targetBaseTypeMap & in_mTargetBaseTypeMap,
                                   const GALGAS_unifiedTypeMap & in_mTypeMap,
                                   const GALGAS_procedureMap & in_mProcedureMap,
                                   const GALGAS_functionMap & in_mFunctionMap,
                                   const GALGAS_registerMap & in_mRegisterMap,
                                   const GALGAS_globalConstantMap & in_mGlobalConstantMap,
                                   const GALGAS_globalVariableMap & in_mGlobalVariableMap,
                                   const GALGAS_modeMap & in_mModeMap,
                                   const GALGAS_stringset & in_mTypeNameSetForIncDec,
                                   const GALGAS_infixOperatorMap & in_mEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mNonEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mStrictInfOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mInfEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mStrictSupOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mSupEqualOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAndOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAndShortCircuitOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mOrOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mOrShortCircuitOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mXorOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mAddOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mSubOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mMulOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mDivOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mModOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mLeftShiftOperatorMap,
                                   const GALGAS_infixOperatorMap & in_mRightShiftOperatorMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_semanticContext constructor_new (const class GALGAS_targetBaseTypeMap & inOperand0,
                                                          const class GALGAS_unifiedTypeMap & inOperand1,
                                                          const class GALGAS_procedureMap & inOperand2,
                                                          const class GALGAS_functionMap & inOperand3,
                                                          const class GALGAS_registerMap & inOperand4,
                                                          const class GALGAS_globalConstantMap & inOperand5,
                                                          const class GALGAS_globalVariableMap & inOperand6,
                                                          const class GALGAS_modeMap & inOperand7,
                                                          const class GALGAS_stringset & inOperand8,
                                                          const class GALGAS_infixOperatorMap & inOperand9,
                                                          const class GALGAS_infixOperatorMap & inOperand10,
                                                          const class GALGAS_infixOperatorMap & inOperand11,
                                                          const class GALGAS_infixOperatorMap & inOperand12,
                                                          const class GALGAS_infixOperatorMap & inOperand13,
                                                          const class GALGAS_infixOperatorMap & inOperand14,
                                                          const class GALGAS_infixOperatorMap & inOperand15,
                                                          const class GALGAS_infixOperatorMap & inOperand16,
                                                          const class GALGAS_infixOperatorMap & inOperand17,
                                                          const class GALGAS_infixOperatorMap & inOperand18,
                                                          const class GALGAS_infixOperatorMap & inOperand19,
                                                          const class GALGAS_infixOperatorMap & inOperand20,
                                                          const class GALGAS_infixOperatorMap & inOperand21,
                                                          const class GALGAS_infixOperatorMap & inOperand22,
                                                          const class GALGAS_infixOperatorMap & inOperand23,
                                                          const class GALGAS_infixOperatorMap & inOperand24,
                                                          const class GALGAS_infixOperatorMap & inOperand25,
                                                          const class GALGAS_infixOperatorMap & inOperand26
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mAddOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mAndOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mAndShortCircuitOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mDivOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_functionMap reader_mFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap reader_mGlobalConstantMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalVariableMap reader_mGlobalVariableMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mInfEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mLeftShiftOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mModOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_modeMap reader_mModeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mMulOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mNonEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mOrOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mOrShortCircuitOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procedureMap reader_mProcedureMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerMap reader_mRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mRightShiftOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mStrictInfOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mStrictSupOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mSubOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mSupEqualOperatorMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_targetBaseTypeMap reader_mTargetBaseTypeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap reader_mTypeMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset reader_mTypeNameSetForIncDec (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap reader_mXorOperatorMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'booleanGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_booleanGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_booleanGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_booleanGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'booleanGenerationTemplate declaration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_booleanGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                         const class GALGAS_string & in_ACTUAL_5F_TYPE_5F_NAME
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'typePrefix'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_typePrefix (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterBoolsetOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBoolsetOperators (const class GALGAS_lstring constinArgument0,
                                    const class GALGAS_uint constinArgument1,
                                    class GALGAS_semanticContext & ioArgument2,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @minusOperatorForBoolsetGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_minusOperatorForBoolsetGeneration : public GALGAS_abstractInfixOperatorGeneration {
//--- Constructor
  public : GALGAS_minusOperatorForBoolsetGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_minusOperatorForBoolsetGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_minusOperatorForBoolsetGeneration * ptr (void) const { return (const cPtr_minusOperatorForBoolsetGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_minusOperatorForBoolsetGeneration (const cPtr_minusOperatorForBoolsetGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_minusOperatorForBoolsetGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_minusOperatorForBoolsetGeneration constructor_new (const class GALGAS_uint & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_minusOperatorForBoolsetGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mMask (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_minusOperatorForBoolsetGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusOperatorForBoolsetGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @minusOperatorForBoolsetGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_minusOperatorForBoolsetGeneration : public cPtr_abstractInfixOperatorGeneration {
//--- Attributes
  public : GALGAS_uint mAttribute_mMask ;

//--- Constructor
  public : cPtr_minusOperatorForBoolsetGeneration (const GALGAS_uint & in_mMask
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mMask (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'boolsetGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_boolsetGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_boolsetGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_boolsetGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'boolsetGenerationTemplate declaration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_boolsetGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_BOOLSET_5F_NAME,
                                                                         const class GALGAS_string & in_ACTUAL_5F_TYPE_5F_NAME
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
//                                     Filewrapper 'enumerationGenerationTemplate'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_enumerationGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumerationGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumerationGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'enumerationGenerationTemplate declaration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumerationGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_ENUMERATION_5F_NAME,
                                                                             const class GALGAS_string & in_ACTUAL_5F_TYPE_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'structureGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_structureGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_structureGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'structureGenerationTemplate declaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_structureGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                           const class GALGAS_string & in_STRUCTURE_5F_NAME,
                                                                           const class GALGAS_structureFieldListForGeneration & in_FIELD_5F_LIST
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'structureGenerationTemplate implementation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_structureGenerationTemplate_implementation (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_STRUCTURE_5F_NAME,
                                                                              const class GALGAS_structureFieldListForGeneration & in_FIELD_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'propertyPrefix'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_propertyPrefix (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'structureInitRoutinePrefix'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_structureInitRoutinePrefix (class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category reader '@abstractExpressionGeneration expressionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractExpressionGeneration_expressionCode) (const class cPtr_abstractExpressionGeneration * inObject,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_expressionCode (const int32_t inClassIndex,
                                         categoryReaderSignature_abstractExpressionGeneration_expressionCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_expressionCode (const class cPtr_abstractExpressionGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'globalVariableGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_globalVariableGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_globalVariableGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_globalVariableGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'globalVariableGenerationTemplate implementation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_globalVariableGenerationTemplate_implementation (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_GLOBAL_5F_VAR_5F_NAME,
                                                                                   const class GALGAS_string & in_GLOBAL_5F_TYPE_5F_NAME,
                                                                                   const class GALGAS_bool & in_GENERATE_5F_VOLATILE,
                                                                                   const class GALGAS_string & in_INITIAL_5F_VALUE_5F_STRING
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterIntegerOperators'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterIntegerOperators (class GALGAS_lstring inArgument0,
                                    class GALGAS_semanticContext & ioArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'integerGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_integerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_integerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_integerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'integerGenerationTemplate declaration'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_integerGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                         const class GALGAS_string & in_INTEGER_5F_TYPE_5F_NAME,
                                                                         const class GALGAS_string & in_ACTUAL_5F_TYPE_5F_NAME
                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterStaticStringOperators'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterStaticStringOperators (class GALGAS_lstring inArgument0,
                                         class GALGAS_semanticContext & ioArgument1,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Filewrapper 'literalStringGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_literalStringGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_literalStringGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_literalStringGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'literalStringGenerationTemplate declaration'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_literalStringGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_STATIC_5F_STRING_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'functionGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_functionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_functionGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_functionGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'functionGenerationTemplate declaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_functionGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                          const class GALGAS_string & in_FUNCTION_5F_MANGLED_5F_NAME,
                                                                          const class GALGAS_funcFormalArgumentListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                          const class GALGAS_unifiedTypeMap_2D_proxy & in_RESULT_5F_TYPE
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'functionGenerationTemplate implementation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_functionGenerationTemplate_implementation (class C_Compiler * inCompiler,
                                                                             const class GALGAS_string & in_FUNCTION_5F_MANGLED_5F_NAME,
                                                                             const class GALGAS_funcFormalArgumentListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                             const class GALGAS_instructionGenerationList & in_INSTRUCTION_5F_GENERATION_5F_LIST,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & in_RESULT_5F_TYPE,
                                                                             const class GALGAS_string & in_RESULT_5F_VAR_5F_NAME
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'functionPrefix'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_functionPrefix (class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@instructionGenerationList instructionListCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string categoryReader_instructionListCode (const class GALGAS_instructionGenerationList & inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'mangledName'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_mangledName (const class GALGAS_procedureKindAST & constinArgument0,
                                          const class GALGAS_string & constinArgument1,
                                          class GALGAS_procFormalArgumentList inArgument2,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'procedureGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_procedureGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_procedureGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_procedureGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'procedureGenerationTemplate declaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_procedureGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                           const class GALGAS_string & in_PROCEDURE_5F_MANGLED_5F_NAME,
                                                                           const class GALGAS_procFormalArgumentListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'procedureGenerationTemplate implementation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_procedureGenerationTemplate_implementation (class C_Compiler * inCompiler,
                                                                              const class GALGAS_string & in_PROCEDURE_5F_MANGLED_5F_NAME,
                                                                              const class GALGAS_procFormalArgumentListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                              const class GALGAS_instructionGenerationList & in_INSTRUCTION_5F_GENERATION_5F_LIST
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'registerGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_registerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_registerGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_registerGenerationTemplate ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'registerGenerationTemplate declaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_registerGenerationTemplate_declaration (class C_Compiler * inCompiler,
                                                                          const class GALGAS_string & in_REGISTER_5F_TYPE_5F_NAME,
                                                                          const class GALGAS_string & in_REGISTER_5F_NAME,
                                                                          const class GALGAS_uint_36__34_ & in_REGISTER_5F_ADDRESS
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (class GALGAS_declarationListAST inArgument0,
                                          const class GALGAS_procedureDeclarationListAST constinArgument1,
                                          class GALGAS_location inArgument2,
                                          class GALGAS_declarationListAST & outArgument3,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category reader '@abstractDeclaration keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractDeclaration_keyRepresentation) (const class cPtr_abstractDeclaration * inObject,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_keyRepresentation (const int32_t inClassIndex,
                                            categoryReaderSignature_abstractDeclaration_keyRepresentation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_keyRepresentation (const class cPtr_abstractDeclaration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category reader '@abstractDeclaration location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*categoryReaderSignature_abstractDeclaration_location) (const class cPtr_abstractDeclaration * inObject,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_location (const int32_t inClassIndex,
                                   categoryReaderSignature_abstractDeclaration_location inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callCategoryReader_location (const class cPtr_abstractDeclaration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@abstractDeclaration enterInPrecedenceGraph'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph) (const class cPtr_abstractDeclaration * inObject,
                                                                                    class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                 categoryMethodSignature_abstractDeclaration_enterInPrecedenceGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclaration * inObject,
                                                GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@procedureDeclarationListAST-element enterInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInPrecedenceGraph (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                            class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const class GALGAS_declarationListAST constinArgument0,
                                   const class GALGAS_procedureDeclarationListAST constinArgument1,
                                   const class GALGAS_functionDeclarationListAST constinArgument2,
                                   const class GALGAS_requiredProcedureDeclarationListAST constinArgument3,
                                   class GALGAS_globalLiteralStringMap & ioArgument4,
                                   class GALGAS_semanticContext & outArgument5,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@abstractDeclaration enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_enterInContext) (const class cPtr_abstractDeclaration * inObject,
                                                                            const class GALGAS_procedureDeclarationListAST constinArgument0,
                                                                            class GALGAS_semanticContext & ioArgument1,
                                                                            class GALGAS_globalLiteralStringMap & ioArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterInContext (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractDeclaration_enterInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterInContext (const class cPtr_abstractDeclaration * inObject,
                                        const GALGAS_procedureDeclarationListAST constin_inProcedureListAST,
                                        GALGAS_semanticContext & io_ioContext,
                                        GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@functionDeclarationListAST-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@procedureDeclarationListAST-element enterInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInContext (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                    class GALGAS_semanticContext & io_ioContext,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'solveInferredType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_unifiedTypeMap_2D_proxy function_solveInferredType (const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & constinArgument1,
                                                                 const class GALGAS_location & constinArgument2,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const class GALGAS_declarationListAST constinArgument0,
                               const class GALGAS_procedureDeclarationListAST constinArgument1,
                               const class GALGAS_functionDeclarationListAST constinArgument2,
                               const class GALGAS_semanticContext constinArgument3,
                               const class GALGAS_requiredProcedureDeclarationListAST constinArgument4,
                               const class GALGAS_location constinArgument5,
                               class GALGAS_globalLiteralStringMap & ioArgument6,
                               class GALGAS_orderedGenerationList & outArgument7,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@abstractDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractDeclaration_semanticAnalysis) (const class cPtr_abstractDeclaration * inObject,
                                                                              const class GALGAS_semanticContext constinArgument0,
                                                                              class GALGAS_orderedGenerationList & ioArgument1,
                                                                              class GALGAS_globalLiteralStringMap & ioArgument2,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractDeclaration_semanticAnalysis inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const class cPtr_abstractDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inContext,
                                          GALGAS_orderedGenerationList & io_ioOrderedGenerationList,
                                          GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@functionDeclarationListAST-element semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_functionDeclarationListAST_2D_element inObject,
                                      const class GALGAS_semanticContext constin_inContext,
                                      class GALGAS_orderedGenerationList & io_ioOrderedGenerationList,
                                      class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@procedureDeclarationListAST-element semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_procedureDeclarationListAST_2D_element inObject,
                                      const class GALGAS_semanticContext constin_inContext,
                                      class GALGAS_orderedGenerationList & io_ioOrderedGenerationList,
                                      class GALGAS_globalLiteralStringMap & io_ioGlobalLiteralStringMap,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'varPrefix'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_varPrefix (class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'inArgumentPrefix'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_inArgumentPrefix (class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'inOutArgumentPrefix'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_inOutArgumentPrefix (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'outArgumentPrefix'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_outArgumentPrefix (class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'receiverName'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_receiverName (class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'receiverPtrName'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_receiverPtrName (class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'literalStringPrefix'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_literalStringPrefix (class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'staticStringTypeName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const class GALGAS_string constinArgument0,
                             const class GALGAS_globalLiteralStringMap constinArgument1,
                             const class GALGAS_orderedGenerationList constinArgument2,
                             const class GALGAS_lstring constinArgument3,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category reader '@abstractGeneration headerCodeGeneration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractGeneration_headerCodeGeneration) (const class cPtr_abstractGeneration * inObject,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_headerCodeGeneration (const int32_t inClassIndex,
                                               categoryReaderSignature_abstractGeneration_headerCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_headerCodeGeneration (const class cPtr_abstractGeneration * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@abstractGeneration implementationCodeGeneration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*categoryReaderSignature_abstractGeneration_implementationCodeGeneration) (const class cPtr_abstractGeneration * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_implementationCodeGeneration (const int32_t inClassIndex,
                                                       categoryReaderSignature_abstractGeneration_implementationCodeGeneration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callCategoryReader_implementationCodeGeneration (const class cPtr_abstractGeneration * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'generateTargets'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateTargets (const class GALGAS_string constinArgument0,
                              const class GALGAS_lstring constinArgument1,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Filewrapper 'targetTemplates'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern const char * gWrapperFileContent_0_targetTemplates ;
extern const char * gWrapperFileContent_1_targetTemplates ;
extern const char * gWrapperFileContent_2_targetTemplates ;
extern const char * gWrapperFileContent_3_targetTemplates ;
extern const char * gWrapperFileContent_4_targetTemplates ;
extern const char * gWrapperFileContent_5_targetTemplates ;
extern const char * gWrapperFileContent_6_targetTemplates ;
extern const char * gWrapperFileContent_7_targetTemplates ;
extern const char * gWrapperFileContent_8_targetTemplates ;
extern const char * gWrapperFileContent_9_targetTemplates ;
extern const char * gWrapperFileContent_10_targetTemplates ;
extern const char * gWrapperFileContent_11_targetTemplates ;
extern const char * gWrapperFileContent_12_targetTemplates ;
extern const char * gWrapperFileContent_13_targetTemplates ;
extern const char * gWrapperFileContent_14_targetTemplates ;
extern const char * gWrapperFileContent_15_targetTemplates ;
extern const char * gWrapperFileContent_16_targetTemplates ;
extern const char * gWrapperFileContent_17_targetTemplates ;
extern const char * gWrapperFileContent_18_targetTemplates ;
extern const char * gWrapperFileContent_19_targetTemplates ;
extern const char * gWrapperFileContent_20_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cRegularFileWrapper gWrapperFile_0_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_1_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_2_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_3_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_4_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_5_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_6_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_7_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_8_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_9_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_10_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_11_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_12_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_13_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_14_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_15_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_16_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_17_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_18_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_19_targetTemplates ;
extern const cRegularFileWrapper gWrapperFile_20_targetTemplates ;

//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_1_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_2_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_3_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_4_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_5_targetTemplates ;
extern const cDirectoryWrapper gWrapperDirectory_6_targetTemplates ;

#endif
