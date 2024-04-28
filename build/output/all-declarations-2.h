#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDecoratedDeclaration_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractDecoratedDeclaration_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractDecoratedDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractDecoratedDeclaration_2E_weak (const class GGS_abstractDecoratedDeclaration & inSource) ;

  public: GGS_abstractDecoratedDeclaration_2E_weak & operator = (const class GGS_abstractDecoratedDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GGS_abstractDecoratedDeclaration bang_abstractDecoratedDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractDecoratedDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractDecoratedDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractDecoratedDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractDecoratedDeclaration_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationDecorationList list
//
//--------------------------------------------------------------------------------------------------

class GGS_declarationDecorationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_declarationDecorationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_declarationDecorationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractDecoratedDeclaration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationDecorationList init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationDecorationList extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationDecorationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_declarationDecorationList class_func_listWithValue (const class GGS_abstractDecoratedDeclaration & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_declarationDecorationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractDecoratedDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_declarationDecorationList add_operation (const GGS_declarationDecorationList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractDecoratedDeclaration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractDecoratedDeclaration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractDecoratedDeclaration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractDecoratedDeclaration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractDecoratedDeclaration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GGS_abstractDecoratedDeclaration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractDecoratedDeclaration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractDecoratedDeclaration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractDecoratedDeclaration getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationDecorationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationDecorationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_declarationDecorationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_declarationDecorationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_declarationDecorationList ;
 
} ; // End of GGS_declarationDecorationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_declarationDecorationList : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationDecorationList (const GGS_declarationDecorationList & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationDecorationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationDecorationList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_declarationDecorationList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationDecorationList_2E_element (const GGS_abstractDecoratedDeclaration & in_mDeclaration) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationDecorationList_2E_element class_func_new (const class GGS_abstractDecoratedDeclaration & inOperand0,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_declarationDecorationList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap : public cMapElement {
//--- Map attributes
  public: GGS_bigint mProperty_mIndex ;
  public: GGS_lstring mProperty_mClassTypeName ;

//--- Constructors
  public: cMapElement_constantMap (const GGS_constantMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constantMap (const GGS_lstring & inKey,
                                   const GGS_bigint & in_mIndex,
                                   const GGS_lstring & in_mClassTypeName
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constantMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_bigint & in_mIndex,
                                      const GGS_lstring & in_mClassTypeName) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bigint & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constantMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inValue) ;
  public: static GGS_constantMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constantMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum constructorValue
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_constructorValue (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_null,
    enum_simple,
    enum_structure,
    enum_arrayValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_simple (class GGS_bigint & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_structure (class GGS_sortedOperandIRList & out_sortedOperandList) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayValue (class GGS_omnibusType & out_elementType,
                                                                   class GGS_uint & out_size) const ;

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
  public: static GGS_constructorValue extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorValue class_func_arrayValue (const class GGS_omnibusType & inOperand0,
                                                                   const class GGS_uint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_null (LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_simple (const class GGS_bigint & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_constructorValue class_func_structure (const class GGS_sortedOperandIRList & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayValue (class GGS_omnibusType & outArgument0,
                                                          class GGS_uint & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSimple (class GGS_bigint & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractStructure (class GGS_sortedOperandIRList & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_constructorValue_2E_arrayValue_3F_ getter_getArrayValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorValue_2E_simple_3F_ getter_getSimple (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constructorValue_2E_structure_3F_ getter_getStructure (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isArrayValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSimple (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorSignature list
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_constructorSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_constructorSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public: static class GGS_constructorSignature class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_constructorSignature class_func_listWithValue (const class GGS_string & inOperand0,
                                                                          const class GGS_omnibusType & inOperand1,
                                                                          const class GGS_uint & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_constructorSignature inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_uint & inOperand2
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFieldIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_constructorSignature_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constructorSignature ;
 
} ; // End of GGS_constructorSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constructorSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_constructorSignature (const GGS_constructorSignature & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constructorSignature_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constructorMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public: GGS_constructorSignature mProperty_mSignature ;
  public: GGS_constructorValue mProperty_mInitValue ;

//--- Constructors
  public: cMapElement_constructorMap (const GGS_constructorMap_2E_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_constructorMap (const GGS_lstring & inKey,
                                      const GGS_constructorSignature & in_mSignature,
                                      const GGS_constructorValue & in_mInitValue
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constructorMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_constructorSignature & in_mSignature,
                                         const GGS_constructorValue & in_mInitValue) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_constructorSignature & inOperand1,
                                                                     const class GGS_constructorValue & inOperand2,
                                                                     class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constructorMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constructorMap_2E_element_3F_ (const GGS_constructorMap_2E_element & inValue) ;
  public: static GGS_constructorMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorValue_2E_arrayValue struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constructorValue_2E_arrayValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_arrayValue (const GGS_omnibusType & in_elementType,
                                              const GGS_uint & in_size) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorValue_2E_arrayValue class_func_new (const class GGS_omnibusType & inOperand0,
                                                                          const class GGS_uint & inOperand1,
                                                                          class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_arrayValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constructorValue.arrayValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_arrayValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_arrayValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_arrayValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constructorValue_2E_arrayValue_3F_ (const GGS_constructorValue_2E_arrayValue & inValue) ;
  public: static GGS_constructorValue_2E_arrayValue_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_arrayValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_arrayValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorValue_2E_simple struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constructorValue_2E_simple (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_simple (const GGS_bigint & in_value) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorValue_2E_simple class_func_new (const class GGS_bigint & inOperand0,
                                                                      class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_simple class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constructorValue.simple? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_simple_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_simple mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_simple_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constructorValue_2E_simple_3F_ (const GGS_constructorValue_2E_simple & inValue) ;
  public: static GGS_constructorValue_2E_simple_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_simple_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_simple_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedOperandIRList sorted list
//
//--------------------------------------------------------------------------------------------------

class GGS_sortedOperandIRList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GGS_sortedOperandIRList (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedOperandIRList init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedOperandIRList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedOperandIRList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_sortedOperandIRList class_func_sortedListWithValue (const class GGS_objectIR & inOperand0,
                                                                               const class GGS_uint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sortedOperandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_objectIR & inOperand0,
                                                     const class GGS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_objectIR inArgument0,
                                               class GGS_uint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_objectIR & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_objectIR & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_objectIR & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_objectIR & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_sortedOperandIRList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sortedOperandIRList ;
 
} ; // End of GGS_sortedOperandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortedOperandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_sortedOperandIRList (const GGS_sortedOperandIRList & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_objectIR current_mOperand (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedOperandIRList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorValue_2E_structure struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constructorValue_2E_structure (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorValue_2E_structure (const GGS_sortedOperandIRList & in_sortedOperandList) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorValue_2E_structure class_func_new (const class GGS_sortedOperandIRList & inOperand0,
                                                                         class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_structure class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: constructorValue.structure? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_constructorValue_2E_structure_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constructorValue_2E_structure mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constructorValue_2E_structure_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_constructorValue_2E_structure_3F_ (const GGS_constructorValue_2E_structure & inValue) ;
  public: static GGS_constructorValue_2E_structure_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorValue_2E_structure_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue_2E_structure_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusTypeAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusTypeAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_omnibusTypeAttributes (void) ;

//--------------------------------- Private constructor
  private: GGS_omnibusTypeAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_omnibusTypeAttributes init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusTypeAttributes extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusTypeAttributes class_func_copyable (LOCATION_ARGS) ;

  public: static class GGS_omnibusTypeAttributes class_func_instanciable (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: VIRTUAL_IN_DEBUG void andAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: VIRTUAL_IN_DEBUG void orAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: VIRTUAL_IN_DEBUG void xorAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_omnibusTypeAttributes inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_omnibusTypeAttributes operator_and (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_omnibusTypeAttributes operator_or (const GGS_omnibusTypeAttributes & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_omnibusTypeAttributes operator_xor (const GGS_omnibusTypeAttributes & inOperand
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_omnibusTypeAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_omnibusTypeAttributes substract_operation (const GGS_omnibusTypeAttributes & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_contains (const class GGS_omnibusTypeAttributes & constinOperand0
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_omnibusTypeAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ;

//--------------------------------------------------------------------------------------------------
//   enum subscript
//--------------------------------------------------------------------------------------------------

class GGS_subscript : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_subscript (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noSubscript,
    enum_staticSubscript,
    enum_literalString
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_staticSubscript (class GGS_omnibusType & out_elementType,
                                                                        class GGS_bigint & out_size) const ;

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
  public: static GGS_subscript extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscript class_func_literalString (LOCATION_ARGS) ;

  public: static class GGS_subscript class_func_noSubscript (LOCATION_ARGS) ;

  public: static class GGS_subscript class_func_staticSubscript (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_bigint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractStaticSubscript (class GGS_omnibusType & outArgument0,
                                                               class GGS_bigint & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_subscript_2E_staticSubscript_3F_ getter_getStaticSubscript (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoSubscript (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStaticSubscript (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_subscript class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript ;

//--------------------------------------------------------------------------------------------------
//   enum typeKind
//--------------------------------------------------------------------------------------------------

class GGS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_void,
    enum_boolean,
    enum_literalString,
    enum_enumeration,
    enum_structure,
    enum_syncTool,
    enum_integer,
    enum_compileTimeInteger,
    enum_compileTimeBool,
    enum_llvmType,
    enum_generic,
    enum_opaque,
    enum_staticArrayType,
    enum_dynamicArrayType,
    enum_function
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumeration (class GGS_uint & out_bitCount) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_structure (class GGS_propertyList & out_propertyList) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_integer (class GGS_bigint & out_min,
                                                                class GGS_bigint & out_max,
                                                                class GGS_bool & out_unsigned,
                                                                class GGS_uint & out_bitCount) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmType (class GGS_bigint & out_bitSize) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_generic (class GGS_genericFormalParameterList & out_parameters,
                                                                class GGS_ctExpressionAST & out_whereClause,
                                                                class GGS_llvmStringDefinition & out_llvmNativeTypeNameExpression) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_opaque (class GGS_bigint & out_bitCount) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_staticArrayType (class GGS_omnibusType & out_elementType,
                                                                        class GGS_bigint & out_size) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_dynamicArrayType (class GGS_omnibusType & out_elementType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_function (class GGS_mode & out_mode,
                                                                 class GGS_routineTypedSignature & out_signature,
                                                                 class GGS_unifiedTypeMapEntry & out_returnTypeProxy) const ;

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
  public: static GGS_typeKind extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind class_func_boolean (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_compileTimeBool (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_compileTimeInteger (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_dynamicArrayType (const class GGS_omnibusType & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_enumeration (const class GGS_uint & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_function (const class GGS_mode & inOperand0,
                                                         const class GGS_routineTypedSignature & inOperand1,
                                                         const class GGS_unifiedTypeMapEntry & inOperand2
                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_generic (const class GGS_genericFormalParameterList & inOperand0,
                                                        const class GGS_ctExpressionAST & inOperand1,
                                                        const class GGS_llvmStringDefinition & inOperand2
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_integer (const class GGS_bigint & inOperand0,
                                                        const class GGS_bigint & inOperand1,
                                                        const class GGS_bool & inOperand2,
                                                        const class GGS_uint & inOperand3
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_literalString (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_llvmType (const class GGS_bigint & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_opaque (const class GGS_bigint & inOperand0
                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_staticArrayType (const class GGS_omnibusType & inOperand0,
                                                                const class GGS_bigint & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_structure (const class GGS_propertyList & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_syncTool (LOCATION_ARGS) ;

  public: static class GGS_typeKind class_func_void (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractDynamicArrayType (class GGS_omnibusType & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumeration (class GGS_uint & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFunction (class GGS_mode & outArgument0,
                                                        class GGS_routineTypedSignature & outArgument1,
                                                        class GGS_unifiedTypeMapEntry & outArgument2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractGeneric (class GGS_genericFormalParameterList & outArgument0,
                                                       class GGS_ctExpressionAST & outArgument1,
                                                       class GGS_llvmStringDefinition & outArgument2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractInteger (class GGS_bigint & outArgument0,
                                                       class GGS_bigint & outArgument1,
                                                       class GGS_bool & outArgument2,
                                                       class GGS_uint & outArgument3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLlvmType (class GGS_bigint & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOpaque (class GGS_bigint & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractStaticArrayType (class GGS_omnibusType & outArgument0,
                                                               class GGS_bigint & outArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractStructure (class GGS_propertyList & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_dynamicArrayType_3F_ getter_getDynamicArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_enumeration_3F_ getter_getEnumeration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_function_3F_ getter_getFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_generic_3F_ getter_getGeneric (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_integer_3F_ getter_getInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_llvmType_3F_ getter_getLlvmType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_opaque_3F_ getter_getOpaque (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_staticArrayType_3F_ getter_getStaticArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKind_2E_structure_3F_ getter_getStructure (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolean (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCompileTimeBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCompileTimeInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDynamicArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumeration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGeneric (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLlvmType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOpaque (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStaticArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStructure (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSyncTool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isVoid (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @omnibusType class
//
//--------------------------------------------------------------------------------------------------

class cPtr_omnibusType : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void omnibusType_init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (const class GGS_subscript & inOperand0,
                                                                                                                      const class GGS_omnibusTypeAttributes & inOperand1,
                                                                                                                      const class GGS_string & inOperand2,
                                                                                                                      const class GGS_typeKind & inOperand3,
                                                                                                                      const class GGS_string & inOperand4,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension getter arcList
  public: virtual class GGS_arcAssignmentList getter_arcList (const class GGS_uintlist inPropertyIndexPath,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter copyable
  public: virtual class GGS_bool getter_copyable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter deinitNeeded
  public: virtual class GGS_bool getter_deinitNeeded (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter descriptionForHTMLFile
  public: virtual class GGS_string getter_descriptionForHTMLFile (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter instanciable
  public: virtual class GGS_bool getter_instanciable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isCompileTimeType
  public: virtual class GGS_bool getter_isCompileTimeType (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter llvmTypeName
  public: virtual class GGS_string getter_llvmTypeName (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method checkIsCompileTimeType
  public: virtual void method_checkIsCompileTimeType (const class GGS_location arg_inErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method checkIsNotCompileTimeType
  public: virtual void method_checkIsNotCompileTimeType (const class GGS_location arg_inErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateInsulate
  public: virtual void method_generateInsulate (const class GGS_string arg_inOmnibusName,
           class GGS_string & arg_ioLLVMcode,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateRelease
  public: virtual void method_generateRelease (const class GGS_string arg_inOmnibusName,
           class GGS_string & arg_ioLLVMcode,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateRetain
  public: virtual void method_generateRetain (const class GGS_string arg_inOmnibusName,
           class GGS_string & arg_ioLLVMcode,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_subscript mProperty_subscript ;
  public: GGS_omnibusTypeAttributes mProperty_attributes ;
  public: GGS_string mProperty_omnibusTypeDescriptionName ;
  public: GGS_typeKind mProperty_kind ;
  public: GGS_string mProperty_llvmBaseTypeName ;


//--- Default constructor
  public: cPtr_omnibusType (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_omnibusType (const GGS_subscript & in_subscript,
                            const GGS_omnibusTypeAttributes & in_attributes,
                            const GGS_string & in_omnibusTypeDescriptionName,
                            const GGS_typeKind & in_kind,
                            const GGS_string & in_llvmBaseTypeName
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorSignature_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_constructorSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constructorSignature_2E_element (const GGS_string & in_mSelector,
                                               const GGS_omnibusType & in_mType,
                                               const GGS_uint & in_mFieldIndex) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorSignature_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                           const class GGS_omnibusType & inOperand1,
                                                                           const class GGS_uint & inOperand2,
                                                                           class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_constructorSignature_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyGetterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyGetterMap : public cMapElement {
//--- Map attributes
  public: GGS_propertyVisibility mProperty_mVisibility ;
  public: GGS_propertyGetterKind mProperty_mAccess ;

//--- Constructors
  public: cMapElement_propertyGetterMap (const GGS_propertyGetterMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertyGetterMap (const GGS_lstring & inKey,
                                         const GGS_propertyVisibility & in_mVisibility,
                                         const GGS_propertyGetterKind & in_mAccess
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyGetterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_propertyVisibility & in_mVisibility,
                                            const GGS_propertyGetterKind & in_mAccess) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_propertyVisibility & inOperand1,
                                                                        const class GGS_propertyGetterKind & inOperand2,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyGetterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertyGetterMap_2E_element_3F_ (const GGS_propertyGetterMap_2E_element & inValue) ;
  public: static GGS_propertyGetterMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterKind_2E_computedProperty struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyGetterKind_2E_computedProperty (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                      const GGS_routineLLVMNameDict & in_modeDictionary) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterKind_2E_computedProperty class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_routineLLVMNameDict & inOperand1,
                                                                                  class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_computedProperty class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyGetterKind.computedProperty? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_computedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_computedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_computedProperty_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertyGetterKind_2E_computedProperty_3F_ (const GGS_propertyGetterKind_2E_computedProperty & inValue) ;
  public: static GGS_propertyGetterKind_2E_computedProperty_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_computedProperty_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_computedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterKind_2E_constantProperty struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyGetterKind_2E_constantProperty (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_constantProperty (const GGS_objectIR & in_value) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterKind_2E_constantProperty class_func_new (const class GGS_objectIR & inOperand0,
                                                                                  class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_constantProperty class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyGetterKind.constantProperty? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_constantProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_constantProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_constantProperty_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertyGetterKind_2E_constantProperty_3F_ (const GGS_propertyGetterKind_2E_constantProperty & inValue) ;
  public: static GGS_propertyGetterKind_2E_constantProperty_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_constantProperty_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_constantProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterKind_2E_storedProperty struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyGetterKind_2E_storedProperty (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyGetterKind_2E_storedProperty (const GGS_omnibusType & in_type,
                                                    const GGS_uint & in_index) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyGetterKind_2E_storedProperty class_func_new (const class GGS_omnibusType & inOperand0,
                                                                                const class GGS_uint & inOperand1,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_storedProperty class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyGetterKind.storedProperty? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyGetterKind_2E_storedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyGetterKind_2E_storedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyGetterKind_2E_storedProperty_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertyGetterKind_2E_storedProperty_3F_ (const GGS_propertyGetterKind_2E_storedProperty & inValue) ;
  public: static GGS_propertyGetterKind_2E_storedProperty_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertyGetterKind_2E_storedProperty_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind_2E_storedProperty_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertySetterMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertySetterMap : public cMapElement {
//--- Map attributes
  public: GGS_propertyVisibility mProperty_mVisibility ;
  public: GGS_propertySetterKind mProperty_mAccess ;

//--- Constructors
  public: cMapElement_propertySetterMap (const GGS_propertySetterMap_2E_element & inValue
                                         COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertySetterMap (const GGS_lstring & inKey,
                                         const GGS_propertyVisibility & in_mVisibility,
                                         const GGS_propertySetterKind & in_mAccess
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertySetterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_propertyVisibility & in_mVisibility,
                                            const GGS_propertySetterKind & in_mAccess) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_propertyVisibility & inOperand1,
                                                                        const class GGS_propertySetterKind & inOperand2,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertySetterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertySetterMap_2E_element_3F_ (const GGS_propertySetterMap_2E_element & inValue) ;
  public: static GGS_propertySetterMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterKind_2E_computedProperty struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertySetterKind_2E_computedProperty (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterKind_2E_computedProperty (const GGS_unifiedTypeMapEntry & in_typeProxy,
                                                      const GGS_routineLLVMNameDict & in_getterModeDictionary,
                                                      const GGS_routineLLVMNameDict & in_setterModeDictionary) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterKind_2E_computedProperty class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_routineLLVMNameDict & inOperand1,
                                                                                  const class GGS_routineLLVMNameDict & inOperand2,
                                                                                  class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterKind_2E_computedProperty class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertySetterKind.computedProperty? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_computedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterKind_2E_computedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_computedProperty_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertySetterKind_2E_computedProperty_3F_ (const GGS_propertySetterKind_2E_computedProperty & inValue) ;
  public: static GGS_propertySetterKind_2E_computedProperty_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterKind_2E_computedProperty_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_computedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterKind_2E_storedProperty struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertySetterKind_2E_storedProperty (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertySetterKind_2E_storedProperty (const GGS_omnibusType & in_type,
                                                    const GGS_uint & in_index) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_propertySetterKind_2E_storedProperty class_func_new (const class GGS_omnibusType & inOperand0,
                                                                                const class GGS_uint & inOperand1,
                                                                                class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterKind_2E_storedProperty class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertySetterKind.storedProperty? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertySetterKind_2E_storedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertySetterKind_2E_storedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertySetterKind_2E_storedProperty_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_propertySetterKind_2E_storedProperty_3F_ (const GGS_propertySetterKind_2E_storedProperty & inValue) ;
  public: static GGS_propertySetterKind_2E_storedProperty_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_propertySetterKind_2E_storedProperty_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind_2E_storedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticStringMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_staticStringMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_staticStringMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_staticStringMap (void) ;

//--------------------------------- Handle copy
  public: GGS_staticStringMap (const GGS_staticStringMap & inSource) ;
  public: GGS_staticStringMap & operator = (const GGS_staticStringMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticStringMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticStringMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticStringMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_staticStringMap class_func_mapWithMapToOverride (const class GGS_staticStringMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_staticStringMap add_operation (const GGS_staticStringMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_staticStringMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_staticStringMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticStringMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_staticStringMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_staticStringMap ;
 
} ; // End of GGS_staticStringMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticStringMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticStringMap (const GGS_staticStringMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticStringMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticStringMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticStringMap : public cMapElement {
//--- Map attributes
  public: GGS_uint mProperty_mIndex ;

//--- Constructors
  public: cMapElement_staticStringMap (const GGS_staticStringMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_staticStringMap (const GGS_lstring & inKey,
                                       const GGS_uint & in_mIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_staticStringMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticStringMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mIndex) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_staticStringMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticStringMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: staticStringMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_staticStringMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticStringMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticStringMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_staticStringMap_2E_element_3F_ (const GGS_staticStringMap_2E_element & inValue) ;
  public: static GGS_staticStringMap_2E_element_3F_ init_nil (void) ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticStringMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList list
//
//--------------------------------------------------------------------------------------------------

class GGS_globalStructuredConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_globalStructuredConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_omnibusType & in_mType,
                                                 const class GGS_operandIRList & in_mOperandIRList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalStructuredConstantList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalStructuredConstantList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalStructuredConstantList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_globalStructuredConstantList class_func_listWithValue (const class GGS_omnibusType & inOperand0,
                                                                                  const class GGS_operandIRList & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_globalStructuredConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_omnibusType & inOperand0,
                                                     const class GGS_operandIRList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_globalStructuredConstantList add_operation (const GGS_globalStructuredConstantList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_omnibusType constinArgument0,
                                               class GGS_operandIRList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_omnibusType constinArgument0,
                                                      class GGS_operandIRList constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_omnibusType & outArgument0,
                                                 class GGS_operandIRList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_omnibusType & outArgument0,
                                                class GGS_operandIRList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_omnibusType & outArgument0,
                                                      class GGS_operandIRList & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandIRListAtIndex (class GGS_operandIRList constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_omnibusType & outArgument0,
                                              class GGS_operandIRList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_omnibusType & outArgument0,
                                             class GGS_operandIRList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_mOperandIRListAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalStructuredConstantList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalStructuredConstantList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalStructuredConstantList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_globalStructuredConstantList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_globalStructuredConstantList ;
 
} ; // End of GGS_globalStructuredConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalStructuredConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_globalStructuredConstantList (const GGS_globalStructuredConstantList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_operandIRList current_mOperandIRList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalStructuredConstantList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @operandIRList list
//
//--------------------------------------------------------------------------------------------------

class GGS_operandIRList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_operandIRList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_operandIRList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_objectIR & in_mOperand
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_operandIRList init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_operandIRList extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_operandIRList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_operandIRList class_func_listWithValue (const class GGS_objectIR & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_operandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_objectIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_operandIRList add_operation (const GGS_operandIRList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_objectIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_objectIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_objectIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_objectIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_objectIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandAtIndex (class GGS_objectIR constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_objectIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_objectIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mOperandAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_operandIRList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_operandIRList ;
 
} ; // End of GGS_operandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_operandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_operandIRList (const GGS_operandIRList & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_objectIR current_mOperand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_operandIRList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList_2E_element struct
//
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

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_globalStructuredConstantList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalStructuredConstantList_2E_element (const GGS_omnibusType & in_mType,
                                                       const GGS_operandIRList & in_mOperandIRList) ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_globalStructuredConstantList_2E_element class_func_new (const class GGS_omnibusType & inOperand0,
                                                                                   const class GGS_operandIRList & inOperand1,
                                                                                   class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_globalStructuredConstantList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @operandIRList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_operandIRList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_mOperand ;
  public: inline GGS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_operandIRList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_operandIRList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_operandIRList_2E_element (const GGS_objectIR & in_mOperand) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_operandIRList_2E_element init_21_ (const class GGS_objectIR & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_operandIRList_2E_element extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_operandIRList_2E_element class_func_new (const class GGS_objectIR & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_operandIRList_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_operandIRList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_literalInteger struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_literalInteger : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_bigint mProperty_value ;
  public: inline GGS_bigint readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_literalInteger (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_literalInteger (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_literalInteger (const GGS_omnibusType & in_type,
                                          const GGS_bigint & in_value) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_literalInteger init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                              const class GGS_bigint & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_literalInteger extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_literalInteger class_func_new (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_bigint & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_literalInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_literalInteger class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_literalInteger ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.literalInteger? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_literalInteger_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_literalInteger mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_literalInteger_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_literalInteger_3F_ (const GGS_objectIR_2E_literalInteger & inValue) ;
  public: static GGS_objectIR_2E_literalInteger_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_literalInteger unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_literalInteger_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_literalInteger_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_literalInteger_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_literalString struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_literalString : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_utf_38_Size ;
  public: inline GGS_uint readProperty_utf_38_Size (void) const {
    return mProperty_utf_38_Size ;
  }

  public: GGS_uint mProperty_index ;
  public: inline GGS_uint readProperty_index (void) const {
    return mProperty_index ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_literalString (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUtf_38_Size (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_utf_38_Size = inValue ;
  }

  public: inline void setter_setIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_literalString (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_literalString (const GGS_uint & in_utf_38_Size,
                                         const GGS_uint & in_index) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_literalString init_21__21_ (const class GGS_uint & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_literalString extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_literalString class_func_new (const class GGS_uint & inOperand0,
                                                                     const class GGS_uint & inOperand1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_literalString & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_literalString class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_literalString ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.literalString? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_literalString_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_literalString mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_literalString_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_literalString_3F_ (const GGS_objectIR_2E_literalString & inValue) ;
  public: static GGS_objectIR_2E_literalString_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_literalString unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_literalString_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_literalString_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_literalString_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmArrayDynamicValues struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayDynamicValues : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_operandIRList mProperty_values ;
  public: inline GGS_operandIRList readProperty_values (void) const {
    return mProperty_values ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayDynamicValues (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setValues (const GGS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_values = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmArrayDynamicValues (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmArrayDynamicValues (const GGS_omnibusType & in_type,
                                                  const GGS_operandIRList & in_values) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmArrayDynamicValues init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_operandIRList & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmArrayDynamicValues extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmArrayDynamicValues class_func_new (const class GGS_omnibusType & inOperand0,
                                                                              const class GGS_operandIRList & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmArrayDynamicValues & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayDynamicValues class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmArrayDynamicValues? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayDynamicValues_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmArrayDynamicValues mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayDynamicValues_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmArrayDynamicValues_3F_ (const GGS_objectIR_2E_llvmArrayDynamicValues & inValue) ;
  public: static GGS_objectIR_2E_llvmArrayDynamicValues_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmArrayDynamicValues unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmArrayDynamicValues_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayDynamicValues_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayDynamicValues_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmArrayRepeatedDynamicValue struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayRepeatedDynamicValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_uint mProperty_arraySize ;
  public: inline GGS_uint readProperty_arraySize (void) const {
    return mProperty_arraySize ;
  }

  public: GGS_objectIR mProperty_value ;
  public: inline GGS_objectIR readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arraySize = inValue ;
  }

  public: inline void setter_setValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedDynamicValue (const GGS_omnibusType & in_type,
                                                         const GGS_uint & in_arraySize,
                                                         const GGS_objectIR & in_value) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmArrayRepeatedDynamicValue init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 const class GGS_objectIR & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmArrayRepeatedDynamicValue extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmArrayRepeatedDynamicValue class_func_new (const class GGS_omnibusType & inOperand0,
                                                                                     const class GGS_uint & inOperand1,
                                                                                     const class GGS_objectIR & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayRepeatedDynamicValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmArrayRepeatedDynamicValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmArrayRepeatedDynamicValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ (const GGS_objectIR_2E_llvmArrayRepeatedDynamicValue & inValue) ;
  public: static GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmArrayRepeatedDynamicValue unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedDynamicValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmArrayRepeatedStaticValue struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayRepeatedStaticValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_uint mProperty_arraySize ;
  public: inline GGS_uint readProperty_arraySize (void) const {
    return mProperty_arraySize ;
  }

  public: GGS_objectIR mProperty_value ;
  public: inline GGS_objectIR readProperty_value (void) const {
    return mProperty_value ;
  }

  public: GGS_uint mProperty_index ;
  public: inline GGS_uint readProperty_index (void) const {
    return mProperty_index ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedStaticValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arraySize = inValue ;
  }

  public: inline void setter_setValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

  public: inline void setter_setIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmArrayRepeatedStaticValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedStaticValue (const GGS_omnibusType & in_type,
                                                        const GGS_uint & in_arraySize,
                                                        const GGS_objectIR & in_value,
                                                        const GGS_uint & in_index) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmArrayRepeatedStaticValue init_21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    const class GGS_objectIR & inOperand2,
                                                                                    const class GGS_uint & inOperand3,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmArrayRepeatedStaticValue extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmArrayRepeatedStaticValue class_func_new (const class GGS_omnibusType & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    const class GGS_objectIR & inOperand2,
                                                                                    const class GGS_uint & inOperand3,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayRepeatedStaticValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmArrayRepeatedStaticValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmArrayRepeatedStaticValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ (const GGS_objectIR_2E_llvmArrayRepeatedStaticValue & inValue) ;
  public: static GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmArrayRepeatedStaticValue unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayRepeatedStaticValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmArrayStaticValues struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayStaticValues : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_operandIRList mProperty_values ;
  public: inline GGS_operandIRList readProperty_values (void) const {
    return mProperty_values ;
  }

  public: GGS_uint mProperty_index ;
  public: inline GGS_uint readProperty_index (void) const {
    return mProperty_index ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayStaticValues (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setValues (const GGS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_values = inValue ;
  }

  public: inline void setter_setIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmArrayStaticValues (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmArrayStaticValues (const GGS_omnibusType & in_type,
                                                 const GGS_operandIRList & in_values,
                                                 const GGS_uint & in_index) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmArrayStaticValues init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                         const class GGS_operandIRList & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmArrayStaticValues extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmArrayStaticValues class_func_new (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_operandIRList & inOperand1,
                                                                             const class GGS_uint & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmArrayStaticValues & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayStaticValues class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmArrayStaticValues? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmArrayStaticValues_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmArrayStaticValues mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmArrayStaticValues_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmArrayStaticValues_3F_ (const GGS_objectIR_2E_llvmArrayStaticValues & inValue) ;
  public: static GGS_objectIR_2E_llvmArrayStaticValues_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmArrayStaticValues unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmArrayStaticValues_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmArrayStaticValues_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmArrayStaticValues_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmNamedValue struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmNamedValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmNamedValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmNamedValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmNamedValue (const GGS_omnibusType & in_type,
                                          const GGS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmNamedValue init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                              const class GGS_string & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmNamedValue extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmNamedValue class_func_new (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_string & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmNamedValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmNamedValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmNamedValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmNamedValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmNamedValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmNamedValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmNamedValue_3F_ (const GGS_objectIR_2E_llvmNamedValue & inValue) ;
  public: static GGS_objectIR_2E_llvmNamedValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmNamedValue unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmNamedValue_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmNamedValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmNamedValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_llvmStructureValue struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmStructureValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_sortedOperandIRList mProperty_values ;
  public: inline GGS_sortedOperandIRList readProperty_values (void) const {
    return mProperty_values ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmStructureValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setValues (const GGS_sortedOperandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_values = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_llvmStructureValue (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_llvmStructureValue (const GGS_omnibusType & in_type,
                                              const GGS_sortedOperandIRList & in_values) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_llvmStructureValue init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_sortedOperandIRList & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_llvmStructureValue extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_llvmStructureValue class_func_new (const class GGS_omnibusType & inOperand0,
                                                                          const class GGS_sortedOperandIRList & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_llvmStructureValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmStructureValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.llvmStructureValue? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_llvmStructureValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_llvmStructureValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_llvmStructureValue_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_llvmStructureValue_3F_ (const GGS_objectIR_2E_llvmStructureValue & inValue) ;
  public: static GGS_objectIR_2E_llvmStructureValue_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_llvmStructureValue unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_llvmStructureValue_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_llvmStructureValue_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_llvmStructureValue_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_null struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_null : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_null (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_null (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_null (const GGS_omnibusType & in_type) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_null init_21_ (const class GGS_omnibusType & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_null extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_null class_func_new (const class GGS_omnibusType & inOperand0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_null & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_null class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_null ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.null? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_null_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_null mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_null_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_null_3F_ (const GGS_objectIR_2E_null & inValue) ;
  public: static GGS_objectIR_2E_null_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_null unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_null_3F_ extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_null_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_null_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_reference struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_reference : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_reference (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_reference (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_reference (const GGS_omnibusType & in_type,
                                     const GGS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_reference init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                         const class GGS_string & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_reference extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_reference class_func_new (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_string & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_reference & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_reference class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_reference ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.reference? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_reference_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_reference mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_reference_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_reference_3F_ (const GGS_objectIR_2E_reference & inValue) ;
  public: static GGS_objectIR_2E_reference_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_reference unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_reference_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_reference_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_reference_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectIR_2E_zero struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_zero : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_zero (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectIR_2E_zero (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectIR_2E_zero (const GGS_omnibusType & in_type) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectIR_2E_zero init_21_ (const class GGS_omnibusType & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectIR_2E_zero extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectIR_2E_zero class_func_new (const class GGS_omnibusType & inOperand0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectIR_2E_zero & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_zero class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_zero ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: objectIR.zero? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR_2E_zero_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_objectIR_2E_zero mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_objectIR_2E_zero_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_objectIR_2E_zero_3F_ (const GGS_objectIR_2E_zero & inValue) ;
  public: static GGS_objectIR_2E_zero_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_objectIR_2E_zero unwrappedValue (void) const {
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
  public: static GGS_objectIR_2E_zero_3F_ extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_objectIR_2E_zero_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR_2E_zero_3F_ ;

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
//
// Phase 1: @decoratedRegularRoutineList list
//
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRegularRoutineList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_decoratedRegularRoutineList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_decoratedRegularRoutineList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_receiverTypeName,
                                                 const class GGS_mode & in_mode,
                                                 const class GGS_bool & in_isRequired,
                                                 const class GGS_routineKind & in_routineKind,
                                                 const class GGS_bool & in_warnIfUnused,
                                                 const class GGS_bool & in_exportedRoutine,
                                                 const class GGS_routineAttributes & in_routineAttributes,
                                                 const class GGS_lstring & in_routineMangledLLVMName,
                                                 const class GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                 const class GGS_bool & in_warningOnUnusedArgs,
                                                 const class GGS_instructionListAST & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfRoutineDeclaration,
                                                 const class GGS_lstring & in_returnTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedRegularRoutineList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedRegularRoutineList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedRegularRoutineList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_decoratedRegularRoutineList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_mode & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 const class GGS_routineKind & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 const class GGS_bool & inOperand5,
                                                                                 const class GGS_routineAttributes & inOperand6,
                                                                                 const class GGS_lstring & inOperand7,
                                                                                 const class GGS_routineFormalArgumentListAST & inOperand8,
                                                                                 const class GGS_bool & inOperand9,
                                                                                 const class GGS_instructionListAST & inOperand10,
                                                                                 const class GGS_location & inOperand11,
                                                                                 const class GGS_lstring & inOperand12
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_decoratedRegularRoutineList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_mode & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_routineKind & inOperand3,
                                                     const class GGS_bool & inOperand4,
                                                     const class GGS_bool & inOperand5,
                                                     const class GGS_routineAttributes & inOperand6,
                                                     const class GGS_lstring & inOperand7,
                                                     const class GGS_routineFormalArgumentListAST & inOperand8,
                                                     const class GGS_bool & inOperand9,
                                                     const class GGS_instructionListAST & inOperand10,
                                                     const class GGS_location & inOperand11,
                                                     const class GGS_lstring & inOperand12
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_decoratedRegularRoutineList add_operation (const GGS_decoratedRegularRoutineList & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_mode constinArgument1,
                                               class GGS_bool constinArgument2,
                                               class GGS_routineKind constinArgument3,
                                               class GGS_bool constinArgument4,
                                               class GGS_bool constinArgument5,
                                               class GGS_routineAttributes constinArgument6,
                                               class GGS_lstring constinArgument7,
                                               class GGS_routineFormalArgumentListAST constinArgument8,
                                               class GGS_bool constinArgument9,
                                               class GGS_instructionListAST constinArgument10,
                                               class GGS_location constinArgument11,
                                               class GGS_lstring constinArgument12,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_mode constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_routineKind constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_bool constinArgument5,
                                                      class GGS_routineAttributes constinArgument6,
                                                      class GGS_lstring constinArgument7,
                                                      class GGS_routineFormalArgumentListAST constinArgument8,
                                                      class GGS_bool constinArgument9,
                                                      class GGS_instructionListAST constinArgument10,
                                                      class GGS_location constinArgument11,
                                                      class GGS_lstring constinArgument12,
                                                      class GGS_uint constinArgument13,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_mode & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 class GGS_routineKind & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 class GGS_bool & outArgument5,
                                                 class GGS_routineAttributes & outArgument6,
                                                 class GGS_lstring & outArgument7,
                                                 class GGS_routineFormalArgumentListAST & outArgument8,
                                                 class GGS_bool & outArgument9,
                                                 class GGS_instructionListAST & outArgument10,
                                                 class GGS_location & outArgument11,
                                                 class GGS_lstring & outArgument12,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_mode & outArgument1,
                                                class GGS_bool & outArgument2,
                                                class GGS_routineKind & outArgument3,
                                                class GGS_bool & outArgument4,
                                                class GGS_bool & outArgument5,
                                                class GGS_routineAttributes & outArgument6,
                                                class GGS_lstring & outArgument7,
                                                class GGS_routineFormalArgumentListAST & outArgument8,
                                                class GGS_bool & outArgument9,
                                                class GGS_instructionListAST & outArgument10,
                                                class GGS_location & outArgument11,
                                                class GGS_lstring & outArgument12,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_mode & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_routineKind & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_bool & outArgument5,
                                                      class GGS_routineAttributes & outArgument6,
                                                      class GGS_lstring & outArgument7,
                                                      class GGS_routineFormalArgumentListAST & outArgument8,
                                                      class GGS_bool & outArgument9,
                                                      class GGS_instructionListAST & outArgument10,
                                                      class GGS_location & outArgument11,
                                                      class GGS_lstring & outArgument12,
                                                      class GGS_uint constinArgument13,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setExportedRoutineAtIndex (class GGS_bool constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setFormalArgumentListAtIndex (class GGS_routineFormalArgumentListAST constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsRequiredAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineDeclarationAtIndex (class GGS_location constinArgument0,
                                                                           class GGS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_instructionListAST constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setModeAtIndex (class GGS_mode constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReceiverTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReturnTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineAttributesAtIndex (class GGS_routineAttributes constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineKindAtIndex (class GGS_routineKind constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineMangledLLVMNameAtIndex (class GGS_lstring constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarnIfUnusedAtIndex (class GGS_bool constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarningOnUnusedArgsAtIndex (class GGS_bool constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_mode & outArgument1,
                                              class GGS_bool & outArgument2,
                                              class GGS_routineKind & outArgument3,
                                              class GGS_bool & outArgument4,
                                              class GGS_bool & outArgument5,
                                              class GGS_routineAttributes & outArgument6,
                                              class GGS_lstring & outArgument7,
                                              class GGS_routineFormalArgumentListAST & outArgument8,
                                              class GGS_bool & outArgument9,
                                              class GGS_instructionListAST & outArgument10,
                                              class GGS_location & outArgument11,
                                              class GGS_lstring & outArgument12,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_mode & outArgument1,
                                             class GGS_bool & outArgument2,
                                             class GGS_routineKind & outArgument3,
                                             class GGS_bool & outArgument4,
                                             class GGS_bool & outArgument5,
                                             class GGS_routineAttributes & outArgument6,
                                             class GGS_lstring & outArgument7,
                                             class GGS_routineFormalArgumentListAST & outArgument8,
                                             class GGS_bool & outArgument9,
                                             class GGS_instructionListAST & outArgument10,
                                             class GGS_location & outArgument11,
                                             class GGS_lstring & outArgument12,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_exportedRoutineAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineFormalArgumentListAST getter_formalArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRequiredAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfRoutineDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mode getter_modeAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_receiverTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_returnTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineAttributes getter_routineAttributesAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineKind getter_routineKindAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_routineMangledLLVMNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedRegularRoutineList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedRegularRoutineList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedRegularRoutineList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_warnIfUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_warningOnUnusedArgsAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_decoratedRegularRoutineList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_decoratedRegularRoutineList ;
 
} ; // End of GGS_decoratedRegularRoutineList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_decoratedRegularRoutineList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedRegularRoutineList (const GGS_decoratedRegularRoutineList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_receiverTypeName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mode (LOCATION_ARGS) const ;
  public: class GGS_bool current_isRequired (LOCATION_ARGS) const ;
  public: class GGS_routineKind current_routineKind (LOCATION_ARGS) const ;
  public: class GGS_bool current_warnIfUnused (LOCATION_ARGS) const ;
  public: class GGS_bool current_exportedRoutine (LOCATION_ARGS) const ;
  public: class GGS_routineAttributes current_routineAttributes (LOCATION_ARGS) const ;
  public: class GGS_lstring current_routineMangledLLVMName (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListAST current_formalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_bool current_warningOnUnusedArgs (LOCATION_ARGS) const ;
  public: class GGS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfRoutineDeclaration (LOCATION_ARGS) const ;
  public: class GGS_lstring current_returnTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedRegularRoutineList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_routineListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_routineListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_routineListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractRoutineIR & in_mRoutine
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineListIR init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineListIR extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_routineListIR class_func_listWithValue (const class GGS_abstractRoutineIR & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_routineListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractRoutineIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_routineListIR add_operation (const GGS_routineListIR & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractRoutineIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractRoutineIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractRoutineIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractRoutineIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractRoutineIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GGS_abstractRoutineIR constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractRoutineIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractRoutineIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractRoutineIR getter_mRoutineAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_routineListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_routineListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_routineListIR ;
 
} ; // End of GGS_routineListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineListIR (const GGS_routineListIR & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_userLLVMTypeDefinitionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_userLLVMTypeDefinitionIR & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMTypeDefinitionListIR init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMTypeDefinitionListIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMTypeDefinitionListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_userLLVMTypeDefinitionListIR class_func_listWithValue (const class GGS_userLLVMTypeDefinitionIR & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_userLLVMTypeDefinitionListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_userLLVMTypeDefinitionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_userLLVMTypeDefinitionListIR add_operation (const GGS_userLLVMTypeDefinitionListIR & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_userLLVMTypeDefinitionIR getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_userLLVMTypeDefinitionListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_userLLVMTypeDefinitionListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_userLLVMTypeDefinitionListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_userLLVMTypeDefinitionListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_userLLVMTypeDefinitionListIR ;
 
} ; // End of GGS_userLLVMTypeDefinitionListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_userLLVMTypeDefinitionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_userLLVMTypeDefinitionIR current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_userLLVMTypeDefinitionListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInitializationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticListInitializationMap ;

//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_staticListInitializationMap (void) ;

//--------------------------------- Handle copy
  public: GGS_staticListInitializationMap (const GGS_staticListInitializationMap & inSource) ;
  public: GGS_staticListInitializationMap & operator = (const GGS_staticListInitializationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInitializationMap init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInitializationMap extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListInitializationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_staticListInitializationMap class_func_mapWithMapToOverride (const class GGS_staticListInitializationMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_stringlist & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_staticListInitializationMap add_operation (const GGS_staticListInitializationMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringlist constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitializationListForKey (class GGS_stringlist constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mInitializationListForKey (const class GGS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_staticListInitializationMap getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_staticListInitializationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInitializationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GGS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_staticListInitializationMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_staticListInitializationMap ;
 
} ; // End of GGS_staticListInitializationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticListInitializationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInitializationMap (const GGS_staticListInitializationMap & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mInitializationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListInitializationMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticListInitializationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticListInitializationMap : public cMapElement {
//--- Map attributes
  public: GGS_stringlist mProperty_mInitializationList ;

//--- Constructors
  public: cMapElement_staticListInitializationMap (const GGS_staticListInitializationMap_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_staticListInitializationMap (const GGS_lstring & inKey,
                                                   const GGS_stringlist & in_mInitializationList
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @universalValuedObjectMap struct
//
//--------------------------------------------------------------------------------------------------

class GGS_universalValuedObjectMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_flatValuedObjectMap mProperty_mInternalPropertyAndRoutineMap ;
  public: inline GGS_flatValuedObjectMap readProperty_mInternalPropertyAndRoutineMap (void) const {
    return mProperty_mInternalPropertyAndRoutineMap ;
  }

  public: GGS_scopeStack mProperty_mScopeStack ;
  public: inline GGS_scopeStack readProperty_mScopeStack (void) const {
    return mProperty_mScopeStack ;
  }

  public: GGS_lstringlist mProperty_mLocalObjectList ;
  public: inline GGS_lstringlist readProperty_mLocalObjectList (void) const {
    return mProperty_mLocalObjectList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_universalValuedObjectMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInternalPropertyAndRoutineMap (const GGS_flatValuedObjectMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInternalPropertyAndRoutineMap = inValue ;
  }

  public: inline void setter_setMScopeStack (const GGS_scopeStack & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScopeStack = inValue ;
  }

  public: inline void setter_setMLocalObjectList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalObjectList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_universalValuedObjectMap (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_universalValuedObjectMap (const GGS_flatValuedObjectMap & in_mInternalPropertyAndRoutineMap,
                                        const GGS_scopeStack & in_mScopeStack,
                                        const GGS_lstringlist & in_mLocalObjectList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_universalValuedObjectMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_universalValuedObjectMap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_universalValuedObjectMap class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_universalValuedObjectMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalValuedObjectMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_targetParameters mProperty_mTargetParameters ;
  public: inline GGS_targetParameters readProperty_mTargetParameters (void) const {
    return mProperty_mTargetParameters ;
  }

  public: GGS_omnibusType mProperty_mPanicCodeType ;
  public: inline GGS_omnibusType readProperty_mPanicCodeType (void) const {
    return mProperty_mPanicCodeType ;
  }

  public: GGS_omnibusType mProperty_mPanicLineType ;
  public: inline GGS_omnibusType readProperty_mPanicLineType (void) const {
    return mProperty_mPanicLineType ;
  }

  public: GGS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;
  public: inline GGS_panicRoutinePriorityMap readProperty_mPanicSetupRoutinePriorityMap (void) const {
    return mProperty_mPanicSetupRoutinePriorityMap ;
  }

  public: GGS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;
  public: inline GGS_panicRoutinePriorityMap readProperty_mPanicLoopRoutinePriorityMap (void) const {
    return mProperty_mPanicLoopRoutinePriorityMap ;
  }

  public: GGS_routineMapForContext mProperty_mRoutineMap ;
  public: inline GGS_routineMapForContext readProperty_mRoutineMap (void) const {
    return mProperty_mRoutineMap ;
  }

  public: GGS_guardMapForContext mProperty_mGuardMap ;
  public: inline GGS_guardMapForContext readProperty_mGuardMap (void) const {
    return mProperty_mGuardMap ;
  }

  public: GGS_controlRegisterGroupMap mProperty_mControlRegisterGroupMap ;
  public: inline GGS_controlRegisterGroupMap readProperty_mControlRegisterGroupMap (void) const {
    return mProperty_mControlRegisterGroupMap ;
  }

  public: GGS_globalConstantMap mProperty_mGlobalConstantMap ;
  public: inline GGS_globalConstantMap readProperty_mGlobalConstantMap (void) const {
    return mProperty_mGlobalConstantMap ;
  }

  public: GGS_globalSyncInstanceMap mProperty_mGlobalSyncInstanceMap ;
  public: inline GGS_globalSyncInstanceMap readProperty_mGlobalSyncInstanceMap (void) const {
    return mProperty_mGlobalSyncInstanceMap ;
  }

  public: GGS_staticlistMap mProperty_mStaticListMap ;
  public: inline GGS_staticlistMap readProperty_mStaticListMap (void) const {
    return mProperty_mStaticListMap ;
  }

  public: GGS_stringset mProperty_mRequiredRoutineSet ;
  public: inline GGS_stringset readProperty_mRequiredRoutineSet (void) const {
    return mProperty_mRequiredRoutineSet ;
  }

  public: GGS_unifiedTypeMap mProperty_mTypeMap ;
  public: inline GGS_unifiedTypeMap readProperty_mTypeMap (void) const {
    return mProperty_mTypeMap ;
  }

  public: GGS_typeConstantMap mProperty_mTypeConstantMap ;
  public: inline GGS_typeConstantMap readProperty_mTypeConstantMap (void) const {
    return mProperty_mTypeConstantMap ;
  }

  public: GGS_typeConstructorMap mProperty_mTypeConstructorMap ;
  public: inline GGS_typeConstructorMap readProperty_mTypeConstructorMap (void) const {
    return mProperty_mTypeConstructorMap ;
  }

  public: GGS_typePropertySetterMap mProperty_mTypePropertySetterMap ;
  public: inline GGS_typePropertySetterMap readProperty_mTypePropertySetterMap (void) const {
    return mProperty_mTypePropertySetterMap ;
  }

  public: GGS_typePropertyGetterMap mProperty_mTypePropertyGetterMap ;
  public: inline GGS_typePropertyGetterMap readProperty_mTypePropertyGetterMap (void) const {
    return mProperty_mTypePropertyGetterMap ;
  }

  public: GGS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GGS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

  public: GGS_infixOperatorMap mProperty_mInfixOperatorMap ;
  public: inline GGS_infixOperatorMap readProperty_mInfixOperatorMap (void) const {
    return mProperty_mInfixOperatorMap ;
  }

  public: GGS_prefixOperatorMap mProperty_mPrefixOperatorMap ;
  public: inline GGS_prefixOperatorMap readProperty_mPrefixOperatorMap (void) const {
    return mProperty_mPrefixOperatorMap ;
  }

  public: GGS_assignmentOperatorMap mProperty_mAssignmentOperatorMap ;
  public: inline GGS_assignmentOperatorMap readProperty_mAssignmentOperatorMap (void) const {
    return mProperty_mAssignmentOperatorMap ;
  }

  public: GGS_implicitConversionToBooleanMap mProperty_mImplicitConversionToBooleanMap ;
  public: inline GGS_implicitConversionToBooleanMap readProperty_mImplicitConversionToBooleanMap (void) const {
    return mProperty_mImplicitConversionToBooleanMap ;
  }

  public: GGS_taskMap mProperty_mTaskMap ;
  public: inline GGS_taskMap readProperty_mTaskMap (void) const {
    return mProperty_mTaskMap ;
  }

  public: GGS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GGS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GGS_universalValuedObjectMap mProperty_mValuedObjectMap ;
  public: inline GGS_universalValuedObjectMap readProperty_mValuedObjectMap (void) const {
    return mProperty_mValuedObjectMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetParameters (const GGS_targetParameters & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetParameters = inValue ;
  }

  public: inline void setter_setMPanicCodeType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeType = inValue ;
  }

  public: inline void setter_setMPanicLineType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineType = inValue ;
  }

  public: inline void setter_setMPanicSetupRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMPanicLoopRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMRoutineMap (const GGS_routineMapForContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineMap = inValue ;
  }

  public: inline void setter_setMGuardMap (const GGS_guardMapForContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardMap = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupMap (const GGS_controlRegisterGroupMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupMap = inValue ;
  }

  public: inline void setter_setMGlobalConstantMap (const GGS_globalConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalConstantMap = inValue ;
  }

  public: inline void setter_setMGlobalSyncInstanceMap (const GGS_globalSyncInstanceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSyncInstanceMap = inValue ;
  }

  public: inline void setter_setMStaticListMap (const GGS_staticlistMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticListMap = inValue ;
  }

  public: inline void setter_setMRequiredRoutineSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredRoutineSet = inValue ;
  }

  public: inline void setter_setMTypeMap (const GGS_unifiedTypeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeMap = inValue ;
  }

  public: inline void setter_setMTypeConstantMap (const GGS_typeConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeConstantMap = inValue ;
  }

  public: inline void setter_setMTypeConstructorMap (const GGS_typeConstructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeConstructorMap = inValue ;
  }

  public: inline void setter_setMTypePropertySetterMap (const GGS_typePropertySetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypePropertySetterMap = inValue ;
  }

  public: inline void setter_setMTypePropertyGetterMap (const GGS_typePropertyGetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypePropertyGetterMap = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GGS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

  public: inline void setter_setMInfixOperatorMap (const GGS_infixOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfixOperatorMap = inValue ;
  }

  public: inline void setter_setMPrefixOperatorMap (const GGS_prefixOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrefixOperatorMap = inValue ;
  }

  public: inline void setter_setMAssignmentOperatorMap (const GGS_assignmentOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssignmentOperatorMap = inValue ;
  }

  public: inline void setter_setMImplicitConversionToBooleanMap (const GGS_implicitConversionToBooleanMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplicitConversionToBooleanMap = inValue ;
  }

  public: inline void setter_setMTaskMap (const GGS_taskMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskMap = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GGS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMValuedObjectMap (const GGS_universalValuedObjectMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObjectMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticContext (const GGS_targetParameters & in_mTargetParameters,
                               const GGS_omnibusType & in_mPanicCodeType,
                               const GGS_omnibusType & in_mPanicLineType,
                               const GGS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                               const GGS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                               const GGS_routineMapForContext & in_mRoutineMap,
                               const GGS_guardMapForContext & in_mGuardMap,
                               const GGS_controlRegisterGroupMap & in_mControlRegisterGroupMap,
                               const GGS_globalConstantMap & in_mGlobalConstantMap,
                               const GGS_globalSyncInstanceMap & in_mGlobalSyncInstanceMap,
                               const GGS_staticlistMap & in_mStaticListMap,
                               const GGS_stringset & in_mRequiredRoutineSet,
                               const GGS_unifiedTypeMap & in_mTypeMap,
                               const GGS_typeConstantMap & in_mTypeConstantMap,
                               const GGS_typeConstructorMap & in_mTypeConstructorMap,
                               const GGS_typePropertySetterMap & in_mTypePropertySetterMap,
                               const GGS_typePropertyGetterMap & in_mTypePropertyGetterMap,
                               const GGS_availableInterruptMap & in_mAvailableInterruptMap,
                               const GGS_infixOperatorMap & in_mInfixOperatorMap,
                               const GGS_prefixOperatorMap & in_mPrefixOperatorMap,
                               const GGS_assignmentOperatorMap & in_mAssignmentOperatorMap,
                               const GGS_implicitConversionToBooleanMap & in_mImplicitConversionToBooleanMap,
                               const GGS_taskMap & in_mTaskMap,
                               const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                               const GGS_universalValuedObjectMap & in_mValuedObjectMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticContext init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticContext extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticContext class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticEntityMap struct
//
//--------------------------------------------------------------------------------------------------

class GGS_staticEntityMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_staticStringMap mProperty_mStaticStringMap ;
  public: inline GGS_staticStringMap readProperty_mStaticStringMap (void) const {
    return mProperty_mStaticStringMap ;
  }

  public: GGS_globalStructuredConstantList mProperty_mGlobalStructuredConstantList ;
  public: inline GGS_globalStructuredConstantList readProperty_mGlobalStructuredConstantList (void) const {
    return mProperty_mGlobalStructuredConstantList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticEntityMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStaticStringMap (const GGS_staticStringMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticStringMap = inValue ;
  }

  public: inline void setter_setMGlobalStructuredConstantList (const GGS_globalStructuredConstantList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalStructuredConstantList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_staticEntityMap (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticEntityMap (const GGS_staticStringMap & in_mStaticStringMap,
                               const GGS_globalStructuredConstantList & in_mGlobalStructuredConstantList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticEntityMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticEntityMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticEntityMap class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticEntityMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticEntityMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subscript_2E_staticSubscript struct
//
//--------------------------------------------------------------------------------------------------

class GGS_subscript_2E_staticSubscript : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_elementType ;
  public: inline GGS_omnibusType readProperty_elementType (void) const {
    return mProperty_elementType ;
  }

  public: GGS_bigint mProperty_size ;
  public: inline GGS_bigint readProperty_size (void) const {
    return mProperty_size ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_subscript_2E_staticSubscript (void) ;

//--------------------------------- Property setters
  public: inline void setter_setElementType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementType = inValue ;
  }

  public: inline void setter_setSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_size = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_subscript_2E_staticSubscript (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_subscript_2E_staticSubscript (const GGS_omnibusType & in_elementType,
                                            const GGS_bigint & in_size) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscript_2E_staticSubscript init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                const class GGS_bigint & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscript_2E_staticSubscript extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscript_2E_staticSubscript class_func_new (const class GGS_omnibusType & inOperand0,
                                                                        const class GGS_bigint & inOperand1,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_subscript_2E_staticSubscript class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: subscript.staticSubscript? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_subscript_2E_staticSubscript_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_subscript_2E_staticSubscript mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_subscript_2E_staticSubscript_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_subscript_2E_staticSubscript_3F_ (const GGS_subscript_2E_staticSubscript & inValue) ;
  public: static GGS_subscript_2E_staticSubscript_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_subscript_2E_staticSubscript unwrappedValue (void) const {
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
  public: static GGS_subscript_2E_staticSubscript_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_subscript_2E_staticSubscript_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_dynamicArrayType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_dynamicArrayType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_elementType ;
  public: inline GGS_omnibusType readProperty_elementType (void) const {
    return mProperty_elementType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_dynamicArrayType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setElementType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_dynamicArrayType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_dynamicArrayType (const GGS_omnibusType & in_elementType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_dynamicArrayType init_21_ (const class GGS_omnibusType & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_dynamicArrayType extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_dynamicArrayType class_func_new (const class GGS_omnibusType & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_dynamicArrayType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_dynamicArrayType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.dynamicArrayType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_dynamicArrayType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_dynamicArrayType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_dynamicArrayType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_dynamicArrayType_3F_ (const GGS_typeKind_2E_dynamicArrayType & inValue) ;
  public: static GGS_typeKind_2E_dynamicArrayType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_dynamicArrayType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_dynamicArrayType_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_dynamicArrayType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_enumeration struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumeration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_bitCount ;
  public: inline GGS_uint readProperty_bitCount (void) const {
    return mProperty_bitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumeration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bitCount = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_enumeration (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_enumeration (const GGS_uint & in_bitCount) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_enumeration init_21_ (const class GGS_uint & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_enumeration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_enumeration class_func_new (const class GGS_uint & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumeration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_enumeration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.enumeration? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumeration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_enumeration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumeration_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_enumeration_3F_ (const GGS_typeKind_2E_enumeration & inValue) ;
  public: static GGS_typeKind_2E_enumeration_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_enumeration unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_enumeration_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_enumeration_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_function struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_function : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mode mProperty_mode ;
  public: inline GGS_mode readProperty_mode (void) const {
    return mProperty_mode ;
  }

  public: GGS_routineTypedSignature mProperty_signature ;
  public: inline GGS_routineTypedSignature readProperty_signature (void) const {
    return mProperty_signature ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_returnTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_returnTypeProxy (void) const {
    return mProperty_returnTypeProxy ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_function (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mode = inValue ;
  }

  public: inline void setter_setSignature (const GGS_routineTypedSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_signature = inValue ;
  }

  public: inline void setter_setReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_returnTypeProxy = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_function (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_function (const GGS_mode & in_mode,
                                    const GGS_routineTypedSignature & in_signature,
                                    const GGS_unifiedTypeMapEntry & in_returnTypeProxy) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_function init_21__21__21_ (const class GGS_mode & inOperand0,
                                                            const class GGS_routineTypedSignature & inOperand1,
                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_function extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_function class_func_new (const class GGS_mode & inOperand0,
                                                                const class GGS_routineTypedSignature & inOperand1,
                                                                const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_function & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_function class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_function ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.function? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_function_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_function mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_function_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_function_3F_ (const GGS_typeKind_2E_function & inValue) ;
  public: static GGS_typeKind_2E_function_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_function unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_function_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_function_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmStringDefinition list
//
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_llvmStringDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_llvmStringDefinitionElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmStringDefinition init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmStringDefinition extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmStringDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_llvmStringDefinition class_func_listWithValue (const class GGS_llvmStringDefinitionElement & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_llvmStringDefinition inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_llvmStringDefinitionElement & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_llvmStringDefinition add_operation (const GGS_llvmStringDefinition & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_llvmStringDefinitionElement constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_llvmStringDefinitionElement constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_llvmStringDefinitionElement & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_llvmStringDefinitionElement & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_llvmStringDefinitionElement & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_llvmStringDefinitionElement constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_llvmStringDefinitionElement & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_llvmStringDefinitionElement & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_llvmStringDefinitionElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmStringDefinition getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmStringDefinition getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmStringDefinition getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_llvmStringDefinition_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_llvmStringDefinition ;
 
} ; // End of GGS_llvmStringDefinition class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_llvmStringDefinition : public cGenericAbstractEnumerator {
  public: cEnumerator_llvmStringDefinition (const GGS_llvmStringDefinition & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_llvmStringDefinitionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmStringDefinition_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_generic struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_generic : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_genericFormalParameterList mProperty_parameters ;
  public: inline GGS_genericFormalParameterList readProperty_parameters (void) const {
    return mProperty_parameters ;
  }

  public: GGS_ctExpressionAST mProperty_whereClause ;
  public: inline GGS_ctExpressionAST readProperty_whereClause (void) const {
    return mProperty_whereClause ;
  }

  public: GGS_llvmStringDefinition mProperty_llvmNativeTypeNameExpression ;
  public: inline GGS_llvmStringDefinition readProperty_llvmNativeTypeNameExpression (void) const {
    return mProperty_llvmNativeTypeNameExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_generic (void) ;

//--------------------------------- Property setters
  public: inline void setter_setParameters (const GGS_genericFormalParameterList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_parameters = inValue ;
  }

  public: inline void setter_setWhereClause (const GGS_ctExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_whereClause = inValue ;
  }

  public: inline void setter_setLlvmNativeTypeNameExpression (const GGS_llvmStringDefinition & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmNativeTypeNameExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_generic (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_generic (const GGS_genericFormalParameterList & in_parameters,
                                   const GGS_ctExpressionAST & in_whereClause,
                                   const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_generic init_21__21__21_ (const class GGS_genericFormalParameterList & inOperand0,
                                                           const class GGS_ctExpressionAST & inOperand1,
                                                           const class GGS_llvmStringDefinition & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_generic extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_generic class_func_new (const class GGS_genericFormalParameterList & inOperand0,
                                                               const class GGS_ctExpressionAST & inOperand1,
                                                               const class GGS_llvmStringDefinition & inOperand2,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_generic & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_generic class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_generic ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.generic? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_generic_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_generic mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_generic_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_generic_3F_ (const GGS_typeKind_2E_generic & inValue) ;
  public: static GGS_typeKind_2E_generic_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_generic unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_generic_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_generic_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_integer struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_integer : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_min ;
  public: inline GGS_bigint readProperty_min (void) const {
    return mProperty_min ;
  }

  public: GGS_bigint mProperty_max ;
  public: inline GGS_bigint readProperty_max (void) const {
    return mProperty_max ;
  }

  public: GGS_bool mProperty_unsigned ;
  public: inline GGS_bool readProperty_unsigned (void) const {
    return mProperty_unsigned ;
  }

  public: GGS_uint mProperty_bitCount ;
  public: inline GGS_uint readProperty_bitCount (void) const {
    return mProperty_bitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_integer (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMin (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_min = inValue ;
  }

  public: inline void setter_setMax (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_max = inValue ;
  }

  public: inline void setter_setUnsigned (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_unsigned = inValue ;
  }

  public: inline void setter_setBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bitCount = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_integer (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_integer (const GGS_bigint & in_min,
                                   const GGS_bigint & in_max,
                                   const GGS_bool & in_unsigned,
                                   const GGS_uint & in_bitCount) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_integer init_21__21__21__21_ (const class GGS_bigint & inOperand0,
                                                               const class GGS_bigint & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_uint & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_integer extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_integer class_func_new (const class GGS_bigint & inOperand0,
                                                               const class GGS_bigint & inOperand1,
                                                               const class GGS_bool & inOperand2,
                                                               const class GGS_uint & inOperand3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_integer & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_integer class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_integer ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.integer? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_integer_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_integer mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_integer_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_integer_3F_ (const GGS_typeKind_2E_integer & inValue) ;
  public: static GGS_typeKind_2E_integer_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_integer unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_integer_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_integer_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_llvmType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_llvmType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_bitSize ;
  public: inline GGS_bigint readProperty_bitSize (void) const {
    return mProperty_bitSize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_llvmType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBitSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bitSize = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_llvmType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_llvmType (const GGS_bigint & in_bitSize) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_llvmType init_21_ (const class GGS_bigint & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_llvmType extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_llvmType class_func_new (const class GGS_bigint & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_llvmType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_llvmType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.llvmType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_llvmType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_llvmType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_llvmType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_llvmType_3F_ (const GGS_typeKind_2E_llvmType & inValue) ;
  public: static GGS_typeKind_2E_llvmType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_llvmType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_llvmType_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_llvmType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_opaque struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_opaque : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_bitCount ;
  public: inline GGS_bigint readProperty_bitCount (void) const {
    return mProperty_bitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_opaque (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBitCount (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bitCount = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_opaque (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_opaque (const GGS_bigint & in_bitCount) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_opaque init_21_ (const class GGS_bigint & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_opaque extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_opaque class_func_new (const class GGS_bigint & inOperand0,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_opaque & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_opaque class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.opaque? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_opaque_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_opaque mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_opaque_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_opaque_3F_ (const GGS_typeKind_2E_opaque & inValue) ;
  public: static GGS_typeKind_2E_opaque_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_opaque unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_opaque_3F_ extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_opaque_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_staticArrayType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_staticArrayType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_elementType ;
  public: inline GGS_omnibusType readProperty_elementType (void) const {
    return mProperty_elementType ;
  }

  public: GGS_bigint mProperty_size ;
  public: inline GGS_bigint readProperty_size (void) const {
    return mProperty_size ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_staticArrayType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setElementType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_elementType = inValue ;
  }

  public: inline void setter_setSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_size = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_staticArrayType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_staticArrayType (const GGS_omnibusType & in_elementType,
                                           const GGS_bigint & in_size) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_staticArrayType init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_bigint & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_staticArrayType extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_staticArrayType class_func_new (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_bigint & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_staticArrayType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_staticArrayType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.staticArrayType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_staticArrayType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_staticArrayType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_staticArrayType_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_staticArrayType_3F_ (const GGS_typeKind_2E_staticArrayType & inValue) ;
  public: static GGS_typeKind_2E_staticArrayType_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_staticArrayType unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_staticArrayType_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_staticArrayType_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKind_2E_structure struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_structure : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_propertyList mProperty_propertyList ;
  public: inline GGS_propertyList readProperty_propertyList (void) const {
    return mProperty_propertyList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_structure (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPropertyList (const GGS_propertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_propertyList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKind_2E_structure (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_structure (const GGS_propertyList & in_propertyList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKind_2E_structure init_21_ (const class GGS_propertyList & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKind_2E_structure extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKind_2E_structure class_func_new (const class GGS_propertyList & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_structure & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_structure class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_structure ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKind.structure? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_structure_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_structure mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_structure_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeKind_2E_structure_3F_ (const GGS_typeKind_2E_structure & inValue) ;
  public: static GGS_typeKind_2E_structure_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeKind_2E_structure unwrappedValue (void) const {
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
  public: static GGS_typeKind_2E_structure_3F_ extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeKind_2E_structure_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusType_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_omnibusType_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusType_2E_weak (const class GGS_omnibusType & inSource) ;

  public: GGS_omnibusType_2E_weak & operator = (const class GGS_omnibusType & inSource) ;

//--------------------------------- Bang operator
  public: GGS_omnibusType bang_omnibusType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusType_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusType_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusType_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_omnibusType_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList list
//
//--------------------------------------------------------------------------------------------------

class GGS_arcAssignmentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_arcAssignmentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_arcAssignmentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mPropertyName,
                                                 const class GGS_omnibusType & in_mPropertyType,
                                                 const class GGS_uintlist & in_mPropertyIndexPath
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arcAssignmentList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arcAssignmentList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arcAssignmentList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_arcAssignmentList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                       const class GGS_omnibusType & inOperand1,
                                                                       const class GGS_uintlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_arcAssignmentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_uintlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_arcAssignmentList add_operation (const GGS_arcAssignmentList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_uintlist constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_uintlist constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_uintlist & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_uintlist & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_uintlist & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyIndexPathAtIndex (class GGS_uintlist constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_uintlist & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_uintlist & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mPropertyIndexPathAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mPropertyTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arcAssignmentList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arcAssignmentList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_arcAssignmentList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_arcAssignmentList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_arcAssignmentList ;
 
} ; // End of GGS_arcAssignmentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_arcAssignmentList : public cGenericAbstractEnumerator {
  public: cEnumerator_arcAssignmentList (const GGS_arcAssignmentList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mPropertyType (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mPropertyIndexPath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arcAssignmentList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_arcAssignmentList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mPropertyName ;
  public: inline GGS_string readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_omnibusType mProperty_mPropertyType ;
  public: inline GGS_omnibusType readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

  public: GGS_uintlist mProperty_mPropertyIndexPath ;
  public: inline GGS_uintlist readProperty_mPropertyIndexPath (void) const {
    return mProperty_mPropertyIndexPath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_arcAssignmentList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

  public: inline void setter_setMPropertyIndexPath (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyIndexPath = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_arcAssignmentList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_arcAssignmentList_2E_element (const GGS_string & in_mPropertyName,
                                            const GGS_omnibusType & in_mPropertyType,
                                            const GGS_uintlist & in_mPropertyIndexPath) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_arcAssignmentList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                    const class GGS_omnibusType & inOperand1,
                                                                    const class GGS_uintlist & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_arcAssignmentList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_arcAssignmentList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                        const class GGS_omnibusType & inOperand1,
                                                                        const class GGS_uintlist & inOperand2,
                                                                        class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_arcAssignmentList_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_userLLVMTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_userLLVMTypeDefinitionIR (const class cPtr_userLLVMTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMDefinedTypeName (void) const ;
  public: void setProperty_mLLVMDefinedTypeName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMTypeDefinitionIR init_21_ (const class GGS_string & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMTypeDefinitionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_userLLVMTypeDefinitionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMTypeDefinitionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMTypeDefinitionIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMTypeDefinitionIR_init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GGS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_string mProperty_mLLVMDefinedTypeName ;


//--- Default constructor
  public: cPtr_userLLVMTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName
                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_userLLVMTypeDefinitionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_userLLVMTypeDefinitionIR_2E_weak (const class GGS_userLLVMTypeDefinitionIR & inSource) ;

  public: GGS_userLLVMTypeDefinitionIR_2E_weak & operator = (const class GGS_userLLVMTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_userLLVMTypeDefinitionIR bang_userLLVMTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMTypeDefinitionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMTypeDefinitionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMTypeDefinitionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_userLLVMTypeDefinitionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (class cPtr_userLLVMTypeDefinitionIR * inObject,
                                           class GGS_string & io_ioLLVMcode,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_userLLVMTypeDefinitionIR mProperty_mType ;
  public: inline GGS_userLLVMTypeDefinitionIR readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_userLLVMTypeDefinitionListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GGS_userLLVMTypeDefinitionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_userLLVMTypeDefinitionListIR_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionIR & in_mType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMTypeDefinitionListIR_2E_element init_21_ (const class GGS_userLLVMTypeDefinitionIR & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMTypeDefinitionListIR_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMTypeDefinitionListIR_2E_element class_func_new (const class GGS_userLLVMTypeDefinitionIR & inOperand0,
                                                                                   class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_userLLVMTypeDefinitionListIR_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist extensionGetter_unsolvedEntryList (const class GGS_unifiedTypeMap & inObject,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum typeDefinition
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_unsolved,
    enum_solved
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_solved (class GGS_omnibusType & out_type) const ;

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
  public: static GGS_typeDefinition extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDefinition class_func_solved (const class GGS_omnibusType & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeDefinition class_func_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractSolved (class GGS_omnibusType & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeDefinition_2E_solved_3F_ getter_getSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unifiedTypeMapElementClass_init_21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_typeDefinition & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension getter definition
  public: virtual class GGS_omnibusType getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_typeDefinition mProperty_mDefinition ;


//--- Default constructor
  public: cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GGS_lstring & in_mTypeName,
                                           const GGS_typeDefinition & in_mDefinition
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GGS_unifiedTypeMap & ioObject,
                                const class GGS_lstring constin_inLKey,
                                class GGS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_unifiedTypeMapElementClass_2E_weak (const class GGS_unifiedTypeMapElementClass & inSource) ;

  public: GGS_unifiedTypeMapElementClass_2E_weak & operator = (const class GGS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Bang operator
  public: GGS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapElementClass_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapElementClass_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMapElementClass_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeOptionalEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (class GGS_unifiedTypeMap & ioObject,
                                        const class GGS_lstring constin_inLKey,
                                        class GGS_unifiedTypeMapEntry & out_outEntry,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GGS_unifiedTypeMap & ioObject,
                                          const class GGS_string constin_inKey,
                                          class GGS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap searchKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry extensionGetter_searchKey (const class GGS_unifiedTypeMap & inObject,
                                                         const class GGS_lstring & constinArgument0,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GGS_unifiedTypeMap & ioObject,
                                 const class GGS_lstring constin_inTypeName,
                                 const class GGS_omnibusType constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const class GGS_unifiedTypeMap inObject,
                                 const class GGS_lstring constin_inLKey,
                                 class GGS_omnibusType & out_outTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDefinition_2E_solved struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeDefinition_2E_solved (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeDefinition_2E_solved (const GGS_omnibusType & in_type) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDefinition_2E_solved init_21_ (const class GGS_omnibusType & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDefinition_2E_solved extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDefinition_2E_solved class_func_new (const class GGS_omnibusType & inOperand0,
                                                                    class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDefinition_2E_solved class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeDefinition.solved? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDefinition_2E_solved_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeDefinition_2E_solved mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeDefinition_2E_solved_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_typeDefinition_2E_solved_3F_ (const GGS_typeDefinition_2E_solved & inValue) ;
  public: static GGS_typeDefinition_2E_solved_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_typeDefinition_2E_solved unwrappedValue (void) const {
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
  public: static GGS_typeDefinition_2E_solved_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDefinition_2E_solved_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition_2E_solved_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntry_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapElementClass_2E_weak mProperty_weakElement ;
  public: inline GGS_unifiedTypeMapElementClass_2E_weak readProperty_weakElement (void) const {
    return mProperty_weakElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakElement (const GGS_unifiedTypeMapElementClass_2E_weak & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_2E_weak & in_weakElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapEntry_2E_element init_21_ (const class GGS_unifiedTypeMapElementClass_2E_weak & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapEntry_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_unifiedTypeMapEntry_2E_element class_func_new (const class GGS_unifiedTypeMapElementClass_2E_weak & inOperand0,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMapEntry_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: unifiedTypeMapEntry.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMapEntry_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inValue) ;
  public: static GGS_unifiedTypeMapEntry_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMapEntry_2E_element unwrappedValue (void) const {
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
  public: static GGS_unifiedTypeMapEntry_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_unifiedTypeMapEntry_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_type (const class GGS_unifiedTypeMapEntry & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry key' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_key (const class GGS_unifiedTypeMapEntry & inObject,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_abstractDecoratedDeclaration * inObject,
                                           const class GGS_semanticContext constin_inContext,
                                           class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR sorted list
//
//--------------------------------------------------------------------------------------------------

class GGS_panicSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GGS_panicSortedListIR (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicSortedListIR init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicSortedListIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_panicSortedListIR class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_panicSortedListIR class_func_sortedListWithValue (const class GGS_bigint & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_panicSortedListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bigint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_bigint inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_bigint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_bigint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_panicSortedListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_panicSortedListIR ;
 
} ; // End of GGS_panicSortedListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_panicSortedListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_panicSortedListIR (const GGS_panicSortedListIR & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_bigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_panicSortedListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupArrayList list
//
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupArrayList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupArrayList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_controlRegisterGroupArrayList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mGroupName,
                                                 const class GGS_lbigintlist & in_mBaseAddresses
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupArrayList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupArrayList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupArrayList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_controlRegisterGroupArrayList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_lbigintlist & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_controlRegisterGroupArrayList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lbigintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_controlRegisterGroupArrayList add_operation (const GGS_controlRegisterGroupArrayList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lbigintlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lbigintlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lbigintlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lbigintlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lbigintlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBaseAddressesAtIndex (class GGS_lbigintlist constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lbigintlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lbigintlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lbigintlist getter_mBaseAddressesAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mGroupNameAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterGroupArrayList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterGroupArrayList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_controlRegisterGroupArrayList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_controlRegisterGroupArrayList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_controlRegisterGroupArrayList ;
 
} ; // End of GGS_controlRegisterGroupArrayList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterGroupArrayList : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mGroupName (LOCATION_ARGS) const ;
  public: class GGS_lbigintlist current_mBaseAddresses (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_controlRegisterGroupArrayList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @driverListIR list
//
//--------------------------------------------------------------------------------------------------

class GGS_driverListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_driverListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_driverListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mDriverName,
                                                 const class GGS_omnibusType & in_mType,
                                                 const class GGS_operandIRList & in_mInitialValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverListIR init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverListIR extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_driverListIR class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                  const class GGS_omnibusType & inOperand1,
                                                                  const class GGS_operandIRList & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_driverListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_operandIRList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_driverListIR add_operation (const GGS_driverListIR & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_operandIRList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_operandIRList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_operandIRList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_operandIRList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_operandIRList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueListAtIndex (class GGS_operandIRList constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_operandIRList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_operandIRList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDriverNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_mInitialValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_driverListIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_driverListIR ;
 
} ; // End of GGS_driverListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_driverListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_driverListIR (const GGS_driverListIR & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_operandIRList current_mInitialValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverListIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_externProcedureMapIR ;

//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR (void) ;

//--------------------------------- Handle copy
  public: GGS_externProcedureMapIR (const GGS_externProcedureMapIR & inSource) ;
  public: GGS_externProcedureMapIR & operator = (const GGS_externProcedureMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureMapIR init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externProcedureMapIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externProcedureMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_externProcedureMapIR class_func_mapWithMapToOverride (const class GGS_externProcedureMapIR & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_routineFormalArgumentListIR & inOperand1,
                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_externProcedureMapIR add_operation (const GGS_externProcedureMapIR & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_routineFormalArgumentListIR constinArgument1,
                                                  class GGS_unifiedTypeMapEntry constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GGS_routineFormalArgumentListIR constinArgument0,
                                                                                  class GGS_string constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GGS_string & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mReturnTypeForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_externProcedureMapIR getter_overriddenMap (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_externProcedureMapIR_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_externProcedureMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GGS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_externProcedureMapIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_externProcedureMapIR ;
 
} ; // End of GGS_externProcedureMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externProcedureMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_externProcedureMapIR (const GGS_externProcedureMapIR & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externProcedureMapIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalSyncInstanceMapIR map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMapIR ;

//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR (void) ;

//--------------------------------- Handle copy
  public: GGS_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inSource) ;
  public: GGS_globalSyncInstanceMapIR & operator = (const GGS_globalSyncInstanceMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMapIR init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMapIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalSyncInstanceMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_globalSyncInstanceMapIR class_func_mapWithMapToOverride (const class GGS_globalSyncInstanceMapIR & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_objectIR & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_globalSyncInstanceMapIR add_operation (const GGS_globalSyncInstanceMapIR & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_objectIR constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueForKey (class GGS_objectIR constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_objectIR getter_mInitialValueForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_globalSyncInstanceMapIR getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_globalSyncInstanceMapIR_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GGS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_globalSyncInstanceMapIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_globalSyncInstanceMapIR ;
 
} ; // End of GGS_globalSyncInstanceMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalSyncInstanceMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_globalSyncInstanceMapIR (const GGS_globalSyncInstanceMapIR & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_globalSyncInstanceMapIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptMapIR map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_interruptMapIR ;

//--------------------------------------------------------------------------------------------------

class GGS_interruptMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_interruptMapIR (void) ;

//--------------------------------- Handle copy
  public: GGS_interruptMapIR (const GGS_interruptMapIR & inSource) ;
  public: GGS_interruptMapIR & operator = (const GGS_interruptMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptMapIR init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptMapIR extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_interruptMapIR class_func_mapWithMapToOverride (const class GGS_interruptMapIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_mode & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_interruptMapIR add_operation (const GGS_interruptMapIR & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  class GGS_string constinArgument2,
                                                  class GGS_mode constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameForKey (class GGS_string constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeForKey (class GGS_mode constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelfTypeForKey (class GGS_omnibusType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mDriverNameForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mode getter_mModeForKey (const class GGS_string & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mSelfTypeForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_interruptMapIR getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_interruptMapIR_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_interruptMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GGS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_interruptMapIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_interruptMapIR ;
 
} ; // End of GGS_interruptMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_interruptMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_interruptMapIR (const GGS_interruptMapIR & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mSelfType (LOCATION_ARGS) const ;
  public: class GGS_string current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_interruptMapIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInvokedFunctionSetMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticListInvokedFunctionSetMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_staticListInvokedFunctionSetMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_staticListInvokedFunctionSetMap (void) ;

//--------------------------------- Handle copy
  public: GGS_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inSource) ;
  public: GGS_staticListInvokedFunctionSetMap & operator = (const GGS_staticListInvokedFunctionSetMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInvokedFunctionSetMap init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInvokedFunctionSetMap extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListInvokedFunctionSetMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_staticListInvokedFunctionSetMap class_func_mapWithMapToOverride (const class GGS_staticListInvokedFunctionSetMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_stringset & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_staticListInvokedFunctionSetMap add_operation (const GGS_staticListInvokedFunctionSetMap & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvokedFunctionSetForKey (class GGS_stringset constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_stringset & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_mInvokedFunctionSetForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_staticListInvokedFunctionSetMap getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_staticListInvokedFunctionSetMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInvokedFunctionSetMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GGS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_staticListInvokedFunctionSetMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_staticListInvokedFunctionSetMap ;
 
} ; // End of GGS_staticListInvokedFunctionSetMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticListInvokedFunctionSetMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringset current_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListInvokedFunctionSetMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMapIR map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMapIR ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_taskMapIR_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_taskMapIR (void) ;

//--------------------------------- Handle copy
  public: GGS_taskMapIR (const GGS_taskMapIR & inSource) ;
  public: GGS_taskMapIR & operator = (const GGS_taskMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMapIR init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMapIR extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_taskMapIR class_func_mapWithMapToOverride (const class GGS_taskMapIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_omnibusType & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_bigint & inOperand3,
                                                     const class GGS_stringlist & inOperand4,
                                                     const class GGS_stringlist & inOperand5,
                                                     const class GGS_stringlist & inOperand6,
                                                     const class GGS_uint & inOperand7,
                                                     const class GGS_bool & inOperand8,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_taskMapIR add_operation (const GGS_taskMapIR & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_bigint constinArgument3,
                                                  class GGS_stringlist constinArgument4,
                                                  class GGS_stringlist constinArgument5,
                                                  class GGS_stringlist constinArgument6,
                                                  class GGS_uint constinArgument7,
                                                  class GGS_bool constinArgument8,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_bigint & outArgument3,
                                                  class GGS_stringlist & outArgument4,
                                                  class GGS_stringlist & outArgument5,
                                                  class GGS_stringlist & outArgument6,
                                                  class GGS_uint & outArgument7,
                                                  class GGS_bool & outArgument8,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateForKey (class GGS_bool constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateOrderedListForKey (class GGS_stringlist constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeactivateOrderedListForKey (class GGS_stringlist constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPriorityForKey (class GGS_uint constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetupOrderedListForKey (class GGS_stringlist constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeForKey (class GGS_bigint constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameStringIndexForKey (class GGS_uint constinArgument0,
                                                                      class GGS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GGS_omnibusType constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_omnibusType & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_bigint & outArgument3,
                                                  class GGS_stringlist & outArgument4,
                                                  class GGS_stringlist & outArgument5,
                                                  class GGS_stringlist & outArgument6,
                                                  class GGS_uint & outArgument7,
                                                  class GGS_bool & outArgument8,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mActivateForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mActivateOrderedListForKey (const class GGS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mDeactivateOrderedListForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mPriorityForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mSetupOrderedListForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mStackSizeForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mTaskNameStringIndexForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTaskTypeForKey (const class GGS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskMapIR getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_taskMapIR_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_taskMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_taskMapIR_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_taskMapIR ;
 
} ; // End of GGS_taskMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_taskMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_taskMapIR (const GGS_taskMapIR & inEnumeratedObject,
                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskMapIR_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @intermediateCodeStruct struct
//
//--------------------------------------------------------------------------------------------------

class GGS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GGS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GGS_interruptMapIR mProperty_mInterruptMapIR ;
  public: inline GGS_interruptMapIR readProperty_mInterruptMapIR (void) const {
    return mProperty_mInterruptMapIR ;
  }

  public: GGS_externProcedureMapIR mProperty_mExternProcedureMapIR ;
  public: inline GGS_externProcedureMapIR readProperty_mExternProcedureMapIR (void) const {
    return mProperty_mExternProcedureMapIR ;
  }

  public: GGS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: inline GGS_panicSortedListIR readProperty_mPanicSetupListIR (void) const {
    return mProperty_mPanicSetupListIR ;
  }

  public: GGS_panicSortedListIR mProperty_mPanicLoopListIR ;
  public: inline GGS_panicSortedListIR readProperty_mPanicLoopListIR (void) const {
    return mProperty_mPanicLoopListIR ;
  }

  public: GGS_taskMapIR mProperty_mTaskMapIR ;
  public: inline GGS_taskMapIR readProperty_mTaskMapIR (void) const {
    return mProperty_mTaskMapIR ;
  }

  public: GGS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GGS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GGS_uint mProperty_mMaxBranchOfOnInstructions ;
  public: inline GGS_uint readProperty_mMaxBranchOfOnInstructions (void) const {
    return mProperty_mMaxBranchOfOnInstructions ;
  }

  public: GGS_targetParameters mProperty_mTargetParameters ;
  public: inline GGS_targetParameters readProperty_mTargetParameters (void) const {
    return mProperty_mTargetParameters ;
  }

  public: GGS_driverListIR mProperty_mDriverList ;
  public: inline GGS_driverListIR readProperty_mDriverList (void) const {
    return mProperty_mDriverList ;
  }

  public: GGS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForIntermediate ;
  public: inline GGS_staticListInvokedFunctionSetMap readProperty_mStaticArrayMapForIntermediate (void) const {
    return mProperty_mStaticArrayMapForIntermediate ;
  }

  public: GGS_globalSyncInstanceMapIR mProperty_mGlobalSyncInstanceMap ;
  public: inline GGS_globalSyncInstanceMapIR readProperty_mGlobalSyncInstanceMap (void) const {
    return mProperty_mGlobalSyncInstanceMap ;
  }

  public: GGS_controlRegisterGroupArrayList mProperty_mControlRegisterGroupArrayList ;
  public: inline GGS_controlRegisterGroupArrayList readProperty_mControlRegisterGroupArrayList (void) const {
    return mProperty_mControlRegisterGroupArrayList ;
  }

  public: GGS_routineListIR mProperty_mRoutineListIR ;
  public: inline GGS_routineListIR readProperty_mRoutineListIR (void) const {
    return mProperty_mRoutineListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_intermediateCodeStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStaticEntityMap (const GGS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMInterruptMapIR (const GGS_interruptMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptMapIR = inValue ;
  }

  public: inline void setter_setMExternProcedureMapIR (const GGS_externProcedureMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternProcedureMapIR = inValue ;
  }

  public: inline void setter_setMPanicSetupListIR (const GGS_panicSortedListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupListIR = inValue ;
  }

  public: inline void setter_setMPanicLoopListIR (const GGS_panicSortedListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopListIR = inValue ;
  }

  public: inline void setter_setMTaskMapIR (const GGS_taskMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskMapIR = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GGS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMMaxBranchOfOnInstructions (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxBranchOfOnInstructions = inValue ;
  }

  public: inline void setter_setMTargetParameters (const GGS_targetParameters & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetParameters = inValue ;
  }

  public: inline void setter_setMDriverList (const GGS_driverListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverList = inValue ;
  }

  public: inline void setter_setMStaticArrayMapForIntermediate (const GGS_staticListInvokedFunctionSetMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticArrayMapForIntermediate = inValue ;
  }

  public: inline void setter_setMGlobalSyncInstanceMap (const GGS_globalSyncInstanceMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSyncInstanceMap = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupArrayList (const GGS_controlRegisterGroupArrayList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupArrayList = inValue ;
  }

  public: inline void setter_setMRoutineListIR (const GGS_routineListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineListIR = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_intermediateCodeStruct (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_intermediateCodeStruct (const GGS_staticEntityMap & in_mStaticEntityMap,
                                      const GGS_interruptMapIR & in_mInterruptMapIR,
                                      const GGS_externProcedureMapIR & in_mExternProcedureMapIR,
                                      const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                      const GGS_panicSortedListIR & in_mPanicLoopListIR,
                                      const GGS_taskMapIR & in_mTaskMapIR,
                                      const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                      const GGS_uint & in_mMaxBranchOfOnInstructions,
                                      const GGS_targetParameters & in_mTargetParameters,
                                      const GGS_driverListIR & in_mDriverList,
                                      const GGS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForIntermediate,
                                      const GGS_globalSyncInstanceMapIR & in_mGlobalSyncInstanceMap,
                                      const GGS_controlRegisterGroupArrayList & in_mControlRegisterGroupArrayList,
                                      const GGS_routineListIR & in_mRoutineListIR) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_intermediateCodeStruct init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_intermediateCodeStruct extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_intermediateCodeStruct class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_intermediateCodeStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTemporariesStruct struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mTemporaryIndex ;
  public: inline GGS_uint readProperty_mTemporaryIndex (void) const {
    return mProperty_mTemporaryIndex ;
  }

  public: GGS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;
  public: inline GGS_panicRoutinePriorityMap readProperty_mPanicSetupRoutinePriorityMap (void) const {
    return mProperty_mPanicSetupRoutinePriorityMap ;
  }

  public: GGS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;
  public: inline GGS_panicRoutinePriorityMap readProperty_mPanicLoopRoutinePriorityMap (void) const {
    return mProperty_mPanicLoopRoutinePriorityMap ;
  }

  public: GGS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForTemporaries ;
  public: inline GGS_staticListInvokedFunctionSetMap readProperty_mStaticArrayMapForTemporaries (void) const {
    return mProperty_mStaticArrayMapForTemporaries ;
  }

  public: GGS_stringset mProperty_mInitializedDriverSet ;
  public: inline GGS_stringset readProperty_mInitializedDriverSet (void) const {
    return mProperty_mInitializedDriverSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticTemporariesStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTemporaryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemporaryIndex = inValue ;
  }

  public: inline void setter_setMPanicSetupRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMPanicLoopRoutinePriorityMap (const GGS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMStaticArrayMapForTemporaries (const GGS_staticListInvokedFunctionSetMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticArrayMapForTemporaries = inValue ;
  }

  public: inline void setter_setMInitializedDriverSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializedDriverSet = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticTemporariesStruct (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticTemporariesStruct (const GGS_uint & in_mTemporaryIndex,
                                         const GGS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                         const GGS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                         const GGS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForTemporaries,
                                         const GGS_stringset & in_mInitializedDriverSet) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTemporariesStruct init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTemporariesStruct extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticTemporariesStruct class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_semanticTemporariesStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticListInvokedFunctionSetMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticListInvokedFunctionSetMap : public cMapElement {
//--- Map attributes
  public: GGS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructors
  public: cMapElement_staticListInvokedFunctionSetMap (const GGS_staticListInvokedFunctionSetMap_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_staticListInvokedFunctionSetMap (const GGS_lstring & inKey,
                                                       const GGS_stringset & in_mInvokedFunctionSet
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInvokedFunctionSetMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListInvokedFunctionSetMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringset mProperty_mInvokedFunctionSet ;
  public: inline GGS_stringset readProperty_mInvokedFunctionSet (void) const {
    return mProperty_mInvokedFunctionSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInvokedFunctionSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInvokedFunctionSet = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_staticListInvokedFunctionSetMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_stringset & in_mInvokedFunctionSet) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInvokedFunctionSetMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_stringset & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInvokedFunctionSetMap_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListInvokedFunctionSetMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_stringset & inOperand1,
                                                                                      class Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListInvokedFunctionSetMap_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: staticListInvokedFunctionSetMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_staticListInvokedFunctionSetMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListInvokedFunctionSetMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GGS_staticListInvokedFunctionSetMap_2E_element_3F_ (const GGS_staticListInvokedFunctionSetMap_2E_element & inValue) ;
  public: static GGS_staticListInvokedFunctionSetMap_2E_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GGS_staticListInvokedFunctionSetMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticListInvokedFunctionSetMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticListInvokedFunctionSetMap_2E_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimeBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compiletimeBoolAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compiletimeBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compiletimeBoolAST (const class cPtr_compiletimeBoolAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compiletimeBoolAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compiletimeBoolAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compiletimeBoolAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimeBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compiletimeBoolAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compiletimeBoolAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compiletimeBoolAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compiletimeBoolAST_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compiletimeBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compiletimeBoolAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimeBoolAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compiletimeBoolAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compiletimeBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compiletimeBoolAST_2E_weak (const class GGS_compiletimeBoolAST & inSource) ;

  public: GGS_compiletimeBoolAST_2E_weak & operator = (const class GGS_compiletimeBoolAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compiletimeBoolAST bang_compiletimeBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compiletimeBoolAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compiletimeBoolAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimeBoolAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compiletimeBoolAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractImplicitConverterToBoolean : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension method generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractImplicitConverterToBoolean (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractImplicitConverterToBoolean_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractImplicitConverterToBoolean_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

  public: GGS_abstractImplicitConverterToBoolean_2E_weak & operator = (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GGS_abstractImplicitConverterToBoolean bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractImplicitConverterToBoolean_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorUsage : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void prefixOperatorUsage_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_omnibusType arg_inResultType,
           const class GGS_bool arg_inDoNotGeneratePanicCode,
           const class GGS_bool arg_inSafeMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_prefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_prefixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorUsage_2E_weak (const class GGS_prefixOperatorUsage & inSource) ;

  public: GGS_prefixOperatorUsage_2E_weak & operator = (const class GGS_prefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_prefixOperatorUsage bang_prefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_prefixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_prefixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @omnibusInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_omnibusInfixOperatorUsage : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void omnibusInfixOperatorUsage_init (Compiler * inCompiler) ;


//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_objectIR arg_inLeftOperand,
           const class GGS_location arg_inOperatorLocation,
           const class GGS_objectIR arg_inRightOperand,
           const class GGS_omnibusType arg_inResultType,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResultValue,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_omnibusInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_omnibusInfixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusInfixOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusInfixOperatorUsage_2E_weak (const class GGS_omnibusInfixOperatorUsage & inSource) ;

  public: GGS_omnibusInfixOperatorUsage_2E_weak & operator = (const class GGS_omnibusInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_omnibusInfixOperatorUsage bang_omnibusInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_omnibusInfixOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolXorOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolXorOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolXorOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeBoolXorOperator (const class cPtr_compileTimeBoolXorOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeBoolXorOperator init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolXorOperator extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolXorOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeBoolXorOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolXorOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolXorOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolXorOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeBoolXorOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeBoolXorOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolXorOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolXorOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolXorOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolXorOperator_2E_weak (const class GGS_compileTimeBoolXorOperator & inSource) ;

  public: GGS_compileTimeBoolXorOperator_2E_weak & operator = (const class GGS_compileTimeBoolXorOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolXorOperator bang_compileTimeBoolXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolXorOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolXorOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolXorOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeBoolXorOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolOrOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolOrOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolOrOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeBoolOrOperator (const class cPtr_compileTimeBoolOrOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeBoolOrOperator init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolOrOperator extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolOrOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeBoolOrOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolOrOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolOrOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolOrOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeBoolOrOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeBoolOrOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolOrOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolOrOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolOrOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolOrOperator_2E_weak (const class GGS_compileTimeBoolOrOperator & inSource) ;

  public: GGS_compileTimeBoolOrOperator_2E_weak & operator = (const class GGS_compileTimeBoolOrOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolOrOperator bang_compileTimeBoolOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolOrOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolOrOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolOrOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeBoolOrOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntAST (const class cPtr_compileTimeIntAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntAST init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntAST_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntAST_2E_weak (const class GGS_compileTimeIntAST & inSource) ;

  public: GGS_compileTimeIntAST_2E_weak & operator = (const class GGS_compileTimeIntAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntAST bang_compileTimeIntAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntModuloOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntModuloOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntModuloOperator (const class cPtr_compileTimeIntModuloOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntModuloOperator init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntModuloOperator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntModuloOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntModuloOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntModuloOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntModuloOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntModuloOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntModuloOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntModuloOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntModuloOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntModuloOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntModuloOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntModuloOperator_2E_weak (const class GGS_compileTimeIntModuloOperator & inSource) ;

  public: GGS_compileTimeIntModuloOperator_2E_weak & operator = (const class GGS_compileTimeIntModuloOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntModuloOperator bang_compileTimeIntModuloOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntModuloOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntModuloOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntModuloOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntModuloOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloZeroOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntModuloZeroOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntModuloZeroOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntModuloZeroOperator (const class cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntModuloZeroOperator init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntModuloZeroOperator extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntModuloZeroOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntModuloZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntModuloZeroOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntModuloZeroOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntModuloZeroOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntModuloZeroOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntModuloZeroOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntModuloZeroOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloZeroOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntModuloZeroOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntModuloZeroOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntModuloZeroOperator_2E_weak (const class GGS_compileTimeIntModuloZeroOperator & inSource) ;

  public: GGS_compileTimeIntModuloZeroOperator_2E_weak & operator = (const class GGS_compileTimeIntModuloZeroOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntModuloZeroOperator bang_compileTimeIntModuloZeroOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntModuloZeroOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntModuloZeroOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntModuloZeroOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntModuloZeroOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntDivideOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntDivideOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntDivideOperator (const class cPtr_compileTimeIntDivideOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntDivideOperator init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntDivideOperator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntDivideOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntDivideOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntDivideOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntDivideOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntDivideOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntDivideOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntDivideOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntDivideOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntDivideOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntDivideOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntDivideOperator_2E_weak (const class GGS_compileTimeIntDivideOperator & inSource) ;

  public: GGS_compileTimeIntDivideOperator_2E_weak & operator = (const class GGS_compileTimeIntDivideOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntDivideOperator bang_compileTimeIntDivideOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntDivideOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntDivideOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntDivideOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntDivideOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideZeroOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntDivideZeroOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntDivideZeroOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntDivideZeroOperator (const class cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntDivideZeroOperator init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntDivideZeroOperator extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntDivideZeroOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntDivideZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntDivideZeroOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntDivideZeroOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntDivideZeroOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntDivideZeroOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntDivideZeroOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntDivideZeroOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideZeroOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntDivideZeroOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntDivideZeroOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntDivideZeroOperator_2E_weak (const class GGS_compileTimeIntDivideZeroOperator & inSource) ;

  public: GGS_compileTimeIntDivideZeroOperator_2E_weak & operator = (const class GGS_compileTimeIntDivideZeroOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntDivideZeroOperator bang_compileTimeIntDivideZeroOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntDivideZeroOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntDivideZeroOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntDivideZeroOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntDivideZeroOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMultiplyOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntMultiplyOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntMultiplyOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntMultiplyOperator (const class cPtr_compileTimeIntMultiplyOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntMultiplyOperator init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntMultiplyOperator extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntMultiplyOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntMultiplyOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntMultiplyOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntMultiplyOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntMultiplyOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntMultiplyOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntMultiplyOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntMultiplyOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMultiplyOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntMultiplyOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntMultiplyOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntMultiplyOperator_2E_weak (const class GGS_compileTimeIntMultiplyOperator & inSource) ;

  public: GGS_compileTimeIntMultiplyOperator_2E_weak & operator = (const class GGS_compileTimeIntMultiplyOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntMultiplyOperator bang_compileTimeIntMultiplyOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntMultiplyOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntMultiplyOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntMultiplyOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntMultiplyOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntSubtractOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntSubtractOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntSubtractOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntSubtractOperator (const class cPtr_compileTimeIntSubtractOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntSubtractOperator init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntSubtractOperator extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntSubtractOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntSubtractOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntSubtractOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntSubtractOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntSubtractOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntSubtractOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntSubtractOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntSubtractOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntSubtractOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntSubtractOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntSubtractOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntSubtractOperator_2E_weak (const class GGS_compileTimeIntSubtractOperator & inSource) ;

  public: GGS_compileTimeIntSubtractOperator_2E_weak & operator = (const class GGS_compileTimeIntSubtractOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntSubtractOperator bang_compileTimeIntSubtractOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntSubtractOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntSubtractOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntSubtractOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntSubtractOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntEqualOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntEqualOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntEqualOperator (const class cPtr_compileTimeIntEqualOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntEqualOperator init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntEqualOperator extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntEqualOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntEqualOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntEqualOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntEqualOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntEqualOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntEqualOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntEqualOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntEqualOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntEqualOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntEqualOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntEqualOperator_2E_weak (const class GGS_compileTimeIntEqualOperator & inSource) ;

  public: GGS_compileTimeIntEqualOperator_2E_weak & operator = (const class GGS_compileTimeIntEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntEqualOperator bang_compileTimeIntEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntEqualOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntEqualOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntEqualOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntEqualOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAddOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntAddOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntAddOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntAddOperator (const class cPtr_compileTimeIntAddOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntAddOperator init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntAddOperator extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntAddOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntAddOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntAddOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntAddOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntAddOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntAddOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntAddOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntAddOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAddOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntAddOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntAddOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntAddOperator_2E_weak (const class GGS_compileTimeIntAddOperator & inSource) ;

  public: GGS_compileTimeIntAddOperator_2E_weak & operator = (const class GGS_compileTimeIntAddOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntAddOperator bang_compileTimeIntAddOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntAddOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntAddOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntAddOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntAddOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseAndOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseAndOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseAndOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeIntBitWiseAndOperator (const class cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeIntBitWiseAndOperator init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeIntBitWiseAndOperator extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntBitWiseAndOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntBitWiseAndOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntBitWiseAndOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntBitWiseAndOperator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntBitWiseAndOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeIntBitWiseAndOperator_init (Compiler * inCompiler) ;


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


//--- Default constructor
  public: cPtr_compileTimeIntBitWiseAndOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntBitWiseAndOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseAndOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseAndOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak (const class GGS_compileTimeIntBitWiseAndOperator & inSource) ;

  public: GGS_compileTimeIntBitWiseAndOperator_2E_weak & operator = (const class GGS_compileTimeIntBitWiseAndOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntBitWiseAndOperator bang_compileTimeIntBitWiseAndOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntBitWiseAndOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftLeftOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntShiftLeftOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftLeftOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntShiftLeftOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntShiftLeftOperator class
//
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


//--- Default constructor
  public: cPtr_compileTimeIntShiftLeftOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntShiftLeftOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftLeftOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftLeftOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftLeftOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntShiftLeftOperator_2E_weak (const class GGS_compileTimeIntShiftLeftOperator & inSource) ;

  public: GGS_compileTimeIntShiftLeftOperator_2E_weak & operator = (const class GGS_compileTimeIntShiftLeftOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntShiftLeftOperator bang_compileTimeIntShiftLeftOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntShiftLeftOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftRightOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntShiftRightOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntShiftRightOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntShiftRightOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntShiftRightOperator class
//
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


//--- Default constructor
  public: cPtr_compileTimeIntShiftRightOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntShiftRightOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftRightOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntShiftRightOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntShiftRightOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntShiftRightOperator_2E_weak (const class GGS_compileTimeIntShiftRightOperator & inSource) ;

  public: GGS_compileTimeIntShiftRightOperator_2E_weak & operator = (const class GGS_compileTimeIntShiftRightOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntShiftRightOperator bang_compileTimeIntShiftRightOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntShiftRightOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLessThanOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntLessThanOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLessThanOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntLessThanOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntLessThanOperator class
//
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


//--- Default constructor
  public: cPtr_compileTimeIntLessThanOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntLessThanOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLessThanOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLessThanOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLessThanOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntLessThanOperator_2E_weak (const class GGS_compileTimeIntLessThanOperator & inSource) ;

  public: GGS_compileTimeIntLessThanOperator_2E_weak & operator = (const class GGS_compileTimeIntLessThanOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntLessThanOperator bang_compileTimeIntLessThanOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntLessThanOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLowerOrEqualOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntLowerOrEqualOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntLowerOrEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntLowerOrEqualOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntLowerOrEqualOperator class
//
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


//--- Default constructor
  public: cPtr_compileTimeIntLowerOrEqualOperator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeIntLowerOrEqualOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLowerOrEqualOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntLowerOrEqualOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak (const class GGS_compileTimeIntLowerOrEqualOperator & inSource) ;

  public: GGS_compileTimeIntLowerOrEqualOperator_2E_weak & operator = (const class GGS_compileTimeIntLowerOrEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntLowerOrEqualOperator bang_compileTimeIntLowerOrEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntLowerOrEqualOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntXorOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntXorOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntXorOperator class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntXorOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntXorOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntXorOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntXorOperator_2E_weak (const class GGS_compileTimeIntXorOperator & inSource) ;

  public: GGS_compileTimeIntXorOperator_2E_weak & operator = (const class GGS_compileTimeIntXorOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntXorOperator bang_compileTimeIntXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntXorOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseOrOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntBitWiseOrOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntBitWiseOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntBitWiseOrOperator class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseOrOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntBitWiseOrOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak (const class GGS_compileTimeIntBitWiseOrOperator & inSource) ;

  public: GGS_compileTimeIntBitWiseOrOperator_2E_weak & operator = (const class GGS_compileTimeIntBitWiseOrOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntBitWiseOrOperator bang_compileTimeIntBitWiseOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntBitWiseOrOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMinusOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntMinusOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntMinusOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntMinusOperator class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMinusOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntMinusOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntMinusOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntMinusOperator_2E_weak (const class GGS_compileTimeIntMinusOperator & inSource) ;

  public: GGS_compileTimeIntMinusOperator_2E_weak & operator = (const class GGS_compileTimeIntMinusOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntMinusOperator bang_compileTimeIntMinusOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntMinusOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntComplementOperator reference class
//
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

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeIntComplementOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeIntComplementOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntComplementOperator class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntComplementOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeIntComplementOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeIntComplementOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeIntComplementOperator_2E_weak (const class GGS_compileTimeIntComplementOperator & inSource) ;

  public: GGS_compileTimeIntComplementOperator_2E_weak & operator = (const class GGS_compileTimeIntComplementOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_compileTimeIntComplementOperator bang_compileTimeIntComplementOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_compileTimeIntComplementOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolTypeAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_boolTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolTypeAST (const class cPtr_boolTypeAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolTypeAST init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolTypeAST extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolTypeAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolTypeAST class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolTypeAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolTypeAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolTypeAST_2E_weak (const class GGS_boolTypeAST & inSource) ;

  public: GGS_boolTypeAST_2E_weak & operator = (const class GGS_boolTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_boolTypeAST bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolTypeAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolImplicitConverterToBoolean (const class cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolImplicitConverterToBoolean init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolImplicitConverterToBoolean class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolImplicitConverterToBoolean class


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
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolImplicitConverterToBoolean_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolImplicitConverterToBoolean_2E_weak (const class GGS_boolImplicitConverterToBoolean & inSource) ;

  public: GGS_boolImplicitConverterToBoolean_2E_weak & operator = (const class GGS_boolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GGS_boolImplicitConverterToBoolean bang_boolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolImplicitConverterToBoolean_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolNotOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolNotOperator : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_boolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolNotOperator (const class cPtr_boolNotOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolNotOperator init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolNotOperator extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolNotOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolNotOperator class


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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolNotOperator_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_boolNotOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolNotOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolNotOperator_2E_weak (const class GGS_boolNotOperator & inSource) ;

  public: GGS_boolNotOperator_2E_weak & operator = (const class GGS_boolNotOperator & inSource) ;

//--------------------------------- Bang operator
  public: GGS_boolNotOperator bang_boolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolNotOperator_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolNotOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolNotOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_boolNotOperator_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeAliasDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_typeAliasDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeAliasDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeAliasDeclarationAST_2E_weak (const class GGS_typeAliasDeclarationAST & inSource) ;

  public: GGS_typeAliasDeclarationAST_2E_weak & operator = (const class GGS_typeAliasDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_typeAliasDeclarationAST bang_typeAliasDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeAliasDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeAliasDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeAliasDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeAliasDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixedSizeArrayTypeDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_fixedSizeArrayTypeDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (const class GGS_fixedSizeArrayTypeDeclarationAST & inSource) ;

  public: GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & operator = (const class GGS_fixedSizeArrayTypeDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_fixedSizeArrayTypeDeclarationAST bang_fixedSizeArrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixedSizeArrayTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixedSizeArrayTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_fixedSizeArrayTypeDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMStaticArrayTypeDefinitionIR : public GGS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GGS_userLLVMStaticArrayTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_userLLVMStaticArrayTypeDefinitionIR (const class cPtr_userLLVMStaticArrayTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR init_21__21__21_ (const class GGS_string & inOperand0,
                                                                           const class GGS_omnibusType & inOperand1,
                                                                           const class GGS_bigint & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMStaticArrayTypeDefinitionIR class_func_new (const class GGS_string & inOperand0,
                                                                               const class GGS_omnibusType & inOperand1,
                                                                               const class GGS_bigint & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_userLLVMStaticArrayTypeDefinitionIR class


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
  public: void userLLVMStaticArrayTypeDefinitionIR_init_21__21__21_ (const class GGS_string & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_bigint & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GGS_string & arg_ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_userLLVMStaticArrayTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                                    const GGS_omnibusType & in_mElementType,
                                                    const GGS_bigint & in_mSize
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMStaticArrayTypeDefinitionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak : public GGS_userLLVMTypeDefinitionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (const class GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

  public: GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & operator = (const class GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_userLLVMStaticArrayTypeDefinitionIR bang_userLLVMStaticArrayTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ;

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
  public: virtual void method_generateCode (class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionListIR,
           class GGS_allocaList & arg_ioAllocaList,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_string arg_inTargetLLVMName,
           const class GGS_objectIR arg_inSourcePossibleReference,
           const class GGS_location arg_inErrorLocation,
           const class GGS_bool arg_inTargetIsInitialized,
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

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractAssignmentOperatorUsage_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractAssignmentOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractAssignmentOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractAssignmentOperatorUsage_2E_weak (const class GGS_abstractAssignmentOperatorUsage & inSource) ;

  public: GGS_abstractAssignmentOperatorUsage_2E_weak & operator = (const class GGS_abstractAssignmentOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GGS_abstractAssignmentOperatorUsage bang_abstractAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractAssignmentOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractAssignmentOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractAssignmentOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractAssignmentOperatorUsage_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractRoutineIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractRoutineIR (const class cPtr_abstractRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineMangledName (void) const ;
  public: void setProperty_mRoutineMangledName (const GGS_lstring & inValue) ;

  public: class GGS_bool readProperty_isRequired (void) const ;
  public: void setProperty_isRequired (const GGS_bool & inValue) ;

  public: class GGS_bool readProperty_warnsIfUnused (void) const ;
  public: void setProperty_warnsIfUnused (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractRoutineIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractRoutineIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractRoutineIR class


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
  public: void abstractRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GGS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GGS_sectionIRlist & arg_ioSectionList,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineMangledName ;
  public: GGS_bool mProperty_isRequired ;
  public: GGS_bool mProperty_warnsIfUnused ;


//--- Default constructor
  public: cPtr_abstractRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                  const GGS_bool & in_isRequired,
                                  const GGS_bool & in_warnsIfUnused
                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractRoutineIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractRoutineIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractRoutineIR_2E_weak (const class GGS_abstractRoutineIR & inSource) ;

  public: GGS_abstractRoutineIR_2E_weak & operator = (const class GGS_abstractRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_abstractRoutineIR bang_abstractRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_abstractRoutineIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticArrayTypeAssignFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_staticArrayTypeAssignFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_staticArrayTypeAssignFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_staticArrayTypeAssignFunctionIR (const class cPtr_staticArrayTypeAssignFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mFixedSizeArrayType (void) const ;
  public: void setProperty_mFixedSizeArrayType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticArrayTypeAssignFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  const class GGS_omnibusType & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticArrayTypeAssignFunctionIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticArrayTypeAssignFunctionIR class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_bool & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_omnibusType & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticArrayTypeAssignFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticArrayTypeAssignFunctionIR class


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
  public: void staticArrayTypeAssignFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_omnibusType & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mFixedSizeArrayType ;


//--- Default constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticArrayTypeAssignFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                const GGS_bool & in_isRequired,
                                                const GGS_bool & in_warnsIfUnused,
                                                const GGS_omnibusType & in_mFixedSizeArrayType
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticArrayTypeAssignFunctionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_staticArrayTypeAssignFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak (const class GGS_staticArrayTypeAssignFunctionIR & inSource) ;

  public: GGS_staticArrayTypeAssignFunctionIR_2E_weak & operator = (const class GGS_staticArrayTypeAssignFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_staticArrayTypeAssignFunctionIR bang_staticArrayTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticArrayTypeAssignFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticArrayTypeAssignFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticArrayTypeAssignFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_staticArrayTypeAssignFunctionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeDynamicArrayDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_typeDynamicArrayDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

  public: GGS_typeDynamicArrayDeclarationAST_2E_weak & operator = (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GGS_typeDynamicArrayDeclarationAST bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDynamicArrayDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeDynamicArrayDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDynamicArrayDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_typeDynamicArrayDeclarationAST_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayRemoveAllFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayRemoveAllFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayRemoveAllFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayRemoveAllFunctionIR (const class cPtr_dynArrayRemoveAllFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayRemoveAllFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayRemoveAllFunctionIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayRemoveAllFunctionIR class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dynArrayRemoveAllFunctionIR class


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
  public: void dynArrayRemoveAllFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_bool & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayRemoveAllFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayRemoveAllFunctionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayRemoveAllFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak & operator = (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_dynArrayRemoveAllFunctionIR bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayRemoveAllFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayRemoveAllFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayRemoveAllFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dynArrayRemoveAllFunctionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayLengthFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayLengthFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayLengthFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayLengthFunctionIR (const class cPtr_dynArrayLengthFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayLengthFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_bool & inOperand1,
                                                                                       const class GGS_bool & inOperand2,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayLengthFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayLengthFunctionIR class_func_new (const class GGS_lstring & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_bool & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dynArrayLengthFunctionIR class


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
  public: void dynArrayLengthFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_bool & inOperand1,
                                                                                 const class GGS_bool & inOperand2,
                                                                                 Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_dynArrayLengthFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayLengthFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dynArrayLengthFunctionIR_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayLengthFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayLengthFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayLengthFunctionIR_2E_weak (const class GGS_dynArrayLengthFunctionIR & inSource) ;

  public: GGS_dynArrayLengthFunctionIR_2E_weak & operator = (const class GGS_dynArrayLengthFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GGS_dynArrayLengthFunctionIR bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayLengthFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayLengthFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayLengthFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GGS_dynArrayLengthFunctionIR_2E_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;

